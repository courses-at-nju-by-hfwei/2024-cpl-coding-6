# `12-struct`

## TODO
- Union in the `musician` example: array of albums

## Contents

- `struct`
- `struct musician`
- `typedef struct musician`
- **struct alignment and padding**
- `typedef struct score`
- `enum`
- `struct` assignment
- `PrintMusician(const Musician m)`
- `PrintMusician(const Musician *m)`

## c-reference

- `struct`
- `flexible array`

## padding

## `offsetof` and `container_of`

- [offsetof @ wikipedia](https://en.wikipedia.org/wiki/Offsetof)
- [offsetof @ cref](https://en.cppreference.com/w/c/types/offsetof)
- [offsetof @ stackoverflow](https://stackoverflow.com/q/26906621/1833118)
- [container_of @ stackoverflow](https://stackoverflow.com/q/15832301/1833118)
- [container_of @ radek.io](https://radek.io/posts/magical-container_of-macro/)
- [container_of @ Linux Kernel Monkey Log](http://www.kroah.com/log/linux/container_of.html)
- [container_of @ 0xAX](https://0xax.gitbooks.io/linux-insides/content/DataStructures/linux-datastructures-1.html)

## Union

- [union in
  `dictEntry` @ redis](https://github.com/redis/redis/blob/c51c96656bf1f1801ae90a376f71890cbcdea4b4/src/dict.c#L47-L134)