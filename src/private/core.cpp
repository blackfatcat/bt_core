#include "types.hpp"
#include "core.hpp"

#include <print>

namespace bt::core
{
    void example_fun()
    {
        types::vector<int> test{1,2,3,4,5};

        for (auto& v : test)
        {
            std::print("{}", v);
        }
        
    }
} // namespace bt_template
