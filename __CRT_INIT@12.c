
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __CRT_INIT@12
   
   Library: Visual Studio 2003 Release */

undefined4 __CRT_INIT_12(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *_Memory;
  
  if (param_2 == 0) {
    if (0 < DAT_3638306c) {
      DAT_3638306c = DAT_3638306c + -1;
      goto LAB_361c0366;
    }
LAB_361c038e:
    uVar1 = 0;
  }
  else {
LAB_361c0366:
    _DAT_363884ac = *(undefined4 *)_adjust_fdiv_exref;
    if (param_2 == 1) {
      DAT_363884b8 = malloc(0x80);
      if (DAT_363884b8 == (undefined4 *)0x0) goto LAB_361c038e;
      *DAT_363884b8 = 0;
      DAT_363884b4 = DAT_363884b8;
      __RTC_Initialize();
      _atexit((_func_4879 *)&LAB_361c060e);
      initterm(&DAT_362a1000,&DAT_362a156c);
      DAT_3638306c = DAT_3638306c + 1;
    }
    else if ((param_2 == 0) && (_Memory = DAT_363884b8, DAT_363884b8 != (undefined4 *)0x0)) {
      while (DAT_363884b4 = DAT_363884b4 + -1, _Memory <= DAT_363884b4) {
        if ((code *)*DAT_363884b4 != (code *)0x0) {
          (*(code *)*DAT_363884b4)();
          _Memory = DAT_363884b8;
        }
      }
      free(_Memory);
      DAT_363884b8 = (undefined4 *)0x0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

