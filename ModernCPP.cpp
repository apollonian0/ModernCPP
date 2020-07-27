/// Copyright Ben Howenstein 2020. All rights reserved.
//

#include <iostream>
#include <compare>

//////////////////////////////////////////////////////////////////////////
//	CmpIntStatic
//////////////////////////////////////////////////////////////////////////
template<class T>
struct CompareNumStatic
{
    explicit constexpr CompareNumStatic(const T& Value) : m_value(Value) {}
    
    auto operator<=>(const CompareNumStatic&) const = default;

private:

    T m_value;
};

int main()
{
    using namespace std;
    
    static_assert(CompareNumStatic{ 3.14f } < CompareNumStatic{ 99.0f });
    static_assert(CompareNumStatic{ 45 } >= CompareNumStatic{ 42 });
}
