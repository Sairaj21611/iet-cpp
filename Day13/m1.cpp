#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
using namespace std;

// ================= Item Class =================
class Item {
public:
    int itemID;
    string itemName;
    double price;
    int stockQuantity;

    Item(int id = 0, string name = "", double p = 0.0, int qty = 0) {
        if (p < 0 || qty < 0) throw invalid_argument("Price and Quantity cannot be negative!");
        itemID = id;
        itemName = name;
        price = p;
        stockQuantity = qty;
    }
};

// ================= Bill Class =================
class Bill 
{
    int billID;
    string customerName;
    vector<Item> purchasedItems;

public:
    Bill(int id, string name) {
        billID = id;
        customerName = name;
    }

    // Operator Overloading: + to add an item to the bill
    Bill& operator+(Item &item) {
        int qty;
        cout << "Enter quantity for " << item.itemName << ": ";
        cin >> qty;

        if (qty <= 0) throw invalid_argument("Quantity must be positive!");
        if (qty > item.stockQuantity) throw runtime_error("Not enough stock available!");

        // Deduct stock
        item.stockQuantity -= qty;

        // Add purchased item with required qty
        purchasedItems.push_back(Item(item.itemID, item.itemName, item.price * qty, qty));
        return *this;
    }

    // Operator Overloading: << to display bill
    friend ostream& operator<<(ostream &out, const Bill &b) {
        if (b.purchasedItems.empty()) throw runtime_error("Bill is empty!");

        double total = 0;
        out << "\n=========== BILL ===========\n";
        out << "Bill ID: " << b.billID << "\nCustomer: " << b.customerName << "\n";
        out << "----------------------------\n";
        out << "Item\tQty\tPrice\n";
        for (auto &i : b.purchasedItems) {
            out << i.itemName << "\t" << i.stockQuantity << "\t" << i.price << "\n";
            total += i.price;
        }
        out << "----------------------------\n";
        out << "Total: " << total << "\n";
        out << "============================\n";
        return out;
    }

    // Save Bill to file
    void saveBill() {
        ofstream fout("bills.txt", ios::app);
        if (!fout) {
            cerr << "Error opening file!\n";
            return;
        }
        fout << *this; // uses overloaded << operator
        fout.close();
    }

    // Load bills (for demonstration only)
    static void loadBills() {
        ifstream fin("bills.txt");
        if (!fin) {
            cout << "No previous bills found.\n";
            return;
        }
        cout << "\nPrevious Bills:\n";
        cout << fin.rdbuf(); // print entire file content
        fin.close();
    }
};

// ================= Main Function =================
int main() {
    try {
        // Sample items in store
        Item laptop(1, "Laptop", 50000, 5);
        Item mouse(2, "Mouse", 500, 10);
        Item keyboard(3, "Keyboard", 1500, 7);

        // Load previous bills
        Bill::loadBills();

        int billID = 1;
        string customer;
        cout << "\nEnter customer name: ";
        getline(cin, customer);

        Bill bill(billID, customer);

        int choice;
        do {
            cout << "\nAvailable Items:\n";
            cout << "1. Laptop (Stock: " << laptop.stockQuantity << ")\n";
            cout << "2. Mouse (Stock: " << mouse.stockQuantity << ")\n";
            cout << "3. Keyboard (Stock: " << keyboard.stockQuantity << ")\n";
            cout << "4. Generate Bill\n";
            cout << "Enter choice: ";
            cin >> choice;

            switch (choice) {
                case 1: bill + laptop; break;
                case 2: bill + mouse; break;
                case 3: bill + keyboard; break;
                case 4: {
                    cout << bill;
                    bill.saveBill();
                    cout << "Bill saved to file!\n";
                    break;
                }
                default: cout << "Invalid choice!\n";
            }
        } while (choice != 4);

    } catch (exception &e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}