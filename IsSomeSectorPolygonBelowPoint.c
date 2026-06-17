
/* public: int __thiscall CMovableEntity::IsSomeSectorPolygonBelowPoint(class CBrushSector *,class
   Vector<float,3> const &,float) */

int __thiscall
CMovableEntity::IsSomeSectorPolygonBelowPoint
          (CMovableEntity *this,CBrushSector *param_1,Vector<float,3> *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ad220  2477
                       ?IsSomeSectorPolygonBelowPoint@CMovableEntity@@QAEHPAVCBrushSector@@ABV?$Vector@M$02@@M@Z
                        */
  puStack_8 = &LAB_3621bf3e;
  local_c = ExceptionList;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = IsPolygonBelowPoint(this,(CBrushPolygon *)(iVar2 * 0x1d0 + *(int *)(param_1 + 0x1c)),
                                  param_2,param_3);
      if (iVar1 != 0) {
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  ExceptionList = local_c;
  return 0;
}

