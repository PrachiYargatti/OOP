#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class BookBus {
private:
    string from_city, to_city;
    int seats;

public:
    static int available_seats;

    BookBus(string from, string to, int s) {
        try {
            if (s > available_seats || s < 0) {
                throw out_of_range("Invalid number of seats.");
            }

            from_city = from;
            to_city = to;
            seats = s;

            cout << "Booking Successful !!" << endl;
            cout << "From " << from_city << " to " << to_city << endl;
            cout << "Seats: " << seats << endl;

            available_seats -= seats;
        }
        catch (const out_of_range& e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    void showAvailableSeats() const {
        cout << "Now Available Seats: " << available_seats << endl;
    }
};

int BookBus::available_seats = 30;

int main() {
    BookBus b1("Ichalkaranji", "Kolhapur", 2);
    b1.showAvailableSeats();

    BookBus b2("Kolhapur", "Pune", 15);
    b2.showAvailableSeats();

    BookBus b3("Mumbai", "Goa", -1);
    b3.showAvailableSeats();

    return 0;
}

