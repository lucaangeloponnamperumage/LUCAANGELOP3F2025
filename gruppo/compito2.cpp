
int main() {
    char c;
    cin >> c;

    if (c == 'S') {
        cout << "SI";
    } else if (c == 's') {
        cout << "si";
    } else if (c == 'N') {
        cout << "NO";
    } else if (c == 'n') {
        cout << "no";
    } else {
        cout << "errato";
    }

    return 0;
}