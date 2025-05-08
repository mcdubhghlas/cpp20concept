#include <concepts>

/*
 * This defines a concept to restrict to arithmetic types.
 */
template<typename T>
concept Arithmetic = std::is_arithmetic_v<T>;

/*
 * This uses the defined concept to constrain the template.
 */
template<Arithmetic M>
M square(M value) {
    return value * value;
}
