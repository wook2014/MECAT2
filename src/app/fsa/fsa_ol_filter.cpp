#include "overlap_filter.hpp"


int main(int argc, char *argv[]) {
    OverlapFilter of;

    if (of.ParseArgument(argc, argv)) {
        of.Run();
    }
    else {
        of.Usage();
    }
    return 0;

}
