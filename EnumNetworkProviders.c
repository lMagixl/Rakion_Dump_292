
/* public: void __thiscall CMessageDispatcher::EnumNetworkProviders(class CListHead &) */

void __thiscall
CMessageDispatcher::EnumNetworkProviders(CMessageDispatcher *this,CListHead *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1040e0  1575
                       ?EnumNetworkProviders@CMessageDispatcher@@QAEXAAVCListHead@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621770f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (piVar3 = *(int **)(this + 4); *piVar3 != 0; piVar3 = (int *)*piVar3) {
    puVar1 = (undefined4 *)FUN_361bf99c(0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      pcVar2 = StringDuplicate((char *)piVar3[-1]);
      *puVar1 = pcVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    local_4 = 0xffffffff;
    CListHead::AddTail(param_1,(CListNode *)(puVar1 + 1));
  }
  ExceptionList = local_c;
  return;
}

