
/* public: __thiscall CFileNameNode::CFileNameNode(char const *,class CListHead *) */

CFileNameNode * __thiscall
CFileNameNode::CFileNameNode(CFileNameNode *this,char *param_1,CListHead *param_2)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1f560  105  ??0CFileNameNode@@QAE@PBDPAVCListHead@@@Z */
  puStack_8 = &LAB_3620ec80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  local_4 = 0;
  iVar2 = (int)this - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  CListHead::AddTail(param_2,(CListNode *)(this + 0x104));
  ExceptionList = local_c;
  return this;
}

