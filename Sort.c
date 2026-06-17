
/* public: void __thiscall CListHead::Sort(int (__cdecl*)(void const *,void const *),int) */

void __thiscall CListHead::Sort(CListHead *this,_func_int_void_ptr_void_ptr *param_1,int param_2)

{
  size_t _NumOfElements;
  int *_Base;
  int *piVar1;
  int *piVar2;
  CListNode *extraout_ECX;
  int iVar3;
  CListHead local_c [12];
  
                    /* 0x2b590  3643  ?Sort@CListHead@@QAEXP6AHPBX0@ZH@Z */
  _NumOfElements = Count(this);
  _Base = (int *)thunk_FUN_361bf99c(_NumOfElements * 4);
  piVar2 = _Base;
  for (piVar1 = *(int **)this; *piVar1 != 0; piVar1 = (int *)*piVar1) {
    *piVar2 = (int)piVar1 - param_2;
    piVar2 = piVar2 + 1;
  }
  qsort(_Base,_NumOfElements,4,(_PtFuncCompare *)param_1);
  Clear(local_c);
  iVar3 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      CListNode::Remove((CListNode *)(_Base[iVar3] + param_2));
      AddTail(local_c,extraout_ECX);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)_NumOfElements);
  }
  operator_delete__(_Base);
  MoveList(this,local_c);
  return;
}

