
/* public: void __thiscall CAOTime::Add(class CAbsTimeInfo *) */

void __thiscall CAOTime::Add(CAOTime *this,CAbsTimeInfo *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x19f460  944  ?Add@CAOTime@@QAEXPAVCAbsTimeInfo@@@Z */
  iVar1 = *(int *)(this + 0xc);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)(this + 0x10) - iVar1 >> 2) < (uint)(*(int *)(this + 0x14) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)(this + 0x10);
    *puVar2 = param_1;
    *(undefined4 **)(this + 0x10) = puVar2 + 1;
    return;
  }
  FUN_3619f170(this + 8,*(undefined4 **)(this + 0x10),1,&param_1);
  return;
}

