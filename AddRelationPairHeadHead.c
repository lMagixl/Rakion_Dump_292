
/* void __cdecl AddRelationPairHeadHead(class CRelationSrc &,class CRelationDst &) */

void __cdecl AddRelationPairHeadHead(CRelationSrc *param_1,CRelationDst *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x32570  1003
                       ?AddRelationPairHeadHead@@YAXAAVCRelationSrc@@AAVCRelationDst@@@Z */
  iVar1 = FUN_361bf99c(0x18);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_36032410(iVar1);
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  CListHead::AddHead((CListHead *)param_1,(CListNode *)(puVar2 + 2));
  CListHead::AddHead((CListHead *)param_2,(CListNode *)(puVar2 + 4));
  return;
}

