/// Recreate the multiplication table task, allowing the user to rerun
/// the program again after it prints the multiplication table.

#include <iostream>
#include <string>


template <typename F>
void print_table(int n, int m, const F& generator)
{
    for (int y = 0; y < n; ++y) {
        for (int x = 0; x < m; ++x) {
            std::cout << generator(x, y);
            if (x < m - 1) {
                std::cout << '\t';
            }
        }
        std::cout << std::endl;
    }
}


void solve_multiplication_table_task()
{
    int n, m;
    std::cin >> n >> m;
    auto generator = [m](int x, int y) {
        if (x == 0 && y == 0) {
            return std::string();
        }
        const int result = ([x, y, m]() {
            if (x == 0) {
                return y;
            } else if (y == 0) {
                return x;
            } else {
                return x * y % m;
            }
        })();

        return std::to_string(result);
    };

    print_table(n + 1, n + 1, generator);
}


bool ask_to_rerun()
{
    std::cerr << ":: Rerun program? [y/N] " << std::flush;
    char choice;
    std::cin >> choice;
    return choice == 'y';
}


int main()
{
    while (true) {
        solve_multiplication_table_task();
        if (!ask_to_rerun()) {
            std::cerr << ":: Exiting" << std::endl;
            break;
        }
        std::cerr << ":: Rerunning..." << std::endl;
    }
}
