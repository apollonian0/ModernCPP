// Copyright 2020 Ben Howenstein. All rights reserved.
//

template<class T>
struct CompareNumStatic
{
	explicit constexpr CompareNumStatic(const T& Value) : m_value(Value) {}

	auto operator<=>(const CompareNumStatic&) const = default;

private:

	T m_value;
};
