import '../helpers/range.dart';

int gcd(int x, int y) {
  return x == 0 ? y : gcd(y % x, x);
}

int gcdList(List<int> numbers) {
  if (numbers.length < 2) throw ArgumentError('single element');
  return numbers.reduce(gcd);
}

int lcm(int x, int y) {
  if (x * y == 0) throw ArgumentError('null');
  return (x * y) ~/ gcd(x, y);
}

int lcmList(List<int> numbers) {
  if (numbers.length < 2) throw ArgumentError('single element');
  return numbers.reduce(lcm);
}

int factorial(int n) {
  if (n < 0) throw ArgumentError('Negative Number');
  return (n <= 1) ? 1 : 2.to(n + 1).reduce((a, b) => a * b);
}
