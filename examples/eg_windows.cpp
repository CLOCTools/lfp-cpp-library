#include <lfpRatiometer>

int main() {

    // instantiate an object
    int N = 10;
    double sampling = 200;
    lfpRatiometer lfpratiometer(N, sampling);

    // default window
    std::vector<double> window_curr = lfpratiometer.getWindow();
    std::cout << "The default window should be rectangular for N=" << N << ".\n";
    std::cout << "The actual window is [";
    for (int i=0; i<window_curr.size(); i++) {
        std::cout << window_curr.at(i) << ' ';
    }
    std::cout << "].\n\n";

    // set Hamming window
    lfpratiometer.window_hamming();
    window_curr = lfpratiometer.getWindow();
    std::cout << "The window should now be set to a Hamming window for N=" << N << ".\n";
    std::cout << "The actual window is [";
    for (int i=0; i<window_curr.size(); i++) {
        std::cout << window_curr.at(i) << ' ';
    }
    std::cout << "].\n";
    std::cout << "Compare this result with MATLAB's output using 'hamming(N=" << N << ")'.\n ";

    return 0;
}