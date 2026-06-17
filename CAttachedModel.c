
/* public: __thiscall CAttachedModel::CAttachedModel(void) */

CAttachedModel * __thiscall CAttachedModel::CAttachedModel(CAttachedModel *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa8110  20  ??0CAttachedModel@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362133de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CModelObject::CModelObject((CModelObject *)(this + 4));
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xb0) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate(s_No_name_36230c24);
  StringFree(*(char **)(this + 0xb0));
  *(char **)(this + 0xb0) = pcVar1;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)this = 1;
  ExceptionList = local_c;
  return this;
}

