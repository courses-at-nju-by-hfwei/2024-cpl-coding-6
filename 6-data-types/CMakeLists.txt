add_executable(size size.c)
add_executable(int-limits int-limits.c)
add_executable(exact-width exact-width.c)

add_executable(unsigned unsigned.c)
add_executable(timing-primes timing-primes.c)

add_executable(char char.c)

add_executable(unsinged-wrap unsigned-wrap.c)
add_executable(for-unsigned for-unsigned.c)
add_executable(unsigned-wrap-fix unsigned-wrap-fix.c)

add_executable(signed-overflow-fix signed-overflow-fix.c)

add_executable(implicit-conversion implicit-conversion.c)
add_executable(integer-promotion integer-promotion.c)
add_executable(explict-conversion explict-conversion.c)

add_executable(float-limits float-limits.c)

add_executable(sum-product sum-product.c)
add_executable(loop loop.c)

add_executable(compare compare.c)
target_link_libraries(compare m)

add_executable(float-assoc float-assoc.c)