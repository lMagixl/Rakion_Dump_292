
/* public: void __thiscall CListHead::MoveList(class CListHead &) */

void __thiscall CListHead::MoveList(CListHead *this,CListHead *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  CListHead *this_00;
  
                    /* 0x2b450  2655  ?MoveList@CListHead@@QAEXAAV1@@Z */
  iVar3 = IsEmpty(param_1);
  if (iVar3 == 0) {
    piVar1 = *(int **)(this + 8);
    iVar3 = *(int *)this_00;
    piVar2 = *(int **)(this_00 + 8);
    *piVar2 = *piVar1;
    *piVar1 = iVar3;
    *(int **)(iVar3 + 4) = piVar1;
    *(int **)(this + 8) = piVar2;
    Clear(this_00);
  }
  return;
}

