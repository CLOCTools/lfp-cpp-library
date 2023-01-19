#include <lfpRatiometer>

int main() {

    // instantiate an object
    int N = 3;
    double sampling = 200;
    lfpRatiometer lfpratiometer(N, sampling);

    // clear time series
    lfpratiometer.clrTimeSeries();
    std::vector<double> buffer_curr = lfpratiometer.getBuffer();
    std::cout << "Time series buffer should be cleared.\n";
    std::cout << "Time buffer actually is [";
    for (int i=0; i<buffer_curr.size(); i++) {
        std::cout << buffer_curr.at(i) << ' ';
    }
    std::cout << "].\n\n";

    // push time samples to time series
    std::cout << "New samples should be pushed to the buffer one at a time until N=" << N << ".\n";
    std::cout << "Then, when new samples are pushed, the oldest samples should be popped.\n";
    for (int i=0; i<N+2; i++) {
        lfpratiometer.pushTimeSample(i);
        std::vector<double> buffer_curr = lfpratiometer.getBuffer();
        std::cout << "Time buffer actually is [";
        for (int ii=0; ii<buffer_curr.size(); ii++) {
            std::cout << buffer_curr.at(ii) << ' ';
        }
        std::cout << "].\n";
    }
    std::cout << "\n";

    // clear time series
    lfpratiometer.clrTimeSeries();
    buffer_curr = lfpratiometer.getBuffer();
    std::cout << "Time series buffer should be cleared.\n";
    std::cout << "Time buffer actually is [";
    for (int i=0; i<buffer_curr.size(); i++) {
        std::cout << buffer_curr.at(i) << ' ';
    }
    std::cout << "].\n\n";

    // set time series directly
    std::vector<double> vector_to_set = {2,3,5};
    std::cout << "The time series will be directly set with [";
    for (int i=0; i<vector_to_set.size(); i++) {
        std::cout << vector_to_set.at(i) << ' ';
    }
    std::cout << "].\n";

    lfpratiometer.setTimeSeries(vector_to_set);
    buffer_curr = lfpratiometer.getBuffer();
    std::cout << "Time buffer actually is [";
    for (int i=0; i<buffer_curr.size(); i++) {
        std::cout << buffer_curr.at(i) << ' ';
    }
    std::cout << "].\n\n";

    return 0;
}