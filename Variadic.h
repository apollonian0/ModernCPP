// Copyright 2020 Ben Howenstein. All rights reserved.
//

template<class T> constexpr T StaticSquare(const T& value)
{
	return value * value;
}

template<class T> constexpr double StaticSum(const T& value)
{
	return value;
}

template<class T, class... Ts> constexpr double StaticSum(const T& value, Ts... values)
{
	return value + StaticSum(values...);
}

template<class... Ts> constexpr double StaticSumSquares(const Ts... values)
{
	return StaticSum(StaticSquare(values)...);
}
