#include <iostream>
#include <string>
using namespace std;

// Struct untuk menyimpan data siswa
struct Siswa {
    string NISN;
    string nama;
    int nilai;
};

// Fungsi untuk mencetak data siswa
void printData(Siswa data[], int size) {
    for (int i = 0; i < size; i++) {
        cout << data[i].NISN << " | " << data[i].nama << " | " << data[i].nilai << endl;
    }
}

// Fungsi Bubble Sort (Mengurutkan berdasarkan NISN)
void bubble_sort_NISN(Siswa data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (data[j].NISN < data[j - 1].NISN) {
                swap(data[j], data[j - 1]);
            }
        }
    }
}

// Fungsi Bubble Sort (Mengurutkan berdasarkan Nilai)
void bubble_sort_Nilai(Siswa data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (data[j].nilai < data[j - 1].nilai) {
                swap(data[j], data[j - 1]);
            }
        }
    }
}

// Fungsi Selection Sort (Mengurutkan berdasarkan NISN)
void selection_sort_NISN(Siswa data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (data[j].NISN < data[minIndex].NISN) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// Fungsi Selection Sort (Mengurutkan berdasarkan Nilai)
void selection_sort_Nilai(Siswa data[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (data[j].nilai < data[minIndex].nilai) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

// Fungsi Insertion Sort (Mengurutkan berdasarkan NISN)
void insertion_sort_NISN(Siswa data[], int size) {
    for (int i = 1; i < size; i++) {
        Siswa temp = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].NISN > temp.NISN) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;
    }
}

// Fungsi Insertion Sort (Mengurutkan berdasarkan Nilai)
void insertion_sort_Nilai(Siswa data[], int size) {
    for (int i = 1; i < size; i++) {
        Siswa temp = data[i];
        int j = i - 1;
        while (j >= 0 && data[j].nilai > temp.nilai) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;
    }
}

// Fungsi Binary Search untuk mencari data berdasarkan NISN
int binary_search_NISN(Siswa data[], int size, string targetNISN) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (data[mid].NISN == targetNISN) {
            return mid; // Index ditemukan
        } else if (data[mid].NISN < targetNISN) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Tidak ditemukan
}

// Fungsi Sequential Search untuk mengganti nama berdasarkan nilai tertentu
bool update_name_by_value(Siswa data[], int size, int targetNilai, string newName) {
    bool updated = false;
    for (int i = 0; i < size; i++) {
        if (data[i].nilai == targetNilai) {
            data[i].nama = newName;
            updated = true;
        }
    }
    return updated;
}

int main() {
    // Data siswa
    Siswa data[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Luftianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Data Awal:\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan NISN menggunakan Bubble Sort
    bubble_sort_NISN(data, size);
    cout << "\nData setelah diurutkan berdasarkan NISN (Bubble Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan Nilai menggunakan Bubble Sort
    bubble_sort_Nilai(data, size);
    cout << "\nData setelah diurutkan berdasarkan Nilai (Bubble Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan NISN menggunakan Selection Sort
    selection_sort_NISN(data, size);
    cout << "\nData setelah diurutkan berdasarkan NISN (Selection Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan Nilai menggunakan Selection Sort
    selection_sort_Nilai(data, size);
    cout << "\nData setelah diurutkan berdasarkan Nilai (Selection Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan NISN menggunakan Insertion Sort
    insertion_sort_NISN(data, size);
    cout << "\nData setelah diurutkan berdasarkan NISN (Insertion Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // Urutkan berdasarkan Nilai menggunakan Insertion Sort
    insertion_sort_Nilai(data, size);
    cout << "\nData setelah diurutkan berdasarkan Nilai (Insertion Sort):\n";
    printData(data, size);
    cout << "----------------------------------------------------------";

    // 2. Binary Search untuk NISN = 9950310962
    insertion_sort_NISN(data, size); // Tambahkan langkah ini!
    string targetNISN = "9950310962";
    int foundIndex = binary_search_NISN(data, size, targetNISN);
    if (foundIndex != -1) {
        cout << "\nData ditemukan dengan NISN " << targetNISN << ":\n";
        cout << "Nama: " << data[foundIndex].nama << ", Nilai: " << data[foundIndex].nilai << endl;
    } else {
        cout << "\nData dengan NISN " << targetNISN << " tidak ditemukan.\n";
    }
    cout << "----------------------------------------------------------";

    // 3. Mengubah nama data dengan nilai 60 menjadi "Joko"
    int targetNilai = 60;
    string newName = "Joko";
    bool updated = update_name_by_value(data, size, targetNilai, newName);
    if (updated) {
        cout << "\nData setelah nama dengan nilai 60 diubah menjadi \"Joko\":\n";
        printData(data, size);
    } else {
        cout << "\nTidak ada data dengan nilai " << targetNilai << ".\n";
    }

    return 0;
}
