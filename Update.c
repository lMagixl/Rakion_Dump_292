
/* public: bool __thiscall CAOTime::Update(void) */

bool __thiscall CAOTime::Update(CAOTime *this)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
                    /* 0x19eb60  3900  ?Update@CAOTime@@QAE_NXZ */
  if (*(int *)(this + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(this + 0x10) - *(int *)(this + 0xc) >> 2;
  }
  *(undefined4 *)(this + 4) = 0;
  if (uVar3 != 0) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)(this + 0xc) + *(int *)(this + 4) * 4) + 0xc))();
      if (cVar2 != '\0') {
        return true;
      }
      iVar1 = *(int *)(this + 4);
      *(uint *)(this + 4) = iVar1 + 1U;
    } while (iVar1 + 1U < uVar3);
  }
  return false;
}

