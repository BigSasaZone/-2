#include <iostream>
#include "test.h"
int main() {
    testDynamicArrayDefaultConstructor();
    testDynamicArrayConstructorWithSize();
    testDynamicArraySetAndGet();
    testDynamicArrayAppend();
    testDynamicArrayPrepend();
    testArraySequenceGetSubsequence();
    testDynamicArrayReSize();
    testDynamicArrayWhere();
    testDynamicArrayMap();
    testLinkedListDefaultConstructor();
    testLinkedListConstructorWithSize();
    testLinkedListAppend();
    testLinkedListPrepend();
    testLinkSequenceGetSubsequence();
    testLinkedListInsertAt();
    testLinkedListWhere();
    testLinkedListMap();
    std::cout<< "GOOD" << std::endl;
    return 0;
}
