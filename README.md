# nativedemo
## for self study.

### step1. generate header files.
* how to generate headers.
```bat
% cd $(project-root)
% javah -cp [class path] [class name]
```

* example
```bat
% cd nativedemo
% javah -cp build/classes sato.nativedemo.primitive.PrimitiveSample
```
