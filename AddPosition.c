
/* public: void __thiscall CLastPositions::AddPosition(class Vector<float,3> const &) */

void __thiscall CLastPositions::AddPosition(CLastPositions *this,Vector<float,3> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x133860  996  ?AddPosition@CLastPositions@@QAEXABV?$Vector@M$02@@@Z */
  iVar3 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar3 + 1;
  iVar2 = FUN_3604f2b0((undefined4 *)this);
  if (iVar2 <= iVar3 + 1) {
    *(undefined4 *)(this + 8) = 0;
  }
  iVar3 = FUN_3604f2b0((undefined4 *)this);
  if (*(int *)(this + 0xc) + 1 <= iVar3) {
    iVar3 = *(int *)(this + 0xc) + 1;
  }
  *(int *)(this + 0xc) = iVar3;
  puVar1 = (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc);
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = *(undefined4 *)(param_1 + 4);
  puVar1[2] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(_pTimer + 0xc);
  return;
}

