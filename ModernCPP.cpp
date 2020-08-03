/// Copyright Ben Howenstein 2020. All rights reserved.
//

#include <iostream>
#include <compare>
#include "Static.h"
#include "Variadic.h"


int main()
{
    using namespace std;

    static_assert(CompareNumStatic{ 3.14f } < CompareNumStatic{ 99.0f });
    static_assert(CompareNumStatic{ 45 } >= CompareNumStatic{ 42 });

    static_assert(StaticSum(1.0, 2, 3.0f) == 6);
    static_assert(StaticSumSquares(1.0, 2, 3.0f) == 14.0);
}
