//To reduce timeouts during array evaluation while debugging, CLion uses a limit of 50 array
// elements shown by default. If you need elements with big indexes and clicking expand is not an option,
// then simply increase the value cidr.debugger.value.maxChildren in the Registry.
// Keep in mind that this may lead to increased timeouts as well.


int main () {
    int arr[1000];
    for (int i = 0; i < 500; ++i) {
        arr[i] = i;
    }
    for (int i = 999; i >= 500 ; --i) {
        arr[i] = i*5;
    }
    for (int i = 0; i < 500; ++i) {
        arr[i] += arr[i*2];
    }

    return 0;
}

