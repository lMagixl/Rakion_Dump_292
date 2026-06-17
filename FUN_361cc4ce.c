
undefined4 __fastcall FUN_361cc4ce(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iStack_40;
  char local_30 [16];
  uint local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_c = param_1;
  local_8 = 0;
  local_10 = (char *)0x0;
  local_18 = (char *)0x0;
  local_14 = (char *)0x0;
  local_1c = (char *)0x0;
  pcVar1 = (char *)(param_1 + 200);
  for (pcVar2 = pcVar1; (*pcVar2 != '\0' && (*pcVar2 != '_')); pcVar2 = pcVar2 + 1) {
  }
  if (*pcVar2 != '\0') {
    local_18 = pcVar2 + 1;
    local_10 = local_18;
    for (; (*local_18 != '\0' && (*local_18 != '_')); local_18 = local_18 + 1) {
    }
    if (*local_18 != '\0') {
      local_1c = local_18 + 1;
      local_14 = local_1c;
      for (; *local_1c != '\0'; local_1c = local_1c + 1) {
      }
    }
  }
  uVar7 = (int)pcVar2 - (int)pcVar1;
  if (0xf < uVar7) {
    return 0x109;
  }
  pcVar2 = local_30;
  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
    pcVar1 = pcVar1 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    pcVar2 = pcVar2 + 1;
  }
  local_30[uVar7] = '\0';
  iStack_40 = 4;
  bVar8 = true;
  iVar5 = iStack_40;
  pcVar2 = local_30;
  pcVar1 = &DAT_362496a8;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pcVar2 == *pcVar1;
    pcVar2 = pcVar2 + 1;
    pcVar1 = pcVar1 + 1;
  } while (bVar8);
  if (bVar8) {
    iStack_40 = 0;
LAB_361cc8c3:
    uVar3 = 0x104;
  }
  else {
    bVar8 = true;
    iVar5 = iStack_40;
    pcVar2 = local_30;
    pcVar1 = &DAT_362496a4;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar2 == *pcVar1;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (bVar8);
    if (bVar8) {
      iStack_40 = 1;
      goto LAB_361ccab5;
    }
    bVar8 = true;
    iVar5 = iStack_40;
    pcVar2 = local_30;
    pcVar1 = &DAT_362496a0;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar2 == *pcVar1;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (bVar8);
    if (bVar8) {
      iStack_40 = 2;
      iVar5 = iStack_40;
    }
    else {
      bVar8 = true;
      iVar5 = iStack_40;
      pcVar2 = local_30;
      pcVar1 = &DAT_3624969c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar2 == *pcVar1;
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
      } while (bVar8);
      iVar5 = 3;
      if (!bVar8) {
        bVar8 = true;
        iVar5 = iStack_40;
        pcVar2 = local_30;
        pcVar1 = &DAT_36249698;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *pcVar2 == *pcVar1;
          pcVar2 = pcVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (bVar8);
        if (bVar8) goto LAB_361cc667;
        bVar8 = true;
        iVar5 = iStack_40;
        pcVar2 = local_30;
        pcVar1 = &DAT_36249694;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *pcVar2 == *pcVar1;
          pcVar2 = pcVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (bVar8);
        if (bVar8) {
          iStack_40 = 5;
          iVar5 = iStack_40;
        }
        else {
          bVar8 = true;
          iVar5 = iStack_40;
          pcVar2 = local_30;
          pcVar1 = &DAT_36249690;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar8 = *pcVar2 == *pcVar1;
            pcVar2 = pcVar2 + 1;
            pcVar1 = pcVar1 + 1;
          } while (bVar8);
          if (bVar8) {
            iStack_40 = 8;
            iVar5 = iStack_40;
          }
          else {
            bVar8 = true;
            iVar5 = iStack_40;
            pcVar2 = local_30;
            pcVar1 = &DAT_3624968c;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar8 = *pcVar2 == *pcVar1;
              pcVar2 = pcVar2 + 1;
              pcVar1 = pcVar1 + 1;
            } while (bVar8);
            if (!bVar8) {
              bVar8 = true;
              iVar5 = iStack_40;
              pcVar2 = local_30;
              pcVar1 = &DAT_36249688;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar8 = *pcVar2 == *pcVar1;
                pcVar2 = pcVar2 + 1;
                pcVar1 = pcVar1 + 1;
              } while (bVar8);
              if (bVar8) {
                iStack_40 = 0x13;
              }
              else {
                if (*(int *)(local_c + 0xac) != 0) {
                  bVar8 = true;
                  iVar5 = iStack_40;
                  pcVar2 = local_30;
                  pcVar1 = &DAT_36249684;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar8 = *pcVar2 == *pcVar1;
                    pcVar2 = pcVar2 + 1;
                    pcVar1 = pcVar1 + 1;
                  } while (bVar8);
                  if (bVar8) {
                    iStack_40 = 0x12;
                  }
                  else {
                    bVar8 = true;
                    iVar5 = iStack_40;
                    pcVar2 = local_30;
                    pcVar1 = &DAT_36249680;
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar8 = *pcVar2 == *pcVar1;
                      pcVar2 = pcVar2 + 1;
                      pcVar1 = pcVar1 + 1;
                    } while (bVar8);
                    if (bVar8) {
                      iStack_40 = 0x50;
                    }
                    else {
                      bVar8 = true;
                      iVar5 = iStack_40;
                      pcVar2 = local_30;
                      pcVar1 = &DAT_36249678;
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar8 = *pcVar2 == *pcVar1;
                        pcVar2 = pcVar2 + 1;
                        pcVar1 = pcVar1 + 1;
                      } while (bVar8);
                      if (!bVar8) {
                        if (*(uint *)(local_c + 0xb4) < 0xffff0104) {
                          iVar5 = 9;
                          bVar8 = true;
                          pcVar2 = local_30;
                          pcVar1 = s_texcoord_3624966c;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar8 = *pcVar2 == *pcVar1;
                            pcVar2 = pcVar2 + 1;
                            pcVar1 = pcVar1 + 1;
                          } while (bVar8);
                          if (bVar8) {
                            iStack_40 = 0x40;
                          }
                          else {
                            iVar5 = 8;
                            bVar8 = true;
                            pcVar2 = local_30;
                            pcVar1 = &DAT_36249664;
                            do {
                              if (iVar5 == 0) break;
                              iVar5 = iVar5 + -1;
                              bVar8 = *pcVar2 == *pcVar1;
                              pcVar2 = pcVar2 + 1;
                              pcVar1 = pcVar1 + 1;
                            } while (bVar8);
                            if (bVar8) {
LAB_361cc726:
                              iStack_40 = 0x41;
                            }
                            else {
                              bVar8 = true;
                              iVar5 = iStack_40;
                              pcVar2 = local_30;
                              pcVar1 = &DAT_36249660;
                              do {
                                if (iVar5 == 0) break;
                                iVar5 = iVar5 + -1;
                                bVar8 = *pcVar2 == *pcVar1;
                                pcVar2 = pcVar2 + 1;
                                pcVar1 = pcVar1 + 1;
                              } while (bVar8);
                              if (!bVar8) {
                                iVar5 = 7;
                                bVar8 = true;
                                pcVar2 = local_30;
                                pcVar1 = &DAT_36249658;
                                do {
                                  if (iVar5 == 0) break;
                                  iVar5 = iVar5 + -1;
                                  bVar8 = *pcVar2 == *pcVar1;
                                  pcVar2 = pcVar2 + 1;
                                  pcVar1 = pcVar1 + 1;
                                } while (bVar8);
                                if (bVar8) {
                                  iStack_40 = 0x43;
                                }
                                else {
                                  iVar5 = 8;
                                  bVar8 = true;
                                  pcVar2 = local_30;
                                  pcVar1 = &DAT_36249650;
                                  do {
                                    if (iVar5 == 0) break;
                                    iVar5 = iVar5 + -1;
                                    bVar8 = *pcVar2 == *pcVar1;
                                    pcVar2 = pcVar2 + 1;
                                    pcVar1 = pcVar1 + 1;
                                  } while (bVar8);
                                  if (bVar8) {
                                    iStack_40 = 0x44;
                                  }
                                  else {
                                    iVar5 = 10;
                                    bVar8 = true;
                                    pcVar2 = local_30;
                                    pcVar1 = &DAT_36249644;
                                    do {
                                      if (iVar5 == 0) break;
                                      iVar5 = iVar5 + -1;
                                      bVar8 = *pcVar2 == *pcVar1;
                                      pcVar2 = pcVar2 + 1;
                                      pcVar1 = pcVar1 + 1;
                                    } while (bVar8);
                                    if (bVar8) {
                                      iStack_40 = 0x45;
                                    }
                                    else {
                                      iVar5 = 10;
                                      bVar8 = true;
                                      pcVar2 = local_30;
                                      pcVar1 = &DAT_36249638;
                                      do {
                                        if (iVar5 == 0) break;
                                        iVar5 = iVar5 + -1;
                                        bVar8 = *pcVar2 == *pcVar1;
                                        pcVar2 = pcVar2 + 1;
                                        pcVar1 = pcVar1 + 1;
                                      } while (bVar8);
                                      if (bVar8) {
                                        iStack_40 = 0x46;
                                      }
                                      else {
                                        iVar5 = 0xb;
                                        bVar8 = true;
                                        pcVar2 = local_30;
                                        pcVar1 = &DAT_3624962c;
                                        do {
                                          if (iVar5 == 0) break;
                                          iVar5 = iVar5 + -1;
                                          bVar8 = *pcVar2 == *pcVar1;
                                          pcVar2 = pcVar2 + 1;
                                          pcVar1 = pcVar1 + 1;
                                        } while (bVar8);
                                        if (bVar8) {
                                          iStack_40 = 0x47;
                                        }
                                        else {
                                          iVar5 = 0xb;
                                          bVar8 = true;
                                          pcVar2 = local_30;
                                          pcVar1 = &DAT_36249620;
                                          do {
                                            if (iVar5 == 0) break;
                                            iVar5 = iVar5 + -1;
                                            bVar8 = *pcVar2 == *pcVar1;
                                            pcVar2 = pcVar2 + 1;
                                            pcVar1 = pcVar1 + 1;
                                          } while (bVar8);
                                          if (bVar8) {
                                            iStack_40 = 0x48;
                                          }
                                          else {
                                            iVar5 = 0xb;
                                            bVar8 = true;
                                            pcVar2 = local_30;
                                            pcVar1 = &DAT_36249614;
                                            do {
                                              if (iVar5 == 0) break;
                                              iVar5 = iVar5 + -1;
                                              bVar8 = *pcVar2 == *pcVar1;
                                              pcVar2 = pcVar2 + 1;
                                              pcVar1 = pcVar1 + 1;
                                            } while (bVar8);
                                            if (bVar8) {
                                              iStack_40 = 0x49;
                                            }
                                            else {
                                              iVar5 = 0xb;
                                              bVar8 = true;
                                              pcVar2 = local_30;
                                              pcVar1 = &DAT_36249608;
                                              do {
                                                if (iVar5 == 0) break;
                                                iVar5 = iVar5 + -1;
                                                bVar8 = *pcVar2 == *pcVar1;
                                                pcVar2 = pcVar2 + 1;
                                                pcVar1 = pcVar1 + 1;
                                              } while (bVar8);
                                              if (bVar8) {
                                                iStack_40 = 0x4a;
                                              }
                                              else {
                                                iVar5 = 0xc;
                                                bVar8 = true;
                                                pcVar2 = local_30;
                                                pcVar1 = &DAT_362495fc;
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar8 = *pcVar2 == *pcVar1;
                                                  pcVar2 = pcVar2 + 1;
                                                  pcVar1 = pcVar1 + 1;
                                                } while (bVar8);
                                                if (bVar8) {
                                                  iStack_40 = 0x4c;
                                                  iVar5 = iStack_40;
                                                  goto LAB_361cca98;
                                                }
                                                iVar5 = 0xd;
                                                bVar8 = true;
                                                pcVar2 = local_30;
                                                pcVar1 = &DAT_362495ec;
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar8 = *pcVar2 == *pcVar1;
                                                  pcVar2 = pcVar2 + 1;
                                                  pcVar1 = pcVar1 + 1;
                                                } while (bVar8);
                                                if (bVar8) {
                                                  iStack_40 = 0x4d;
                                                }
                                                else {
                                                  iVar5 = 0xd;
                                                  bVar8 = true;
                                                  pcVar2 = local_30;
                                                  pcVar1 = s_texm3x2depth_362495dc;
                                                  do {
                                                    if (iVar5 == 0) break;
                                                    iVar5 = iVar5 + -1;
                                                    bVar8 = *pcVar2 == *pcVar1;
                                                    pcVar2 = pcVar2 + 1;
                                                    pcVar1 = pcVar1 + 1;
                                                  } while (bVar8);
                                                  if (bVar8) {
                                                    iStack_40 = 0x54;
                                                  }
                                                  else {
                                                    iVar5 = 7;
                                                    bVar8 = true;
                                                    pcVar2 = local_30;
                                                    pcVar1 = &DAT_362495d4;
                                                    do {
                                                      if (iVar5 == 0) break;
                                                      iVar5 = iVar5 + -1;
                                                      bVar8 = *pcVar2 == *pcVar1;
                                                      pcVar2 = pcVar2 + 1;
                                                      pcVar1 = pcVar1 + 1;
                                                    } while (bVar8);
                                                    if (bVar8) {
                                                      iStack_40 = 0x55;
                                                    }
                                                    else {
                                                      iVar5 = 0xb;
                                                      bVar8 = true;
                                                      pcVar2 = local_30;
                                                      pcVar1 = &DAT_362495c8;
                                                      do {
                                                        if (iVar5 == 0) break;
                                                        iVar5 = iVar5 + -1;
                                                        bVar8 = *pcVar2 == *pcVar1;
                                                        pcVar2 = pcVar2 + 1;
                                                        pcVar1 = pcVar1 + 1;
                                                      } while (bVar8);
                                                      if (bVar8) {
                                                        iStack_40 = 0x52;
                                                      }
                                                      else {
                                                        iVar5 = 8;
                                                        bVar8 = true;
                                                        pcVar2 = local_30;
                                                        pcVar1 = &DAT_362495c0;
                                                        do {
                                                          if (iVar5 == 0) break;
                                                          iVar5 = iVar5 + -1;
                                                          bVar8 = *pcVar2 == *pcVar1;
                                                          pcVar2 = pcVar2 + 1;
                                                          pcVar1 = pcVar1 + 1;
                                                        } while (bVar8);
                                                        if (bVar8) {
                                                          iStack_40 = 0x56;
                                                        }
                                                        else {
                                                          iVar5 = 10;
                                                          bVar8 = true;
                                                          pcVar2 = local_30;
                                                          pcVar1 = &DAT_362495b4;
                                                          do {
                                                            if (iVar5 == 0) break;
                                                            iVar5 = iVar5 + -1;
                                                            bVar8 = *pcVar2 == *pcVar1;
                                                            pcVar2 = pcVar2 + 1;
                                                            pcVar1 = pcVar1 + 1;
                                                          } while (bVar8);
                                                          if (!bVar8) goto LAB_361cc947;
                                                          iStack_40 = 0x53;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_361ccab5;
                              }
                              iStack_40 = 0x42;
                            }
                          }
LAB_361cc90d:
                          uVar3 = 0x105;
                          goto LAB_361cc66c;
                        }
                        iVar5 = 6;
                        bVar8 = true;
                        pcVar2 = local_30;
                        pcVar1 = s_phase_362495ac;
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar8 = *pcVar2 == *pcVar1;
                          pcVar2 = pcVar2 + 1;
                          pcVar1 = pcVar1 + 1;
                        } while (bVar8);
                        if (bVar8) {
                          iStack_40 = 0xfffd;
                          goto LAB_361cc8c3;
                        }
                        iVar5 = 7;
                        bVar8 = true;
                        pcVar2 = local_30;
                        pcVar1 = &DAT_362495a4;
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar8 = *pcVar2 == *pcVar1;
                          pcVar2 = pcVar2 + 1;
                          pcVar1 = pcVar1 + 1;
                        } while (bVar8);
                        if (bVar8) {
                          iStack_40 = 0x40;
                        }
                        else {
                          iVar5 = 8;
                          bVar8 = true;
                          pcVar2 = local_30;
                          pcVar1 = &DAT_36249664;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar8 = *pcVar2 == *pcVar1;
                            pcVar2 = pcVar2 + 1;
                            pcVar1 = pcVar1 + 1;
                          } while (bVar8);
                          if (bVar8) goto LAB_361cc726;
                          iVar5 = 9;
                          bVar8 = true;
                          pcVar2 = local_30;
                          pcVar1 = s_texdepth_36249598;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar8 = *pcVar2 == *pcVar1;
                            pcVar2 = pcVar2 + 1;
                            pcVar1 = pcVar1 + 1;
                          } while (bVar8);
                          if (bVar8) {
                            iStack_40 = 0x57;
                            goto LAB_361cc90d;
                          }
                          iVar5 = 6;
                          bVar8 = true;
                          pcVar2 = local_30;
                          pcVar1 = &DAT_36249590;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar8 = *pcVar2 == *pcVar1;
                            pcVar2 = pcVar2 + 1;
                            pcVar1 = pcVar1 + 1;
                          } while (bVar8);
                          if (!bVar8) {
                            bVar8 = true;
                            iVar5 = iStack_40;
                            pcVar2 = local_30;
                            pcVar1 = &DAT_3624958c;
                            do {
                              if (iVar5 == 0) break;
                              iVar5 = iVar5 + -1;
                              bVar8 = *pcVar2 == *pcVar1;
                              pcVar2 = pcVar2 + 1;
                              pcVar1 = pcVar1 + 1;
                            } while (bVar8);
                            if (bVar8) {
                              iStack_40 = 0x59;
                              iVar5 = iStack_40;
                              goto LAB_361cca98;
                            }
LAB_361cc947:
                            if (*(int *)(local_c + 0xac) != 0) {
                              return 0x109;
                            }
                            goto LAB_361cc94f;
                          }
                          iStack_40 = 0x42;
                        }
                        goto LAB_361ccab5;
                      }
                      iStack_40 = 0x58;
                    }
                  }
LAB_361cc667:
                  uVar3 = 0x108;
                  goto LAB_361cc66c;
                }
LAB_361cc94f:
                bVar8 = true;
                iVar5 = iStack_40;
                pcVar2 = local_30;
                pcVar1 = &DAT_36249588;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar8 = *pcVar2 == *pcVar1;
                  pcVar2 = pcVar2 + 1;
                  pcVar1 = pcVar1 + 1;
                } while (bVar8);
                if (bVar8) {
                  iStack_40 = 6;
                }
                else {
                  bVar8 = true;
                  iVar5 = iStack_40;
                  pcVar2 = local_30;
                  pcVar1 = &DAT_36249584;
                  do {
                    if (iVar5 == 0) break;
                    iVar5 = iVar5 + -1;
                    bVar8 = *pcVar2 == *pcVar1;
                    pcVar2 = pcVar2 + 1;
                    pcVar1 = pcVar1 + 1;
                  } while (bVar8);
                  if (!bVar8) {
                    bVar8 = true;
                    iVar5 = iStack_40;
                    pcVar2 = local_30;
                    pcVar1 = &DAT_36249580;
                    do {
                      if (iVar5 == 0) break;
                      iVar5 = iVar5 + -1;
                      bVar8 = *pcVar2 == *pcVar1;
                      pcVar2 = pcVar2 + 1;
                      pcVar1 = pcVar1 + 1;
                    } while (bVar8);
                    if (bVar8) {
                      iStack_40 = 10;
                      iVar5 = iStack_40;
                    }
                    else {
                      bVar8 = true;
                      iVar5 = iStack_40;
                      pcVar2 = local_30;
                      pcVar1 = &DAT_3624957c;
                      do {
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        bVar8 = *pcVar2 == *pcVar1;
                        pcVar2 = pcVar2 + 1;
                        pcVar1 = pcVar1 + 1;
                      } while (bVar8);
                      if (bVar8) {
                        iStack_40 = 0xb;
                        iVar5 = iStack_40;
                      }
                      else {
                        bVar8 = true;
                        iVar5 = iStack_40;
                        pcVar2 = local_30;
                        pcVar1 = &DAT_36249578;
                        do {
                          if (iVar5 == 0) break;
                          iVar5 = iVar5 + -1;
                          bVar8 = *pcVar2 == *pcVar1;
                          pcVar2 = pcVar2 + 1;
                          pcVar1 = pcVar1 + 1;
                        } while (bVar8);
                        if (bVar8) {
                          iStack_40 = 0xc;
                          iVar5 = iStack_40;
                        }
                        else {
                          bVar8 = true;
                          iVar5 = iStack_40;
                          pcVar2 = local_30;
                          pcVar1 = &DAT_36249574;
                          do {
                            if (iVar5 == 0) break;
                            iVar5 = iVar5 + -1;
                            bVar8 = *pcVar2 == *pcVar1;
                            pcVar2 = pcVar2 + 1;
                            pcVar1 = pcVar1 + 1;
                          } while (bVar8);
                          if (!bVar8) {
                            bVar8 = true;
                            iVar5 = iStack_40;
                            pcVar2 = local_30;
                            pcVar1 = &DAT_36249570;
                            do {
                              if (iVar5 == 0) break;
                              iVar5 = iVar5 + -1;
                              bVar8 = *pcVar2 == *pcVar1;
                              pcVar2 = pcVar2 + 1;
                              pcVar1 = pcVar1 + 1;
                            } while (bVar8);
                            if (bVar8) {
                              iStack_40 = 0xe;
                            }
                            else {
                              bVar8 = true;
                              iVar5 = iStack_40;
                              pcVar2 = local_30;
                              pcVar1 = &DAT_3624956c;
                              do {
                                if (iVar5 == 0) break;
                                iVar5 = iVar5 + -1;
                                bVar8 = *pcVar2 == *pcVar1;
                                pcVar2 = pcVar2 + 1;
                                pcVar1 = pcVar1 + 1;
                              } while (bVar8);
                              if (bVar8) {
                                iStack_40 = 0xf;
                              }
                              else {
                                bVar8 = true;
                                iVar5 = iStack_40;
                                pcVar2 = local_30;
                                pcVar1 = &DAT_36249568;
                                do {
                                  if (iVar5 == 0) break;
                                  iVar5 = iVar5 + -1;
                                  bVar8 = *pcVar2 == *pcVar1;
                                  pcVar2 = pcVar2 + 1;
                                  pcVar1 = pcVar1 + 1;
                                } while (bVar8);
                                if (!bVar8) {
                                  bVar8 = true;
                                  pcVar2 = local_30;
                                  pcVar1 = &DAT_36249564;
                                  do {
                                    if (iStack_40 == 0) break;
                                    iStack_40 = iStack_40 + -1;
                                    bVar8 = *pcVar2 == *pcVar1;
                                    pcVar2 = pcVar2 + 1;
                                    pcVar1 = pcVar1 + 1;
                                  } while (bVar8);
                                  if (bVar8) {
                                    iStack_40 = 0x11;
                                    iVar5 = iStack_40;
                                  }
                                  else {
                                    iVar5 = 5;
                                    bVar8 = true;
                                    iVar6 = iVar5;
                                    pcVar2 = local_30;
                                    pcVar1 = &DAT_3624955c;
                                    do {
                                      if (iVar6 == 0) break;
                                      iVar6 = iVar6 + -1;
                                      bVar8 = *pcVar2 == *pcVar1;
                                      pcVar2 = pcVar2 + 1;
                                      pcVar1 = pcVar1 + 1;
                                    } while (bVar8);
                                    if (bVar8) {
                                      iStack_40 = 0x14;
                                      iVar5 = iStack_40;
                                    }
                                    else {
                                      bVar8 = true;
                                      iVar6 = iVar5;
                                      pcVar2 = local_30;
                                      pcVar1 = &DAT_36249554;
                                      do {
                                        if (iVar6 == 0) break;
                                        iVar6 = iVar6 + -1;
                                        bVar8 = *pcVar2 == *pcVar1;
                                        pcVar2 = pcVar2 + 1;
                                        pcVar1 = pcVar1 + 1;
                                      } while (bVar8);
                                      if (bVar8) {
                                        iStack_40 = 0x15;
                                        iVar5 = iStack_40;
                                      }
                                      else {
                                        bVar8 = true;
                                        iVar6 = iVar5;
                                        pcVar2 = local_30;
                                        pcVar1 = &DAT_3624954c;
                                        do {
                                          if (iVar6 == 0) break;
                                          iVar6 = iVar6 + -1;
                                          bVar8 = *pcVar2 == *pcVar1;
                                          pcVar2 = pcVar2 + 1;
                                          pcVar1 = pcVar1 + 1;
                                        } while (bVar8);
                                        if (bVar8) {
                                          iStack_40 = 0x16;
                                          iVar5 = iStack_40;
                                        }
                                        else {
                                          bVar8 = true;
                                          iVar6 = iVar5;
                                          pcVar2 = local_30;
                                          pcVar1 = &DAT_36249544;
                                          do {
                                            if (iVar6 == 0) break;
                                            iVar6 = iVar6 + -1;
                                            bVar8 = *pcVar2 == *pcVar1;
                                            pcVar2 = pcVar2 + 1;
                                            pcVar1 = pcVar1 + 1;
                                          } while (bVar8);
                                          if (bVar8) {
                                            iStack_40 = 0x17;
                                            iVar5 = iStack_40;
                                          }
                                          else {
                                            bVar8 = true;
                                            iVar6 = iVar5;
                                            pcVar2 = local_30;
                                            pcVar1 = &DAT_3624953c;
                                            do {
                                              if (iVar6 == 0) break;
                                              iVar6 = iVar6 + -1;
                                              bVar8 = *pcVar2 == *pcVar1;
                                              pcVar2 = pcVar2 + 1;
                                              pcVar1 = pcVar1 + 1;
                                            } while (bVar8);
                                            if (!bVar8) {
                                              bVar8 = true;
                                              iVar6 = iVar5;
                                              pcVar2 = local_30;
                                              pcVar1 = &DAT_36249534;
                                              do {
                                                if (iVar6 == 0) break;
                                                iVar6 = iVar6 + -1;
                                                bVar8 = *pcVar2 == *pcVar1;
                                                pcVar2 = pcVar2 + 1;
                                                pcVar1 = pcVar1 + 1;
                                              } while (bVar8);
                                              if (bVar8) {
                                                iStack_40 = 0x4e;
                                              }
                                              else {
                                                bVar8 = true;
                                                pcVar2 = local_30;
                                                pcVar1 = &DAT_3624952c;
                                                do {
                                                  if (iVar5 == 0) break;
                                                  iVar5 = iVar5 + -1;
                                                  bVar8 = *pcVar2 == *pcVar1;
                                                  pcVar2 = pcVar2 + 1;
                                                  pcVar1 = pcVar1 + 1;
                                                } while (bVar8);
                                                if (!bVar8) {
                                                  return 0x109;
                                                }
                                                iStack_40 = 0x4f;
                                              }
                                              goto LAB_361ccab5;
                                            }
                                            iStack_40 = 0x18;
                                            iVar5 = iStack_40;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_361cca98;
                                }
                                iStack_40 = 0x10;
                              }
                            }
                            goto LAB_361ccab5;
                          }
                          iStack_40 = 0xd;
                          iVar5 = iStack_40;
                        }
                      }
                    }
                    goto LAB_361cca98;
                  }
                  iStack_40 = 7;
                }
              }
LAB_361ccab5:
              uVar3 = 0x106;
              goto LAB_361cc66c;
            }
            iStack_40 = 9;
            iVar5 = iStack_40;
          }
        }
      }
    }
LAB_361cca98:
    iStack_40 = iVar5;
    uVar3 = 0x107;
  }
LAB_361cc66c:
  if (local_10 != (char *)0x0) {
    if (*(int *)(local_c + 0xac) == 0) {
      return 0x109;
    }
    uVar7 = (int)local_18 - (int)local_10;
    local_20 = uVar7;
    if (0xf < uVar7) {
      return 0x109;
    }
    pcVar2 = local_10;
    pcVar1 = local_30;
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar1 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar1 = pcVar1 + 4;
    }
    for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
    }
    local_30[uVar7] = '\0';
    iVar5 = 3;
    bVar8 = true;
    pcVar2 = local_30;
    pcVar1 = &DAT_3624967c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar2 == *pcVar1;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (bVar8);
    if (bVar8) {
      local_8 = 0x3000000;
    }
    else {
      iVar5 = 3;
      bVar8 = true;
      pcVar2 = local_30;
      pcVar1 = &DAT_36249528;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar2 == *pcVar1;
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
      } while (bVar8);
      if (bVar8) {
        local_8 = 0x2000000;
      }
      else {
        iVar5 = 3;
        bVar8 = true;
        pcVar2 = local_30;
        pcVar1 = &DAT_36249524;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar8 = *pcVar2 == *pcVar1;
          pcVar2 = pcVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (bVar8);
        if (bVar8) {
          local_8 = 0x1000000;
        }
        else {
          iVar5 = 3;
          bVar8 = true;
          pcVar2 = local_30;
          pcVar1 = &DAT_36249520;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar8 = *pcVar2 == *pcVar1;
            pcVar2 = pcVar2 + 1;
            pcVar1 = pcVar1 + 1;
          } while (bVar8);
          if (bVar8) {
            local_8 = 0xf000000;
          }
          else {
            iVar5 = 3;
            bVar8 = true;
            pcVar2 = local_30;
            pcVar1 = &DAT_3624951c;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar8 = *pcVar2 == *pcVar1;
              pcVar2 = pcVar2 + 1;
              pcVar1 = pcVar1 + 1;
            } while (bVar8);
            if (bVar8) {
              local_8 = 0xe000000;
            }
            else {
              iVar5 = 3;
              bVar8 = true;
              pcVar2 = local_30;
              pcVar1 = &DAT_36249518;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar8 = *pcVar2 == *pcVar1;
                pcVar2 = pcVar2 + 1;
                pcVar1 = pcVar1 + 1;
              } while (bVar8);
              if (bVar8) {
                local_8 = 0xd000000;
              }
              else {
                if (local_14 != (char *)0x0) {
                  return 0x109;
                }
                local_14 = local_10;
                local_1c = local_18;
              }
            }
          }
        }
      }
    }
  }
  if (local_14 == (char *)0x0) {
LAB_361ccbce:
    *(int *)(local_c + 0x1c8) = iStack_40;
    *(uint *)(local_c + 0x1cc) = local_8;
    return uVar3;
  }
  if (*(int *)(local_c + 0xac) != 0) {
    uVar7 = (int)local_1c - (int)local_14;
    local_20 = uVar7;
    if (uVar7 < 0x10) {
      pcVar2 = local_14;
      pcVar1 = local_30;
      for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar1 = *(undefined4 *)pcVar2;
        pcVar2 = pcVar2 + 4;
        pcVar1 = pcVar1 + 4;
      }
      for (uVar4 = uVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
      }
      local_30[uVar7] = '\0';
      iVar5 = 4;
      bVar8 = true;
      pcVar2 = local_30;
      pcVar1 = &DAT_36249514;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar2 == *pcVar1;
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
      } while (bVar8);
      if (bVar8) {
        local_8 = local_8 | 0x100000;
        goto LAB_361ccbce;
      }
    }
  }
  return 0x109;
}

