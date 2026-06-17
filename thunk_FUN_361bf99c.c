
void __cdecl thunk_FUN_361bf99c(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  while( true ) {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) break;
    iVar1 = _callnewh(param_1);
    if (iVar1 == 0) {
      std::_Nomemory();
    }
  }
  return;
}

