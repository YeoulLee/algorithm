# Structure

```c
// Structure declaration
struct structTag {
    dataType memberVariable1;
    dataType memberVariable2;
    ...
};

// Define a variable
struct structTag structureVariable;
struct structTag *structurePointer = &structureVariable;

structureVariable.memberVariable
structurePointer->memberVaraible
```

```c
struct structTag {
    dataType memberVariable1;
    dataType memberVariable2;
    ...
} structureVariable;
```

```c
// Structure declaration
struct structTag {
    dataType memberVariable1;
    dataType memberVariable2;
    ...
};

typedef struct structType structAlias;
// Define a variable
structAlias structureVariable;
structAlias *structurePointer = &structureVariable;

```

```c
typedef struct structTag {
    dataType memberVariable1;
    dataType memberVariable2;
    ...
} structAlias;
// Define a variable
structAlias structureVariable;
structAlias *structurePointer = &structureVariable;
```
