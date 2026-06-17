
/* public: void __thiscall CEditModel::CalculatePatchesPerPolygon(void) */

void __thiscall CEditModel::CalculatePatchesPerPolygon(CEditModel *this)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  CTFileName *this_00;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  CEditModel *this_01;
  CEditModel *pCVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  int local_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_54;
  void *local_50;
  int local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xaee10  1135  ?CalculatePatchesPerPolygon@CEditModel@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362139f2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  lVar3 = CountPatches(this);
  local_64 = 0;
  if (0 < *(int *)(this + 0x6c)) {
    this_01 = this + 0xf8;
    do {
      if (*(int *)this_01 != 0) {
        pvVar1 = *(void **)(this_01 + 4);
        if (pvVar1 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar1,0x10,*(int *)((int)pvVar1 + -4),PolygonsPerPatch::~PolygonsPerPatch);
          operator_delete__((void *)((int)pvVar1 + -4));
        }
        *(int *)this_01 = 0;
        *(int *)(this_01 + 4) = 0;
      }
      if ((((byte)this_01[-4] & 1) != 0) && (lVar3 != 0)) {
        FUN_360167b0(this_01,lVar3);
        pCVar8 = this + 0xd10;
        local_7c = 0;
        local_68 = 0x20;
        do {
          iVar5 = 0;
          pcVar14 = &DAT_362317c0;
          this_00 = CTextureObject::GetName((CTextureObject *)(pCVar8 + -0x14));
          iVar4 = CTString::operator!=((CTString *)this_00,pcVar14);
          if (iVar4 != 0) {
            local_54 = 0;
            local_50 = (void *)0x0;
            iVar4 = *(int *)(this_01 + -8);
            local_4 = 0;
            if (iVar4 != 0) {
              local_50 = (void *)thunk_FUN_361bf99c(iVar4 * 4 + 4);
              local_54 = iVar4;
            }
            local_4c[0] = *(int *)(pCVar8 + 4);
            local_4c[1] = *(int *)(pCVar8 + 8);
            local_70 = 0;
            uVar12 = FUN_361bfd6c();
            uVar13 = FUN_361bfd6c();
            local_4c[2] = (int)uVar13;
            local_4c[3] = (int)uVar12;
            iVar4 = 0;
            do {
              iVar7 = *(int *)((int)local_4c + iVar4 + 8);
              iVar2 = *(int *)((int)local_4c + iVar4);
              iVar10 = iVar7;
              if (iVar2 <= iVar7) {
                iVar10 = iVar2;
              }
              *(int *)((int)local_4c + iVar4 + 0x30) = iVar10;
              if (iVar7 <= iVar2) {
                iVar7 = iVar2;
              }
              *(int *)((int)local_4c + iVar4 + 0x38) = iVar7;
              iVar4 = iVar4 + 4;
            } while (iVar4 < 5);
            local_6c = 0;
            if (0 < *(int *)(this_01 + -8)) {
              local_78 = 0;
              do {
                puVar9 = (undefined4 *)(*(int *)(this_01 + 0xc) + local_78);
                iVar4 = 1;
                do {
                  local_4c[iVar4 + 3] = 0x7fffffff;
                  local_4c[iVar4 + 5] = -0x80000000;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < 3);
                iVar7 = 0;
                iVar4 = FUN_3600c1d0(puVar9);
                if (0 < iVar4) {
                  piVar11 = (int *)(puVar9[1] + 4);
                  do {
                    iVar5 = 1;
                    piVar6 = (int *)(*piVar11 + 0xc);
                    do {
                      iVar4 = *piVar6;
                      local_4c[iVar5 + 9] = iVar4;
                      local_4c[iVar5 + 7] = iVar4;
                      iVar5 = iVar5 + 1;
                      piVar6 = piVar6 + 1;
                    } while (iVar5 < 3);
                    iVar5 = 0;
                    do {
                      iVar4 = *(int *)((int)local_4c + iVar5 + 0x20);
                      iVar2 = *(int *)((int)local_4c + iVar5 + 0x10);
                      if (iVar2 <= iVar4) {
                        iVar4 = iVar2;
                      }
                      iVar2 = *(int *)((int)local_4c + iVar5 + 0x18);
                      *(int *)((int)local_4c + iVar5 + 0x10) = iVar4;
                      iVar4 = *(int *)((int)local_4c + iVar5 + 0x28);
                      if (iVar4 <= iVar2) {
                        iVar4 = iVar2;
                      }
                      *(int *)((int)local_4c + iVar5 + 0x18) = iVar4;
                      iVar5 = iVar5 + 4;
                    } while (iVar5 < 5);
                    iVar7 = iVar7 + 1;
                    piVar11 = piVar11 + 2;
                    iVar4 = FUN_3600c1d0(puVar9);
                    iVar5 = local_70;
                  } while (iVar7 < iVar4);
                }
                iVar4 = 0;
                do {
                  if ((*(int *)((int)local_4c + iVar4 + 0x38) <
                       *(int *)((int)local_4c + iVar4 + 0x10)) ||
                     (*(int *)((int)local_4c + iVar4 + 0x18) <
                      *(int *)((int)local_4c + iVar4 + 0x30))) goto LAB_360af088;
                  iVar4 = iVar4 + 4;
                } while (iVar4 < 5);
                *(int *)((int)local_50 + iVar5 * 4) = local_6c;
                iVar5 = iVar5 + 1;
                local_70 = iVar5;
LAB_360af088:
                local_78 = local_78 + 0x1c;
                local_6c = local_6c + 1;
              } while (local_6c < *(int *)(this_01 + -8));
              if (iVar5 != 0) {
                iVar4 = *(int *)(this_01 + 4);
                *(int *)(iVar4 + local_7c) = iVar5;
                iVar7 = thunk_FUN_361bf99c(iVar5 * 4 + 4);
                ((int *)(iVar4 + local_7c))[1] = iVar7;
                iVar4 = 0;
                if (0 < iVar5) {
                  do {
                    *(undefined4 *)(*(int *)(*(int *)(this_01 + 4) + 4 + local_7c) + iVar4 * 4) =
                         *(undefined4 *)((int)local_50 + iVar4 * 4);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < iVar5);
                }
              }
            }
            local_7c = local_7c + 0x10;
            local_4 = 0xffffffff;
            if (local_54 != 0) {
              operator_delete__(local_50);
            }
          }
          pCVar8 = pCVar8 + 0x28;
          local_68 = local_68 + -1;
        } while (local_68 != 0);
      }
      local_64 = local_64 + 1;
      this_01 = this_01 + 0x60;
    } while (local_64 < *(int *)(this + 0x6c));
  }
  ExceptionList = local_c;
  return;
}

