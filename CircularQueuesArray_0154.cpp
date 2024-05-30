#include <iostream>
using namespace std;

class Queues {
    int FRONT, REAR, max = 5;
    int queues_array[5];


public:
    // Constructor untuk inisialisasi queue
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    // Method untuk menambahkan elemen ke dalam queue
    void insert() {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        cout << endl;

        //Cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
            cout << "\nQueue Overflow\n";
            return;
        }

        //Cek apakah antrian kosong
        if (FRONT == -1) {
            FRONT = 0;
            REAR = 0;
        }
        else {
            //Jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queues_array[REAR] = num; // Menambahkan elemen ke antrian
    }

    // Method untuk menghapus elemen dari queue
    void remove() {
        // cek apakah antrian kosong // ini
        if (FRONT == -1) {
            cout << "Queues Underflow\n";
            return;
        }
        cout << "\nThe element deleted from the queue is : " << queues_array[FRONT] << "\n";

        //Cek jika antrian hanya memiliki satu element
        if (FRONT == REAR) {
            FRONT = -1;
            REAR = -1;
        }
        else {
            //Jika element yang dihapus berada di posisi terakhir array, kembali ke awal array
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
        }
    }

    void display() {
        //Cek apakah antrian kosong
        if (FRONT == -1) {
            cout << "Queue is empty\n";
            return;
        }
    }
};



int main()
{
}