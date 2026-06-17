
/* WARNING (jumptable): Unable to track spacebase fully for stack */

int * FUN_361da5f0(void)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  int *piVar4;
  
  FUN_3620d000();
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  puVar1 = (undefined *)puVar3[1];
  piVar4 = (int *)0x0;
  if ((int)puVar1 < 0x31545845) {
    if (puVar1 == (undefined *)0x31545844) {
      pvVar2 = (void *)FUN_361bf99c(0x10c4);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x20;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da45a(pvVar2,puVar3);
    }
    else if ((int)puVar1 < 0x29) {
      if (puVar1 == (undefined *)0x28) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xd;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9c87(pvVar2,puVar3);
      }
      else {
        switch(puVar1) {
        case (undefined *)0x14:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (pvVar2 == (void *)0x0) {
LAB_361dace7:
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = FUN_361d90cb(pvVar2,puVar3);
          }
          break;
        case (undefined *)0x15:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d9200(pvVar2,puVar3);
          break;
        case (undefined *)0x16:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d923d(pvVar2,puVar3);
          break;
        case (undefined *)0x17:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d927a(pvVar2,puVar3);
          break;
        case (undefined *)0x18:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d94a3(pvVar2,puVar3);
          break;
        case (undefined *)0x19:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 5;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d94e0(pvVar2,puVar3);
          break;
        case (undefined *)0x1a:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 6;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d97ee(pvVar2,puVar3);
          break;
        case (undefined *)0x1b:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d982b(pvVar2,puVar3);
          break;
        case (undefined *)0x1c:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 8;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d9868(pvVar2,puVar3);
          break;
        case (undefined *)0x1d:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 9;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d98a5(pvVar2,puVar3);
          break;
        case (undefined *)0x1e:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 10;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d98e2(pvVar2,puVar3);
          break;
        case (undefined *)0x1f:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0xb;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d99ac(pvVar2,puVar3);
          break;
        default:
          goto switchD_361da632_caseD_20;
        case (undefined *)0x22:
          pvVar2 = (void *)FUN_361bf99c(0x106c);
          *(void **)(unaff_EBP + 8) = pvVar2;
          *(undefined4 *)(unaff_EBP + -4) = 0xc;
          if (pvVar2 == (void *)0x0) goto LAB_361dace7;
          piVar4 = FUN_361d9a58(pvVar2,puVar3);
        }
      }
    }
    else if ((int)puVar1 < 0x3f) {
      if (puVar1 == (undefined *)0x3e) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9f4f(pvVar2,puVar3);
      }
      else if (puVar1 == (undefined *)0x29) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xe;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9cc4(pvVar2,puVar3);
      }
      else if (puVar1 == (undefined *)0x32) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0xf;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9d01(pvVar2,puVar3);
      }
      else if (puVar1 == (undefined *)0x33) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x10;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9d3e(pvVar2,puVar3);
      }
      else if (puVar1 == (undefined *)0x34) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9d97(pvVar2,puVar3);
      }
      else if (puVar1 == (undefined *)0x3c) {
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x12;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9ed5(pvVar2,puVar3);
      }
      else {
        if (puVar1 != (undefined *)0x3d) goto switchD_361da632_caseD_20;
        pvVar2 = (void *)FUN_361bf99c(0x106c);
        *(void **)(unaff_EBP + 8) = pvVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0x13;
        if (pvVar2 == (void *)0x0) goto LAB_361dace7;
        piVar4 = FUN_361d9f12(pvVar2,puVar3);
      }
    }
    else if (puVar1 == (undefined *)0x3f) {
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x15;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361d9f8c(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x40) {
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x16;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361d9fc9(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x41) {
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x17;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da006(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x43) {
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x18;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da043(pvVar2,puVar3);
    }
    else {
      if (puVar1 != (undefined *)0x46) goto switchD_361da632_caseD_20;
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x19;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da080(pvVar2,puVar3);
    }
  }
  else if ((int)puVar1 < 0x36314c21) {
    if (puVar1 == &DAT_36314c20) {
      pvVar2 = (void *)FUN_361bf99c(0x106c);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da0bd(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x32545844) {
      pvVar2 = (void *)FUN_361bf99c(0x10c4);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x21;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da493(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x32595559) {
      puVar3 = (undefined4 *)FUN_361bf99c(0x109c);
      *(undefined4 **)(unaff_EBP + 8) = puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0x1f;
      if (puVar3 == (undefined4 *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da5d8(puVar3);
    }
    else if (puVar1 == (undefined *)0x33545844) {
      pvVar2 = (void *)FUN_361bf99c(0x10c4);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x22;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da4cc(pvVar2,puVar3);
    }
    else if (puVar1 == (undefined *)0x34545844) {
      pvVar2 = (void *)FUN_361bf99c(0x10c4);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x23;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da505(pvVar2,puVar3);
    }
    else {
      if (puVar1 != (undefined *)0x35545844) goto switchD_361da632_caseD_20;
      pvVar2 = (void *)FUN_361bf99c(0x10c4);
      *(void **)(unaff_EBP + 8) = pvVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0x24;
      if (pvVar2 == (void *)0x0) goto LAB_361dace7;
      piVar4 = FUN_361da53e(pvVar2,puVar3);
    }
  }
  else if (puVar1 == &DAT_36314c41) {
    pvVar2 = (void *)FUN_361bf99c(0x106c);
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1b;
    if (pvVar2 == (void *)0x0) goto LAB_361dace7;
    piVar4 = FUN_361da3a3(pvVar2,puVar3);
  }
  else if (puVar1 == &DAT_36315220) {
    pvVar2 = (void *)FUN_361bf99c(0x106c);
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    if (pvVar2 == (void *)0x0) goto LAB_361dace7;
    piVar4 = FUN_361da3e0(pvVar2,puVar3);
  }
  else if (puVar1 == &DAT_36315241) {
    pvVar2 = (void *)FUN_361bf99c(0x106c);
    *(void **)(unaff_EBP + 8) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    if (pvVar2 == (void *)0x0) goto LAB_361dace7;
    piVar4 = FUN_361da41d(pvVar2,puVar3);
  }
  else {
    if (puVar1 != (undefined *)0x59565955) goto switchD_361da632_caseD_20;
    puVar3 = (undefined4 *)FUN_361bf99c(0x109c);
    *(undefined4 **)(unaff_EBP + 8) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x1e;
    if (puVar3 == (undefined4 *)0x0) goto LAB_361dace7;
    piVar4 = FUN_361da5c0(puVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((piVar4 != (int *)0x0) && (piVar4[4] != 0)) {
    (**(code **)(*piVar4 + 0xc))();
  }
switchD_361da632_caseD_20:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar4;
}

