
void __fastcall FUN_3619d890(int param_1,undefined4 *param_2)

{
  int in_EAX;
  undefined2 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = (param_1 - 1U >> 2) + 1;
    puVar1 = (undefined2 *)(in_EAX + 2);
    do {
      iVar2 = iVar2 + -1;
      *param_2 = CONCAT31(CONCAT21(*puVar1,*(undefined1 *)((int)puVar1 + -1)),
                          *(undefined1 *)(puVar1 + -1));
      puVar1 = puVar1 + 2;
      param_2 = param_2 + 1;
    } while (iVar2 != 0);
  }
  return;
}

