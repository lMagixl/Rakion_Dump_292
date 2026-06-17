
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_362041e0(double *param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  double *pdVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  float10 fVar19;
  int *local_558;
  uint local_550;
  int local_54c;
  int local_548;
  char local_544;
  int local_53c;
  int local_538;
  int *local_530;
  double *local_524;
  int local_520;
  double *local_51c;
  double local_518;
  undefined8 *local_50c;
  int local_508 [16];
  int local_4c8 [16];
  int local_488 [32];
  int local_408 [257];
  int *piVar8;
  
  bVar4 = true;
  if ((param_1 != (double *)0x0) && (iVar14 = *(int *)param_1, iVar14 != 0)) {
    local_518 = (double)iVar14;
    pdVar10 = (double *)&DAT_36383f30;
    pdVar15 = param_1 + 0x31;
    _DAT_36386210 = _DAT_3624cdd0 / local_518;
    do {
      dVar1 = _DAT_3624cda8;
      if (_DAT_3624cda8 <= *pdVar15) {
        dVar1 = *pdVar15;
      }
      *pdVar10 = dVar1;
      pdVar10 = pdVar10 + 1;
      pdVar15 = pdVar15 + 1;
    } while ((int)pdVar10 < 0x36383f48);
    if (*(char *)((int)param_1 + 0x1a4) != '\0') {
      *(undefined4 *)(param_1 + 0x35) = 4;
      *(undefined4 *)(param_1 + 0x34) = 4;
    }
    iVar11 = 0;
    pdVar15 = param_1;
    do {
      pdVar15 = pdVar15 + 1;
      *(undefined4 *)((int)&DAT_36387d60 + iVar11) = 0;
      *(undefined4 *)((int)&DAT_36387d64 + iVar11) = 0;
      if (0 < iVar14) {
        pdVar10 = pdVar15;
        pdVar9 = (double *)((int)&DAT_36388268 + iVar11);
        iVar18 = iVar14;
        do {
          dVar1 = *(double *)((int)&DAT_36383f30 + iVar11) * *pdVar10;
          bVar4 = (bool)(bVar4 & *pdVar10 == *pdVar15);
          pdVar10 = pdVar10 + 3;
          iVar18 = iVar18 + -1;
          *pdVar9 = dVar1;
          *(double *)((int)&DAT_36387d60 + iVar11) =
               dVar1 + *(double *)((int)&DAT_36387d60 + iVar11);
          pdVar9 = pdVar9 + 3;
        } while (iVar18 != 0);
      }
      iVar11 = iVar11 + 8;
    } while (iVar11 < 0x18);
    local_544 = '\x01';
    local_54c = 0;
    do {
      iVar11 = ftol();
      iVar18 = ftol();
      iVar6 = ftol();
      uVar13 = iVar11 - iVar18 >> 0x1f;
      if (((2 < (int)((iVar11 - iVar18 ^ uVar13) - uVar13)) ||
          (uVar13 = iVar18 - iVar6 >> 0x1f, 2 < (int)((iVar18 - iVar6 ^ uVar13) - uVar13))) ||
         (uVar13 = iVar6 - iVar11 >> 0x1f, 2 < (int)((iVar6 - iVar11 ^ uVar13) - uVar13))) {
        local_544 = '\0';
        break;
      }
      local_54c = local_54c + 1;
    } while (local_54c < 0x10);
    if (bVar4) {
      local_518 = (double)CONCAT44(local_518._4_4_,*(undefined4 *)(param_1 + 0x34));
      FUN_36206450((int)param_1,(int *)&local_518,iVar14,(double *)&DAT_36388268,0x36383f30,
                   (uint *)((int)param_1 + 0x1ac),(int *)((int)param_1 + 0x1c4),local_544);
      *(undefined4 *)(param_1 + 0x35) = local_518._0_4_;
      return;
    }
    iVar11 = 0;
    do {
      dVar1 = *(double *)((int)&DAT_36387d60 + iVar11) / local_518;
      *(double *)((int)&DAT_36387d60 + iVar11) = dVar1;
      iVar18 = iVar11;
      iVar6 = iVar14;
      if (0 < iVar14) {
        do {
          iVar6 = iVar6 + -1;
          *(double *)((int)&DAT_36386090 + iVar18) =
               *(double *)((int)&DAT_36388268 + iVar18) - dVar1;
          iVar18 = iVar18 + 0x18;
        } while (iVar6 != 0);
      }
      *(double *)((int)&DAT_36387dd8 + iVar11) = -dVar1;
      iVar18 = iVar11 + 8;
      *(double *)((int)&DAT_36387df0 + iVar11) = *(double *)((int)&DAT_36383f30 + iVar11) - dVar1;
      iVar11 = iVar18;
    } while (iVar18 < 0x18);
    iVar11 = 0;
    local_520 = 0;
    if (0 < iVar14) {
      piVar8 = local_4c8;
      iVar18 = 0;
      local_530 = (int *)iVar14;
      do {
        iVar6 = 0;
        if (0 < iVar11) {
          pdVar15 = (double *)&DAT_36387b48;
          do {
            if (((pdVar15[-1] == *(double *)((int)&DAT_36388268 + iVar18)) &&
                (*pdVar15 == *(double *)((int)&DAT_36388270 + iVar18))) &&
               (pdVar15[1] == *(double *)((int)&DAT_36388278 + iVar18))) break;
            iVar6 = iVar6 + 1;
            pdVar15 = pdVar15 + 3;
          } while (iVar6 < iVar11);
        }
        if (iVar6 == iVar11) {
          uVar3 = *(undefined4 *)((int)&DAT_36388268 + iVar18);
          *(undefined4 *)(&DAT_36387a28 + iVar6) = 0;
          iVar7 = iVar6 * 0x18;
          *(undefined4 *)((int)&DAT_36387a28 + iVar6 * 8 + 4) = 0x3ff00000;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(&DAT_36387b40 + iVar6 * 3) = uVar3;
          *(undefined4 *)((int)&DAT_36387b40 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_36388268 + iVar18 + 4);
          *(undefined4 *)(&DAT_36387b48 + iVar6 * 3) = *(undefined4 *)((int)&DAT_36388270 + iVar18);
          *(undefined4 *)((int)&DAT_36387b48 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_36388270 + iVar18 + 4);
          *(undefined4 *)(&DAT_36387b50 + iVar6 * 3) = *(undefined4 *)((int)&DAT_36388278 + iVar18);
          *(undefined4 *)((int)&DAT_36387b50 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_36388278 + iVar18 + 4);
          *(undefined4 *)(&DAT_363840d8 + iVar6 * 3) = *(undefined4 *)((int)&DAT_36386090 + iVar18);
          *(undefined4 *)((int)&DAT_363840d8 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_36386094 + iVar18);
          *(undefined4 *)(&DAT_363840e0 + iVar6 * 3) = *(undefined4 *)((int)&DAT_36386098 + iVar18);
          *(undefined4 *)((int)&DAT_363840e0 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_3638609c + iVar18);
          *(undefined4 *)(&DAT_363840e8 + iVar6 * 3) = *(undefined4 *)((int)&DAT_363860a0 + iVar18);
          *(undefined4 *)((int)&DAT_363840e8 + iVar7 + 4) =
               *(undefined4 *)((int)&DAT_363860a4 + iVar18);
        }
        else {
          (&DAT_363840d8)[iVar6 * 3] =
               *(double *)((int)&DAT_36386090 + iVar18) + (double)(&DAT_363840d8)[iVar6 * 3];
          (&DAT_363840e0)[iVar6 * 3] =
               *(double *)((int)&DAT_36386098 + iVar18) + (double)(&DAT_363840e0)[iVar6 * 3];
          (&DAT_363840e8)[iVar6 * 3] =
               *(double *)((int)&DAT_363860a0 + iVar18) + (double)(&DAT_363840e8)[iVar6 * 3];
          (&DAT_36387a28)[iVar6] = (double)(&DAT_36387a28)[iVar6] + _DAT_3624cdd0;
        }
        *piVar8 = iVar6;
        iVar18 = iVar18 + 0x18;
        piVar8 = piVar8 + 1;
        local_530 = (int *)((int)local_530 + -1);
        local_520 = iVar11;
      } while (local_530 != (int *)0x0);
    }
    if (0 < local_520) {
      pdVar15 = (double *)&DAT_363840e0;
      pdVar10 = (double *)&DAT_36387a28;
      iVar11 = local_520;
      do {
        iVar11 = iVar11 + -1;
        *pdVar10 = _DAT_36386210 * *pdVar10;
        pdVar15[-1] = _DAT_36386210 * pdVar15[-1];
        *pdVar15 = _DAT_36386210 * *pdVar15;
        pdVar15[1] = _DAT_36386210 * pdVar15[1];
        pdVar15 = pdVar15 + 3;
        pdVar10 = pdVar10 + 1;
      } while (iVar11 != 0);
    }
    if ((local_520 != 2) || (*(char *)((int)param_1 + 0x1a4) != '\0')) {
      local_550 = 0;
      bVar4 = false;
      FUN_36204c20(iVar14,0x36386090,(double *)&DAT_36385f68);
      FUN_36205140(local_520,0x36387b40,(double *)&DAT_36385f68,local_408,0);
      piVar8 = local_488;
      local_524 = &local_518;
      local_54c = 0;
      local_51c = &DAT_36387b00;
      local_50c = &DAT_36387e70;
      local_530 = piVar8;
LAB_362046f6:
      local_53c = 0x10;
LAB_362046fe:
      *(int *)local_524 = *(int *)(param_1 + 0x34) + -1;
      if (local_53c + -1 + local_54c == 0x10) {
        FUN_36205030(local_520,0x36387b40,(double *)&DAT_36385f68);
      }
      else {
        fVar19 = FUN_36205330((int *)local_524,local_520,0x363840d8,0x36387a28,
                              local_408 + local_550 * 0x10,(int)local_50c,0x36385f68);
        local_548 = local_54c;
        *local_51c = (double)fVar19;
      }
      local_550 = local_550 + 1 & 0x8000000f;
      if ((int)local_550 < 0) {
        local_550 = (local_550 - 1 | 0xfffffff0) + 1;
      }
      bVar4 = (bool)(bVar4 | local_550 == 0);
      local_538 = 0;
      piVar12 = local_408 + local_550 * 0x10;
      do {
        FUN_36205140(local_520,0x36387b40,(double *)&DAT_36385f68,piVar12,local_538);
        iVar11 = local_550 - 1;
        if (iVar11 < 0) {
          if (piVar8 == (int *)0x0) goto LAB_3620480c;
        }
        else {
          local_558 = local_408 + iVar11 * 0x10;
          do {
            bVar5 = FUN_362052c0(local_520,local_558,piVar12);
            piVar8 = (int *)CONCAT31(extraout_var,bVar5);
            if (piVar8 != (int *)0x0) goto LAB_36204856;
            iVar11 = iVar11 + -1;
            local_558 = local_558 + -0x10;
          } while (-1 < iVar11);
LAB_3620480c:
          if ((!bVar4) || (local_558 = (int *)(local_550 + 1), 0xf < (int)local_558))
          goto LAB_36204870;
          piVar16 = local_408 + (int)local_558 * 0x10;
          while( true ) {
            bVar5 = FUN_362052c0(local_520,piVar16,piVar12);
            piVar8 = (int *)CONCAT31(extraout_var_00,bVar5);
            if (piVar8 != (int *)0x0) break;
            piVar16 = piVar16 + 0x10;
            local_558 = (int *)((int)local_558 + 1);
            if (0xf < (int)local_558) goto LAB_36204870;
          }
        }
LAB_36204856:
        if ((local_53c == 0) || (local_538 = local_538 + 1, 1 < local_538)) goto LAB_36204870;
      } while( true );
    }
    *(int *)(param_1 + 0x35) = 2;
    FUN_362069d0((int *)(param_1 + 0x35),*(int *)(param_1 + 0x34),2,(double *)&DAT_36387b40,
                 (double *)&DAT_36387a28,(double *)&DAT_36383f30,(double *)&DAT_36387b40,
                 (uint *)((int)param_1 + 0x1ac),local_508,local_544);
    if (0 < iVar14) {
      piVar8 = local_4c8;
      piVar12 = (int *)((int)param_1 + 0x1c4);
      do {
        iVar11 = *piVar8;
        piVar8 = piVar8 + 1;
        iVar14 = iVar14 + -1;
        *piVar12 = local_4c8[iVar11 + -0x10];
        piVar12 = piVar12 + 1;
      } while (iVar14 != 0);
      return;
    }
  }
  return;
LAB_36204870:
  if ((local_53c == 0) || (local_53c = local_53c + -1, piVar8 != (int *)0x0)) goto LAB_36204887;
  goto LAB_362046fe;
LAB_36204887:
  if (0 < local_520) {
    piVar12 = local_408 + local_550 * 0x10;
    piVar16 = local_530;
    for (iVar11 = local_520; iVar11 != 0; iVar11 = iVar11 + -1) {
      *piVar16 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    }
  }
  local_54c = local_54c + 1;
  local_50c = local_50c + 6;
  local_524 = (double *)((int)local_524 + 4);
  local_51c = local_51c + 1;
  local_530 = local_530 + 0x10;
  if (0x36387ecf < (int)local_50c) {
    if ((local_548 == 1) && (local_548 = 0, DAT_36387b08 <= DAT_36387b00)) {
      local_548 = 1;
    }
    bVar4 = false;
    local_54c = 0;
    do {
      iVar11 = 0;
      pdVar15 = (double *)&DAT_36387df0;
      do {
        if (((bVar4) ||
            (iVar18 = iVar11 + (local_54c + local_548 * 2) * 3,
            (double)(&DAT_36387e70)[iVar18] < pdVar15[-3])) ||
           (*pdVar15 < (double)(&DAT_36387e70)[iVar18])) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        pdVar15 = pdVar15 + 1;
        iVar11 = iVar11 + 1;
      } while ((int)pdVar15 < 0x36387e08);
      local_54c = local_54c + 1;
    } while (local_54c < 2);
    if (bVar4) {
      if (0 < local_520) {
        piVar12 = local_488 + local_548 * 0x10;
        piVar16 = local_408;
        for (iVar11 = local_520; iVar11 != 0; iVar11 = iVar11 + -1) {
          *piVar16 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar16 = piVar16 + 1;
        }
      }
      uVar13 = 0;
      local_53c = 8;
      bVar4 = false;
      piVar12 = (int *)((int)&local_518 + local_548 * 4);
      do {
        *piVar12 = *(int *)(param_1 + 0x34) + -1;
        fVar19 = FUN_36205a20(piVar12,local_520,0x363840d8,0x36387a28,local_408 + uVar13 * 0x10,
                              0x36387dd8,(int)(&DAT_36387e70 + local_548 * 6),0x36385f68);
        (&DAT_36387b00)[local_548] = (double)fVar19;
        uVar13 = uVar13 + 1 & 0x8000000f;
        if ((int)uVar13 < 0) {
          uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
        }
        bVar4 = (bool)(bVar4 | uVar13 == 0);
        local_538 = 0;
        piVar16 = local_408 + uVar13 * 0x10;
        do {
          FUN_36205140(local_520,0x36387b40,(double *)&DAT_36385f68,piVar16,local_538);
          iVar11 = uVar13 - 1;
          if (iVar11 < 0) {
            if (piVar8 == (int *)0x0) goto LAB_36204ac1;
          }
          else {
            local_530 = local_408 + iVar11 * 0x10;
            do {
              bVar5 = FUN_362052c0(local_520,local_530,piVar16);
              piVar8 = (int *)CONCAT31(extraout_var_01,bVar5);
              if (piVar8 != (int *)0x0) goto LAB_36204b0b;
              iVar11 = iVar11 + -1;
              local_530 = local_530 + -0x10;
            } while (-1 < iVar11);
LAB_36204ac1:
            if ((!bVar4) || (local_558 = (int *)(uVar13 + 1), 0xf < (int)local_558)) break;
            piVar17 = local_408 + (int)local_558 * 0x10;
            while( true ) {
              bVar5 = FUN_362052c0(local_520,piVar17,piVar16);
              piVar8 = (int *)CONCAT31(extraout_var_02,bVar5);
              if (piVar8 != (int *)0x0) break;
              piVar17 = piVar17 + 0x10;
              local_558 = (int *)((int)local_558 + 1);
              if (0xf < (int)local_558) goto LAB_36204b1d;
            }
          }
LAB_36204b0b:
          local_538 = local_538 + 1;
        } while (local_538 < 2);
LAB_36204b1d:
      } while ((local_53c != 0) && (local_53c = local_53c + -1, piVar8 == (int *)0x0));
    }
    iVar11 = 0;
    pdVar15 = (double *)(&DAT_36387e70 + local_548 * 6);
    do {
      pdVar9 = (double *)&DAT_36387d60;
      pdVar10 = (double *)((int)&DAT_36387ea0 + iVar11 + local_548 * -0x30);
      do {
        dVar1 = *pdVar15;
        dVar2 = *pdVar9;
        pdVar9 = pdVar9 + 1;
        pdVar15 = pdVar15 + 1;
        *pdVar10 = dVar1 + dVar2;
        pdVar10 = pdVar10 + 1;
      } while ((int)pdVar9 < 0x36387d78);
      iVar11 = iVar11 + 0x18;
    } while (iVar11 < 0x30);
    pdVar15 = param_1 + 0x35;
    *(int *)pdVar15 = *(int *)((int)&local_518 + local_548 * 4) + 1;
    if (*(char *)((int)param_1 + 0x1a4) != '\0') {
      *(int *)pdVar15 = 4;
    }
    FUN_362069d0((int *)pdVar15,*(int *)(param_1 + 0x34),local_520,(double *)&DAT_36387b40,
                 (double *)&DAT_36387a28,(double *)&DAT_36383f30,
                 (double *)(&DAT_36387ea0 + local_548 * -6),(uint *)((int)param_1 + 0x1ac),local_508
                 ,local_544);
    if ((*(char *)((int)param_1 + 0x1a4) != '\0') && (*(int *)pdVar15 != 4)) {
      *(int *)pdVar15 = 4;
    }
    if (iVar14 < 1) {
      return;
    }
    piVar8 = local_4c8;
    piVar12 = (int *)((int)param_1 + 0x1c4);
    do {
      iVar11 = *piVar8;
      piVar8 = piVar8 + 1;
      iVar14 = iVar14 + -1;
      *piVar12 = local_4c8[iVar11 + -0x10];
      piVar12 = piVar12 + 1;
    } while (iVar14 != 0);
    return;
  }
  goto LAB_362046f6;
}

