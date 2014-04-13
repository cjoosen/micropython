#include "mpconfig.h"
// All the qstr definitions in this file are available as constants.
// That is, they are in ROM and you can reference them simply as MP_QSTR_xxxx.

Q(__build_class__)
Q(__class__)
Q(__doc__)
Q(__import__)
Q(__init__)
Q(__locals__)
Q(__main__)
Q(__module__)
Q(__name__)
Q(__next__)
Q(__qualname__)
Q(__path__)
Q(__repl_print__)

Q(__bool__)
Q(__contains__)
Q(__enter__)
Q(__exit__)
Q(__len__)
Q(__iter__)
Q(__getitem__)
Q(__setitem__)
Q(__add__)
Q(__sub__)
Q(__repr__)
Q(__str__)
Q(__getattr__)
Q(__del__)

Q(micropython)
Q(byte_code)
Q(native)
Q(viper)
Q(asm_thumb)

Q(Ellipsis)
Q(StopIteration)

Q(BaseException)
Q(ArithmeticError)
Q(AssertionError)
Q(AttributeError)
Q(BufferError)
Q(EOFError)
Q(Exception)
Q(FileExistsError)
Q(FileNotFoundError)
Q(FloatingPointError)
Q(GeneratorExit)
Q(IOError)
Q(ImportError)
Q(IndentationError)
Q(IndexError)
Q(KeyError)
Q(LookupError)
Q(MemoryError)
Q(NameError)
Q(NotImplementedError)
Q(OSError)
Q(OverflowError)
Q(RuntimeError)
Q(SyntaxError)
Q(SystemError)
Q(TypeError)
Q(UnboundLocalError)
Q(ValueError)
Q(ZeroDivisionError)

Q(None)
Q(False)
Q(True)
Q(object)

Q(NoneType)

Q(abs)
Q(all)
Q(any)
Q(args)
Q(array)
Q(bool)
Q(bytearray)
Q(bytes)
Q(callable)
#if MICROPY_ENABLE_MOD_STRUCT
Q(calcsize)
#endif
Q(chr)
Q(classmethod)
Q(_collections)
Q(complex)
Q(dict)
Q(dir)
Q(divmod)
Q(enumerate)
Q(eval)
Q(exec)
Q(filter)
Q(float)
Q(from_bytes)
Q(getattr)
Q(globals)
Q(hash)
Q(id)
Q(io)
Q(int)
Q(isinstance)
Q(issubclass)
Q(iter)
Q(len)
Q(list)
Q(locals)
Q(map)
Q(max)
Q(min)
Q(namedtuple)
Q(next)
Q(open)
Q(ord)
Q(path)
Q(pow)
Q(print)
Q(range)
Q(repr)
Q(set)
Q(sorted)
Q(staticmethod)
Q(sum)
Q(super)
Q(str)
#if MICROPY_ENABLE_MOD_STRUCT
Q(struct)
#endif
Q(sys)
Q(to_bytes)
Q(tuple)
Q(type)
#if MICROPY_ENABLE_MOD_STRUCT
Q(unpack)
#endif
Q(value)
Q(zip)

Q(sep)
Q(end)

Q(clear)
Q(copy)
Q(fromkeys)
Q(get)
Q(items)
Q(keys)
Q(pop)
Q(popitem)
Q(setdefault)
Q(update)
Q(values)
Q(append)
Q(close)
Q(send)
Q(throw)
Q(count)
Q(extend)
Q(index)
Q(remove)
Q(insert)
Q(pop)
Q(sort)
Q(join)
Q(strip)
Q(format)
Q(key)
Q(reverse)
Q(add)
Q(clear)
Q(copy)
Q(discard)
Q(difference)
Q(difference_update)
Q(intersection)
Q(intersection_update)
Q(isdisjoint)
Q(issubset)
Q(issuperset)
Q(pop)
Q(remove)
Q(symmetric_difference)
Q(symmetric_difference_update)
Q(union)
Q(update)
Q(find)
Q(rfind)
Q(rindex)
Q(split)
Q(startswith)
Q(replace)
Q(partition)
Q(rpartition)

Q(bound_method)
Q(closure)
Q(dict_view)
Q(function)
Q(generator)
Q(iterator)
Q(module)
Q(slice)

Q(math)
Q(e)
Q(pi)
Q(sqrt)
Q(pow)
Q(exp)
Q(expm1)
Q(log)
Q(log2)
Q(log10)
Q(cosh)
Q(sinh)
Q(tanh)
Q(acosh)
Q(asinh)
Q(atanh)
Q(cos)
Q(sin)
Q(tan)
Q(acos)
Q(asin)
Q(atan)
Q(atan2)
Q(ceil)
Q(copysign)
Q(fabs)
Q(fmod)
Q(floor)
Q(isfinite)
Q(isinf)
Q(isnan)
Q(trunc)
Q(modf)
Q(frexp)
Q(ldexp)
Q(degrees)
Q(radians)
Q(erf)
Q(erfc)
Q(gamma)
Q(lgamma)

Q(mem_total)
Q(mem_current)
Q(mem_peak)

Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)

#if MICROPY_CPYTHON_COMPAT
Q(encode)
Q(decode)
Q(utf-8)
#endif

#if MICROPY_ENABLE_MOD_SYS
Q(argv)
Q(byteorder)
Q(big)
Q(little)
Q(stdin)
Q(stdout)
Q(stderr)
Q(version_info)
#endif
