//
// This contains the detailed version of function 4239 (instead of the condensed version in the article), if you're interested.
// Some of the details were not relevant to secret airstrips, and so they were omitted to provide clarity to the overview.
//

#define wld_max_targets 0xd33c
#define wld_target_data 0xcbde
#define wld_5ba 0xd7f6
#define wld_73a 0xcad8
#define glob_settings 0xcaca
#define wld_010 0xcbe6
#define wld_x_coord 0xcbe0
#define wld_y_coord 0xcbe2
#define wld_016 0xcbec
#define wld_obj_table 0xd2a6
#define wld_reg_targets 0xe084

typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned long    undefined4;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};

typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};




void __cdecl16near FUN_1000_0010(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_1000_7312();
  if (**(int **)0xcbd8 != 0) {
    FUN_1000_0703();
  }
  FUN_1000_6d07();
  FUN_1000_0e23();
  FUN_1000_020f();
  FUN_1000_5625(0x42);
  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x26) = 3;
  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x28) = 0;
  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x2c) = 0;
  if (*(uint *)((int)*(undefined4 *)0xcaca + 0x3c) < 2) {
    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x30) = 0;
  }
  else {
    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x30) = 1;
  }
  if ((*(byte *)(*(int *)0xe062 * 0x10 + -0x3419) & 2) == 0) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = 0xd;
  }
  FUN_1000_76d1(uVar1);
  return;
}



void __cdecl16near FUN_1000_008d(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined local_52 [24];
  undefined local_3a;
  
  if (*(char *)0xd2a2 == '\0') {
    uVar2 = 0x35;
    uVar1 = 0x115;
  }
  else {
    uVar2 = 0x4e;
    uVar1 = 0xa8;
  }
  FUN_1000_3e84(uVar1,uVar2);
  *(undefined2 *)0xdc24 = 3;
  *(undefined2 *)0xdc1c = 8;
  uVar1 = FUN_1000_6a7c(**(int **)0xcaca * 0x50 + -0x276c);
  FUN_1000_959e(local_52,0x4b,
                *(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x20) * 2 + 0x1d78),uVar1);
  local_3a = 0;
  FUN_1000_3567(0xdc18,local_52,0x69,0x7a);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x38) * 2 + -0x6542),
                0x67,0x84);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x3a) * 2 + -0x5eab),
                0x73,0x8b);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x3c) * 2 + -0x6ade),
                0x72,0x97);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x3e) * 2 + -0x6d06),
                0x82,0xa7);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x40) * 2 + -0x6b30),
                0x82,0xaf);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x42) * 2 + -0x6b54),
                0x82,0xb7);
  uVar1 = FUN_1000_02ba();
  FUN_1000_959e(local_52,0x50,uVar1);
  FUN_1000_3567(0xdc18,local_52,0xbd,0x73);
  thunk_EXT_FUN_0000_0000(0x1000,1,0x67,0x73,0,0x67,0x73,100,0x49);
  return;
}



void __cdecl16near FUN_1000_020f(void)

{
  undefined2 unaff_DS;
  char local_8;
  int local_6;
  
  local_6 = 0;
  local_8 = '\0';
  if ((**(int **)0xcbd8 != 0) || (*(int *)((int)*(undefined4 *)0xcaca + 0x4e) != 0)) {
    local_6 = 4;
  }
  while (local_8 == '\0') {
    if (local_6 == 0) {
      FUN_1000_3641(5,0x8d);
      do {
        local_6 = FUN_1000_38ac(0x6f42);
      } while (local_6 == 99);
    }
    if (local_6 == 1) {
      FUN_1000_3989();
      local_6 = FUN_1000_5bf0();
    }
    else if (local_6 == 2) {
      FUN_1000_3989();
      local_6 = FUN_1000_0fa3();
    }
    else if (local_6 == 3) {
      FUN_1000_3989();
      local_6 = FUN_1000_0963();
    }
    else if (local_6 == 4) {
      FUN_1000_3989();
      local_6 = FUN_1000_623e();
    }
    else if (local_6 == 5) {
      FUN_1000_3989();
      local_8 = FUN_1000_038c();
      local_6 = 0;
    }
  }
  return;
}



uint __cdecl16near FUN_1000_02ba(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  uint local_4;
  
  uVar2 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
  iVar1 = (int)*(undefined4 *)0xcaca;
  local_4 = (((uint)*(byte *)(*(int *)(iVar1 + 0x38) + 0x60) +
              (uint)*(byte *)(*(int *)(iVar1 + 0x3c) + 0x54) +
              (uint)*(byte *)(*(int *)(iVar1 + 0x3e) + 0x58) +
             (uint)*(byte *)(*(int *)(iVar1 + 0x40) + 0x5c)) / 3 - *(int *)(iVar1 + 0x42)) + 2;
  if (10 < local_4) {
    local_4 = 10;
  }
  return local_4;
}



uint __cdecl16near FUN_1000_038c(void)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  if ((*(byte *)(*(int *)0xe062 * 0x10 + -0x3419) & 2) == 0) {
    uVar4 = 0x311;
    uVar2 = 4;
  }
  else {
    uVar4 = 0;
    uVar2 = 0x20;
  }
  FUN_1000_3641(uVar2,uVar4);
  if (*(char *)0xd2a2 == '\0') {
    FUN_1000_3cea(0x7200,0xa5,0x9e);
  }
  else {
    uVar3 = FUN_1000_3cea(0x73a8,0xa1,0xa4);
    if (uVar3 != 99) {
      if (99 < uVar3) {
        return uVar3;
      }
      if ((char)uVar3 == '\x01') {
        *(undefined2 *)0x67e0 = *(undefined2 *)0x11be;
        *(undefined *)0x67e2 = *(undefined *)0x11c0;
        FUN_1000_3989();
        FUN_1000_2b06(0x14);
        if ((*(byte *)(*(int *)0xe062 * 0x10 + -0x3419) & 2) == 0) {
          FUN_1000_0448();
        }
        thunk_EXT_FUN_0000_0000(0x1000);
        *(undefined2 *)0xdc06 = 0;
        FUN_1000_8a32(0xdc02,0,0,0x13f,200);
        return 1;
      }
      bVar1 = (char)uVar3 - 2;
      if (bVar1 != 0) {
        return (uint)bVar1;
      }
    }
    FUN_1000_3989();
  }
  return 0;
}



undefined2 __cdecl16near FUN_1000_0448(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  thunk_EXT_FUN_0000_0000(0x1000,0x1f);
  local_4 = 0;
  while( true ) {
    if (0x11 < local_4) {
      thunk_EXT_FUN_0000_0000(0x1a95,4,0x1e,0x6c,0,0x1e,0x6c,0x69,0x5c);
      FUN_1000_3f33(0x78);
      uVar3 = FUN_1000_3088(1);
      return uVar3;
    }
    *(undefined *)0xadfc = 0;
    cVar1 = *(char *)(local_4 + 0x136);
    if (cVar1 != -1) {
      thunk_EXT_FUN_0000_0000(0x1a95,4,0x1e,0x6c,1,0x1e,0x6c,0x69,0x5c);
      iVar2 = cVar1 * 0xc;
      thunk_EXT_FUN_0000_0000
                (0x1a95,3,*(undefined2 *)(iVar2 + 0x6a),*(undefined2 *)(iVar2 + 0x6c),1,
                 *(undefined2 *)(iVar2 + 0x6e),*(undefined2 *)(iVar2 + 0x70),
                 *(undefined2 *)(iVar2 + 0x72),*(undefined2 *)(iVar2 + 0x74));
      thunk_EXT_FUN_0000_0000(0x1a95,1,0x1e,0x6c,0,0x1e,0x6c,0x69,0x5c);
    }
    if (*(char *)(local_4 + 0x148) != -1) {
      iVar2 = *(char *)(local_4 + 0x148) * 0xc;
      thunk_EXT_FUN_0000_0000
                (0x1a95,3,*(undefined2 *)(iVar2 + 0x106),*(undefined2 *)(iVar2 + 0x108),0,
                 *(undefined2 *)(iVar2 + 0x10a),*(undefined2 *)(iVar2 + 0x10c),
                 *(undefined2 *)(iVar2 + 0x10e),*(undefined2 *)(iVar2 + 0x110));
    }
    iVar2 = FUN_1000_3f33(-(*(byte *)0xadfc - 8));
    if (iVar2 != 0) break;
    local_4 = local_4 + 1;
  }
  return 0;
}



void __cdecl16near FUN_1000_057b(void)

{
  return;
}



void __cdecl16near FUN_1000_057c(void)

{
  return;
}



void __cdecl16near FUN_1000_0703(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x22) = 0;
  FUN_1000_3641(0,0x57e);
  do {
    iVar1 = FUN_1000_38ac(0x6bc6);
  } while (iVar1 == 99);
  if ((uint)*(byte *)(iVar1 + -0x4d91) == *(uint *)0xb282) {
    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x22) = 1;
    local_4 = 0x15a;
  }
  else {
    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x22) = 0;
    local_4 = 0x181;
  }
  FUN_1000_3989();
  FUN_1000_2b1b(local_4,0xa0,0x5a,4,1,0xa0);
  FUN_1000_405f(0xf0);
  FUN_1000_3588();
  return;
}



void __cdecl16near FUN_1000_0786(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = FUN_1000_393d(0x6bca,*(undefined *)0x6bc9);
  if ((bVar1 != 0) && (bVar1 != *(byte *)0xd096)) {
    FUN_1000_3517(-(bVar1 - 0x100),0x11c7,1);
  }
  if ((*(char *)0xd096 != '\0') && (*(byte *)0xd096 != bVar1)) {
    FUN_1000_3517(-(*(byte *)0xd096 - 0x100),0x11d6,1);
  }
  *(byte *)0xd096 = bVar1;
  return;
}



void __cdecl16near FUN_1000_07ee(void)

{
  undefined uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  uint local_18;
  undefined local_16 [20];
  
  uVar1 = *(undefined *)((int)*(undefined4 *)0xcaca + 0x42);
  *(undefined *)0xd879 = uVar1;
  *(undefined *)0xd878 = uVar1;
  local_18 = 0;
  do {
    if ((*(char *)0xd2a2 == '\0') ||
       (uVar2 = (2 - *(int *)((int)*(undefined4 *)0xcaca + 0x42)) * 2,
       uVar2 < local_18 || uVar2 - local_18 == 0)) {
      *(undefined2 *)((int)*(undefined4 *)0xe096 + local_18 * 2 + 0x38) = 0x13;
    }
    local_18 = local_18 + 1;
  } while ((int)local_18 < 4);
  for (local_18 = 0; (int)local_18 < 0x10; local_18 = local_18 + 1) {
    if (*(char *)(local_18 + -0x2788) == '\0') {
      FUN_1000_39d5(local_18 * 8 + 0x6c5e);
    }
    else {
      puVar3 = (undefined2 *)-(local_18 * 3 + -0x67e0);
      *puVar3 = *(undefined2 *)0x11ca;
      *(undefined *)(puVar3 + 1) = *(undefined *)0x11cc;
      FUN_1000_39b3(local_18 * 8 + 0x6c5e);
    }
  }
  *(undefined *)0xd096 = 0;
  FUN_1000_35fc(0xf,2);
  FUN_1000_35fc(0xd,3);
  FUN_1000_35fc(0xe,4);
  for (local_18 = 0; uVar2 = (2 - *(int *)((int)*(undefined4 *)0xcaca + 0x42)) * 2,
      local_18 <= uVar2 && uVar2 - local_18 != 0; local_18 = local_18 + 1) {
    FUN_1000_0d65(local_18,*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x38 + local_18 * 2));
  }
  if (*(char *)0xd2a2 == '\0') {
    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x2e) = 0;
  }
  *(undefined2 *)0xdc1c = 0xf;
  *(undefined2 *)0xdc24 = 3;
  FUN_1000_959e(local_16,0x1bc,*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x2e));
  FUN_1000_3567(0xdc18,local_16,0x76,0x39);
  thunk_EXT_FUN_0000_0000(0x1000,1,0x76,0x39,0,0x76,0x39,0x2c,5);
  FUN_1000_0e96();
  FUN_1000_3e84(0x10f,0x94);
  return;
}



undefined2 __cdecl16near FUN_1000_0963(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  char local_6;
  
  local_6 = '\0';
  FUN_1000_3641(1,0x7ee);
  uVar4 = 0x1000;
  do {
    while( true ) {
      do {
        while( true ) {
          do {
            do {
              uVar2 = FUN_1000_38ac(0x6c5a);
              if (uVar2 == 99) goto LAB_1000_0aea;
            } while (99 < uVar2);
            cVar1 = (char)uVar2;
          } while (cVar1 < '\x01');
          if (cVar1 != '\x12' && '\x10' < (char)(cVar1 + -1)) break;
          if (*(int *)((int)*(undefined4 *)0xe096 + local_6 * 2 + 0x38) == 0x12) {
            FUN_1000_3989();
            thunk_EXT_FUN_0000_0000(uVar4,0x22);
            FUN_1000_35fc(0xb,2);
            FUN_1000_2b1b(0x1f6,0xa0,100,4,1,0x78);
            FUN_1000_405f(0xd2);
            FUN_1000_3588();
            FUN_1000_35fc(0xf,2);
            uVar4 = 0x1a95;
          }
          else {
            thunk_EXT_FUN_0000_0000(uVar4,0x1e);
            iVar3 = local_6 * 2;
            *(int *)((int)*(undefined4 *)0xe096 + iVar3 + 0x38) = uVar2 - 1;
            *(uint *)((int)*(undefined4 *)0xe096 + iVar3 + 0x40) = (uint)*(byte *)(uVar2 + 0x1ec5);
            FUN_1000_0d65((int)local_6,uVar2 - 1);
            FUN_1000_0e96();
            uVar4 = 0x1a95;
          }
        }
      } while ((char)(cVar1 + -0x12) < '\x01');
      if (cVar1 != '\x16' && '\x02' < (char)(cVar1 + -0x13)) break;
      uVar5 = 0x1a95;
      thunk_EXT_FUN_0000_0000(uVar4,0x1d);
      uVar4 = uVar5;
      if (((*(int *)((int)*(undefined4 *)0xcaca + 0x42) == 0) || ((int)uVar2 < 0x15)) &&
         ((int)local_6 - uVar2 != -0x13)) {
        FUN_1000_3517(0x100 - uVar2,0x11c1,1);
        FUN_1000_3517(-(local_6 + -0xed),0x11ac,1);
        local_6 = cVar1 + -0x13;
      }
    }
    if (cVar1 == '\x17') {
      FUN_1000_3989();
      FUN_1000_35fc(0xb,2);
      return 5;
    }
  } while (cVar1 != '\x18');
LAB_1000_0aea:
  FUN_1000_3989();
  FUN_1000_35fc(0xb,2);
  return 0;
}



void __cdecl16near FUN_1000_0b01(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar2 = FUN_1000_393d(0x6c5e,*(undefined *)0x6c5d);
  if (bVar2 != 0) {
    if ((bVar2 < 0x13) && (bVar2 != *(byte *)0xd096)) {
      FUN_1000_3517(-(bVar2 - 0x100),0x11be,1);
      FUN_1000_0bd4((uint)bVar2);
    }
    else if ((0x16 < bVar2) && (bVar2 != *(byte *)0xd096)) {
      FUN_1000_3517(-(bVar2 - 0x100),0x11be,1);
    }
  }
  if ((*(char *)0xd096 != '\0') && (bVar1 = *(byte *)0xd096, bVar2 != bVar1)) {
    if (bVar1 < 0x13) {
      FUN_1000_3517(-(bVar1 - 0x100),0x11c4,1);
      if (bVar2 == 0) {
        FUN_1000_0bd4(0x14);
      }
    }
    else if (0x16 < *(byte *)0xd096) {
      FUN_1000_3517(-(*(byte *)0xd096 - 0x100),0x11c4,1);
    }
  }
  *(byte *)0xd096 = bVar2;
  return;
}



undefined2 __cdecl16near FUN_1000_0bd4(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_c;
  uint local_a;
  undefined2 local_6;
  
  if (param_1 == 0x14) {
    *(undefined2 *)0xdc1c = 3;
    FUN_1000_8a32(0xdc18,9,0x88,0xdd,0xc1);
    *(undefined2 *)0xdc06 = 3;
    FUN_1000_8a32(0xdc02,9,0x88,0xdd,0xc1);
    uVar2 = 0;
  }
  else {
    if (param_1 == 0) {
      param_1 = 0x14;
    }
    uVar1 = param_1 - 1;
    *(undefined2 *)0xdc1c = 3;
    FUN_1000_8a32(0xdc18,9,0xaa,0xdd,0xc1);
    local_c = 3;
    local_a = uVar1;
    if (9 < uVar1) {
      local_c = 4;
      local_a = param_1 - 0xb;
    }
    thunk_EXT_FUN_0000_0000
              (0x1000,local_c,*(undefined2 *)(local_a * 2 + 0x232),
               *(undefined2 *)(local_a * 2 + 0x246),1,0x3f,0x88,0xa0,0x28);
    if (local_c == 3) {
      local_6 = 0xcc;
    }
    else {
      local_6 = 0x106;
    }
    thunk_EXT_FUN_0000_0000(0x1a95,2,local_6,local_a * 0xc + 0x50,1,9,0x88,0x3a,6);
    thunk_EXT_FUN_0000_0000(0x1a95,2,local_6,local_a * 0xc + 0x56,1,9,0x90,0x3a,6);
    *(undefined2 *)0xdc18 = 1;
    *(undefined2 *)0xdc24 = 4;
    *(undefined2 *)0xdc1c = 0xf;
    *(undefined2 *)0xdc1e = 8;
    FUN_1000_3776(0xdc18,*(undefined2 *)(uVar1 * 2 + -0x5a79),9,0xaa,0xd5,8,0);
    uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,1,9,0x88,0,9,0x88,0xd5,0x3a);
  }
  return uVar2;
}



void __cdecl16near FUN_1000_0d65(uint param_1,uint param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  iVar1 = (*(int *)((int)*(undefined4 *)0xcaca + 0x42) * 4 + param_1) * 2;
  iVar2 = *(int *)(iVar1 + 0x1d6);
  iVar1 = *(int *)(iVar1 + 0x1e6);
  thunk_EXT_FUN_0000_0000
            (0x1000,2,(uint)((byte)param_1 & 1) * 0x37 + 0xd2,(param_1 & 0xfffe) * 0x12,1,iVar2,
             iVar1,0x37,0x24,iVar1,iVar2);
  thunk_EXT_FUN_0000_0000
            (0x1a95,2,(param_2 / 6) * 0x33,param_2 % 6 << 5,1,iVar2 + 2,iVar1 + 2,0x33,0x20);
  thunk_EXT_FUN_0000_0000(0x1a95,1,iVar2,iVar1,0,iVar2,iVar1,0x37,0x24);
  return;
}



void __cdecl16near FUN_1000_0e23(void)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0;
  do {
    *(undefined *)(local_4 + 0xd878) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x14);
  uVar2 = FUN_1000_76c0_rand(5);
  local_4 = 0;
  while (local_4 < uVar2) {
    iVar3 = FUN_1000_76c0_rand(0x10);
    if ((*(char *)(iVar3 + 0x1c4) != -1) && (*(char *)(*(byte *)(iVar3 + 0x1c4) + 0xd878) == '\0'))
    {
      *(undefined *)(iVar3 + -0x2788) = 1;
      local_4 = local_4 + 1;
    }
  }
  uVar1 = *(undefined *)((int)*(undefined4 *)0xcaca + 0x42);
  *(undefined *)0xd879 = uVar1;
  *(undefined *)0xd878 = uVar1;
  return;
}



void __cdecl16near FUN_1000_0e96(void)

{
  undefined2 unaff_DS;
  int local_1a;
  uint local_18;
  undefined local_16 [20];
  
  *(undefined2 *)0xdc1c = 0x42;
  FUN_1000_8a32(0xdc18,0x76,0x4d,0xa1,0x51);
  if (*(char *)0xd2a2 == '\0') {
    local_1a = 0;
  }
  else {
    local_1a = 10000;
  }
  local_18 = 0;
  do {
    if (*(int *)((int)*(undefined4 *)0xe096 + 0x38 + local_18 * 2) == 0x11) {
      local_1a = local_1a + 0x76c;
    }
    local_18 = local_18 + 1;
  } while (local_18 < 4);
  *(undefined2 *)0xdc1c = 0xf;
  *(undefined2 *)0xdc24 = 3;
  FUN_1000_959e(local_16,0x25a,local_1a);
  FUN_1000_3567(0xdc18,local_16,0x76,0x4d);
  thunk_EXT_FUN_0000_0000(0x1000,1,0x76,0x4d,0,0x76,0x4d,0x2c,5);
  return;
}



void __cdecl16near FUN_1000_0f4e(void)

{
  undefined2 unaff_DS;
  
  *(undefined *)0xd096 = 0;
  *(undefined *)0xb284 = 0;
  *(undefined *)0xb285 = 1;
  *(undefined *)0xb2e8 = 1;
  FUN_1000_3088(1);
  FUN_1000_35fc(2,3);
  FUN_1000_35fc(*(int *)((int)*(undefined4 *)0xcaca + 0x38) + 0x10,4);
  FUN_1000_826c(2);
  FUN_1000_1308();
  FUN_1000_3e84(0x110,0x77);
  return;
}



undefined2 __cdecl16near FUN_1000_0fa3(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint local_a;
  
  FUN_1000_0f4e();
  do {
    uVar3 = FUN_1000_38ac(0x6d1e);
    if (uVar3 == 1) {
      *(undefined *)0xb2e8 = 1;
    }
    else if (uVar3 == 2) {
      *(undefined *)0xb2e8 = 2;
    }
    else if (uVar3 == 3) {
      *(undefined *)0xb2e8 = 3;
    }
    else {
      if (uVar3 == 4) {
        for (local_a = 0; local_a < *(uint *)0xb2e6; local_a = local_a + 1) {
          iVar4 = *(char *)(local_a * 2 + -0x4d7a) * 0x10;
          if (*(int *)(iVar4 + -0x341c) != 0) {
            pbVar1 = (byte *)(iVar4 + -0x3419);
            *pbVar1 = *pbVar1 | 0x40;
          }
          iVar4 = *(char *)(local_a * 2 + -0x4d79) * 0x10;
          if (*(int *)(iVar4 + -0x341c) != 0) {
            pbVar1 = (byte *)(iVar4 + -0x3419);
            *pbVar1 = *pbVar1 | 0x40;
          }
        }
      }
      else {
        if (uVar3 != 5) {
          if (uVar3 == 6) {
            FUN_1000_20d6();
          }
          else {
            if (uVar3 == 7) {
              FUN_1000_3989();
              return 3;
            }
            if (uVar3 == 8) {
              *(undefined *)0xd2a2 = 0;
              FUN_1000_1308();
            }
            else {
              if (uVar3 == 99) {
                FUN_1000_3989();
                return 0;
              }
              if (uVar3 == 0x120) {
                if (*(char *)0xb2e8 == '\x01') {
                  bVar2 = FUN_1000_393d(0x6d22,*(undefined *)0x6d21);
                  if (8 < bVar2) {
                    FUN_1000_3588();
                  }
                  *(byte *)0xb284 = *(byte *)0xb284 ^ 1;
                  FUN_1000_141d(1);
                  if (8 < bVar2) {
                    uVar3 = (uint)bVar2;
                    goto LAB_1000_11cd;
                  }
                }
              }
              else if ((int)uVar3 < (int)(uint)*(byte *)0x6d21) {
                iVar4 = *(char *)(uVar3 * 2 + -0x4d8c) * 0x10;
                if (*(int *)(iVar4 + -0x341c) != 0) {
                  pbVar1 = (byte *)(iVar4 + -0x3419);
                  *pbVar1 = *pbVar1 ^ 0x40;
                }
                iVar4 = *(char *)(uVar3 * 2 + -0x4d8b) * 0x10;
                if (*(int *)(iVar4 + -0x341c) != 0) {
                  pbVar1 = (byte *)(iVar4 + -0x3419);
                  *pbVar1 = *pbVar1 ^ 0x40;
                }
                FUN_1000_3588();
                FUN_1000_141d(1);
                FUN_1000_3517(uVar3 + 0xb7,0x11af,1);
LAB_1000_11cd:
                FUN_1000_1c2f(uVar3 - 9);
              }
            }
          }
          goto LAB_1000_1064;
        }
        for (local_a = 0; local_a < *(uint *)0xb2e6; local_a = local_a + 1) {
          iVar4 = *(char *)(local_a * 2 + -0x4d7a) * 0x10;
          if (*(int *)(iVar4 + -0x341c) != 0) {
            pbVar1 = (byte *)(iVar4 + -0x3419);
            *pbVar1 = *pbVar1 & 0xbf;
          }
          iVar4 = *(char *)(local_a * 2 + -0x4d79) * 0x10;
          if (*(int *)(iVar4 + -0x341c) != 0) {
            pbVar1 = (byte *)(iVar4 + -0x3419);
            *pbVar1 = *pbVar1 & 0xbf;
          }
        }
      }
      FUN_1000_141d(1);
    }
LAB_1000_1064:
    if (*(char *)0xb285 != *(char *)0xb2e8) {
      if (*(char *)0xb285 != '\0') {
        FUN_1000_3517(-(*(char *)0xb285 + -0x100),0x11c4,1);
      }
      FUN_1000_3517(-(*(char *)0xb2e8 + -0x100),0x11c7,1);
      *(undefined *)0xb285 = *(undefined *)0xb2e8;
      FUN_1000_141d(1);
    }
  } while( true );
}



void __cdecl16near FUN_1000_11db(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  bVar1 = FUN_1000_393d(0x6d22,*(undefined *)0x6d21);
  if (bVar1 == *(byte *)0xd096) goto LAB_1000_12fd;
  FUN_1000_1b37(bVar1);
  if (*(char *)0xd096 != '\0') {
    if (*(byte *)0xd096 < 9) {
      if ((int)*(char *)0xb2e8 != (uint)*(byte *)0xd096) {
        iVar2 = 0x11c4;
        iVar3 = -(*(byte *)0xd096 - 0x100);
        goto LAB_1000_127e;
      }
    }
    else {
      FUN_1000_3588();
      iVar3 = (*(byte *)0xd096 - 9) * 2;
      if ((*(int *)(*(char *)(iVar3 + -0x4d7a) * 0x10 + -0x341c) != 0) ||
         (*(int *)(*(char *)(iVar3 + -0x4d79) * 0x10 + -0x341c) != 0)) {
        iVar3 = *(byte *)0xd096 + 0xb7;
        iVar2 = iVar3 * 3 + 0x64e3;
LAB_1000_127e:
        FUN_1000_3517(iVar3,iVar2,1);
      }
    }
  }
  if (bVar1 != 0) {
    if (bVar1 < 9) {
      if ((int)*(char *)0xb2e8 == (uint)bVar1) goto LAB_1000_12fd;
      uVar4 = 0x11be;
      iVar3 = -(bVar1 - 0x100);
    }
    else {
      FUN_1000_1c2f(bVar1 - 9);
      iVar3 = (bVar1 - 9) * 2;
      if ((*(int *)(*(char *)(iVar3 + -0x4d7a) * 0x10 + -0x341c) == 0) &&
         (*(int *)(*(char *)(iVar3 + -0x4d79) * 0x10 + -0x341c) == 0)) goto LAB_1000_12fd;
      uVar4 = 0x11af;
      iVar3 = bVar1 + 0xb7;
    }
    FUN_1000_3517(iVar3,uVar4,1);
  }
LAB_1000_12fd:
  *(byte *)0xd096 = bVar1;
  return;
}



void __cdecl16near FUN_1000_1308(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1000,3,0,0,0,0,0,0x140,200);
  thunk_EXT_FUN_0000_0000(0x1a95,3,0,0,1,0,0,0x140,200);
  *(undefined2 *)0x67da = *(undefined2 *)0x11c4;
  *(undefined *)0x67dc = *(undefined *)0x11c6;
  *(undefined2 *)0x67dd = *(undefined2 *)0x67da;
  *(undefined *)0x67df = *(undefined *)0x67dc;
  *(undefined2 *)0x67e0 = *(undefined2 *)0x67dd;
  *(undefined *)0x67e2 = *(undefined *)0x67df;
  puVar1 = (undefined2 *)-(*(char *)0xb2e8 * 3 + -0x67e3);
  *puVar1 = *(undefined2 *)0x11c7;
  *(undefined *)(puVar1 + 1) = *(undefined *)0x11c9;
  FUN_1000_3070(1);
  FUN_1000_405f(10);
  if (*(char *)0xd2a2 == '\0') {
    FUN_1000_2b1b(0x2da,0xa0,100,4,1,0xa0);
    FUN_1000_40f0();
    FUN_1000_405f(0x46);
    FUN_1000_3588();
  }
  FUN_1000_1f3f();
  thunk_EXT_FUN_0000_0000(0x1a95,4,0,0,1,0,0,0x140,0xa9);
  thunk_EXT_FUN_0000_0000(0x1a95,4,0,0,0,0,0,0x140,0xa9);
  FUN_1000_141d(0);
  *(undefined *)0xd2a2 = 1;
  FUN_1000_1b37(0);
  *(undefined *)0xd096 = 0;
  return;
}



void __cdecl16near FUN_1000_141d(char param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1000,4,0,0,1,0,0,0x140,0xa9);
  cVar1 = FUN_1000_196a((int)param_1);
  FUN_1000_149c((int)cVar1);
  iVar2 = (int)*(char *)0xb2e8;
  if (0 < iVar2) {
    if (iVar2 == 2 || iVar2 + -1 < 1) {
      FUN_1000_183a();
    }
    else if (iVar2 == 3) {
      FUN_1000_1ab6();
    }
  }
  FUN_1000_3693(0xdc18,0xe5,0x32,*(undefined2 *)0xd330);
  FUN_1000_8427();
  thunk_EXT_FUN_0000_0000(0x1a95,1,0,0,0,0,0,0x140,0xa9);
  return;
}



void __cdecl16near FUN_1000_149c(char param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined2 unaff_DS;
  uint *puVar14;
  undefined local_110 [256];
  uint local_10;
  uint local_e;
  uint local_c;
  int local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  iVar2 = *(int *)0xe062 * 0x10;
  puVar3 = (uint *)(iVar2 + -0x3422);
  iVar7 = *(int *)0xe060 * 0x10;
  iVar8 = iVar7 + -0x3422;
  iVar9 = *(int *)0xe072 * 0x10;
  iVar10 = iVar9 + -0x3422;
  iVar12 = *(int *)0xe074 * 0x10;
  puVar13 = (uint *)(iVar12 + -0x3422);
  local_e = *(uint *)(iVar2 + -0x3420) / 0x92;
  uVar4 = *(uint *)(iVar2 + -0x341e) / 0xc3;
  uVar5 = *(uint *)(iVar7 + -0x3420) / 0x92;
  local_6 = *(uint *)(iVar7 + -0x341e) / 0xc3;
  local_4 = *(uint *)(iVar9 + -0x3420) / 0x92;
  local_8 = *(uint *)(iVar9 + -0x341e) / 0xc3;
  local_c = *(uint *)(iVar12 + -0x3420) / 0x92;
  local_10 = *(uint *)(iVar12 + -0x341e) / 0xc3;
  FUN_1000_3693(0xdc02,local_e - 1,uVar4 - 2,*(undefined2 *)0xd88e);
  local_a = -0x23e8;
  FUN_1000_3693(0xdc18,local_e - 1,uVar4 - 2,*(undefined2 *)0xd88e);
  if (param_1 == '\0') {
    if (*puVar3 == 0) {
      uVar11 = (uint)*(byte *)(iVar2 + -0x3414);
    }
    else {
      uVar11 = *puVar3;
    }
    FUN_1000_959e(local_110,0x2f3,*(undefined2 *)(uVar11 * 2 + -0x2390),0xd88);
    FUN_1000_2b1b(local_110,local_e,uVar4 + 0x18,3,1,0x78);
    param_1 = FUN_1000_405f(0xf0);
    FUN_1000_3588();
  }
  param_1 = FUN_1000_2f4c(local_e,uVar4,uVar5,local_6,(int)param_1);
  iVar2 = local_6 - 1;
  FUN_1000_3693(0xdc02,uVar5 - 1,iVar2,*(undefined2 *)0xe09c);
  FUN_1000_3693(0xdc18,uVar5 - 1,iVar2,*(undefined2 *)0xe09c);
  if (param_1 == '\0') {
    FUN_1000_2651(0xe05e,local_110);
    FUN_1000_2b1b(local_110,uVar5,local_6 + 0x18,3,1,0x78);
    param_1 = FUN_1000_405f(0xf0);
    FUN_1000_3588();
  }
  param_1 = FUN_1000_2f4c(uVar5,local_6,local_4,local_8,(int)param_1);
  iVar2 = local_8 - 1;
  iVar7 = local_4 - 1;
  FUN_1000_3693(0xdc02,iVar7,iVar2,*(undefined2 *)0xe09c);
  FUN_1000_3693(0xdc18,iVar7,iVar2,*(undefined2 *)0xe09c);
  if (param_1 == '\0') {
    FUN_1000_2651(0xe070,local_110);
    FUN_1000_2b1b(local_110,local_4,local_8 + 0x18,3,1,0x78);
    param_1 = FUN_1000_405f(0xf0);
    FUN_1000_3588();
  }
  cVar1 = FUN_1000_2f4c(local_4,local_8,local_c,local_10,(int)param_1);
  iVar2 = local_10 - 2;
  iVar7 = local_c - 1;
  FUN_1000_3693(0xdc02,iVar7,iVar2,*(undefined2 *)0xd88e);
  FUN_1000_3693(0xdc18,iVar7,iVar2,*(undefined2 *)0xd88e);
  if (cVar1 == '\0') {
    if (*puVar13 == 0) {
      uVar4 = (uint)*(byte *)(iVar12 + -0x3414);
    }
    else {
      uVar4 = *puVar13;
    }
    FUN_1000_959e(local_110,0x30f,*(undefined2 *)(uVar4 * 2 + -0x2390));
    FUN_1000_2b1b(local_110,local_c,local_10 + 0x18,3,1,0x78);
    FUN_1000_405f(0xf0);
    FUN_1000_3588();
  }
  *(undefined2 *)(local_a + 4) = 1;
  *(undefined2 *)(local_a + 0xc) = 4;
  if (*(int *)0xe062 == *(int *)0xe074) {
    uVar6 = 0x31b;
    puVar14 = puVar3;
  }
  else {
    FUN_1000_31fa(799,puVar3,iVar8,iVar10);
    uVar6 = 0x321;
    puVar14 = puVar13;
  }
  FUN_1000_31fa(uVar6,puVar14,iVar8,iVar10);
  FUN_1000_31fa(0x323,iVar8,puVar3,iVar10);
  FUN_1000_31fa(0x325,iVar10,iVar8,puVar13);
  return;
}



void __cdecl16near FUN_1000_183a(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  undefined2 local_6;
  int local_4;
  
  local_4 = 0xc0;
  local_a = 0;
  do {
    if (*(uint *)0xb2e6 <= local_a) {
      FUN_1000_3517(0xc0,0x6723,*(uint *)0xb2e6);
      return;
    }
    iVar5 = *(char *)(local_a * 2 + -0x4d7a) * 0x10;
    if (*(int *)(iVar5 + -0x341c) == 0) {
      iVar5 = *(char *)(local_a * 2 + -0x4d79) * 0x10;
    }
    if (*(int *)(iVar5 + -0x341c) != 0) {
      if (*(char *)0xb2e8 == '\x02') {
        local_8 = *(int *)(*(int *)(iVar5 + -0x341c) * 0x12 + 0x1ab0) << 6;
LAB_1000_189b:
        local_6 = 1;
      }
      else {
        if (*(char *)0xb284 == '\x01') {
          local_8 = *(int *)(*(int *)(iVar5 + -0x341c) * 0xe + 0x15ce);
        }
        else {
          iVar1 = *(int *)(iVar5 + -0x341c) * 0xe;
          uVar2 = *(int *)(iVar1 + 0x15ce) * *(int *)(iVar1 + 0x15d0);
          uVar3 = (int)uVar2 >> 0xf;
          local_8 = ((int)((uVar2 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
        }
        local_8 = local_8 << 6;
        if ((*(byte *)(*(int *)(iVar5 + -0x341c) * 0xe + 0x15d2) & 1) != 0) goto LAB_1000_189b;
        local_6 = 0;
      }
      if ((*(byte *)(iVar5 + -0x341a) & 0x40) == 0) {
        puVar4 = (undefined2 *)0x11bb;
      }
      else {
        puVar4 = (undefined2 *)0x11ac;
      }
      *(undefined2 *)(local_4 * 3 + 0x64e3) = *puVar4;
      *(undefined *)(local_4 * 3 + 0x64e5) = *(undefined *)(puVar4 + 1);
      if ((*(byte *)(iVar5 + -0x3419) & 0x40) != 0) {
        FUN_1000_2e50(*(undefined2 *)(iVar5 + -0x3420),*(undefined2 *)(iVar5 + -0x341e),local_8,
                      local_4,local_6);
      }
    }
    local_a = local_a + 1;
    local_4 = local_4 + 1;
  } while( true );
}



int __cdecl16near FUN_1000_196a(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  uint local_c;
  int local_8;
  undefined2 local_4;
  
  local_c = 0;
  uVar4 = 0x1000;
  do {
    if (*(uint *)0xb2e6 <= local_c) {
      return (int)param_1;
    }
    uVar5 = uVar4;
    if (param_1 == '\0') {
      param_1 = FUN_1000_405f(8);
      uVar5 = 0x1a95;
      thunk_EXT_FUN_0000_0000(uVar4,0x1c);
    }
    iVar2 = *(char *)(local_c * 2 + -0x4d7a) * 0x10;
    iVar1 = *(int *)(local_c * 8 + 0x6d62);
    local_8 = iVar1 + 6;
    iVar3 = *(int *)(local_c * 8 + 0x6d64) + 5;
    if (*(char *)(local_c * 2 + -0x4d79) == '\0') {
      if (*(int *)(iVar2 + -0x341c) == 0) {
        local_4 = *(undefined2 *)0xd29e;
      }
      else if ((*(byte *)(iVar2 + -0x341a) & 8) == 0) {
        if (*(char *)0xb2e8 == '\x01') {
          local_4 = *(undefined2 *)0xd08e;
          local_8 = iVar1 + 5;
        }
        else {
          local_4 = *(undefined2 *)0xe082;
        }
      }
      else {
        local_4 = *(undefined2 *)0xe09a;
      }
      FUN_1000_3693(0xdc18,local_8,iVar3,local_4);
      if (param_1 == '\0') {
LAB_1000_1a28:
        FUN_1000_3693(0xdc02,local_8,iVar3,local_4);
      }
    }
    else {
      if (*(char *)0xb2e8 == '\x01') {
        local_4 = *(undefined2 *)0xd08e;
        local_8 = iVar1 + 4;
        iVar1 = iVar1 + 9;
      }
      else {
        local_4 = *(undefined2 *)0xe082;
        local_8 = iVar1 + 5;
        iVar1 = iVar1 + 8;
      }
      FUN_1000_3693(0xdc18,local_8,iVar3,local_4);
      FUN_1000_3693(0xdc18,iVar1,iVar3,*(undefined2 *)0xd29e);
      if (param_1 == '\0') {
        FUN_1000_3693(0xdc02,local_8,iVar3,local_4);
        local_4 = *(undefined2 *)0xd29e;
        local_8 = iVar1;
        goto LAB_1000_1a28;
      }
    }
    local_c = local_c + 1;
    uVar4 = uVar5;
  } while( true );
}



void __cdecl16near FUN_1000_1ab6(void)

{
  undefined2 unaff_DS;
  uint local_8;
  uint local_6;
  undefined local_4;
  
  local_4 = 100;
  for (local_6 = 0; local_6 < 0x10; local_6 = local_6 + 1) {
    for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
      if ((*(byte *)(local_6 + local_8 * 0x10 + -0x3528) & 0x10) != 0) {
        local_4 = 0x65;
        local_8 = (uint)(((ulong)local_8 * 0x7ff & 0xffff) / 0xc3);
        local_6 = (uint)(((ulong)local_6 * 0x7ff & 0xffff) / 0x92);
        FUN_1000_3693(0xdc18,local_6,local_8,*(undefined2 *)0xcac4);
      }
    }
  }
  FUN_1000_1b37(local_4);
  return;
}



void __cdecl16near FUN_1000_1b37(uint param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  *(undefined2 *)0xdc1c = 0xe2;
  FUN_1000_8a32(0xdc18,0x57,0xb4,0xea,0xc4);
  *(undefined2 *)0xdc24 = 4;
  *(undefined2 *)0xdc1c = 0xf;
  *(undefined2 *)0xdc1e = 8;
  if (param_1 == 0x65) {
    local_6 = 0x4e5;
    goto LAB_1000_1bed;
  }
  if (param_1 < 0x66) {
    cVar1 = (char)param_1;
    if (cVar1 == '\x01') {
      local_6 = 0x327;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\x02') {
      local_6 = 0x35e;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\x03') {
      local_6 = 0x3c9;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\x04') {
      local_6 = 0x3fe;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\x05') {
      local_6 = 0x43b;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\x06') {
      local_6 = 0x393;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\a') {
      local_6 = 0x47a;
      goto LAB_1000_1bed;
    }
    if (cVar1 == '\b') {
      local_6 = 0x4b6;
      goto LAB_1000_1bed;
    }
    if (cVar1 == 'd') {
      local_6 = 0x51e;
      goto LAB_1000_1bed;
    }
  }
  local_6 = 0x55e;
LAB_1000_1bed:
  FUN_1000_3776(0xdc18,local_6,0x57,0xb4,0x92,8,1);
  thunk_EXT_FUN_0000_0000(0x1000,1,0x57,0xb4,0,0x57,0xb4,0x92,0x10);
  return;
}



void __cdecl16near FUN_1000_1c2f(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint *local_15c;
  undefined2 local_158;
  int local_156;
  undefined local_154 [80];
  uint *local_104;
  undefined local_102 [256];
  
  local_104 = (uint *)0x0;
  local_15c = (uint *)0x0;
  local_156 = 0;
  do {
    iVar4 = *(char *)(local_156 + param_1 * 2 + -0x4d7a) * 0x10;
    if (*(int *)(iVar4 + -0x341c) != 0) {
      local_15c = (uint *)(iVar4 + -0x3422);
    }
    iVar4 = *(char *)(local_156 + param_1 * 2 + -0x4d7a) * 0x10;
    if ((*(byte *)(iVar4 + -0x341a) & 1) != 0) {
      local_104 = (uint *)(iVar4 + -0x3422);
    }
    local_156 = local_156 + 1;
  } while (local_156 < 2);
  local_102[0] = 0;
  if (local_104 != (uint *)0x0) {
    FUN_1000_946c(local_102,0x58b);
    if (*local_104 == 0) {
      uVar2 = (uint)*(byte *)(local_104 + 7);
    }
    else {
      uVar2 = *local_104;
    }
    FUN_1000_959e(local_154,0x59a,*(undefined2 *)(uVar2 * 2 + -0x2390));
    FUN_1000_946c(local_102,local_154);
    if ((*(byte *)((int)local_104 + 9) & 1) == 0) {
      if ((*(byte *)((int)local_104 + 9) & 4) == 0) {
        uVar1 = 0x5c6;
      }
      else {
        uVar1 = 0x5b4;
      }
    }
    else {
      uVar1 = 0x5a3;
    }
    FUN_1000_946c(local_102,uVar1);
    if (local_104[6] != 0) {
      FUN_1000_959e(local_154,0x5d7,local_104[5] * 0x20 + 0x1708);
      FUN_1000_946c(local_102,local_154);
      FUN_1000_959e(local_154,0x5e6,local_104[6]);
      FUN_1000_946c(local_102,local_154);
    }
  }
  if (local_15c != (uint *)0x0) {
    if (local_104 != (uint *)0x0) {
      FUN_1000_946c(local_102,0x5f2);
    }
    FUN_1000_946c(local_102,0x5f4);
    if (local_104 == (uint *)0x0) {
      if (*local_15c == 0) {
        uVar2 = (uint)*(byte *)(local_15c + 7);
      }
      else {
        uVar2 = *local_15c;
      }
      FUN_1000_959e(local_154,0x601,*(undefined2 *)(uVar2 * 2 + -0x2390));
      FUN_1000_946c(local_102,local_154);
      if ((*(byte *)((int)local_15c + 9) & 1) != 0) {
        FUN_1000_946c(local_102,0x60a);
      }
    }
    if ((*(byte *)(local_15c[3] * 0xe + 0x15d2) & 1) == 0) {
      local_158 = 0x623;
    }
    else {
      local_158 = 0x61b;
    }
    FUN_1000_959e(local_154,0x629,local_15c[3] * 0xe + 0x15c6,local_158);
    FUN_1000_946c(local_102,local_154);
    if (*(char *)0xb284 == '\x01') {
      iVar4 = *(int *)(local_15c[3] * 0xe + 0x15ce);
      local_158 = 0x637;
    }
    else {
      uVar2 = *(int *)(local_15c[3] * 0xe + 0x15ce) * *(int *)(local_15c[3] * 0xe + 0x15d0);
      uVar3 = (int)uVar2 >> 0xf;
      iVar4 = ((int)((uVar2 ^ uVar3) - uVar3) >> 4 ^ uVar3) - uVar3;
      local_158 = 0x63d;
    }
    FUN_1000_959e(local_154,0x643,iVar4,local_158);
    FUN_1000_946c(local_102,local_154);
    FUN_1000_959e(local_154,0x655,*(undefined2 *)(local_15c[3] * 0x12 + 0x1ab0));
    FUN_1000_946c(local_102,local_154);
    if ((*(byte *)(local_15c + 4) & 0x40) != 0) {
      FUN_1000_946c(local_102,0x66a);
    }
    if ((*(byte *)(local_15c + 4) & 0x20) != 0) {
      FUN_1000_946c(local_102,0x68c);
    }
  }
  FUN_1000_2b1b(local_102,*(int *)0xe08a + 0x10,*(int *)0xe08c + -0x10,3,0,0x78);
  return;
}



void __cdecl16near FUN_1000_1f3f(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint local_10;
  int *local_e;
  uint local_c;
  uint local_a;
  uint local_8;
  int *local_6;
  int *local_4;
  
  local_4 = (int *)0x6d62;
  local_6 = (int *)0xcbde;
  *(undefined2 *)0xb2e6 = 0;
  local_c = 0;
  do {
    if (*(uint *)0xd33c <= local_c) {
      *(char *)0x6d21 = *(char *)0xb2e6 + '\b';
      return;
    }
    if ((((local_6[3] != 0) || ((local_6[4] & 1U) != 0)) || ((local_6[4] & 0x200U) != 0)) &&
       ((*(byte *)((int)local_6 + 9) & 8) == 0)) {
      if (local_6[3] != 0) {
        *(byte *)((int)local_6 + 9) = *(byte *)((int)local_6 + 9) & 0xbf;
      }
      if (((local_6[4] & 8U) == 0) || ((local_6[4] & 0x400U) != 0)) {
        local_e = (int *)0xcbde;
        for (local_10 = 0;
            (local_10 < *(uint *)0xd33c &&
            ((((local_e[3] == 0 && ((local_e[4] & 1U) == 0)) && ((local_e[4] & 0x200U) == 0)) ||
             ((((*(byte *)((int)local_e + 9) & 8) != 0 || (*local_e != *local_6)) ||
              (local_10 == local_c)))))); local_10 = local_10 + 1) {
          local_e = local_e + 8;
        }
      }
      else {
        local_10 = *(uint *)0xd33c;
      }
      if (local_10 == *(uint *)0xd33c) {
        local_8 = (uint)local_6[1] / 0x92;
        uVar2 = local_6[2];
        uVar3 = 0xc3;
LAB_1000_1feb:
        local_a = uVar2 / uVar3;
      }
      else if (local_c < local_10) {
        local_8 = (uint)(local_e[1] + local_6[1]) / 0x124;
        uVar2 = local_e[2] + local_6[2];
        uVar3 = 0x186;
        goto LAB_1000_1feb;
      }
      if (local_c < local_10) {
        if (local_8 < 7) {
          *local_4 = 0;
        }
        else {
          *local_4 = local_8 - 7;
        }
        if (local_a < 7) {
          local_4[1] = 0;
        }
        else {
          local_4[1] = local_a - 7;
        }
        local_4[2] = *local_4 + 0xe;
        local_4[3] = local_4[1] + 0xe;
        iVar1 = *(int *)0xb2e6;
        *(undefined *)(iVar1 * 2 + -0x4d7a) = (undefined)local_c;
        if (local_10 < *(uint *)0xd33c) {
          *(undefined *)(iVar1 * 2 + -0x4d79) = (undefined)local_10;
        }
        else {
          *(undefined *)(*(int *)0xb2e6 * 2 + -0x4d79) = 0;
        }
        local_4 = local_4 + 4;
        *(int *)0xb2e6 = *(int *)0xb2e6 + 1;
      }
    }
    local_c = local_c + 1;
    local_6 = local_6 + 8;
  } while( true );
}



void __cdecl16near FUN_1000_20d6(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined2 local_6c;
  undefined local_68 [100];
  int local_4;
  
  FUN_1000_35fc(3,4);
  local_4 = -0x23a6;
  *(undefined2 *)0xdc60 = 0xffff;
  if (*(int *)(*(int *)0xe062 * 0x10 + -0x3422) == 0) {
    uVar5 = (uint)*(byte *)(*(int *)0xe062 * 0x10 + -0x3414);
  }
  else {
    uVar5 = *(uint *)(*(int *)0xe062 * 0x10 + -0x3422);
  }
  uVar1 = *(undefined2 *)(uVar5 * 2 + -0x2390);
  *(undefined2 *)0xdc66 = 4;
  *(undefined2 *)0xdc5e = 0;
  FUN_1000_2a84(0xdc5a,0x6d2,0xa8,0x25);
  iVar3 = *(int *)((int)*(undefined4 *)0xcaca + 0x3c);
  if (iVar3 == 0) {
    local_6c = 0x6f2;
  }
  else if (iVar3 == 1) {
    local_6c = 0x70c;
  }
  else if (iVar3 == 2) {
    local_6c = 0x729;
  }
  else if (iVar3 == 3) {
    local_6c = 0x73d;
  }
  FUN_1000_2a84(local_4,local_6c,0xa8,0x2d);
  *(undefined2 *)(local_4 + 0xc) = 3;
  piVar2 = *(int **)0xcaca;
  FUN_1000_959e(local_68,0x75b,*(undefined2 *)(((int *)piVar2)[0x10] * 2 + 0x1d78),
                *piVar2 * 0x50 + -0x276c);
  FUN_1000_2a84(local_4,local_68,0xa8,0x36);
  FUN_1000_959e(local_68,0x768,uVar1);
  iVar3 = FUN_1000_94de(local_68);
  FUN_1000_25d9(local_68 + iVar3);
  FUN_1000_3567(local_4,local_68,0x26,0x43);
  FUN_1000_24f7(local_4,0);
  FUN_1000_24f7(local_4,1);
  FUN_1000_3088(1);
  FUN_1000_826c(3);
  thunk_EXT_FUN_0000_0000(0x1000,4,0,0,0,0,0,0x140,200);
  FUN_1000_3070(1);
  iVar3 = FUN_1000_3ea5();
  if (iVar3 != 2) {
    FUN_1000_35fc(9,4);
    thunk_EXT_FUN_0000_0000(0x1a95,0,0x26,0xba,4,0x26,0,0x104,0xe);
    FUN_1000_3567(local_4,0x76e,0x26,0x12);
    FUN_1000_959e(local_68,0x77b,uVar1,0xd88);
    FUN_1000_3567(local_4,local_68,0x26,0x1e);
    FUN_1000_3776(local_4,*(undefined2 *)0xa361,0x26,0x2a,0x104,8,0);
    *(undefined2 *)(local_4 + 4) = 0;
    *(undefined2 *)(local_4 + 6) = 0xffff;
    if (*(int *)(*(int *)0xe062 * 0x10 + -0x3422) == 0) {
      uVar5 = (uint)*(byte *)(*(int *)0xe074 * 0x10 + -0x3414);
    }
    else {
      uVar5 = *(uint *)(*(int *)0xe074 * 0x10 + -0x3422);
    }
    FUN_1000_959e(local_68,0x797,*(undefined2 *)(uVar5 * 2 + -0x2390));
    FUN_1000_3567(local_4,local_68,0x26,0x46);
    FUN_1000_3567(local_4,0x7a3,0x26,0x56);
    FUN_1000_3776(local_4,*(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x3a) * 2 + -0x687f)
                  ,0x26,0x5e,0x104,8,0);
    FUN_1000_3567(local_4,0x7b8,0x26,0x8c);
    FUN_1000_3567(local_4,*(undefined2 *)(*(char *)0xcad2 * 2 + -0x5bf7),0x40,0x94);
    FUN_1000_3567(local_4,*(undefined2 *)(*(char *)0xcad3 * 2 + -0x5bf7),0xb4,0x94);
    if (*(int *)((int)*(undefined4 *)0xcaca + 0x42) == 0) {
      FUN_1000_3567(local_4,*(undefined2 *)(*(char *)0xcad4 * 2 + -0x5bf7),0x40,0x9c);
      FUN_1000_3567(local_4,*(undefined2 *)(*(char *)0xcad5 * 2 + -0x5bf7),0xb4,0x9c);
    }
    FUN_1000_959e(local_68,0x7cc,*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x2e));
    FUN_1000_3567(local_4,local_68,0x26,0xa8);
    FUN_1000_3088(1);
    thunk_EXT_FUN_0000_0000(0x1a95,4,0,0,0,0,0,0x140,200);
    FUN_1000_3070(1);
    FUN_1000_3ea5();
  }
  FUN_1000_3088(1);
  FUN_1000_35fc(*(int *)((int)*(undefined4 *)0xcaca + 0x38) + 0x10,4);
  thunk_EXT_FUN_0000_0000(0x1a95,1,0,0,0,0,0,0x140,200);
  FUN_1000_826c(2);
  puVar4 = (undefined2 *)-(*(char *)0xb2e8 * 3 + -0x67e3);
  *puVar4 = *(undefined2 *)0x11c7;
  *(undefined *)(puVar4 + 1) = *(undefined *)0x11c9;
  *(undefined *)0xd096 = 0;
  FUN_1000_3070(1);
  FUN_1000_3e84(0x110,0x86);
  return;
}



void __cdecl16near FUN_1000_24f7(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_106;
  undefined local_104 [256];
  int local_4;
  
  local_4 = param_2 * 0x12 + -0x1fa2;
  *(undefined2 *)(param_1 + 0xc) = 3;
  *(undefined2 *)(param_1 + 4) = 0;
  if (param_2 == 0) {
    local_106 = 0x4e;
    uVar3 = 0x4e;
    uVar2 = 0x7f0;
  }
  else {
    local_106 = 0x8c;
    uVar3 = 0x8c;
    uVar2 = 0x815;
  }
  FUN_1000_3567(param_1,uVar2,0x26,uVar3);
  FUN_1000_3776(param_1,*(undefined2 *)(*(int *)(local_4 + 8) * 2 + 0x1f24),0x26,local_106 + 8,0x104
                ,7,0);
  iVar1 = *(int *)(param_1 + 10);
  *(undefined2 *)(param_1 + 4) = 4;
  FUN_1000_3567(param_1,0x83c,0x26,iVar1 + 2);
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_1000_2651(local_4,local_104);
  FUN_1000_3776(param_1,local_104,0x26,iVar1 + 10,0x104,6,0);
  return;
}



undefined2 __cdecl16near FUN_1000_25d9(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  uint local_8;
  uint local_6;
  int local_4;
  
  uVar3 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
  iVar2 = (int)*(undefined4 *)0xcaca;
  iVar1 = *(int *)(iVar2 + 0x38);
  local_6 = (uint)*(byte *)(iVar1 + 0x882);
  local_4 = *(int *)(iVar1 * 2 + 0x896);
  local_8 = (uint)*(byte *)(iVar1 + 0x88c) + *(int *)(iVar2 + 0x36);
  while( true ) {
    if (local_8 <= *(byte *)(local_6 + 0x8c2)) break;
    local_8 = local_8 - *(byte *)(local_6 + 0x8c2);
    local_6 = local_6 + 1;
  }
  if (0xc < local_6) {
    local_6 = local_6 - 0xc;
    local_4 = local_4 + 1;
  }
  FUN_1000_959e(param_1,0x878,*(undefined2 *)(local_6 * 2 + 0x8a8),local_8,local_4);
  return param_1;
}



void __cdecl16near FUN_1000_2651(int param_1,int param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_5c;
  undefined local_5a [80];
  int local_a;
  int *local_8;
  undefined2 local_6;
  char local_4;
  
  iVar4 = *(int *)(param_1 + 2) * 0x10;
  local_8 = (int *)(iVar4 + -0x3422);
  if (*local_8 == 0) {
    local_6 = 0;
  }
  else {
    local_6 = *(undefined2 *)(*local_8 * 2 + -0x2390);
  }
  local_4 = *(char *)(*(int *)(param_1 + 8) * 0xc + 0x11de);
  switch(local_4) {
  case '\x01':
  case '\x02':
    if (local_4 == '\x01') {
      local_5c = 0x8cf;
    }
    else {
      local_5c = 0x8da;
    }
    if (*local_8 == 0) {
      FUN_1000_959e(param_2,0x8f2,local_5c,
                    *(undefined2 *)((uint)*(byte *)(iVar4 + -0x3414) * 2 + -0x2390));
    }
    else {
      FUN_1000_959e(param_2,0x8e2,local_5c,
                    *(undefined2 *)((uint)*(byte *)(iVar4 + -0x3414) * 2 + -0x2390),local_6);
    }
    if ((*(byte *)(*(int *)(param_1 + 8) * 0xc + 0x11e2) & 0x20) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 8) * 0xc + 0x11e2) & 2) != 0) {
        uVar3 = 0x937;
        goto LAB_1000_2704;
      }
      local_a = FUN_1000_94de(param_2);
      local_a = local_a + -1;
      if (*(char *)(local_a + param_2) == ',') {
        *(undefined *)(local_a + param_2) = 0;
      }
      FUN_1000_94ac(local_5a,0x949);
    }
    else {
      uVar3 = 0x8fc;
LAB_1000_2704:
      FUN_1000_959e(local_5a,uVar3,0xd7c);
    }
    puVar1 = local_5a;
    goto LAB_1000_2754;
  case '\x03':
    FUN_1000_959e(param_2,0x94b,param_1 + 10,0xd7c);
    puVar1 = (undefined *)0x98d;
    goto LAB_1000_2754;
  case '\x04':
    FUN_1000_959e(param_2,0x9bd,param_1 + 10,0xd7c);
    puVar1 = (undefined *)0x9f2;
LAB_1000_2754:
    FUN_1000_946c(param_2,puVar1);
    break;
  case '\x05':
    uVar3 = *(undefined2 *)(*(int *)(*(int *)0xcbdc * 0x10 + -0x3422) * 2 + -0x2390);
    uVar2 = 0xa29;
    goto LAB_1000_27ba;
  case '\x06':
    uVar3 = 0xd8e;
    uVar2 = 0xae7;
LAB_1000_27ba:
    FUN_1000_959e(param_2,uVar2,uVar3,0xd88,local_6,0xd7c);
    break;
  case '\a':
    FUN_1000_959e(param_2,0xa89,local_6,0xd88);
    break;
  case '\b':
    if (*(int *)(*(int *)(param_1 + 8) * 0xc + 0x11e4) == -2) {
      uVar3 = 0xb6d;
    }
    else {
      uVar3 = 0xb7d;
    }
    FUN_1000_94ac(local_5a,uVar3);
    FUN_1000_959e(param_2,0xb7e,*(int *)0xd3d4 * 0x20 + 0x1708,local_5a,param_1 + 10);
  }
  return;
}



undefined2 __cdecl16near FUN_1000_2864(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_8075(param_1,0,0xffff,param_2,param_3);
  uVar2 = FUN_1000_816f(uVar1);
  FUN_1000_8123(uVar1);
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_289a(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = 0xffff;
  uVar1 = FUN_1000_8075(param_1,0,0xffff,param_2);
  uVar2 = FUN_1000_8144(uVar1,uVar2,param_2,uVar1);
  FUN_1000_8123(uVar1);
  return uVar2;
}



undefined __cdecl16near
FUN_1000_28ce(undefined param_1,undefined2 param_2,undefined2 param_3,undefined param_4)

{
  undefined2 unaff_DS;
  
  if (*(char *)0xb2f4 != '\0') {
    return 0;
  }
  *(undefined2 *)0xb300 = param_2;
  *(undefined2 *)0xb2fe = param_3;
  *(undefined *)0xb2fa = param_1;
  *(undefined *)0xb2f4 = param_4;
  *(undefined *)0xb2ea = 0;
  *(undefined2 *)0xb2f0 = 0;
  return param_4;
}



undefined __cdecl16near FUN_1000_2901(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  uint local_12;
  uint local_e;
  uint local_a;
  uint local_8;
  uint local_6;
  undefined2 *local_4;
  
  uVar6 = 0x1000;
  if ((*(char *)0xb2f4 != '\0') &&
     (bVar1 = *(byte *)0xb2ea, *(char *)0xb2ea = *(char *)0xb2ea + '\x01', (bVar1 & 7) == 0)) {
    if (*(int *)0xb2f0 != 0) {
      uVar6 = 0x1a95;
      thunk_EXT_FUN_0000_0000
                (0x1000,3,*(undefined2 *)0xb2ec,*(undefined2 *)0xb2ee,1,*(undefined2 *)0xb2ec,
                 *(undefined2 *)0xb2ee,*(undefined2 *)0xb2f0,*(undefined2 *)0xb2f2);
    }
    local_8 = 0x140;
    local_6 = 0x140;
    local_4 = (undefined2 *)((uint)**(byte **)0xb2fe * 0xc + *(int *)0xb300);
    local_e = 0;
    local_a = 0;
    for (local_12 = 0; local_12 < *(byte *)(*(int *)0xb2fe + 1); local_12 = local_12 + 1) {
      thunk_EXT_FUN_0000_0000
                (uVar6,*(undefined *)0xb2fa,*local_4,local_4[1],1,local_4[2],local_4[3],local_4[4],
                 local_4[5]);
      if ((uint)local_4[2] < local_6) {
        local_6 = local_4[2];
      }
      if ((uint)local_4[3] < local_8) {
        local_8 = local_4[3];
      }
      if (local_a < (uint)(local_4[2] + local_4[4])) {
        local_a = local_4[2] + local_4[4];
      }
      if (local_e < (uint)(local_4[3] + local_4[5])) {
        local_e = local_4[3] + local_4[5];
      }
      local_4 = local_4 + 6;
      uVar6 = 0x1a95;
    }
    uVar2 = local_6;
    if (*(uint *)0xb2ec < local_6) {
      uVar2 = *(uint *)0xb2ec;
    }
    uVar3 = local_8;
    if (*(uint *)0xb2ee < local_8) {
      uVar3 = *(uint *)0xb2ee;
    }
    uVar4 = *(int *)0xb2ec + *(int *)0xb2f0;
    if ((uint)(*(int *)0xb2ec + *(int *)0xb2f0) <= local_a) {
      uVar4 = local_a;
    }
    uVar5 = *(int *)0xb2ee + *(int *)0xb2f2;
    if ((uint)(*(int *)0xb2ee + *(int *)0xb2f2) <= local_e) {
      uVar5 = local_e;
    }
    thunk_EXT_FUN_0000_0000(uVar6,1,uVar2,uVar3,0,uVar2,uVar3,uVar4 - uVar2,uVar5 - uVar3);
    *(uint *)0xb2ee = local_8;
    *(uint *)0xb2ec = local_6;
    *(int *)0xb2f0 = -(local_6 - local_a);
    *(int *)0xb2f2 = -(local_8 - local_e);
    *(int *)0xb2fe = *(int *)0xb2fe + 2;
    *(char *)0xb2f4 = *(char *)0xb2f4 + -1;
  }
  return *(undefined *)0xb2f4;
}



undefined __cdecl16near FUN_1000_2a7e(void)

{
  undefined2 unaff_DS;
  
  return *(undefined *)0xb2f4;
}



void __cdecl16near FUN_1000_2a84(int param_1,undefined2 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_373c(param_1,param_2);
  *(int *)(param_1 + 8) = -((iVar1 >> 1) - param_3);
  *(undefined2 *)(param_1 + 10) = param_4;
  thunk_EXT_FUN_0000_0000(0x1000,param_1,param_2);
  return;
}



void __cdecl16near FUN_1000_2ab4(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000
            (0x1000,2,0,*(int *)(param_1 + 8) + 4,1,param_2,param_3,*(undefined2 *)(param_1 + 6),
             *(undefined2 *)(param_1 + 8));
  thunk_EXT_FUN_0000_0000
            (0x1a95,2,0,*(int *)(param_1 + 8) + 4,0,param_2,param_3,*(undefined2 *)(param_1 + 6),
             *(undefined2 *)(param_1 + 8));
  return;
}



void __cdecl16near FUN_1000_2b06(int param_1)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    FUN_1000_8427();
  }
  return;
}



void __cdecl16near
FUN_1000_2b1b(undefined2 param_1,int param_2,int param_3,undefined2 param_4,int param_5,
             undefined2 param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_18 [5];
  int local_e;
  
  *(undefined2 *)0xdc3a = param_4;
  puVar5 = local_18;
  puVar4 = (undefined2 *)0xdc2e;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  local_18[0] = 0xffff;
  iVar3 = FUN_1000_3776(local_18,param_1,0,0,param_6,8,0);
  *(int *)0xb2fc = iVar3 + 0xc;
  *(int *)0xb302 = local_e + 0xc;
  if (param_5 != 0) {
    param_2 = -((*(int *)0xb2fc >> 1) - param_2);
  }
  *(int *)0xb2f6 = param_2;
  if (param_2 < 0) {
    *(undefined2 *)0xb2f6 = 0;
  }
  else if (0x140 < param_2 + *(int *)0xb2fc) {
    *(int *)0xb2f6 = 0x140 - *(int *)0xb2fc;
  }
  if (param_5 != 0) {
    param_3 = -((*(int *)0xb302 >> 1) - param_3);
  }
  *(int *)0xb2f8 = param_3;
  if (param_3 < 0) {
    *(undefined2 *)0xb2f8 = 0;
  }
  else if (200 < param_3 + *(int *)0xb302) {
    *(int *)0xb2f8 = 200 - *(int *)0xb302;
  }
  if (*(int *)0xb302 < 99) {
    param_2 = 0;
    param_3 = *(int *)0xb302 + 4;
  }
  else {
    param_2 = *(undefined2 *)0xb2fc;
    param_3 = 4;
  }
  thunk_EXT_FUN_0000_0000
            (0x1000,1,*(undefined2 *)0xb2f6,*(undefined2 *)0xb2f8,2,param_2,param_3,
             *(undefined2 *)0xb2fc,*(undefined2 *)0xb302);
  FUN_1000_2cb4(0xdc2e,0,4,*(undefined2 *)0xb2fc,*(undefined2 *)0xb302);
  *(undefined2 *)0xdc32 = 0xf;
  *(undefined2 *)0xdc34 = 8;
  FUN_1000_3776(0xdc2e,param_1,6,10,*(int *)0xb2fc + -0xc,8,param_5);
  thunk_EXT_FUN_0000_0000
            (0x1a95,2,0,4,1,*(undefined2 *)0xb2f6,*(undefined2 *)0xb2f8,*(undefined2 *)0xb2fc,
             *(undefined2 *)0xb302);
  thunk_EXT_FUN_0000_0000
            (0x1a95,2,0,4,0,*(undefined2 *)0xb2f6,*(undefined2 *)0xb2f8,*(undefined2 *)0xb2fc,
             *(undefined2 *)0xb302);
  return;
}



void __cdecl16near
FUN_1000_2cb4(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1000,2,0,0,*param_1,param_2,param_3,2,2);
  param_4 = param_2 + param_4;
  iVar2 = param_4 + -2;
  thunk_EXT_FUN_0000_0000(0x1a95,2,2,0,*param_1,iVar2,param_3,2,2);
  param_5 = param_5 + param_3;
  iVar3 = param_5 + -2;
  thunk_EXT_FUN_0000_0000(0x1a95,2,0,2,*param_1,param_2,iVar3,2,2);
  thunk_EXT_FUN_0000_0000(0x1a95,2,2,2,*param_1,iVar2,iVar3,2,2);
  param_1[2] = 0xe0;
  iVar1 = param_4 + -3;
  iVar4 = param_2 + 2;
  FUN_1000_8a32(param_1,iVar4,param_3,iVar1,param_3 + 1);
  param_1[2] = 0xe6;
  FUN_1000_8a32(param_1,iVar4,iVar3,iVar1,param_5 + -1);
  param_1[2] = 0xe1;
  param_5 = param_5 + -3;
  param_3 = param_3 + 2;
  FUN_1000_8a32(param_1,param_2,param_3,param_2 + 1,param_5);
  param_1[2] = 0xe5;
  FUN_1000_8a32(param_1,iVar2,param_3,param_4 + -1,param_5);
  param_1[2] = 0xe2;
  FUN_1000_8a32(param_1,iVar4,param_3,iVar1,param_5);
  return;
}



int __cdecl16near FUN_1000_2df2(undefined2 param_1,int param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xdc3a = 1;
  iVar1 = FUN_1000_373c(0xdc2e,param_1,0x10);
  iVar1 = iVar1 + 8;
  param_2 = param_2 - (iVar1 >> 1);
  FUN_1000_2cb4(0xdc2e,param_2,param_3,iVar1);
  *(undefined2 *)0xdc32 = param_4;
  FUN_1000_36c4(0xdc2e,param_1,param_2 + 4,param_3 + 4);
  return iVar1;
}



void __cdecl16near
FUN_1000_2e50(uint param_1,uint param_2,int param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint local_10;
  uint local_c;
  int local_a;
  int local_6;
  
  *(undefined2 *)0xdc1c = param_4;
  if (param_5 == 0) {
    local_a = 0x10;
    if (2999 < param_3) {
      local_a = 8;
    }
  }
  else {
    local_a = 8;
  }
  if ((param_5 == 0) && (6999 < param_3)) {
    local_a = 4;
  }
  for (local_6 = 0; local_6 < 0x101; local_6 = local_6 + local_a) {
    iVar1 = FUN_1000_3301(local_6 << 8,param_3 >> 7);
    uVar2 = (iVar1 << 7) / 0x92 + param_1 / 0x92;
    iVar1 = FUN_1000_3318(local_6 << 8,param_3 >> 7);
    uVar3 = (iVar1 << 7) / -0xc3 + param_2 / 0xc3;
    if (((local_6 != 0) && (param_5 != 0)) ||
       ((uVar2 < 0x140 && (local_c = uVar2, local_10 = uVar3, uVar3 < 200)))) {
      FUN_1000_829a(0xdc18,uVar2,uVar3,local_c,local_10,param_4);
    }
    local_10 = uVar3;
    local_c = uVar2;
  }
  return;
}



int __cdecl16near FUN_1000_2f4c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int local_e;
  int local_8;
  int local_6;
  int local_4;
  
  local_6 = FUN_1000_96ae_abs(param_3 - param_1);
  local_4 = FUN_1000_96ae_abs(param_4 - param_2);
  if ((local_6 == 0) && (local_4 == 0)) {
    param_5 = 0;
  }
  else {
    if (local_6 < local_4) {
      local_8 = local_4 + -1;
      local_4 = ((param_3 - param_1) * 0x40) / local_4;
      if (param_2 < param_4) {
        local_6 = 0x40;
      }
      else {
        local_6 = -0x40;
      }
    }
    else {
      local_8 = local_6 + -1;
      local_6 = ((param_4 - param_2) * 0x40) / local_6;
      if (param_1 < param_3) {
        local_4 = 0x40;
      }
      else {
        local_4 = -0x40;
      }
    }
    param_1 = param_1 * 0x40 + 0x20;
    param_2 = param_2 * 0x40 + 0x20;
    for (local_e = 0; local_e < local_8; local_e = local_e + 1) {
      if (param_5 == 0) {
        param_5 = FUN_1000_405f(1);
      }
      iVar1 = param_1 >> 6;
      iVar2 = param_2 >> 6;
      if ((1 < local_e) && (FUN_1000_829a(0xdc18,iVar1,iVar2,iVar1,iVar2,0), param_5 == 0)) {
        FUN_1000_829a(0xdc02,iVar1,iVar2,iVar1,iVar2,0);
      }
      param_1 = param_1 + local_4;
      param_2 = param_2 + local_6;
    }
  }
  return param_5;
}



void __cdecl16near FUN_1000_3070(undefined2 param_1)

{
  FUN_1000_30a0(0x64e3,0,0x100,param_1);
  return;
}



void __cdecl16near FUN_1000_3088(undefined2 param_1)

{
  FUN_1000_30a0(0x64e3,0x100,0,param_1);
  return;
}



void __cdecl16near FUN_1000_30a0(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined extraout_DL;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_314;
  uint local_30e;
  int local_30c;
  uint local_30a;
  int local_308;
  undefined local_302 [768];
  
  while (*(char *)0x64e2 != '\0') {
    FUN_1000_8427();
  }
  uVar2 = 0x1000;
  if (*(char *)0xadfb != '\0') {
    do {
      iVar1 = thunk_EXT_FUN_0000_0000(uVar2,2);
      uVar2 = 0x1a95;
    } while (iVar1 != 0);
    FUN_1000_8ce6();
  }
  local_314 = 0;
  local_30a = param_2;
  if (param_4 == 0) goto LAB_1000_312e;
  do {
    local_308 = (int)local_30a >> 0xf;
    while( true ) {
      local_30c = 0;
      do {
        uVar5 = local_30a;
        iVar1 = local_308;
        uVar4 = FUN_1000_978e((int)*(char *)(local_30c + param_1),
                              (int)*(char *)(local_30c + param_1) >> 0xf,local_30a,local_308);
        FUN_1000_978e(uVar4,uVar5,iVar1);
        local_302[local_30c] = extraout_DL;
        local_30c = local_30c + 1;
      } while (local_30c < 0x300);
      if (*(char *)0xb304 == '\0') {
        FUN_1000_31ad(local_302);
      }
      else {
        FUN_1000_8364(local_302);
      }
      if ((param_3 == local_30a) && ((int)param_3 >> 0xf == local_308)) {
        FUN_1000_8ca8();
        return;
      }
      if (local_314 == 0) {
        local_314 = *(char *)0xb304 * param_4;
        iVar1 = local_314;
        if (local_314 == 0) {
          iVar1 = 0xff;
        }
        local_30e = (int)(param_3 - param_2) / iVar1;
      }
      local_314 = local_314 + -1;
      if (local_314 < 1) break;
      bVar3 = CARRY2(local_30a,local_30e);
      local_30a = local_30a + local_30e;
      local_308 = local_308 + ((int)local_30e >> 0xf) + (uint)bVar3;
    }
LAB_1000_312e:
    local_30a = param_3;
  } while( true );
}



void __cdecl16near FUN_1000_31ad(undefined2 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = _DAT_0000_046c + 4;
  uVar2 = _DAT_0000_046e + (0xfffb < _DAT_0000_046c);
  while( true ) {
    if ((uVar2 < _DAT_0000_046e) || ((uVar2 <= _DAT_0000_046e && (uVar1 <= _DAT_0000_046c)))) break;
    FUN_1000_8364(param_1);
    *(char *)0xb304 = *(char *)0xb304 + '\x01';
  }
  return;
}



void __cdecl16near FUN_1000_31fa(undefined2 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  uVar1 = *(uint *)(param_2 + 2) / 0x92;
  uVar2 = *(uint *)(param_2 + 4) / 0xc3;
  uVar3 = *(uint *)(param_3 + 2) / 0x92;
  uVar4 = *(uint *)(param_3 + 4) / 0xc3;
  uVar5 = *(uint *)(param_4 + 2) / 0x92;
  uVar6 = *(uint *)(param_4 + 4) / 0xc3;
  if ((uVar3 < uVar1) || (uVar5 < uVar1)) {
    if ((uVar1 < uVar3) || (uVar1 < uVar5)) {
      if ((uVar4 < uVar2) || (uVar6 < uVar2)) {
        if ((uVar2 < uVar4) || (uVar2 < uVar6)) {
          if ((int)((uVar6 - uVar4) * (uVar5 - uVar3)) < 1) {
            local_4 = uVar1 + 3;
            local_6 = uVar2 - 7;
          }
          else {
            local_4 = uVar1 - 4;
            local_6 = uVar2 + 2;
          }
        }
        else {
          local_4 = uVar1 - 2;
          local_6 = uVar2 + 3;
        }
      }
      else {
        local_4 = uVar1 - 2;
        local_6 = uVar2 - 8;
      }
    }
    else {
      local_4 = uVar1 + 3;
      local_6 = uVar2 - 3;
    }
  }
  else {
    local_4 = uVar1 - 5;
    local_6 = uVar2 - 3;
  }
  FUN_1000_3567(0xdc18,param_1,local_4,local_6);
  return;
}



void __cdecl16near FUN_1000_3301(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1000_8c7c(param_1,param_2);
  FUN_1000_8c15(uVar1);
  return;
}



void __cdecl16near FUN_1000_3318(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3301(CONCAT11((char)((uint)param_1 >> 8) + '@',(char)param_1),param_2);
  return;
}



void __cdecl16near FUN_1000_332e(undefined2 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_1e;
  int local_1c;
  undefined2 local_18 [5];
  int local_e;
  
  *(undefined2 *)0xdc3a = 4;
  puVar6 = local_18;
  puVar5 = (undefined2 *)0xdc2e;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  local_18[0] = 0xffff;
  iVar4 = FUN_1000_3776(local_18,*param_1,0,0,param_1[3] + -0xc,8,0);
  param_1[3] = iVar4 + 0xc;
  param_1[4] = local_e + 0x1a;
  FUN_1000_2cb4(0xdc2e,0,4,param_1[3],local_e + 0x1a);
  *(undefined2 *)0xdc32 = 0xf;
  *(undefined2 *)0xdc34 = 8;
  FUN_1000_3776(0xdc2e,*param_1,6,8,param_1[3] + -0xc,8,1);
  if (param_1[2] == 0) {
    uVar3 = param_1[3] - 4 >> 1;
  }
  else {
    uVar3 = (param_1[3] - 4) / 3;
    local_1e = ((param_1[3] - 4) * 2) / 3 + 2;
  }
  local_1c = uVar3 + 2;
  iVar4 = FUN_1000_2df2(param_1[1],local_1c,local_e + 10,0xe8);
  param_1[7] = local_1c - ((iVar4 >> 1) - param_2);
  param_1[9] = (iVar4 >> 1) + param_2 + local_1c;
  param_1[8] = param_3 + local_e + 6;
  param_1[10] = param_3 + local_e + 0x16;
  if (param_1[2] != 0) {
    iVar4 = FUN_1000_2df2(param_1[2],local_1e,local_e + 10,0xe7);
    param_1[0xb] = local_1e - ((iVar4 >> 1) - param_2);
    param_1[0xd] = (iVar4 >> 1) + param_2 + local_1e;
    param_1[0xc] = param_3 + local_e + 6;
    param_1[0xe] = param_3 + local_e + 0x16;
  }
  thunk_EXT_FUN_0000_0000(0x1000,1,param_2,param_3,2,0,param_1[4] + 4,param_1[3],param_1[4]);
  thunk_EXT_FUN_0000_0000(0x1a95,2,0,4,1,param_2,param_3,param_1[3],param_1[4]);
  thunk_EXT_FUN_0000_0000(0x1a95,2,0,4,0,param_2,param_3,param_1[3],param_1[4]);
  return;
}



void __cdecl16near FUN_1000_3517(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = (uint)*(byte *)0x64e2 * 6;
  *(undefined2 *)(iVar1 + 0x64a6) = param_1;
  *(undefined2 *)(iVar1 + 0x64a8) = param_2;
  *(undefined2 *)(iVar1 + 0x64aa) = param_3;
  *(char *)0x64e2 = *(char *)0x64e2 + '\x01';
  return;
}



void __cdecl16near FUN_1000_3548(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_3517(param_1,param_2,param_3);
  thunk_EXT_FUN_0000_0000(0x1000,0x1a);
  return;
}



void __cdecl16near
FUN_1000_3567(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)(param_1 + 8) = param_3;
  *(undefined2 *)(param_1 + 10) = param_4;
  thunk_EXT_FUN_0000_0000(0x1000,param_1,param_2);
  return;
}



void __cdecl16near FUN_1000_3588(void)

{
  undefined2 unaff_DS;
  int local_6;
  undefined2 local_4;
  
  if (*(int *)0xb302 < 99) {
    local_4 = 0;
    local_6 = *(int *)0xb302 + 4;
  }
  else {
    local_4 = *(undefined2 *)0xb2fc;
    local_6 = 4;
  }
  thunk_EXT_FUN_0000_0000
            (0x1000,2,local_4,local_6,1,*(undefined2 *)0xb2f6,*(undefined2 *)0xb2f8,
             *(undefined2 *)0xb2fc,*(undefined2 *)0xb302);
  thunk_EXT_FUN_0000_0000
            (0x1a95,2,local_4,local_6,0,*(undefined2 *)0xb2f6,*(undefined2 *)0xb2f8,
             *(undefined2 *)0xb2fc,*(undefined2 *)0xb302);
  return;
}



void __cdecl16near FUN_1000_35fc(int param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined local_12 [16];
  
  FUN_1000_959e(local_12,0xcb2,*(undefined2 *)(param_1 * 2 + 0xcba));
  FUN_1000_2864(local_12,*(undefined2 *)0xd336,*(undefined2 *)0xd338);
  FUN_1000_8782(*(undefined2 *)0xe086,*(undefined2 *)(param_2 * 2 + -0x3550));
  return;
}



void __cdecl16near FUN_1000_3641(undefined2 param_1,code *param_2)

{
  undefined2 uVar1;
  
  FUN_1000_3088(1);
  FUN_1000_35fc(param_1,1);
  FUN_1000_826c(param_1);
  uVar1 = 0x1a95;
  thunk_EXT_FUN_0000_0000(0x1000,1,0,0,0,0,0,0x140,200);
  if (param_2 != (code *)0x0) {
    uVar1 = 0x1000;
    (*param_2)();
  }
  FUN_1000_3070(1);
  thunk_EXT_FUN_0000_0000(uVar1);
  return;
}



void __cdecl16near
FUN_1000_3693(undefined2 param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  undefined2 *local_6;
  
  local_6 = (undefined2 *)((ulong)param_4 << 0x10);
  thunk_EXT_FUN_0000_0000(0x1000,param_1,param_2,param_3,*local_6,*(undefined2 *)0x2,0,param_4);
  return;
}



void __cdecl16near FUN_1000_36c4(undefined2 *param_1,undefined2 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_18 [2];
  undefined2 local_14;
  undefined2 local_12;
  
  if (param_1[3] != -1) {
    puVar5 = local_18;
    puVar4 = param_1;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    local_14 = local_12;
    FUN_1000_3567(local_18,param_2,param_3 + 1,param_4);
    FUN_1000_3567(local_18,param_2,param_3,param_4 + 1);
    FUN_1000_3567(local_18,param_2,param_3 + 1,param_4 + 1);
  }
  FUN_1000_3567(param_1,param_2,param_3,param_4);
  return;
}



int __cdecl16near FUN_1000_373c(int param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  uVar1 = *(undefined2 *)(param_1 + 0xc);
  local_4 = 0;
  uVar3 = 0x1000;
  while (*param_2 != '\0') {
    iVar2 = thunk_EXT_FUN_0000_0000(uVar3,*param_2,uVar1);
    local_4 = local_4 + iVar2;
    uVar3 = 0x1a95;
    param_2 = param_2 + 1;
  }
  return local_4;
}



uint __cdecl16near
FUN_1000_3776(int *param_1,char *param_2,int param_3,int param_4,uint param_5,int param_6,
             int param_7)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined local_112 [256];
  int local_12;
  char local_e;
  char *local_c;
  uint local_a;
  uint local_8;
  char *local_6;
  int local_4;
  
  uVar3 = 0x1000;
  local_a = 0;
  local_6 = param_2;
  local_4 = param_1[6];
  param_1[5] = param_4;
  local_e = '\0';
  do {
    local_12 = 0;
    local_8 = 0;
    local_c = local_6;
    while (((local_8 <= param_5 && (*local_c != '\0')) && (*local_c != '\n'))) {
      pcVar1 = local_c;
      local_c = local_c + 1;
      iVar2 = thunk_EXT_FUN_0000_0000(uVar3,*pcVar1,local_4);
      local_8 = local_8 + iVar2;
      local_12 = local_12 + 1;
      uVar3 = 0x1a95;
    }
    if (local_8 <= param_5) goto LAB_1000_37fb;
    do {
      local_c = local_c + -1;
      local_12 = local_12 + -1;
LAB_1000_37fb:
    } while (((*local_c != ' ') && (*local_c != '\0')) &&
            ((*local_c != '\n' && ((*local_c != '-' && (param_2 < local_c))))));
    if (*local_c == '-') {
      local_12 = local_12 + 1;
    }
    if (*local_c == '\0') {
      local_e = '\x01';
    }
    if (local_12 == 0) {
      if (*local_c == '\n') goto LAB_1000_3888;
    }
    else {
      FUN_1000_9612(local_112,local_6,local_12);
      local_112[local_12] = 0;
      local_8 = FUN_1000_373c(param_1,local_112);
      if (local_a < local_8) {
        local_a = local_8;
      }
      if (*param_1 != -1) {
        iVar2 = param_3;
        if (param_7 != 0) {
          iVar2 = (param_5 - local_8 >> 1) + param_3;
        }
        param_1[4] = iVar2;
        FUN_1000_36c4(param_1,local_112,param_1[4],param_1[5]);
      }
LAB_1000_3888:
      param_1[5] = param_1[5] + param_6;
    }
    local_6 = local_c + 1;
    if (local_e != '\0') {
      return local_a;
    }
  } while( true );
}



int __cdecl16near FUN_1000_38ac(code **param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  uVar3 = 0x1000;
  local_4 = 0;
  do {
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
      FUN_1000_845a();
    }
    FUN_1000_8427();
    if (*param_1 != (code *)0x0) {
      uVar3 = 0x1000;
      (**param_1)();
    }
    cVar1 = FUN_1000_39f7(param_1);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        local_4 = FUN_1000_393d(param_1 + 2,*(undefined *)((int)param_1 + 3));
        if (local_4 == 0) {
          uVar2 = 0x22;
        }
        else {
          uVar2 = 0x1a;
        }
      }
      else {
        if (cVar1 != '\x02') {
          if (*(char *)(param_1 + 1) == cVar1) {
            local_4 = CONCAT11((cVar1 >> 7) + '\x01',cVar1);
          }
          goto LAB_1000_3930;
        }
        local_4 = 99;
        uVar2 = 0x23;
      }
      thunk_EXT_FUN_0000_0000(uVar3,uVar2);
      uVar3 = 0x1a95;
    }
LAB_1000_3930:
    if (local_4 != 0) {
      return local_4;
    }
  } while( true );
}



int __cdecl16near FUN_1000_393d(uint *param_1,int param_2)

{
  undefined2 unaff_DS;
  int local_4;
  
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    if ((((*param_1 <= *(uint *)0xe08a) && (*(uint *)0xe08a <= param_1[2])) &&
        (param_1[1] <= *(uint *)0xe08c)) && (*(uint *)0xe08c <= param_1[3])) break;
    param_1 = param_1 + 4;
  }
  if (local_4 < param_2) {
    local_4 = local_4 + 1;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



void __cdecl16near FUN_1000_3989(void)

{
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000
            (0x1000,1,*(undefined2 *)0xe08e,*(undefined2 *)0xe090,0,*(undefined2 *)0xe08e,
             *(undefined2 *)0xe090,*(undefined *)0xe092,*(undefined *)0xe093);
  return;
}



void __cdecl16near FUN_1000_39b3(uint *param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *param_1;
  if (uVar1 < param_1[2]) {
    *param_1 = param_1[2];
    param_1[2] = uVar1;
  }
  return;
}



void __cdecl16near FUN_1000_39d5(uint *param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *param_1;
  if (param_1[2] < uVar1) {
    *param_1 = param_1[2];
    param_1[2] = uVar1;
  }
  return;
}



uint __cdecl16near FUN_1000_39f7(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_20;
  uint local_1e;
  int local_1a;
  uint local_18;
  uint local_12;
  uint local_10;
  uint local_c;
  int local_a;
  uint local_8;
  int *local_6;
  int local_4;
  
  uVar6 = 0x1000;
  local_12 = 0;
  local_10 = 0;
  if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
    local_10 = thunk_EXT_FUN_0000_0000(0x1000,0);
    uVar6 = 0x1a95;
    local_12 = thunk_EXT_FUN_0000_0000(0x1a95,1);
  }
  if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
    FUN_1000_8545();
    local_4 = *(int *)0xe08a;
    local_a = *(int *)0xe08c;
    uVar2 = FUN_1000_8530(0);
    local_10 = local_10 | uVar2;
    uVar2 = FUN_1000_8530(1);
    local_12 = local_12 | uVar2;
  }
  local_18 = 0;
  iVar3 = thunk_EXT_FUN_0000_0000(uVar6);
  if (iVar3 == 0) {
    local_18 = thunk_EXT_FUN_0000_0000(0x1a95);
  }
  else if (local_10 == 0) {
    if (local_12 != 0) {
      local_18 = 0x1b;
    }
  }
  else {
    local_18 = 0xd;
  }
  if (local_18 == 0) {
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
      *(int *)0xe08a = *(int *)0xe08a + (int)(*(byte *)0x69b2 - 0x80) / 0x1e;
      *(int *)0xe08c = *(int *)0xe08c + (int)(*(byte *)0x69b3 - 0x80) / 0x1e;
    }
  }
  else if (local_18 == 0x1000) {
    FUN_1000_7611();
  }
  else if ((((local_18 == 0x4800) || (local_18 == 0x4b00)) || (local_18 == 0x4d00)) ||
          (local_18 == 0x5000)) {
    local_20 = 1000;
    local_6 = (int *)(param_1 + 4);
    local_8 = 0xffff;
    for (local_1a = 0; local_1a < (int)(uint)*(byte *)(param_1 + 3); local_1a = local_1a + 1) {
      uVar2 = (uint)(local_6[2] + *local_6) >> 1;
      uVar5 = (uint)(local_6[1] + local_6[3]) >> 1;
      bVar1 = false;
      if (local_18 == 0x4800) {
        if ((int)uVar5 < *(int *)0xe08c) {
LAB_1000_3b0c:
          iVar3 = FUN_1000_96ae_abs(*(int *)0xe08a - uVar2);
          iVar4 = FUN_1000_96ae_abs(*(int *)0xe08c - uVar5);
          if (iVar3 <= iVar4) {
LAB_1000_3b2a:
            bVar1 = true;
          }
        }
      }
      else if (local_18 == 0x4b00) {
        if ((int)uVar2 < *(int *)0xe08a) {
LAB_1000_3bc6:
          iVar3 = FUN_1000_96ae_abs(-(uVar2 - *(int *)0xe08a));
          iVar4 = FUN_1000_96ae_abs(*(int *)0xe08c - uVar5);
          if (iVar4 <= iVar3) goto LAB_1000_3b2a;
        }
      }
      else if (local_18 == 0x4d00) {
        if (*(int *)0xe08a < (int)uVar2) goto LAB_1000_3bc6;
      }
      else if ((local_18 == 0x5000) && (*(int *)0xe08c < (int)uVar5)) goto LAB_1000_3b0c;
      if ((bVar1) &&
         (iVar3 = FUN_1000_8bea(*(undefined2 *)0xe08a,*(undefined2 *)0xe08c,uVar2,uVar5),
         iVar3 < local_20)) {
        local_20 = iVar3;
        local_c = uVar5;
        local_8 = uVar2;
      }
      local_6 = local_6 + 4;
    }
    if (local_8 != 0xffff) {
      *(uint *)0xe08a = local_8;
      *(uint *)0xe08c = local_c;
    }
  }
  iVar3 = *(int *)0xdc2a;
  if ((*(int *)0xe08a < iVar3) || (iVar3 = *(int *)0xdc2c, iVar3 < *(int *)0xe08a)) {
    *(int *)0xe08a = iVar3;
  }
  iVar3 = *(int *)0xdc26;
  if ((*(int *)0xe08c < iVar3) || (iVar3 = *(int *)0xdc28, iVar3 < *(int *)0xe08c)) {
    *(int *)0xe08c = iVar3;
  }
  if (((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) &&
     ((*(int *)0xe08a != local_4 || (*(int *)0xe08c != local_a)))) {
    FUN_1000_85a7();
  }
  thunk_EXT_FUN_0000_0000
            (0x1a95,1,*(undefined2 *)0xe08e,*(undefined2 *)0xe090,0,*(undefined2 *)0xe08e,
             *(undefined2 *)0xe090,*(undefined *)0xe092,*(undefined *)0xe093);
  FUN_1000_3693(0xdc02,*(undefined2 *)0xe08a,*(undefined2 *)0xe08c,*(undefined2 *)0xe088);
  *(undefined2 *)0xe08e = *(undefined2 *)0xe08a;
  *(undefined2 *)0xe090 = *(undefined2 *)0xe08c;
  FUN_1000_3e5e();
  local_1e = 0;
  if ((local_18 == 0x5300) || (local_18 = local_18 & 0xff, local_18 == 8)) {
    local_1e = 0x62;
  }
  else if ((local_18 == 0xd) && (*(int *)0xb306 != 0xd)) {
    local_1e = 1;
  }
  else if ((local_18 == 0x1b) && (*(int *)0xb306 != 0x1b)) {
    local_1e = 2;
  }
  *(uint *)0xb306 = local_18;
  if (local_1e == 0) {
    local_1e = local_18;
  }
  return local_1e;
}



int __cdecl16near FUN_1000_3cea(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined *)0xd096;
  uVar2 = *(undefined2 *)0xe08a;
  uVar3 = *(undefined2 *)0xe08c;
  *(undefined2 *)0x679b = *(undefined2 *)0x11c4;
  *(undefined *)0x679d = *(undefined *)0x11c6;
  *(undefined2 *)0x6798 = *(undefined2 *)0x679b;
  *(undefined *)0x679a = *(undefined *)0x679d;
  FUN_1000_3517(0xe7,0x6798,2);
  FUN_1000_8427();
  FUN_1000_332e(param_1,param_2,param_3);
  puVar8 = (undefined2 *)0xb308;
  puVar7 = (undefined2 *)(param_1 + 10);
  for (iVar6 = 0x42; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar5 = puVar8;
    puVar8 = puVar8 + 1;
    puVar4 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar5 = *puVar4;
  }
  FUN_1000_3e84(*(int *)0xb310 + -3,*(int *)0xb312 + -3);
  do {
    iVar6 = FUN_1000_38ac(0xb308);
  } while (iVar6 == 99);
  FUN_1000_2b06(6);
  FUN_1000_2ab4(param_1,param_2,param_3);
  *(undefined *)0xd096 = uVar1;
  FUN_1000_3e84(uVar2,uVar3);
  return iVar6;
}



void __cdecl16near FUN_1000_3da2(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  undefined local_4;
  
  uVar1 = FUN_1000_393d(0xb30c,*(undefined *)0xb30b);
  if (uVar1 == 0) {
    *(undefined2 *)0x679b = *(undefined2 *)0x11c4;
    *(undefined *)0x679d = *(undefined *)0x11c6;
    puVar2 = (undefined2 *)0x6798;
    puVar3 = (undefined2 *)0x679b;
  }
  else {
    puVar2 = (undefined2 *)-(uVar1 * 3 + -0x679e);
    *puVar2 = *(undefined2 *)0x11be;
    *(undefined *)(puVar2 + 1) = *(undefined *)0x11c0;
    puVar2 = (undefined2 *)(uVar1 * 3 + 0x6795);
    puVar3 = (undefined2 *)0x11c4;
  }
  *puVar2 = *puVar3;
  *(undefined *)(puVar2 + 1) = *(undefined *)(puVar3 + 1);
  if (*(byte *)0xd096 != uVar1) {
    FUN_1000_3517(0xe7,0x6798,2);
  }
  local_4 = (undefined)uVar1;
  *(undefined *)0xd096 = local_4;
  return;
}



void __cdecl16near FUN_1000_3e20(uint param_1)

{
  undefined2 unaff_DS;
  undefined *local_6;
  
  local_6 = (undefined *)((ulong)param_1 << 0x10);
  *(uint *)0xe088 = param_1;
  *(undefined *)0xe092 = *local_6;
  *(undefined *)0xe093 = *(undefined *)0x2;
  *(undefined *)0xe095 = 2;
  *(undefined *)0xe094 = 2;
  *(undefined2 *)0xe090 = 0;
  *(undefined2 *)0xe08c = 0;
  *(undefined2 *)0xe08e = 0;
  *(undefined2 *)0xe08a = 0;
  return;
}



void __cdecl16near FUN_1000_3e5e(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x73f2 != '\0') {
    FUN_1000_76d1(0);
  }
  return;
}



void __cdecl16near FUN_1000_3e6d(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x1000;
  while( true ) {
    iVar1 = thunk_EXT_FUN_0000_0000(uVar2);
    if (iVar1 != 0) break;
    uVar2 = 0x1a95;
    thunk_EXT_FUN_0000_0000(0x1a95);
  }
  return;
}



void __cdecl16near FUN_1000_3e84(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xe08a = param_1;
  *(undefined2 *)0xe08c = param_2;
  if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
    FUN_1000_85a7();
  }
  return;
}



undefined2 __cdecl16near FUN_1000_3ea5(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  uVar3 = 0x1000;
  do {
    FUN_1000_8427();
    uVar2 = uVar3;
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
      iVar1 = thunk_EXT_FUN_0000_0000(uVar3,0);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = 0x1a95;
      iVar1 = thunk_EXT_FUN_0000_0000(0x1a95,1);
      if (iVar1 != 0) {
        return 2;
      }
    }
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
      FUN_1000_8545();
      iVar1 = FUN_1000_8530(0);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_1000_8530(1);
      if (iVar1 != 0) {
        return 2;
      }
    }
    uVar3 = 0x1a95;
    iVar1 = thunk_EXT_FUN_0000_0000(uVar2);
    if (iVar1 == 0) {
      uVar3 = 0x1a95;
      local_4 = thunk_EXT_FUN_0000_0000(0x1a95);
      if (local_4 == 0x1000) {
        FUN_1000_7611();
      }
      local_4 = local_4 & 0xff;
      if (local_4 == 0xd) {
        return 1;
      }
      if (local_4 == 0x1b) {
        return 2;
      }
    }
  } while( true );
}



char __cdecl16near FUN_1000_3f33(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  uint local_8;
  char local_4;
  
  uVar3 = 0x1000;
  do {
    if (param_1 == 0) break;
    FUN_1000_8427();
    param_1 = param_1 + -1;
    bVar1 = false;
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
      iVar2 = thunk_EXT_FUN_0000_0000(uVar3,0);
      if (iVar2 == 0) {
        uVar3 = 0x1a95;
        iVar2 = thunk_EXT_FUN_0000_0000(0x1a95,1);
        if (iVar2 == 0) goto LAB_1000_3f73;
      }
      uVar3 = 0x1a95;
      bVar1 = true;
    }
LAB_1000_3f73:
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
      FUN_1000_8545();
      iVar2 = FUN_1000_8530(0);
      if ((iVar2 != 0) || (iVar2 = FUN_1000_8530(1), iVar2 != 0)) {
        bVar1 = true;
      }
    }
  } while (bVar1);
  local_4 = '\0';
  while( true ) {
    iVar2 = thunk_EXT_FUN_0000_0000(uVar3);
    if (iVar2 == 0) {
      local_8 = thunk_EXT_FUN_0000_0000(0x1a95);
      if (local_8 == 0x1000) {
        FUN_1000_7611();
      }
      local_8 = local_8 & 0xff;
      if (local_8 == 0xd) {
        local_4 = '\x01';
      }
      if (local_8 == 0x1b) {
        local_4 = '\x02';
      }
      if (local_8 == 0x20) {
        local_4 = '\x03';
      }
    }
    if ((param_1 == 0) || (local_4 != '\0')) break;
    FUN_1000_8427();
    param_1 = param_1 + -1;
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 1) != 0) {
      iVar2 = thunk_EXT_FUN_0000_0000(0x1a95,0);
      if (iVar2 != 0) {
        local_4 = '\x01';
      }
      iVar2 = thunk_EXT_FUN_0000_0000(0x1a95,1);
      if (iVar2 != 0) {
        local_4 = '\x02';
      }
    }
    uVar3 = 0x1a95;
    if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
      FUN_1000_8545();
      iVar2 = FUN_1000_8530(0);
      if (iVar2 != 0) {
        local_4 = '\x01';
      }
      iVar2 = FUN_1000_8530(1);
      if (iVar2 != 0) {
        local_4 = '\x02';
      }
    }
  }
  return local_4;
}



int __cdecl16near FUN_1000_405f(undefined2 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_3f33(param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar2 = 0x1a;
    }
    else {
      if (uVar1 != 2) {
        if (uVar1 - 3 != 0) {
          return uVar1 - 3;
        }
        thunk_EXT_FUN_0000_0000(0x1000,0x1a);
        return 1;
      }
      uVar2 = 0x23;
    }
    thunk_EXT_FUN_0000_0000(0x1000,uVar2);
  }
  return 0;
}



uint __cdecl16near FUN_1000_40a4(undefined2 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000_800a(param_1);
  if (uVar1 < 0x10) {
    FUN_1000_9430(0xcfc);
    FUN_1000_76d1(0);
  }
  return uVar1;
}



void __cdecl16near FUN_1000_40cf(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000_8030(param_1);
  if (iVar1 != 0) {
    FUN_1000_9430(0xd26);
    FUN_1000_76d1(0);
  }
  return;
}



void __cdecl16near FUN_1000_40f0(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_1c;
  int local_1a;
  int local_18;
  
  uVar3 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
  iVar2 = (int)*(undefined4 *)0xcaca;
  *(undefined2 *)0xcabe = *(undefined2 *)(iVar2 + 0x3e);
  *(undefined2 *)0xb38e = *(undefined2 *)(iVar2 + 0x38);
  *(undefined2 *)0xb38c = *(undefined2 *)(iVar2 + 0x3a);
  FUN_1000_5466(*(undefined2 *)(*(int *)(iVar2 + 0x38) * 2 + 0xd6a));
  FUN_1000_4239();
  uVar3 = (undefined2)((ulong)*(undefined4 *)0xe096 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xe096;
  *(undefined *)0xcad2 = *(undefined *)(iVar2 + 0x38);
  *(undefined *)0xcad3 = *(undefined *)(iVar2 + 0x3a);
  *(undefined *)0xcad4 = *(undefined *)(iVar2 + 0x3c);
  *(undefined *)0xcad5 = *(undefined *)(iVar2 + 0x3e);
  *(undefined *)0xd33a = 0;
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    for (local_1a = 0; local_1a < 0x10; local_1a = local_1a + 1) {
      if ((*(byte *)(local_1a + local_18 * 0x10 + -0x3528) & 0x10) != 0) {
        *(undefined *)0xd33a = 1;
      }
    }
  }
  local_1c = -0x3422;
  for (local_18 = 0; local_18 <= *(int *)0xd33c; local_18 = local_18 + 1) {
    *(byte *)(local_1c + 8) = *(byte *)(local_1c + 8) & 0x3f;
    local_1c = local_1c + 0x10;
  }
  local_18 = FUN_1000_76c0_rand(3);
  while (local_18 != 0) {
    iVar2 = FUN_1000_76c0_rand(*(undefined2 *)0xd33c);
    iVar1 = iVar2 * 0x10;
    if ((((iVar2 != *(int *)0xe060) && (iVar2 != *(int *)0xe072)) &&
        (*(int *)(iVar1 + -0x341c) != 0)) &&
       (((*(uint *)(iVar1 + -0x341a) & 0x400) == 0 && ((*(uint *)(iVar1 + -0x341a) & 0x100) == 0))))
    {
      *(byte *)(iVar1 + -0x341a) = *(byte *)(iVar1 + -0x341a) | 0x40;
      local_18 = local_18 + -1;
    }
  }
  local_1c = -0x3422;
  for (local_18 = 0; local_18 <= *(int *)0xd33c; local_18 = local_18 + 1) {
    if ((*(byte *)(local_1c + 8) & 0x40) != 0) {
      iVar2 = FUN_1000_76c0_rand(3);
      if (iVar2 == 0) {
        *(byte *)(local_1c + 8) = *(byte *)(local_1c + 8) | 0x80;
        *(undefined2 *)(local_1c + 6) = 0;
      }
    }
    local_1c = local_1c + 0x10;
  }
  return;
}



int __cdecl16near FUN_1000_4239(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar15;
  int local_d0;
  int current_mission;
  int mission_count;
  byte avail_targets [128];
  char local_4a;
  int local_48;
  int local_46;
  int local_44;
  int local_42;
  uint local_40 [4];
  int local_38;
  int local_36;
  byte world_object_not15;
  char local_30;
  int *local_2e;
  char local_2c;
  int local_2a;
  uint local_28;
  int local_26;
  int local_24;
  undefined2 local_22 [9];
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  *(undefined2 *)0xd876 = 0;
  local_36 = 0x1c2;
  local_4 = 900;
  local_26 = 900;
LAB_1000_4256:
  do {
                    // 4256
    local_4 = local_4 + 1;
    if (0x32 < local_4) {
                    // construct array of non-zero world_objs, and pick one which is not 15
      current_mission = 0;
      local_4 = 0;
      for (local_46 = 0; local_46 < 0x80; local_46 = local_46 + 1) {
                    // wld_obj_table
        if (*(char *)(local_46 + -0x2d5a) != '\0') {
          avail_targets[current_mission] = (byte)local_46;
          current_mission = current_mission + 1;
        }
      }
      do {
        iVar7 = FUN_1000_76c0_rand(current_mission);
        world_object_not15 = avail_targets[iVar7];
                    // randomly pick wld_obj_table != 15
      } while (*(char *)((char)world_object_not15 + -0x2d5a) == '\x15');
    }
    do {
                    // 42a8
                    // glob_settings.mission == air
      if ((*(byte *)((int)*(undefined4 *)0xcaca + 0x3c) & 1) == 0) {
        do {
                    // excluding first 3 targets, pick random target where flags (wld_010) == 1
                    // regular_targets
          local_40[3] = FUN_1000_76c0_rand(*(int *)0xe084 + -3);
          local_40[3] = local_40[3] + 3;
                    // wld_010
        } while ((*(uint *)(local_40[3] * 0x10 + -0x341a) & 0xd01) != 1);
                    // and save to primary target
        *(int *)0xe060 = local_40[3];
      }
      else {
                    // 42dc
        local_2c = '\0';
        do {
                    // 42e0
                    // get primary target from picked object
          iVar7 = FUN_1000_51e8(1,(int)(char)world_object_not15);
          *(int *)0xe060 = iVar7;
          if (iVar7 == -1) goto LAB_1000_42f6;
                    // 42fe
                    // retry if target flags == air (wld_010 == 1) or
                    // or wld_016 object != world_object_not15
          if (((*(uint *)(iVar7 * 0x10 + -0x341a) & 0x801) == 1) ||
             ((*(byte *)(*(int *)0xe060 * 0x10 + -0x3414) & 0x7f) != world_object_not15)) {
            local_2c = '\0';
          }
          else {
            local_2c = '\x01';
          }
        } while (local_2c == '\0');
      }
                    // 4331
                    // wld_target_data
      local_2e = (int *)(*(int *)0xe060 * 0x10 + -0x3422);
      local_46 = 0;
      do {
        do {
                    // 4343
          iVar7 = FUN_1000_76c0_rand(0x3200);
                    // pick random object near target x coord
          local_40[3] = iVar7 + local_2e[1] + -0x1900;
          iVar7 = FUN_1000_76c0_rand(0x3200);
                    // pick random object near target y coord
          local_44 = iVar7 + local_2e[2] + -0x1900;
          if ((int)local_40[3] < 0x840) {
            local_40[3] = 0x840;
          }
          else if (0x77bf < (int)local_40[3]) {
            local_40[3] = 0x77bf;
          }
          if (local_44 < 0x840) {
            local_44 = 0x840;
          }
          else if (0x77bf < local_44) {
            local_44 = 0x77bf;
          }
                    // wld_73a
                    // retry until wld_73a[obj1 + obj2] divisible by 4
        } while ((*(byte *)(((int)local_40[3] >> 0xb) + (local_44 >> 0xb) * 0x10 + -0x3528) & 3) !=
                 0);
                    // 43b8
                    // get secondary target from picked object
        iVar7 = FUN_1000_512e(local_40[3],local_44,2);
        *(int *)0xe072 = iVar7;
        iVar7 = iVar7 * 0x10;
                    // wld_target_data
        local_48 = iVar7 + -0x3422;
                    // retry if glob_settings.mission == strike and
                    // target flags == air (wld_010 == 1)
        if ((*(int *)0xe072 == -1) ||
           (((*(byte *)((int)*(undefined4 *)0xcaca + 0x3c) & 1) != 0 &&
            ((*(uint *)(*(int *)0xe072 * 0x10 + -0x341a) & 0x801) == 1)))) {
          local_2c = '\0';
        }
        else {
          local_2c = '\x01';
        }
                    // 4403
        local_46 = local_46 + 1;
                    // try at most 100 times
        if (100 < local_46) goto LAB_1000_4256;
      } while (local_2c == '\0');
                    // 4418
                    // retry if x,y coords of e060,e072 are the same or
                    // manhattan distance is too big
      if (((local_2e[1] == *(int *)(iVar7 + -0x3420)) && (local_2e[2] == *(int *)(iVar7 + -0x341e)))
         || (uVar8 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,*(undefined2 *)0xe072),
            0x6400 < (int)(uVar8 & 0xffc0))) {
        local_30 = '\0';
      }
      else {
        local_30 = '\x01';
      }
    } while (local_30 == '\0');
                    // 4455
                    // at this point, both e060 and e072 have been picked
                    // now pick the takeoff/landing targets
    for (current_mission = 0; current_mission < 2; current_mission = current_mission + 1) {
      local_40[current_mission] = 0x7fff;
                    // find special targets? ie skip past regular targets
                    // wld_target_data
      local_2e = (int *)(*(int *)0xe084 * 0x10 + -0x3422);
                    // find special targets? ie skip past regular targets
                    // wld_max_targets
      for (local_46 = *(int *)0xe084; local_46 < *(int *)0xd33c; local_46 = local_46 + 1) {
                    // 456b
                    // skip if special target flags (wld_010) == 401 or 601
        if (((local_2e[4] & 0x500U) == 0) || ((local_2e[4] & 0x201U) == 0)) {
          local_4a = '\0';
        }
        else {
          local_4a = '\x01';
        }
        uVar14 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
                    // glob_settings.theater == cuba
        if ((*(int *)((int)*(undefined4 *)0xcaca + 0x38) == 7) && (*local_2e == 0x11)) {
          local_4a = '\0';
        }
                    // glob_settings.realism == lockheed
        if ((*(int *)(*(int *)0xcaca + 0x42) != 0) && ((*(byte *)((int)local_2e + 9) & 2) != 0)) {
          local_4a = '\0';
        }
                    // 4491
        if (local_4a != '\0') {
          if (current_mission == 0) {
                    // first loop (takeoff)
                    // md(picked target, special target)
            iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,local_46);
            iVar9 = FUN_1000_76c0_rand(0x96);
                    // random coord = md + rand(-4b to 4b) * 40
            local_40[2] = iVar7 + (iVar9 + -0x4b) * 0x40;
          }
          else {
                    // second loop (landing)
                    // random coord = md(picked target, special target)
            local_40[2] = FUN_1000_532a_manhattan_distance
                                    (*(undefined2 *)(current_mission * 0x12 + -0x1fa0),local_46);
          }
                    // 44e6
                    // if target flags (hi byte) wld_011 == odd
          if ((*(byte *)((int)local_2e + 9) & 1) != 0) {
            iVar7 = FUN_1000_76c0_rand(100);
                    // random coord = (rand(100) + 32) * 40
            local_40[2] = local_40[2] + (iVar7 + 0x32) * 0x40;
          }
                    // pick [random coord, 0, or 7fff]
          local_40[2] = FUN_1000_59d8(local_40[2],0,0x7fff);
          if ((int)local_40[2] < 0x7fff) {
            iVar7 = FUN_1000_76c0_rand(0x500);
                    // if (random coord < (wld_010 == 601) & c80 + local_40[loop])
            if ((int)(iVar7 + local_40[2]) <
                (int)((-(uint)((*(byte *)((int)local_2e + 9) & 2) != 0) & 0xc80) +
                     local_40[current_mission])) {
                    // 4545
                    // save takeoff/landing target
                    // and manhattan distance
              *(int *)(current_mission * 0x12 + -0x1f9e) = local_46;
              local_40[current_mission] = local_40[2];
            }
          }
        }
        local_2e = local_2e + 8;
      }
    }
                    // 45b3
                    // if glob_settings.mission == training
    uVar8 = *(uint *)((int)*(undefined4 *)0xcaca + 0x3c);
    if (((uVar8 & 2) != 0) && (*(int *)0xb38e == 0)) {
      if ((uVar8 & 1) == 0) {
                    // glob_settings.mission == air
        *(undefined2 *)0xe060 = 0x16;
        *(undefined2 *)0xe072 = 8;
        *(undefined2 *)0xe062 = 0x22;
        *(undefined2 *)0xe074 = 0x23;
      }
      else {
                    // glob_settings.mission == strike
        *(undefined2 *)0xe060 = 3;
        *(undefined2 *)0xe072 = 0xf;
        *(undefined2 *)0xe062 = 0x22;
        *(undefined2 *)0xe074 = 0x21;
      }
      local_40[0] = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,*(undefined2 *)0xe062);
      local_40[1] = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe072,*(undefined2 *)0xe074);
    }
                    // 461f
                    // md(takeoff, primary) + md(primary, secondary) + md(secondary, landing)
    iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,*(undefined2 *)0xe072);
    local_6 = ((int)local_40[1] >> 6) + (iVar7 >> 6) + ((int)local_40[0] >> 6);
                    // if distance < 450 or 950 < distance
    if ((local_26 + local_4 < local_6) || (local_6 < local_36)) {
                    // shrink 450 by 5 every loop and try again
      local_36 = local_36 + *(int *)0xcabe + -5;
      goto LAB_1000_4256;
    }
                    // 465c
                    // process primary on first loop, secondary on second loop
    for (local_46 = 0; uVar8 = local_40[0], local_46 < 2; local_46 = local_46 + 1) {
                    // set mission type e05e/e070 = 0
      *(undefined2 *)(local_46 * 0x12 + -0x1fa2) = 0;
      for (local_d0 = 0; local_d0 < 2; local_d0 = local_d0 + 1) {
        mission_count = 0;
        for (current_mission = 0; current_mission < 0x52; current_mission = current_mission + 1) {
                    // 4664
                    // find compatible mission from mission table and world data
          iVar7 = current_mission * 0xc;
          uVar14 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
          iVar9 = (int)*(undefined4 *)0xcaca;
                    // if mis_table_11da[glob_settings.theater].bitmask and
                    // mis_table_11dc[glob_settings.tension].bitmask and
                    // wld_obj_table_6ba[target_data_008[e060/72].object_016] == mis_table_11e0[]
                    // and (first loop || primary mission != current mission)
          if (((((*(uint *)(iVar7 + 0x11da) & 1 << (*(byte *)(iVar9 + 0x38) & 0x1f)) != 0) &&
               ((*(uint *)(iVar7 + 0x11dc) & 1 << (*(byte *)(iVar9 + 0x3a) & 0x1f)) != 0)) &&
              ((int)*(char *)((*(byte *)(*(int *)(local_46 * 0x12 + -0x1fa0) * 0x10 + -0x3414) &
                              0x7f) + 0xd2a6) == *(int *)(iVar7 + 0x11e0))) &&
             ((local_46 == 0 || (*(int *)0xe066 != current_mission)))) {
                    // 46cb
                    // skip when local_d0 == 0 (first loop)
            if ((local_d0 != 0) && (local_24 == mission_count)) {
              iVar10 = current_mission * 0xc;
              iVar9 = local_46 * 0x12;
                    // e05e_mission_type = mis_table_11de[current_mission].mission_type
              *(undefined2 *)(iVar9 + -0x1fa2) = *(undefined2 *)(iVar10 + 0x11de);
                    // e066_mission_number = current_mission
              *(int *)(iVar9 + -0x1f9a) = current_mission;
              iVar7 = *(int *)(iVar10 + 0x11e2);
                    // e064_mission_code = mis_table_11e2[current_mission].mission_code
              *(int *)(iVar9 + -0x1f9c) = iVar7;
              if (0 < *(int *)(iVar10 + 0x11e4)) {
                *(int *)(iVar9 + -0x1f9c) = iVar7 + (uint)*(byte *)(iVar10 + 0x11e4) * 0x100;
              }
            }
            mission_count = mission_count + 1;
          }
        }
        if (mission_count == 0) {
          local_24 = 0;
        }
        else {
          local_24 = FUN_1000_76c0_rand(mission_count);
        }
      }
    }
                    // 4778
    uVar14 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
                    // glob_settings.mission == training
    uVar11 = *(uint *)((int)*(undefined4 *)0xcaca + 0x3c);
    if (((uVar11 & 2) != 0) && (*(int *)0xb38e == 0)) {
      iVar7 = (-(uint)((uVar11 & 1) == 0) & 0x32) + 5;
                    // e05e
      *(undefined2 *)0xe05e = *(undefined2 *)(iVar7 * 0xc + 0x11de);
      *(int *)0xe066 = iVar7;
      *(undefined2 *)0xe064 = *(undefined2 *)(iVar7 * 0xc + 0x11e2);
    }
                    // 47bf
                    // if glob_settings.mission == air
                    // or 0 < mission_type < 5
    if (((((*(byte *)(*(int *)0xcaca + 0x3c) & 1) == 0) ||
         ((*(int *)0xe05e < 5 && (*(int *)0xe070 < 5)))) && (*(int *)0xe05e != 0)) &&
       (*(int *)0xe070 != 0)) {
                    // 47e9
                    // if mission_numbers are not the same
      if (*(int *)0xe066 != *(int *)0xe078) {
                    // 47f5
                    // if md(0) < md(1) and global_settings.mission != training
        if (((int)local_40[0] < (int)local_40[1]) && ((*(byte *)(*(int *)0xcaca + 0x3c) & 2) == 0))
        {
                    // swap primary and secondary
          puVar13 = local_22;
          puVar12 = (undefined2 *)0xe05e;
          for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar13;
            puVar13 = puVar13 + 1;
            puVar2 = puVar12;
            puVar12 = puVar12 + 1;
            *puVar3 = *puVar2;
          }
          puVar12 = (undefined2 *)0xe05e;
          puVar13 = (undefined2 *)0xe070;
          for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar2 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar3 = *puVar2;
          }
          puVar12 = (undefined2 *)0xe070;
          puVar13 = local_22;
          for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar3 = puVar12;
            puVar12 = puVar12 + 1;
            puVar2 = puVar13;
            puVar13 = puVar13 + 1;
            *puVar3 = *puVar2;
          }
          local_28 = local_40[0];
          local_40[0] = local_40[1];
          local_40[1] = uVar8;
        }
                    // 483c
                    // if secondary.mission_code == 0
        if (((*(byte *)0xe076 & 2) == 0) || ((*(byte *)0xe076 & 2) == 0)) {
                    // 484b
          iVar7 = *(int *)0xe070;
                    // if secondary_mission_type < 5 or > 8 and
                    // primary_mission_type != 4 or global_settings.quality != green and
                    // one of the mission_codes != secret airstrip
          if (((iVar7 < 5) || (iVar7 != 8 && 2 < iVar7 + -5)) &&
             (((*(int *)0xe05e != 4 || (*(int *)0xcabe != 0)) &&
              (((*(byte *)0xe064 & 8) == 0 || ((*(byte *)0xe076 & 8) == 0)))))) {
                    // 487d
                    // Goal reached, no further mission changes, as per Part 1
            if ((*(byte *)0xe064 & 2) != 0) {
              iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe062,*(undefined2 *)0xe060);
              *(int *)0xd876 = (iVar7 >> 4) + 0x1c2;
            }
            if ((*(byte *)0xe076 & 2) != 0) {
              iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe062,*(undefined2 *)0xe072);
              *(int *)0xd876 = (iVar7 >> 4) + 0x1c2;
            }
            *(undefined2 *)0xcabc = 0xffff;
            if (*(int *)(*(int *)0xe066 * 0xc + 0x11e4) < 0) {
              *(int *)0xd3d4 = -*(int *)(*(int *)0xe066 * 0xc + 0x11e4);
            }
            if (*(int *)0xe05e != 5) goto LAB_1000_49a2;
            local_28 = 0x7fff;
            *(undefined2 *)0xcbdc = 0xffff;
                    // regular_targets
            for (local_46 = 0; local_46 < *(int *)0xe084; local_46 = local_46 + 1) {
              iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,local_46);
              local_40[2] = FUN_1000_96ae_abs(iVar7 - local_40[0]);
                    // wld_010
              if ((((int)local_40[2] < (int)local_28) &&
                  (uVar8 = *(uint *)(local_46 * 0x10 + -0x341a), (uVar8 & 1) != 0)) &&
                 ((uVar8 & 0x100) == 0)) {
                *(int *)0xcbdc = local_46;
                local_28 = local_40[2];
              }
            }
            if (*(int *)0xcbdc != -1) {
              FUN_1000_5356(0,*(undefined2 *)0xcbdc);
                    // wld_40a
              *(undefined2 *)0xd3be = *(undefined2 *)0xe060;
              *(byte *)0xd3d6 = *(byte *)0xd3d6 | 4;
              *(undefined2 *)0xcabc = 0;
              uVar14 = FUN_1000_58be(*(undefined2 *)0xcbdc);
              FUN_1000_94ac(0xd8e,uVar14);
              iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xcbdc,*(undefined2 *)0xe060);
              *(int *)0xd876 = iVar7 / ((*(int *)(*(int *)0xcabc * 0x24 + -0x2c28) >> 6) * 3);
LAB_1000_49a2:
              if ((*(int *)0xe05e == 7) || (*(int *)0xe05e == 6)) {
                local_28 = 0x7fff;
                    // wld_max_targets
                for (local_46 = 3; local_46 < *(int *)0xd33c; local_46 = local_46 + 1) {
                    // wld_010
                  uVar8 = *(uint *)(local_46 * 0x10 + -0x341a);
                  if (((uVar8 & 0x500) != 0) && ((uVar8 & 0xa00) == 0)) {
                    iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xe060,local_46);
                    local_40[2] = FUN_1000_96ae_abs(iVar7 - local_40[0]);
                    if (((int)local_40[2] < (int)local_28) && (*(int *)0xe062 != local_46)) {
                      *(int *)0xcbdc = local_46;
                      local_28 = local_40[2];
                    }
                  }
                }
                uVar14 = FUN_1000_58be(*(undefined2 *)0xcbdc);
                FUN_1000_94ac(0xd8e,uVar14);
                if (*(int *)0xe05e == 7) {
                  FUN_1000_5356(0,*(undefined2 *)0xe060);
                  *(undefined2 *)0xd3be = *(undefined2 *)0xcbdc;
                  *(byte *)0xd3d6 = *(byte *)0xd3d6 | 4;
                  *(undefined2 *)0xcabc = 0;
                  *(undefined2 *)0xcbdc = *(undefined2 *)0xe060;
                }
                else {
                  FUN_1000_5356(0,*(undefined2 *)0xcbdc);
                  uVar14 = *(undefined2 *)0xe060;
                  *(undefined2 *)0xd3be = uVar14;
                  *(byte *)0xd3d6 = *(byte *)0xd3d6 | 4;
                  *(undefined2 *)0xcabc = 0;
                  iVar7 = FUN_1000_532a_manhattan_distance(*(undefined2 *)0xcbdc,uVar14);
                  *(int *)0xd876 = iVar7 / ((int)(*(uint *)0xd3d8 & 0xffdf) >> 5);
                }
              }
              if (*(int *)0xe05e == 8) {
                FUN_1000_5356(0,*(undefined2 *)0xe060);
                if ((*(int *)0xd3d4 == 2) && (*(int *)0xb38e == 1)) {
                  *(undefined2 *)0xd3d4 = 0xc;
                }
                *(byte *)0xd3d6 = *(byte *)0xd3d6 | 0x40;
                *(undefined2 *)0xcabc = 0;
                uVar14 = *(undefined2 *)0xe060;
                *(undefined2 *)0xd3be = uVar14;
                *(undefined2 *)0xcbdc = uVar14;
              }
              if (*(int *)0xcabc == 0) {
                *(undefined2 *)0xd3da = 19999;
              }
              for (local_46 = 0; local_46 < 2; local_46 = local_46 + 1) {
                iVar7 = local_46 * 0x12;
                uVar14 = FUN_1000_58be(*(undefined2 *)(iVar7 + -0x1fa0));
                FUN_1000_94ac(iVar7 + -0x1f98,uVar14);
                if (*(int *)(iVar7 + -0x1fa0) < 3) {
                  local_28 = 0x7fff;
                    // wld_max_targets
                  for (current_mission = 3; current_mission < *(int *)0xd33c;
                      current_mission = current_mission + 1) {
                    iVar7 = current_mission * 0x10;
                    if ((*(byte *)(iVar7 + -0x3419) & 5) == 0) {
                      iVar9 = local_46 * 0x12;
                      iVar10 = FUN_1000_532a_manhattan_distance
                                         (current_mission,*(undefined2 *)(iVar9 + -0x1fa0));
                    // wld_target_data
                      if ((iVar10 < (int)local_28) && (*(int *)(iVar7 + -0x3422) != 0)) {
                        local_28 = FUN_1000_532a_manhattan_distance
                                             (current_mission,*(undefined2 *)(iVar9 + -0x1fa0));
                    // wld_target_data
                        *(undefined2 *)(*(int *)(iVar9 + -0x1fa0) * 0x10 + -0x3422) =
                             *(undefined2 *)(iVar7 + -0x3422);
                      }
                    }
                  }
                }
              }
              *(int *)0xe06e = *(int *)0xd876 >> 4;
              iVar9 = *(int *)0xe062 * 0x10;
              uVar8 = *(uint *)(iVar9 + -0x3420);
              uVar15 = FUN_1000_97c0_aNlshl();
              *(undefined2 *)0xd29a = (int)uVar15;
              *(undefined2 *)0xd29c = (int)((ulong)uVar15 >> 0x10);
              uVar15 = FUN_1000_97c0_aNlshl();
              uVar11 = -(uint)((*(byte *)(iVar9 + -0x3419) & 2) == 0) & 0x708;
              *(int *)0xd326 = (uint)uVar15 - uVar11;
              *(int *)0xd328 = (int)((ulong)uVar15 >> 0x10) - (uint)((uint)uVar15 < uVar11);
              iVar7 = *(int *)0xe060;
              uVar11 = *(uint *)(iVar7 * 0x10 + -0x3420);
              *(uint *)0x15b6 = uVar11;
              uVar4 = *(uint *)(iVar7 * 0x10 + -0x341e);
              *(uint *)0x15b8 = uVar4;
              *(int *)0x15b2 = (uVar8 >> 1) + (uVar11 >> 1);
              *(int *)0x15b4 = (*(uint *)(iVar9 + -0x341e) >> 1) + (uVar4 >> 1);
              iVar7 = *(int *)0xe074;
              *(undefined2 *)0x15be = *(undefined2 *)(iVar7 * 0x10 + -0x3420);
              *(undefined2 *)0x15c0 = *(undefined2 *)(iVar7 * 0x10 + -0x341e);
              iVar7 = *(int *)0xe072;
              *(undefined2 *)0x15ba = *(undefined2 *)(iVar7 * 0x10 + -0x3420);
              *(undefined2 *)0x15bc = *(undefined2 *)(iVar7 * 0x10 + -0x341e);
              if ((*(byte *)0xe064 & 0x10) != 0) {
                *(int *)0x15b6 = (uint)(byte)(((byte)(uVar11 >> 8) & 0xfc) + 2) << 8;
                *(int *)0x15b8 = (uint)(byte)(((byte)(uVar4 >> 8) & 0xfc) + 2) << 8;
              }
              local_46 = 0;
              do {
                    // wld_0408
                if (*(int *)0xd890 + -4 <= local_46) {
                    // wld_004
                  for (local_46 = 0; local_46 < *(int *)0xcace; local_46 = local_46 + 1) {
                    local_38 = *(int *)(local_46 * 0x10 + -0x341c);
                    if ((local_38 != 0) && (local_38 != 0x15)) {
                      iVar7 = FUN_1000_76c0_rand(5);
                    // glob_settings.tension
                      switch(iVar7 + (uint)(*(int *)((int)*(undefined4 *)0xcaca + 0x3a) != 0) +
                             *(int *)0xcabe) {
                      case 0:
                      case 1:
                      case 3:
                        local_38 = *(int *)(local_38 * 4 + 0x1ee6);
                        break;
                      case 5:
                      case 7:
                      case 8:
                        local_38 = *(int *)(local_38 * 4 + 0x1ee4);
                      }
                      iVar7 = local_46 * 0x10;
                      *(int *)(iVar7 + -0x341c) = local_38;
                    // wld_010
                    // glob_settings.tension
                      if (((*(byte *)(iVar7 + -0x341a) & 8) != 0) &&
                         (iVar9 = FUN_1000_76c0_rand(10),
                         *(int *)((int)*(undefined4 *)0xcaca + 0x3a) + *(int *)0xcabe + 2 < iVar9))
                      {
                        *(undefined2 *)(iVar7 + -0x341c) = 0;
                      }
                    }
                  }
                  for (local_40[3] = 0; (int)local_40[3] < 0x10; local_40[3] = local_40[3] + 1) {
                    for (local_44 = 0; local_44 < 0x10; local_44 = local_44 + 1) {
                      iVar7 = local_44 * 0x10;
                    // wld_73a
                      if (((*(byte *)(local_40[3] + iVar7 + -0x3528) & 0x10) != 0) &&
                         (iVar9 = FUN_1000_76c0_rand(5), *(int *)0xcabe <= iVar9)) {
                    // wld_73a
                        pbVar1 = (byte *)(local_40[3] + iVar7 + -0x3528);
                        *pbVar1 = *pbVar1 & 0xef;
                      }
                    }
                  }
                  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x38) = 1;
                  iVar7 = FUN_1000_76c0_rand(2);
                  *(int *)((int)*(undefined4 *)0xe096 + 0x3c) = (-(uint)(iVar7 == 0) & 0xfffc) + 9;
                  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3e) = 0;
                  *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3a) = 2;
                  *(int *)((int)*(undefined4 *)0xe096 + 0x2e) = local_6 * 0xc;
                  if (10000 < local_6 * 0xc) {
                    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3c) = 0x11;
                  }
                  local_c = 0;
                  for (local_46 = 0; local_46 < 2; local_46 = local_46 + 1) {
                    local_42 = -1;
                    if ((*(int *)(local_46 * 0x12 + -0x1fa2) == 1) && (local_c == 0)) {
                      local_42 = 0x10;
                      local_c = 1;
                    }
                    if ((*(int *)(local_46 * 0x12 + -0x1fa2) == 4) ||
                       (*(int *)(local_46 * 0x12 + -0x1fa2) == 3)) {
                      local_42 = 0x12;
                    }
                    if (*(int *)(local_46 * 0x12 + -0x1fa2) == 2) {
                    // wld_016
                    // wld_5ba
                      local_42 = FUN_1000_5282(*(byte *)((*(byte *)(*(int *)(local_46 * 0x12 +
                                                                            -0x1fa0) * 0x10 +
                                                                   -0x3414) & 0x7f) + 0xd7f6) & 0xf)
                      ;
                    }
                    if (local_42 != -1) {
                      *(int *)((int)*(undefined4 *)0xe096 + local_46 * 2 + 0x38) = local_42;
                    }
                  }
                    // glob_settings.mission == training
                  uVar8 = *(uint *)((int)*(undefined4 *)0xcaca + 0x3c);
                  if (((uVar8 & 2) != 0) && (*(int *)0xb38e == 0)) {
                    if ((uVar8 & 1) == 0) {
                    // glob_settings.mission == air
                      *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x38) = 1;
                      *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3c) = 5;
                    }
                    else {
                    // glob_settings.mission == strike
                      *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x38) = 5;
                      *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3c) = 1;
                    }
                    *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3e) = 0;
                    if (10000 < local_6 * 0xc) {
                      *(undefined2 *)((int)*(undefined4 *)0xe096 + 0x3e) = 0x11;
                    }
                  }
                  local_46 = 0;
                  do {
                    uVar14 = (undefined2)((ulong)*(undefined4 *)0xe096 >> 0x10);
                    *(uint *)(*(int *)0xe096 + local_46 * 2 + 0x40) =
                         (uint)*(byte *)(*(int *)((int)*(undefined4 *)0xe096 + 0x38 + local_46 * 2)
                                        + 0x1ec6);
                    local_46 = local_46 + 1;
                  } while (local_46 < 4);
                  local_a = ((byte)(*(char *)0xe078 + *(char *)0xe066) & 0xf) << 8;
                  if ((*(int *)0xe05e == 4) || (*(int *)0xe070 == 4)) {
                    *(undefined *)((int)*(undefined4 *)0xe096 + 0x33) = 1;
                  }
                  else {
                    // glob_settings.realism
                    if (*(int *)((int)*(undefined4 *)0xcaca + 0x42) == 0) {
                      iVar7 = FUN_1000_76c0_rand(10);
                      if (iVar7 < 3) {
                        cVar6 = '\0';
                      }
                      else {
                        cVar6 = '\x01';
                      }
                    }
                    else {
                      iVar7 = FUN_1000_76c0_rand(10);
                      cVar6 = '\x01' - (iVar7 == 0);
                    }
                    *(char *)((int)*(undefined4 *)0xe096 + 0x33) = cVar6;
                  }
                  FUN_1000_59fe(0xd88,local_a);
                  FUN_1000_59fe(0xd7c,*(int *)0xd876 + local_a);
                  FUN_1000_59fe(0xd82,*(int *)0xd876 + local_a + 0x1c2);
                  iVar7 = *(int *)0xd876;
                  *(int *)0xd876 = *(int *)0xd876 - (iVar7 + local_a) % 0x96;
                  return (iVar7 + local_a) / 0x96;
                }
                uVar8 = *(uint *)(local_46 * 0x24 + -0x2c2a);
                if ((uVar8 & 0x80) != 0) {
                  uVar11 = (int)local_40[0] >> 0xf;
                  local_2a = (4 - *(int *)0xcabe) *
                             (((int)((local_40[0] ^ uVar11) - uVar11) >> 2 ^ uVar11) - uVar11);
                  if ((uVar8 & 0x40) != 0) {
                    local_2a = local_40[0] << 1;
                  }
                  do {
                    do {
                    // regular_targets
                      iVar7 = FUN_1000_76c0_rand(*(int *)0xe084 + -3);
                      local_40[2] = iVar7 + 3;
                      iVar7 = local_40[2] * 0x10;
                    } while ((*(byte *)(iVar7 + -0x3419) & 1) != 0);
                    iVar7 = FUN_1000_5413_custom_manhattan_distance
                                      (*(int *)0x15b2 - *(int *)(iVar7 + -0x3420),
                                       *(int *)0x15b4 - *(int *)(iVar7 + -0x341e));
                    local_2a = local_2a + 0x10;
                  } while (local_2a < iVar7);
                  FUN_1000_5356(local_46,local_40[2]);
                  local_2a = 0x3000;
                  local_10 = FUN_1000_5743(*(int *)(*(int *)0xe062 * 0x10 + -0x3420) -
                                           *(int *)(local_46 * 0x24 + -0x2c40),
                                           *(int *)(local_46 * 0x24 + -0x2c3e) -
                                           *(int *)(*(int *)0xe062 * 0x10 + -0x341e));
                  for (current_mission = 0; current_mission < 8;
                      current_mission = current_mission + 1) {
                    // regular_targets
                    local_e = FUN_1000_76c0_rand(*(undefined2 *)0xe084);
                    local_e = local_e + 1;
                    iVar7 = local_e * 0x10;
                    if ((*(byte *)(iVar7 + -0x3419) & 4) == 0) {
                      iVar9 = local_46 * 0x24;
                      local_8 = FUN_1000_5743(*(int *)(iVar7 + -0x3420) - *(int *)(iVar9 + -0x2c40),
                                              *(int *)(iVar9 + -0x2c3e) - *(int *)(iVar7 + -0x341e))
                      ;
                      iVar7 = local_8 - local_10;
                      iVar10 = FUN_1000_96ae_abs(-iVar7);
                      if (iVar10 < local_2a) {
                        local_2a = FUN_1000_96ae_abs(-iVar7);
                        *(int *)(iVar9 + -0x2c42) = local_e;
                        break;
                      }
                    }
                  }
                }
                iVar7 = local_46 * 0x24;
                if (((*(byte *)(iVar7 + -0x2c29) & 1) != 0) && (*(int *)0xcabc != -1)) {
                  FUN_1000_5356(local_46,*(undefined2 *)0xcbdc);
                  *(undefined2 *)(iVar7 + -0x2c26) = 19999;
                }
                if (local_46 != 0) {
                  local_40[2] = 0;
                  do {
                    // regular_targets
                    local_e = FUN_1000_76c0_rand(*(int *)0xe084 + -3);
                    local_e = local_e + 3;
                    // wld_010
                    if (((*(uint *)(local_e * 0x10 + -0x341a) & 0x801) == 1) &&
                       (*(int *)(local_e * 0x10 + -0x3416) == 0)) break;
                    uVar8 = local_40[2] + 1;
                    bVar5 = (int)local_40[2] < 0x14;
                    local_40[2] = uVar8;
                  } while (bVar5);
                  iVar9 = local_e * 0x10;
                  *(undefined2 *)(iVar9 + -0x3418) = *(undefined2 *)(local_46 * 0x24 + -0x2c2c);
                  iVar7 = FUN_1000_76c0_rand(*(int *)0xb38e + 1);
                  *(int *)(iVar9 + -0x3416) = iVar7 + 1;
                }
                local_46 = local_46 + 1;
              } while( true );
            }
          }
        }
      }
    }
    else {
LAB_1000_42f6:
      local_4 = 900;
    }
  } while( true );
}



int __cdecl16near FUN_1000_512e(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  int local_6;
  
  uVar5 = FUN_1000_97c0_aNlshl();
  uVar5 = FUN_1000_97c0_aNlshl(uVar5);
  puVar1 = (undefined2 *)FUN_1000_7744_get_obj_from_coords_in_ca8e(uVar5);
  if (puVar1 == (undefined2 *)0x0) {
    param_3 = -1;
  }
  else {
    iVar2 = FUN_1000_97cc_aNlshr();
    iVar3 = FUN_1000_97cc_aNlshr();
                    // wld_max_targets
                    // find target with matching x,y coords as object
    for (local_6 = 3; local_6 < *(int *)0xd33c; local_6 = local_6 + 1) {
                    // wld_x_coord
                    // wld_y_coord
      if ((*(int *)(local_6 * 0x10 + -0x3420) == iVar2) &&
         (*(int *)(local_6 * 0x10 + -0x341e) == -(iVar3 + -0x8000))) {
        return local_6;
      }
    }
                    // if no match, overwrite entry at target_data[param_3]
    iVar4 = param_3 * 0x10;
                    // save wld_x_coord
    *(int *)(iVar4 + -0x3420) = iVar2;
                    // save wld_y_coord
    *(int *)(iVar4 + -0x341e) = -(iVar3 + -0x8000);
                    // save object at wld_016
    *(undefined2 *)(iVar4 + -0x3414) = CONCAT11((char)((uint)*puVar1 >> 8) + '\x01',(char)*puVar1);
  }
  return param_3;
}



int __cdecl16near FUN_1000_51e8(int param_1,char param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_a;
  
                    // get object info
  puVar1 = (undefined2 *)FUN_1000_7904_get_obj_info_in_ca8e((int)param_2);
  if (puVar1 == (undefined2 *)0x0) {
    param_1 = -1;
  }
  else {
                    // get object scaled x coord
    iVar2 = FUN_1000_97cc_aNlshr();
                    // get object scaled y coord
    iVar3 = FUN_1000_97cc_aNlshr();
                    // wld_max_targets
                    // find target with matching x,y coords as object
    for (local_a = 3; local_a < *(int *)0xd33c; local_a = local_a + 1) {
                    // wld_x_coord
                    // wld_y_coord
      if ((*(int *)(local_a * 0x10 + -0x3420) == iVar2) &&
         (*(int *)(local_a * 0x10 + -0x341e) == -(iVar3 + -0x8000))) {
        return local_a;
      }
    }
                    // if no match, overwrite entry at target_data[param_1]
    iVar4 = param_1 * 0x10;
                    // save wld_x_coord
    *(int *)(iVar4 + -0x3420) = iVar2;
                    // save wld_y_coord
    *(int *)(iVar4 + -0x341e) = -(iVar3 + -0x8000);
                    // save object at wld_016
    *(undefined2 *)(iVar4 + -0x3414) = CONCAT11((char)((uint)*puVar1 >> 8) + '\x01',(char)*puVar1);
  }
  return param_1;
}



undefined __cdecl16near FUN_1000_5282(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_18;
  uint local_16;
  undefined local_14 [16];
  byte local_4;
  
  local_18 = 0;
  local_4 = 0;
  if (*(int *)((int)*(undefined4 *)0xcaca + 0x42) == 0) {
    local_16 = 0;
  }
  else {
    local_16 = 2;
  }
  for (; local_16 < 0x10; local_16 = local_16 + 1) {
    if (*(char *)(local_16 + 0xd878) == '\0') {
      bVar1 = *(byte *)(param_1 + local_16 * 0x10 + 0x1d86);
      if ((int)(uint)local_4 < (int)(char)bVar1) {
        local_14[0] = (undefined)local_16;
        local_18 = 1;
        local_4 = bVar1;
      }
      else if ((int)*(char *)(param_1 + local_16 * 0x10 + 0x1d86) == (uint)local_4) {
        local_14[local_18] = (undefined)local_16;
        local_18 = local_18 + 1;
      }
    }
  }
  if (local_18 != 1) {
    iVar2 = FUN_1000_76c0_rand(local_18);
    local_14[0] = local_14[iVar2];
  }
  return local_14[0];
}



void __cdecl16near FUN_1000_532a_manhattan_distance(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
                    // compute manhattan distance from diff of x,y coords
  FUN_1000_5413_custom_manhattan_distance
            (*(int *)(param_1 * 0x10 + -0x3420) - *(int *)(param_2 * 0x10 + -0x3420),
             *(int *)(param_1 * 0x10 + -0x341e) - *(int *)(param_2 * 0x10 + -0x341e));
  return;
}



void __cdecl16near FUN_1000_5356(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  int iVar4;
  
  param_1 = param_1 * 0x24;
  iVar4 = *(int *)(param_1 + -0x2c2c);
  iVar2 = param_2 * 0x10;
  *(int *)(param_1 + -0x2c40) = *(int *)(iVar2 + -0x3420) + 9;
  *(int *)(param_1 + -0x2c3e) = *(int *)(iVar2 + -0x341e) + -0xc;
  uVar3 = FUN_1000_97c0_aNlshl();
  *(undefined2 *)(param_1 + -0x2c3a) = (int)uVar3;
  *(undefined2 *)(param_1 + -0x2c38) = (int)((ulong)uVar3 >> 0x10);
  uVar3 = FUN_1000_97c0_aNlshl();
  *(undefined2 *)(param_1 + -0x2c36) = (int)uVar3;
  *(undefined2 *)(param_1 + -0x2c34) = (int)((ulong)uVar3 >> 0x10);
  *(int *)(param_1 + -0x2c3c) = (-(uint)((*(byte *)(iVar2 + -0x3419) & 2) == 0) & 0xff80) + 0x8c;
  *(undefined2 *)(param_1 + -0x2c28) = *(undefined2 *)(iVar4 * 0x20 + 0x171a);
  *(undefined2 *)(param_1 + -0x2c32) = 0xfc00;
  *(undefined2 *)(param_1 + -0x2c30) = 0;
  *(undefined2 *)(param_1 + -0x2c2e) = 0;
  *(uint *)(param_1 + -0x2c2a) = *(uint *)(param_1 + -0x2c2a) | 0x403;
  *(int *)(param_1 + -0x2c42) = param_2;
  iVar4 = *(int *)(param_1 + -0x2c28);
  iVar2 = iVar4 >> 0xf;
  uVar3 = FUN_1000_97c0_aNlshl(iVar4,iVar2);
  uVar1 = FUN_1000_96f4(uVar3,iVar4,iVar2);
  *(undefined2 *)(param_1 + -0x2c26) = uVar1;
  return;
}



uint __cdecl16near FUN_1000_5413_custom_manhattan_distance(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_6;
  
  uVar1 = FUN_1000_96ae_abs(param_1);
  uVar2 = FUN_1000_96ae_abs(param_2);
  uVar3 = uVar1;
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
                    // var3 (ax) is less than var2 (cx)
                    // ex: ax=1c0, cx=1d4
                    // check for overflow, then return ax/2 + cx
  local_6 = ((int)uVar3 >> 1) + uVar2;
  iVar4 = ((int)uVar3 >> 0xf) + ((int)uVar2 >> 0xf) + (uint)CARRY2((int)uVar3 >> 1,uVar2);
  if ((-1 < iVar4) && ((0 < iVar4 || (0x7fff < local_6)))) {
    local_6 = 0x7fff;
  }
  return local_6;
}



void __cdecl16near FUN_1000_5466(undefined2 param_1)

{
  undefined local_12 [2];
  undefined local_10 [14];
  
  FUN_1000_94ac(local_12,param_1);
  FUN_1000_94ac(local_10,0xd93);
  FUN_1000_54bb(local_12);
  FUN_1000_94ac(local_10,0xd98);
  FUN_1000_7d71(local_12);
  FUN_1000_94ac(local_10,0xd9d);
  FUN_1000_7e88(local_12);
  return;
}



void __cdecl16near FUN_1000_54bb(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  iVar1 = _fopen(param_1,0xda2);
  *(int *)0xcac8 = iVar1;
  if (iVar1 != 0) {
    _fread(0xd88c,2,1,iVar1);
    _fread(0xd33c,2,1,*(undefined2 *)0xcac8);
    _fread(0xcace,2,1,*(undefined2 *)0xcac8);
    _fread(0xe084,2,1,*(undefined2 *)0xcac8);
    _fread(0xcbde,0x10,*(undefined2 *)0xd33c,*(undefined2 *)0xcac8);
    _fread(0xd890,2,1,*(undefined2 *)0xcac8);
    _fread(0xd3be,0x24,*(undefined2 *)0xd890,*(undefined2 *)0xcac8);
    _fread(0xd7f6,0x80,1,*(undefined2 *)0xcac8);
    _fread(0xd33e,0x80,1,*(undefined2 *)0xcac8);
    _fread(0xd2a6,0x80,1,*(undefined2 *)0xcac8);
    _fread(0xcad8,1,0x100,*(undefined2 *)0xcac8);
    _fread(0xdd70,1,0x2ee,*(undefined2 *)0xcac8);
    _fclose(*(undefined2 *)0xcac8);
    *(undefined2 *)0xdc70 = 0xdd70;
    local_4 = 1;
    local_6 = 0;
    do {
      if ((*(char *)(local_6 + -0x2290) == '\0') && (local_4 < 0x80)) {
        *(int *)(local_4 * 2 + -0x2390) = local_6 + -0x228f;
        local_4 = local_4 + 1;
      }
      local_6 = local_6 + 1;
    } while (local_6 < 0x2ee);
  }
  return;
}



void __cdecl16near FUN_1000_5625(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0xe098;
  *(int *)0xb390 = *(int *)0xe096 + 0x7a;
  *(undefined2 *)0xb392 = uVar1;
  FUN_1000_588d(0xd88c,2,1);
  FUN_1000_588d(0xd33c,2,1);
  FUN_1000_588d(0xcace,2,1);
  FUN_1000_588d(0xe084,2,1);
  FUN_1000_588d(0xcbde,0x10,*(undefined2 *)0xd33c);
  FUN_1000_588d(0xd890,2,1);
  FUN_1000_588d(0xd3be,0x24,*(undefined2 *)0xd890);
  FUN_1000_588d(0xd7f6,0x80,1);
  FUN_1000_588d(0xd33e,0x80,1);
  FUN_1000_588d(0xdd70,1,0x2ee);
  FUN_1000_588d(0xcad8,1,0x100);
  FUN_1000_588d(0xd876,2,1);
  FUN_1000_588d(0xcabc,2,1);
  FUN_1000_588d(0x15b2,4,4);
  FUN_1000_588d(0xe05e,0x12,2);
  return;
}



int __cdecl16near FUN_1000_5743(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    if (param_2 < 1) {
      iVar2 = -0x8000;
    }
    else {
      iVar2 = 0;
    }
  }
  else if (param_2 == 0) {
    if (param_1 < 1) {
      iVar2 = -0x4000;
    }
    else {
      iVar2 = 0x4000;
    }
  }
  else {
    iVar3 = FUN_1000_96ae_abs(param_2);
    iVar2 = FUN_1000_96ae_abs(param_1);
    if (iVar2 <= iVar3) {
      FUN_1000_96ae_abs(param_1);
      uVar6 = FUN_1000_97c0_aNlshl();
      iVar4 = FUN_1000_96ae_abs(param_2);
    }
    else {
      FUN_1000_96ae_abs(param_2);
      uVar6 = FUN_1000_97c0_aNlshl();
      iVar4 = FUN_1000_96ae_abs(param_1);
    }
    bVar1 = iVar2 > iVar3;
    iVar3 = FUN_1000_96f4(uVar6,iVar4,iVar4 >> 0xf);
    iVar2 = iVar3 >> 0xf;
    FUN_1000_96ae_abs(0x1333 - iVar3,iVar3,iVar2);
    uVar6 = FUN_1000_97cc_aNlshr();
    FUN_1000_978e(0x2800 - (uint)uVar6,-(uint)(0x2800 < (uint)uVar6) - (int)((ulong)uVar6 >> 0x10),
                  iVar3,iVar2);
    iVar3 = FUN_1000_97cc_aNlshr();
    cVar5 = (char)((uint)iVar3 >> 8);
    if (param_1 < 1) {
      if (0 < param_2) {
        if (bVar1) {
          return iVar3 + -0x4000;
        }
        return -iVar3;
      }
      if (!bVar1) {
        return CONCAT11(cVar5 + -0x80,(char)iVar3);
      }
      iVar2 = -0x4000;
    }
    else if (param_2 < 1) {
      if (bVar1) {
        return CONCAT11(cVar5 + '@',(char)iVar3);
      }
      iVar2 = -0x8000;
    }
    else {
      if (!bVar1) {
        return iVar3;
      }
      iVar2 = 0x4000;
    }
    iVar2 = iVar2 - iVar3;
  }
  return iVar2;
}



void __cdecl16near FUN_1000_585c(undefined2 param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  _movedata(*(undefined2 *)0xb392,*(undefined2 *)0xb390);
  *(int *)0xb390 = *(int *)0xb390 + param_3 * param_2;
  return;
}



void __cdecl16near FUN_1000_588d(undefined2 param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  _movedata();
  *(int *)0xb390 = *(int *)0xb390 + param_3 * param_2;
  return;
}



void __cdecl16near FUN_1000_58be(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_1000_58df(*(undefined2 *)(param_1 * 0x10 + -0x3420),*(undefined2 *)(param_1 * 0x10 + -0x341e),
                *(undefined2 *)((int)*(undefined4 *)0xcaca + 0x38));
  return;
}



undefined4 __cdecl16near FUN_1000_58df(int param_1,int param_2)

{
  long lVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  switch(*(undefined2 *)((int)*(undefined4 *)0xcaca + 0x38)) {
  case 0:
    FUN_1000_94ac(0xb394,0xda5);
    local_4 = 6;
    local_6 = 4;
    goto switchD_1000_595e_caseD_9;
  case 1:
    uVar2 = 0xdaa;
    break;
  case 2:
    uVar2 = 0xdaf;
    break;
  case 3:
    FUN_1000_94ac(0xb394,0xdb4);
    local_4 = 3;
    local_6 = 5;
    goto switchD_1000_595e_caseD_9;
  case 4:
    uVar2 = 0xdb9;
    break;
  case 5:
    uVar2 = 0xdbe;
    break;
  case 6:
    uVar2 = 0xdc3;
    break;
  case 7:
    uVar2 = 0xdc8;
    break;
  case 8:
    uVar2 = 0xdcd;
    break;
  default:
    goto switchD_1000_595e_caseD_9;
  }
  FUN_1000_94ac(0xb394,uVar2);
  local_4 = 0;
  local_6 = 0;
switchD_1000_595e_caseD_9:
  param_1 = ((param_1 >> 5) * 0x14 >> 10) + local_4;
  while (9 < param_1) {
    param_1 = param_1 + -10;
    *(char *)0xb394 = *(char *)0xb394 + '\x01';
  }
  *(char *)0xb396 = *(char *)0xb396 + (char)param_1;
  lVar1 = (long)(param_2 >> 5) * 0x14;
  param_2 = ((int)lVar1 >> 10) + local_6;
  while (9 < param_2) {
    param_2 = param_2 + -10;
    *(char *)0xb395 = *(char *)0xb395 + -1;
  }
  *(char *)0xb397 = *(char *)0xb397 + ('\t' - (char)param_2);
  return CONCAT22((int)((ulong)lVar1 >> 0x10),0xb394);
}



int __cdecl16near FUN_1000_59d8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3;
  if (((param_1 <= param_3) && (iVar1 = param_1, param_1 < param_2)) &&
     (iVar1 = param_2, param_1 < -0x3fff)) {
    iVar1 = param_3;
  }
  return iVar1;
}



int __cdecl16near FUN_1000_59fe(char *param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_94ac(param_1,0xdd2);
  *param_1 = *param_1 + *(char *)((int)*(undefined4 *)0xe096 + 0x33);
  param_1[1] = param_1[1] + (char)((param_2 / 0x708) % 10);
  param_1[1] = param_1[1] + (-(*(char *)((int)*(undefined4 *)0xe096 + 0x33) == '\0') & 0xfeU) + 8;
  if ('9' < param_1[1]) {
    param_1[1] = param_1[1] + -10;
    *param_1 = *param_1 + '\x01';
  }
  iVar1 = (((param_2 / 0x1e) % 0x3c) / 5) * 5;
  param_1[3] = param_1[3] + (char)(iVar1 / 10);
  param_1[4] = param_1[4] + (char)(iVar1 % 10);
  return iVar1 / 10;
}



void __cdecl16near FUN_1000_5a8a(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  FUN_1000_35fc(10,4);
  thunk_EXT_FUN_0000_0000(0x1000,1,0,0,3,0,0,0x140,200);
  *(undefined *)0xd096 = 0;
  *(undefined *)0xb39a = 0;
  iVar1 = (uint)*(byte *)(*(int *)((int)*(undefined4 *)0xcaca + 0x38) + 0xdd8) * 3;
  *(undefined2 *)(iVar1 + 0x64e3) = *(undefined2 *)0x11c7;
  *(undefined *)(iVar1 + 0x64e5) = *(undefined *)0x11c9;
  if (*(int *)((int)*(undefined4 *)0xcaca + 0x42) != 0) {
    *(undefined2 *)0x67bc = *(undefined2 *)0x11ca;
    *(undefined *)0x67be = *(undefined *)0x11cc;
    *(undefined2 *)0x67b6 = *(undefined2 *)0x67bc;
    *(undefined *)0x67b8 = *(undefined *)0x67be;
  }
  local_4 = 0x6fd2;
  for (local_6 = 0; local_6 < 2; local_6 = local_6 + 1) {
    if (*(int *)((int)*(undefined4 *)0xcaca + 0x42) == 0) {
      FUN_1000_39d5(local_4);
    }
    else {
      FUN_1000_39b3(local_4);
    }
    local_4 = local_4 + 0x10;
  }
  if (*(int *)((int)*(undefined4 *)0xe096 + 0x22) == 0) {
    *(undefined2 *)0x67b9 = *(undefined2 *)0x11ca;
    *(undefined *)0x67bb = *(undefined *)0x11cc;
    *(undefined2 *)0x67bc = *(undefined2 *)0x67b9;
    *(undefined *)0x67be = *(undefined *)0x67bb;
    FUN_1000_39b3(0x6fd2);
    FUN_1000_39b3(0x6fda);
  }
  iVar1 = *(int *)((int)*(undefined4 *)0xcaca + 0x3a) * 2;
  FUN_1000_3693(0xdc02,*(undefined2 *)(iVar1 + 0xdec),*(undefined2 *)(iVar1 + 0xdfa),
                *(undefined2 *)0xcaba);
  iVar1 = *(int *)((int)*(undefined4 *)0xcaca + 0x3a) * 2;
  FUN_1000_3693(0xdc18,*(undefined2 *)(iVar1 + 0xdec),*(undefined2 *)(iVar1 + 0xdfa),
                *(undefined2 *)0xcaba);
  iVar1 = *(int *)((int)*(undefined4 *)0xcaca + 0x3c) * 2;
  FUN_1000_3693(0xdc02,*(undefined2 *)(iVar1 + 0xdf2),*(undefined2 *)(iVar1 + 0xe00),
                *(undefined2 *)0xcaba);
  iVar1 = *(int *)((int)*(undefined4 *)0xcaca + 0x3c) * 2;
  FUN_1000_3693(0xdc18,*(undefined2 *)(iVar1 + 0xdf2),*(undefined2 *)(iVar1 + 0xe00),
                *(undefined2 *)0xcaba);
  FUN_1000_60dc();
  return;
}



undefined2 __cdecl16near FUN_1000_5bf0(void)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  uint local_4;
  
  uVar6 = 0x1000;
  FUN_1000_3641(6,0x5a8a);
  do {
    local_4 = FUN_1000_38ac(0x6f6e);
    if ((*(char *)0xd2a2 != '\0') && ((int)local_4 < 0x11)) {
      iVar3 = FUN_1000_3cea(0x70aa,0x56,0x46);
      if (iVar3 == 2) {
        local_4 = 0;
      }
      else {
        *(undefined *)0xd2a2 = 0;
      }
    }
    if (local_4 == 99) {
      FUN_1000_3989();
      return 0;
    }
    if (local_4 < 100) {
      cVar2 = (char)local_4;
      if ('\0' < cVar2) {
        if (cVar2 == '\x03' || (char)(cVar2 + -1) < '\x02') {
LAB_1000_5c81:
          if (*(int *)((int)*(undefined4 *)0xe096 + 0x22) == 0) {
            FUN_1000_3cea(0x7338,0x46,0x3c);
          }
          else {
LAB_1000_5d44:
            uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
            iVar3 = (int)*(undefined4 *)0xcaca;
            if ((uint)*(byte *)(local_4 + 0xde2) != *(uint *)(iVar3 + 0x38)) {
              FUN_1000_3517(*(undefined *)(*(int *)(iVar3 + 0x38) + 0xdd8),0x11ac,1);
              *(uint *)((int)*(undefined4 *)0xcaca + 0x38) = (uint)*(byte *)(local_4 + 0xde2);
              FUN_1000_3517(*(undefined *)(*(int *)((int)*(undefined4 *)0xcaca + 0x38) + 0xdd8),
                            0x11c7,1);
              FUN_1000_60dc();
            }
          }
        }
        else {
          if (cVar2 == '\x04') goto LAB_1000_5d44;
          if ('\0' < (char)(cVar2 + -4)) {
            if (cVar2 == '\t' || (char)(cVar2 + -5) < '\x04') goto LAB_1000_5c81;
            if ('\0' < (char)(cVar2 + -9)) {
              if (cVar2 == '\f' || (char)(cVar2 + -10) < '\x02') {
                uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
                iVar4 = (int)*(undefined4 *)0xcaca;
                iVar3 = *(int *)(iVar4 + 0x3a);
                if (iVar3 - local_4 != -10) {
                  *(int *)(iVar4 + 0x3a) = local_4 - 10;
                  local_c = iVar3;
                }
              }
              else if ('\0' < (char)(cVar2 + -0xc)) {
                if (cVar2 == '\x10' || (char)(cVar2 + -0xd) < '\x03') {
                  uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
                  iVar4 = (int)*(undefined4 *)0xcaca;
                  iVar3 = *(int *)(iVar4 + 0x3c);
                  if (iVar3 - local_4 != -0xd) {
                    local_c = iVar3 + 3;
                    *(int *)(iVar4 + 0x3c) = local_4 - 0xd;
                  }
                }
                else if (cVar2 == '\x11') {
                  FUN_1000_3989();
                  FUN_1000_7272(0);
                  if (*(char *)0xb39a != '\0') {
                    FUN_1000_28ce(4,0x10e0,0x10d2,7);
                  }
                  local_a = 0;
                  do {
                    FUN_1000_8427();
                    thunk_EXT_FUN_0000_0000
                              (uVar6,2,local_a + 0xf1,0xa7,0,local_a + 0x102,0xbc,1,0xc);
                    FUN_1000_2901();
                    local_a = local_a + 1;
                    uVar6 = 0x1a95;
                  } while (local_a < 0x3e);
                  FUN_1000_2b06(0x1e);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    if (9 < (int)local_4) {
      uVar5 = *(undefined2 *)(local_c * 2 + 0xdfa);
      uVar1 = *(undefined2 *)(local_c * 2 + 0xdec);
      thunk_EXT_FUN_0000_0000(uVar6,3,uVar1,uVar5,1,uVar1,uVar5,0xc,8);
      thunk_EXT_FUN_0000_0000(0x1a95,3,uVar1,uVar5,0,uVar1,uVar5,0xc,8);
      uVar5 = *(undefined2 *)(local_4 * 2 + 0xdd8);
      uVar1 = *(undefined2 *)(local_4 * 2 + 0xde6);
      uVar6 = 0x1a95;
      thunk_EXT_FUN_0000_0000(0x1a95,0x1b);
      FUN_1000_3693(0xdc18,uVar5,uVar1,*(undefined2 *)0xcaba);
      FUN_1000_3693(0xdc02,uVar5,uVar1,*(undefined2 *)0xcaba);
    }
  } while( true );
}



void __cdecl16near FUN_1000_5e6f(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined2 uVar4;
  
  bVar1 = FUN_1000_393d(0x6f72,*(undefined *)0x6f71);
  if ((*(char *)0xd096 != '\0') && (*(byte *)0xd096 != bVar1)) {
    bVar3 = false;
    if (*(byte *)0xd096 < 10) {
      if ((uint)*(byte *)(*(byte *)0xd096 + 0xde2) != *(uint *)((int)*(undefined4 *)0xcaca + 0x38))
      {
        FUN_1000_3517(-(*(byte *)0xd096 - 0x100),0x11ac,1);
      }
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1000_3517(-(*(byte *)0xd096 - 0x100),0x11d0,1);
    }
    if ((bVar1 == 0) || (bVar1 == 0x11)) {
      FUN_1000_5ffa();
    }
  }
  if ((bVar1 == 0) || (*(byte *)0xd096 == bVar1)) goto LAB_1000_5f97;
  if (bVar1 < 10) {
    bVar3 = (uint)*(byte *)(bVar1 + 0xde2) != *(uint *)((int)*(undefined4 *)0xcaca + 0x38);
    uVar4 = *(undefined2 *)((uint)*(byte *)(bVar1 + 0xde2) * 2 + -0x64d7);
LAB_1000_5f40:
    FUN_1000_6045(uVar4);
  }
  else {
    if (bVar1 < 0xd) {
      bVar3 = true;
      uVar4 = *(undefined2 *)((uint)bVar1 * 2 + -0x5e93);
      goto LAB_1000_5f40;
    }
    if (bVar1 < 0x11) {
      bVar3 = true;
      uVar4 = *(undefined2 *)((uint)bVar1 * 2 + -0x6ab6);
      goto LAB_1000_5f40;
    }
    bVar3 = true;
  }
  if (bVar3) {
    FUN_1000_3517(-(bVar1 - 0x100),0x11c1,1);
  }
LAB_1000_5f97:
  *(byte *)0xd096 = bVar1;
  iVar2 = FUN_1000_2a7e();
  if (((iVar2 != 0) && (iVar2 = FUN_1000_2901(), iVar2 == 0)) &&
     (*(undefined *)0xb39a = 1, bVar1 != 0)) {
    if (bVar1 < 10) {
      uVar4 = *(undefined2 *)((uint)*(byte *)(bVar1 + 0xde2) * 2 + -0x64d7);
    }
    else if (bVar1 < 0xd) {
      uVar4 = *(undefined2 *)((uint)bVar1 * 2 + -0x5e93);
    }
    else {
      if (0x10 < bVar1) {
        return;
      }
      uVar4 = *(undefined2 *)((uint)bVar1 * 2 + -0x6ab6);
    }
    FUN_1000_6045(uVar4);
  }
  return;
}



void __cdecl16near FUN_1000_5ffa(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_2a7e();
  if (iVar1 == 0) {
    thunk_EXT_FUN_0000_0000(0x1000,4,0xba,0x68,1,0,0x68,0x86,0x60);
    thunk_EXT_FUN_0000_0000(0x1a95,4,0xba,0x68,0,0,0x68,0x86,0x60);
  }
  return;
}



void __cdecl16near FUN_1000_6045(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  if (*(char *)0xb39a == '\0') {
    FUN_1000_28ce(4,0x10e0,0x10c0,9);
  }
  else {
    thunk_EXT_FUN_0000_0000(0x1000,4,0xba,0x68,1,0,0x68,0x86,0x60);
    *(undefined2 *)0xdc24 = 4;
    *(undefined2 *)0xdc1e = 0xffff;
    *(undefined2 *)0xdc1c = 0;
    FUN_1000_3776(0xdc18,param_1,0xf,0x78,0x6e,8,0);
    thunk_EXT_FUN_0000_0000(0x1a95,1,0,0x68,0,0,0x68,0x86,0x61);
  }
  return;
}



void __cdecl16near FUN_1000_60dc(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x38) * 2 + -0x6542);
  thunk_EXT_FUN_0000_0000(0x1000,3,0xd4,0x79,1,0xd4,0x79,0x46,0xb);
  *(undefined2 *)0xdc24 = 4;
  *(undefined2 *)0xdc1c = 8;
  FUN_1000_3567(0xdc18,uVar1,0xd4,0x7c);
  thunk_EXT_FUN_0000_0000(0x1a95,1,0xd4,0x79,0,0xd4,0x79,0x46,0xb);
  return;
}



void __cdecl16near FUN_1000_615c(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  FUN_1000_35fc(0xc,4);
  thunk_EXT_FUN_0000_0000(0x1000,1,0,0,3,0,0,0x140,200);
  *(undefined2 *)0xdc24 = 1;
  *(undefined2 *)0xdc1c = 0xff;
  local_4 = 0x2c;
  for (local_6 = 0; local_6 < 10; local_6 = local_6 + 1) {
    FUN_1000_6861(local_6,local_4);
    *(int *)0xdc1c = *(int *)0xdc1c + -1;
    local_4 = local_4 + 10;
  }
  *(undefined2 *)0xdc24 = 3;
  *(undefined2 *)0xdc1c = 0x1a;
  FUN_1000_2a84(0xdc18,0xe1b,0xa0,0x90);
  puVar1 = (undefined2 *)-(**(int **)0xcaca * 3 + -0x67e0);
  *puVar1 = *(undefined2 *)0x11c7;
  *(undefined *)(puVar1 + 1) = *(undefined *)0x11c9;
  thunk_EXT_FUN_0000_0000(0x1a95,1,0x1e,0x2c,0,0x1e,0x2c,0x10e,0x6e);
  FUN_1000_3e84(0xa0,**(int **)0xcaca * 10 + 0x2f);
  return;
}



undefined2 __cdecl16near FUN_1000_623e(void)

{
  byte *pbVar1;
  int *piVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined2 *puVar13;
  undefined2 uVar14;
  undefined2 unaff_DS;
  
  *(undefined2 *)*(undefined4 *)0xcbd8 = 0;
  FUN_1000_3641(7,0x615c);
LAB_1000_625c:
  while( true ) {
    while( true ) {
      do {
        iVar8 = FUN_1000_38ac(0x704e);
      } while (iVar8 < 1);
      if (iVar8 != 10 && 8 < iVar8 + -1) break;
      iVar9 = *(int *)(iVar8 * 0x50 + -0x2770);
      if (iVar9 != 0) goto LAB_1000_6294;
      if ((*(char *)0xd2a2 == '\0') || (iVar9 = FUN_1000_3cea(0x710d,0x56,0x46), iVar9 != 2)) {
        *(undefined *)0xd2a2 = 0;
        FUN_1000_3517(0xff - **(int **)0xcaca,0x11cd,1);
        piVar7 = *(int **)0xcaca;
        piVar10 = (int *)piVar7;
        piVar12 = (int *)(*piVar7 * 0x50 + -0x276e);
        for (iVar9 = 0x28; iVar9 != 0; iVar9 = iVar9 + -1) {
          piVar4 = piVar12;
          piVar12 = piVar12 + 1;
          piVar2 = piVar10;
          piVar10 = piVar10 + 1;
          *piVar4 = *piVar2;
        }
        puVar13 = (undefined2 *)*(undefined2 *)0xcaca;
        uVar14 = *(undefined2 *)0xcacc;
        puVar11 = (undefined2 *)(iVar8 * 0x50 + -0x27be);
        for (iVar9 = 0x28; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar5 = puVar13;
          puVar13 = puVar13 + 1;
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          *puVar5 = *puVar3;
        }
        **(int **)0xcaca = iVar8 + -1;
        if (*(int *)((int)*(undefined4 *)0xe096 + 0x22) == 0) {
          *(undefined2 *)((int)*(undefined4 *)0xcaca + 0x38) = 0;
          pbVar1 = (byte *)((int)*(undefined4 *)0xcaca + 0x3c);
          *pbVar1 = *pbVar1 | 2;
        }
        FUN_1000_3517(0x100 - iVar8,0x11c7,1);
        FUN_1000_6db8();
      }
    }
    if ((iVar8 == 0xb) || (iVar8 == 99)) break;
    if ((((iVar8 == 0x162) && (iVar8 = FUN_1000_393d(0x7052,*(undefined *)0x7051), iVar8 != 0)) &&
        (iVar8 < 0xb)) &&
       ((*(char *)0xd2a2 == '\0' || (iVar9 = FUN_1000_3cea(0x710d,0x56,0x46), iVar9 != 2)))) {
      FUN_1000_6ab3(iVar8 + -1);
      *(undefined *)0xd2a2 = 0;
    }
  }
  FUN_1000_3989();
  uVar14 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
  iVar8 = (int)*(undefined4 *)0xcaca;
  iVar9 = *(int *)(iVar8 + 0x4e);
  if (iVar9 == 0) {
    uVar6 = *(undefined *)(iVar8 + 0x42);
    *(undefined *)0xd879 = uVar6;
    *(undefined *)0xd878 = uVar6;
    FUN_1000_7272(1);
    return 0;
  }
LAB_1000_6294:
  if (iVar9 == 1) {
    uVar14 = 0x7244;
  }
  else {
    if (iVar9 != 2) goto LAB_1000_625c;
    uVar14 = 0x715f;
  }
  FUN_1000_3cea(uVar14,0x56,0x46);
  goto LAB_1000_625c;
}



void __cdecl16near FUN_1000_63fb(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar2 = FUN_1000_393d(0x7052,*(undefined *)0x7051);
  if ((*(char *)0xd096 != '\0') && (bVar1 = *(byte *)0xd096, bVar2 != bVar1)) {
    if ((uint)bVar1 - **(int **)0xcaca != 1) {
      FUN_1000_3517(-(bVar1 - 0x100),0x11cd,1);
    }
    if (*(byte *)0xd096 < 0xb) {
      thunk_EXT_FUN_0000_0000(0x1000,3,0x24,0x9f,1,0x24,0x9f,0xe0,0x29);
      thunk_EXT_FUN_0000_0000(0x1a95,3,0x24,0x9f,0,0x24,0x9f,0xe0,0x29);
    }
  }
  if ((bVar2 != 0) && (bVar2 != *(byte *)0xd096)) {
    if ((uint)bVar2 - **(int **)0xcaca != 1) {
      FUN_1000_3517(-(bVar2 - 0x100),0x11c1,1);
    }
    if (bVar2 < 0xb) {
      FUN_1000_64e5(bVar2 - 1);
    }
  }
  *(byte *)0xd096 = bVar2;
  return;
}



void __cdecl16near FUN_1000_64e5(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_30;
  undefined local_2c [24];
  undefined local_14;
  undefined2 local_4;
  
  uVar1 = 0x1000;
  *(undefined2 *)0xdc24 = 4;
  *(undefined2 *)0xdc1c = 1;
  param_1 = param_1 * 0x50;
  local_4 = FUN_1000_6a7c(param_1 + -0x276c);
  FUN_1000_959e(local_2c,0xe46,*(undefined2 *)(*(int *)(param_1 + -0x274e) * 2 + 0x1d78),local_4);
  local_14 = 0;
  FUN_1000_3567(0xdc18,local_2c,0x32,0x9f);
  *(undefined2 *)0xdc1c = 0x1c;
  FUN_1000_959e(local_2c,0xe4b,*(undefined2 *)(param_1 + -0x2740));
  FUN_1000_3567(0xdc18,local_2c,0x32,0xa8);
  FUN_1000_959e(local_2c,0xe5c,*(undefined2 *)(param_1 + -0x273e));
  FUN_1000_3567(0xdc18,local_2c,0x32,0xb0);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)(param_1 + -0x2730) * 2 + -0x6ce2),0xa2,0xa0);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)(param_1 + -0x272e) * 2 + -0x6b10),0xa2,0xa8);
  FUN_1000_3567(0xdc18,*(undefined2 *)(*(int *)(param_1 + -0x272c) * 2 + -0x6b54),0xa2,0xb0);
  local_30 = 0x24;
  if (*(int *)(param_1 + -0x2742) != 0) {
    uVar1 = 0x1a95;
    thunk_EXT_FUN_0000_0000(0x1000,4,0,0x98,1,0x24,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe6d,*(undefined2 *)(param_1 + -0x2742));
    FUN_1000_2a84(0xdc18,local_2c,0x35,0xb8);
    local_30 = 0x4a;
  }
  uVar2 = uVar1;
  if (*(int *)(param_1 + -0x2748) != 0) {
    uVar2 = 0x1a95;
    thunk_EXT_FUN_0000_0000(uVar1,4,0,0xa0,1,local_30,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe74,*(undefined2 *)(param_1 + -0x2748));
    FUN_1000_2a84(0xdc18,local_2c,local_30 + 0x11,0xb8);
    local_30 = local_30 + 0x26;
  }
  uVar1 = uVar2;
  if (*(int *)(param_1 + -0x2744) != 0) {
    uVar1 = 0x1a95;
    thunk_EXT_FUN_0000_0000(uVar2,4,0,0xa8,1,local_30,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe7b,*(undefined2 *)(param_1 + -0x2744));
    FUN_1000_2a84(0xdc18,local_2c,local_30 + 0x11,0xb8);
    local_30 = local_30 + 0x26;
  }
  uVar2 = uVar1;
  if (*(int *)(param_1 + -0x2746) != 0) {
    uVar2 = 0x1a95;
    thunk_EXT_FUN_0000_0000(uVar1,4,0,0xb0,1,local_30,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe82,*(undefined2 *)(param_1 + -0x2746));
    FUN_1000_2a84(0xdc18,local_2c,local_30 + 0x11,0xb8);
    local_30 = local_30 + 0x26;
  }
  uVar1 = uVar2;
  if (*(int *)(param_1 + -0x274a) != 0) {
    uVar1 = 0x1a95;
    thunk_EXT_FUN_0000_0000(uVar2,4,0,0xb8,1,local_30,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe88,*(undefined2 *)(param_1 + -0x274a));
    FUN_1000_2a84(0xdc18,local_2c,local_30 + 0x11,0xb8);
    local_30 = local_30 + 0x26;
  }
  uVar2 = uVar1;
  if (*(int *)(param_1 + -0x274c) != 0) {
    uVar2 = 0x1a95;
    thunk_EXT_FUN_0000_0000(uVar1,4,0,0xc0,1,local_30,0xbf,0x22,8);
    FUN_1000_959e(local_2c,0xe8e,*(undefined2 *)(param_1 + -0x274c));
    FUN_1000_2a84(0xdc18,local_2c,local_30 + 0x11,0xb8);
  }
  thunk_EXT_FUN_0000_0000(uVar2,1,0x24,0x9f,0,0x24,0x9f,0xe0,0x29);
  return;
}



void __cdecl16near FUN_1000_6861(int param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  undefined local_54 [80];
  int local_4;
  
  thunk_EXT_FUN_0000_0000(0x1000,3,0x1e,param_2,1,0x1e,param_2,0x102,8);
  param_1 = param_1 * 0x50;
  FUN_1000_959e(local_54,0xe94,*(undefined2 *)(*(int *)(param_1 + -0x274e) * 2 + 0x1d78),
                param_1 + -0x276c);
  FUN_1000_3567(0xdc18,local_54,0x1e,param_2);
  FUN_1000_9516(*(undefined2 *)(param_1 + -0x273c),*(undefined2 *)(param_1 + -0x273a),local_54,10);
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0xe0));
  FUN_1000_94fa(*(undefined2 *)(param_1 + -0x2738),local_54,10);
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0xf6));
  FUN_1000_94ac(local_54,*(undefined2 *)(*(int *)(param_1 + -0x2720) * 2 + 0xe40));
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0x23) / 2 + 0xfd);
  FUN_1000_959e(local_54,0xe99,*(undefined2 *)(*(int *)(param_1 + -0x274e) * 2 + 0x1d78),
                param_1 + -0x276c);
  FUN_1000_3567(0xdc18,local_54,0x1e,param_2);
  FUN_1000_9516(*(undefined2 *)(param_1 + -0x273c),*(undefined2 *)(param_1 + -0x273a),local_54,10);
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0xe0));
  FUN_1000_94fa(*(undefined2 *)(param_1 + -0x2738),local_54,10);
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0xf6));
  FUN_1000_94ac(local_54,*(undefined2 *)(*(int *)(param_1 + -0x2720) * 2 + 0xe40));
  local_4 = FUN_1000_373c(0xdc18,local_54,param_2);
  FUN_1000_3567(0xdc18,local_54,-(local_4 + -0x23) / 2 + 0xfd);
  return;
}



int __cdecl16near FUN_1000_6a7c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = FUN_1000_94de(param_1);
  do {
    iVar1 = local_4;
    local_4 = iVar1 + -1;
    if (*(char *)(local_4 + param_1) == ' ') break;
  } while (0 < local_4);
  if (0 < local_4) {
    local_4 = iVar1;
  }
  return local_4 + param_1;
}



undefined2 __cdecl16near FUN_1000_6ab3(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_3e;
  int local_3c;
  byte local_34 [50];
  
  FUN_1000_3989();
  iVar4 = param_1 * 0x50;
  piVar5 = (int *)(iVar4 + -0x276e);
  iVar6 = param_1 * 10 + 0x2c;
  *(int *)0xdc1c = 0xff - param_1;
  *(undefined2 *)0xdc24 = 1;
  thunk_EXT_FUN_0000_0000(0x1000,3,0x1e,iVar6,1,0x1e,iVar6,0x9e,8);
  FUN_1000_94ac(local_34,*(undefined2 *)0x1d78);
  FUN_1000_3567(0xdc18,local_34,0x1e,iVar6);
  thunk_EXT_FUN_0000_0000(0x1a95,0xdc18,0xe9e);
  iVar7 = FUN_1000_94de(local_34);
  thunk_EXT_FUN_0000_0000(0x1a95,1,0x1e,iVar6,0,0x1e,iVar6,0x9e,8);
  local_3c = iVar7;
  do {
    if ((iVar7 - local_3c == -0x1d) || (iVar8 = FUN_1000_373c(0xdc18,local_34), 0x96 < iVar8)) {
      local_3e = 0xd;
    }
    else {
      do {
        iVar8 = thunk_EXT_FUN_0000_0000(0x1a95);
      } while (iVar8 != 0);
      local_3e = thunk_EXT_FUN_0000_0000(0x1a95);
    }
    if (local_3e == 0x1b) goto LAB_1000_6c45;
    if (local_3e < 0x1c) {
      if (local_3e != 8) {
        if (local_3e != 0xd) goto LAB_1000_6bb1;
        FUN_1000_3517(0xff - **(int **)0xcaca,0x11cd,1);
        FUN_1000_3517(0xff - param_1,0x11c7,1);
        FUN_1000_8b3e(piVar5,0x50);
        FUN_1000_94ac(iVar4 + -0x276c,local_34 + iVar7);
        *piVar5 = param_1;
        *(undefined2 *)(iVar4 + -0x2734) = 2;
        *(undefined2 *)(iVar4 + -0x2732) = 3;
        *(undefined2 *)(iVar4 + -0x2720) = 0;
        piVar9 = *(int **)0xcaca;
        uVar3 = *(undefined2 *)0xcacc;
        for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
          piVar2 = piVar9;
          piVar9 = piVar9 + 1;
          piVar1 = piVar5;
          piVar5 = piVar5 + 1;
          *piVar2 = *piVar1;
        }
LAB_1000_6c45:
        FUN_1000_6861(param_1,iVar6);
        thunk_EXT_FUN_0000_0000(0x1a95,1,0x1e,iVar6,0,0x1e,iVar6,0x10e,8);
        return 0;
      }
      if (iVar7 < local_3c) {
        local_3c = local_3c + -1;
        goto LAB_1000_6c82;
      }
    }
    else {
LAB_1000_6bb1:
      iVar8 = FUN_1000_9694((int)(char)local_3e);
      if (iVar8 != 0) {
        local_34[local_3c] = local_3e;
        local_3c = local_3c + 1;
LAB_1000_6c82:
        local_34[local_3c] = 0;
      }
    }
    thunk_EXT_FUN_0000_0000(0x1a95,3,0x1e,iVar6,1,0x1e,iVar6,0x9e,8);
    FUN_1000_3567(0xdc18,local_34,0x1e,iVar6);
    thunk_EXT_FUN_0000_0000(0x1a95,0xdc18,0xea0);
    thunk_EXT_FUN_0000_0000(0x1a95,1,0x1e,iVar6,0,0x1e,iVar6,0x9e,8);
  } while( true );
}



void __cdecl16near FUN_1000_6d07(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  int *piVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  FUN_1000_7218();
  local_4 = -0x276e;
  local_6 = 0;
  do {
    *(uint *)0xd8d4 = *(uint *)0xd8d4 & 1;
    if ((*(int *)(local_4 + 0x42) != 0) &&
       ((*(int *)(local_4 + 0x3c) == 0 || (*(int *)(local_4 + 0x3c) == 2)))) {
      *(int *)(local_4 + 0x3c) = *(int *)(local_4 + 0x3c) + 1;
    }
    local_6 = local_6 + 1;
    local_4 = local_4 + 0x50;
  } while (local_6 < 10);
  if (**(int **)0xcbd8 == 0) {
    piVar7 = *(int **)0xcaca;
    piVar9 = (int *)piVar7;
    piVar12 = (int *)(*piVar7 * 0x50 + -0x276e);
    for (iVar8 = 0x28; iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar5 = piVar12;
      piVar12 = piVar12 + 1;
      piVar3 = piVar9;
      piVar9 = piVar9 + 1;
      *piVar5 = *piVar3;
    }
  }
  else {
    puVar11 = (undefined2 *)*(undefined2 *)0xcaca;
    uVar6 = *(undefined2 *)0xcacc;
    puVar10 = (undefined2 *)((uint)*(byte *)0xb39c * 0x50 + -0x276e);
    for (iVar8 = 0x28; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4 = puVar11;
      puVar11 = puVar11 + 1;
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar4 = *puVar2;
    }
  }
  if (*(int *)((int)*(undefined4 *)0xe096 + 0x22) == 0) {
    *(undefined2 *)((int)*(undefined4 *)0xcaca + 0x38) = 0;
    pbVar1 = (byte *)((int)*(undefined4 *)0xcaca + 0x3c);
    *pbVar1 = *pbVar1 | 2;
  }
  FUN_1000_7272(0);
  return;
}



void __cdecl16near FUN_1000_6db8(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_78;
  char local_76 [50];
  int local_44;
  uint local_42;
  uint local_40;
  char local_3e [50];
  char local_c;
  uint local_a;
  undefined2 local_8;
  undefined2 local_6;
  uint local_4;
  
  FUN_1000_3989();
  local_4 = (uint)*(byte *)0xd096;
  *(undefined *)0xd096 = 0;
  local_6 = *(undefined2 *)0xe08a;
  local_8 = *(undefined2 *)0xe08c;
  *(undefined2 *)0xe08a = 0x103;
  *(undefined2 *)0xe08c = 0xb4;
  FUN_1000_3517(0xeb,0x67a4,10);
  thunk_EXT_FUN_0000_0000(0x1000,1,0xc0,0x28,4,0x6f,0,0x6f,0x98);
  thunk_EXT_FUN_0000_0000(0x1a95,4,0,0,1,0xc0,0x28,0x6f,0x98);
  iVar6 = *(int *)((int)*(undefined4 *)0xcaca + 0x3e);
  FUN_1000_3693(0xdc18,*(byte *)(iVar6 + 0xea9) + 0xc0,*(byte *)(iVar6 + 0xeb3) + 0x28,
                *(undefined2 *)0xcaba);
  iVar6 = *(int *)((int)*(undefined4 *)0xcaca + 0x40);
  FUN_1000_3693(0xdc18,*(byte *)(iVar6 + 0xead) + 0xc0,*(byte *)(iVar6 + 0xeb7) + 0x28,
                *(undefined2 *)0xcaba);
  iVar6 = *(int *)((int)*(undefined4 *)0xcaca + 0x42);
  FUN_1000_3693(0xdc18,*(byte *)(iVar6 + 0xeb0) + 0xc0,*(byte *)(iVar6 + 0xeba) + 0x28,
                *(undefined2 *)0xcaba);
  thunk_EXT_FUN_0000_0000(0x1a95,1,0xc0,0x28,0,0xc0,0x28,0x6f,0x98);
  uVar5 = FUN_1000_6a7c(**(int **)0xcaca * 0x50 + -0x276c);
  FUN_1000_959e(local_3e,0xea2,
                *(undefined2 *)(*(int *)((int)*(undefined4 *)0xcaca + 0x20) * 2 + 0x1d78),uVar5);
  *(undefined2 *)0xdc24 = 3;
  *(undefined2 *)0xdc0e = 3;
  *(undefined2 *)0xdc1c = 0x1c;
  *(undefined2 *)0xdc06 = 0x1c;
  for (local_44 = 0; local_44 < 0x32; local_44 = local_44 + 1) {
    iVar6 = FUN_1000_76c0_rand(6);
    FUN_1000_2b06(iVar6 + 6);
    iVar6 = local_44;
    if (local_3e[local_44] == '\0') break;
    local_76[local_44] = local_3e[local_44];
    local_76[iVar6 + 1] = '\0';
    iVar6 = FUN_1000_373c(0xdc02,local_76);
    if (0x52 < iVar6) break;
    thunk_EXT_FUN_0000_0000(0x1a95,0x21);
    FUN_1000_3567(0xdc02,local_76,0xd9,0x37);
    FUN_1000_3567(0xdc18,local_76,0xd9,0x37);
  }
  local_c = '\0';
  do {
    if (local_c != '\0') {
      thunk_EXT_FUN_0000_0000(0x1a95,4,0x6f,0,1,0xc0,0x28,0x6f,0x98);
      thunk_EXT_FUN_0000_0000(0x1a95,4,0x6f,0,0,0xc0,0x28,0x6f,0x98);
      *(undefined *)0xd096 = (undefined)local_4;
      if (local_a == 99) {
        piVar3 = *(int **)0xcaca;
        piVar7 = (int *)piVar3;
        piVar8 = (int *)(*piVar3 * 0x50 + -0x276e);
        for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
          piVar2 = piVar7;
          piVar7 = piVar7 + 1;
          piVar1 = piVar8;
          piVar8 = piVar8 + 1;
          *piVar2 = *piVar1;
        }
        *(undefined2 *)0xe08a = local_6;
        *(undefined2 *)0xe08c = local_8;
      }
      else {
        piVar3 = *(int **)0xcaca;
        piVar7 = (int *)piVar3;
        piVar8 = (int *)(*piVar3 * 0x50 + -0x276e);
        for (iVar6 = 0x28; iVar6 != 0; iVar6 = iVar6 + -1) {
          piVar2 = piVar8;
          piVar8 = piVar8 + 1;
          piVar1 = piVar7;
          piVar7 = piVar7 + 1;
          *piVar2 = *piVar1;
        }
        *(undefined2 *)0xe08a = 0x129;
        *(undefined2 *)0xe08c = 0xb6;
      }
      return;
    }
    local_a = FUN_1000_38ac(0x6ffa);
    if (local_a == 99) {
LAB_1000_7104:
      local_c = '\x01';
    }
    else if (local_a < 100) {
      cVar4 = (char)local_a;
      if ('\0' < cVar4) {
        if (cVar4 == '\x04' || (char)(cVar4 + -1) < '\x03') {
          uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
          iVar6 = (int)*(undefined4 *)0xcaca;
          local_78 = *(int *)(iVar6 + 0x3e) + 1;
          *(int *)(iVar6 + 0x3e) = local_a - 1;
        }
        else if ('\0' < (char)(cVar4 + -4)) {
          if (cVar4 == '\a' || (char)(cVar4 + -5) < '\x02') {
            uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
            iVar6 = (int)*(undefined4 *)0xcaca;
            local_78 = *(int *)(iVar6 + 0x40) + 5;
            *(int *)(iVar6 + 0x40) = local_a - 5;
          }
          else if ('\0' < (char)(cVar4 + -7)) {
            if (cVar4 == '\t' || (char)(cVar4 + -8) < '\x01') {
              uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
              iVar6 = (int)*(undefined4 *)0xcaca;
              local_78 = *(int *)(iVar6 + 0x42) + 8;
              *(int *)(iVar6 + 0x42) = local_a - 8;
              uVar5 = (undefined2)((ulong)*(undefined4 *)0xcaca >> 0x10);
              iVar6 = (int)*(undefined4 *)0xcaca;
              if ((*(int *)(iVar6 + 0x42) != 0) &&
                 ((*(int *)(iVar6 + 0x3c) == 0 || (*(int *)(iVar6 + 0x3c) == 2)))) {
                *(int *)(iVar6 + 0x3c) = *(int *)(iVar6 + 0x3c) + 1;
              }
            }
            else if (cVar4 == '\n') goto LAB_1000_7104;
          }
        }
      }
    }
    if ((int)local_a < 10) {
      local_42 = (uint)*(byte *)(local_78 + 0xeb2);
      local_40 = (uint)*(byte *)(local_78 + 0xea8);
      thunk_EXT_FUN_0000_0000(0x1a95,4,local_40,local_42,1,local_40 + 0xc0,local_42 + 0x28,0xc,8);
      thunk_EXT_FUN_0000_0000(0x1a95,4,local_40,local_42,0,local_40 + 0xc0,local_42 + 0x28,0xc,8);
      local_40 = *(byte *)(local_a + 0xea8) + 0xc0;
      local_42 = *(byte *)(local_a + 0xeb2) + 0x28;
      thunk_EXT_FUN_0000_0000(0x1a95,0x1b);
      FUN_1000_3693(0xdc18,local_40,local_42,*(undefined2 *)0xcaba);
      FUN_1000_3693(0xdc02,local_40,local_42,*(undefined2 *)0xcaba);
    }
  } while( true );
}



void __cdecl16near FUN_1000_71ad(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = FUN_1000_393d(0x6ffe,*(undefined *)0x6ffd);
  if ((*(char *)0xd096 != '\0') && (bVar1 != *(byte *)0xd096)) {
    FUN_1000_3517(-(*(byte *)0xd096 - 0xf5),0x11d0,1);
  }
  if ((bVar1 != 0) && (bVar1 != *(byte *)0xd096)) {
    FUN_1000_3517(-(bVar1 - 0xf5),0x11c1,1);
  }
  *(byte *)0xd096 = bVar1;
  return;
}



void __cdecl16near FUN_1000_7218(void)

{
  undefined2 uVar1;
  int local_6;
  
  uVar1 = _fopen(0xebf,0xebc);
  _fread(0xb39c,2,1,uVar1);
  local_6 = 0;
  do {
    _fread(local_6 * 0x50 + -0x276e,0x50,1,uVar1);
    local_6 = local_6 + 1;
  } while (local_6 < 10);
  _fclose(uVar1);
  return;
}



void __cdecl16near FUN_1000_7272(char param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_6;
  
  *(undefined *)0xb39c = *(undefined *)*(undefined4 *)0xcaca;
  iVar1 = FUN_1000_804e();
  if (iVar1 == 0) {
    if (param_1 != '\0') {
      FUN_1000_3cea(0x729d,0x56,0x46);
    }
  }
  else {
    iVar1 = _fopen(0xecd,0xeca);
    if (iVar1 == 0) {
      if (param_1 != '\0') {
        FUN_1000_3cea(0x72ea,0x56,0x46);
      }
    }
    else {
      FUN_1000_932e(0xb39c,2,1,iVar1);
      local_6 = 0;
      do {
        FUN_1000_932e(local_6 * 0x50 + -0x276e,0x50,1,iVar1);
        local_6 = local_6 + 1;
      } while (local_6 < 10);
      _fclose(iVar1);
    }
  }
  return;
}



void __cdecl16near FUN_1000_7312(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_1000_7387();
  FUN_1000_860e(*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x1e));
  FUN_1000_860e(*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x1a));
  FUN_1000_860e(*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x1c));
  uVar1 = FUN_1000_40a4(24000);
  *(undefined2 *)0xe086 = uVar1;
  *(undefined2 *)0xd338 = uVar1;
  *(undefined2 *)0xd336 = 0;
  FUN_1000_73ce();
  FUN_1000_74b1();
  FUN_1000_8ca8();
  uVar1 = (undefined2)((ulong)*(undefined4 *)0xe096 >> 0x10);
  iVar2 = (int)*(undefined4 *)0xe096;
  if ((*(byte *)(iVar2 + 0x72) & 1) != 0) {
    FUN_1000_851a(iVar2 + 0x48,uVar1);
  }
  if ((*(byte *)((int)*(undefined4 *)0xe096 + 0x72) & 2) != 0) {
    FUN_1000_8573();
  }
  uVar1 = FUN_1000_8607();
  FUN_1000_96bc(uVar1);
  *(undefined *)0xd2a2 = 0;
  return;
}



void __cdecl16near FUN_1000_7387(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xcbda = 0;
  *(undefined2 *)0xcbd8 = 0x4f2;
  *(undefined2 *)0xcac2 = 0;
  *(undefined2 *)0xcac0 = 0x4f4;
  *(undefined2 *)0xe098 = uRam000004f0;
  *(undefined2 *)0xe096 = 0;
  *(undefined2 *)0xcacc = uRam000004f0;
  *(undefined2 *)0xcaca = 0x1272;
  return;
}



void __cdecl16near FUN_1000_73ce(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  uint local_a;
  uint *local_6;
  
  uVar4 = 0x1000;
  uVar1 = FUN_1000_40a4(24000);
  *(undefined2 *)0xe086 = uVar1;
  *(undefined2 *)0xd338 = uVar1;
  *(undefined2 *)0xd336 = 0;
  if (**(int **)0xcac0 == 0) {
    thunk_EXT_FUN_0000_0000(0x1000);
    uVar4 = 0x1a95;
    thunk_EXT_FUN_0000_0000(0x1a95,*(undefined2 *)((int)*(undefined4 *)0xe096 + 0x24));
    *(undefined2 *)*(undefined4 *)0xcac0 = 1;
  }
  thunk_EXT_FUN_0000_0000(uVar4,0);
  local_6 = (uint *)0xdc02;
  local_a = 0;
  do {
    iVar2 = thunk_EXT_FUN_0000_0000(0x1a95,local_a);
    *(int *)(local_a * 2 + -0x3550) = iVar2;
    if (iVar2 == 0) {
      FUN_1000_76d1(1);
    }
    if (local_a != 0) {
      thunk_EXT_FUN_0000_0000(0x1a95,*(undefined2 *)(local_a * 2 + -0x3550),local_a);
    }
    *local_6 = local_a;
    local_6[9] = 0;
    local_6[7] = 0;
    local_6[8] = 199;
    local_6[10] = 0x13f;
    local_a = local_a + 1;
    local_6 = local_6 + 0xb;
  } while (local_a < 5);
  uVar3 = FUN_1000_40a4(0x1b00);
  *(uint *)0xd094 = uVar3;
  if ((uVar3 | *(uint *)0xd092) == 0) {
    FUN_1000_76d1(1);
  }
  *(undefined2 *)0xd092 = 0;
  FUN_1000_2864(0xed8,*(undefined2 *)0xd092,*(undefined2 *)0xd094);
  return;
}



void __cdecl16near FUN_1000_74b1(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_1000_35fc(0xb,2);
  iVar1 = thunk_EXT_FUN_0000_0000(0x1000);
  if (iVar1 == 0) {
    FUN_1000_76d1(1);
  }
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x138,0xa1,3,5);
  *(undefined2 *)0xd29e = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0xe8,0,0x58,0x65);
  *(undefined2 *)0xd330 = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x134,0xb0,0xc,8);
  *(undefined2 *)0xcaba = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x135,0xb8,0xb,0x10);
  *(undefined2 *)0xd32e = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x13b,0xa1,5,5);
  *(undefined2 *)0xd08e = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x13d,0x9c,3,5);
  *(undefined2 *)0xd88e = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x132,0xa1,3,5);
  *(undefined2 *)0xe082 = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x135,0xa1,3,5);
  *(undefined2 *)0xe09a = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x13a,0x9e,3,3);
  *(undefined2 *)0xe09c = uVar2;
  uVar2 = thunk_EXT_FUN_0000_0000(0x1a95,2,0x132,0xa6,0xe,10);
  *(undefined2 *)0xcac4 = uVar2;
  iVar1 = thunk_EXT_FUN_0000_0000(0x1a95);
  if (iVar1 == 0) {
    FUN_1000_76d1(1);
  }
  FUN_1000_3e20(*(undefined2 *)0xd32e);
  return;
}



void __cdecl16near FUN_1000_7611(void)

{
  int iVar1;
  undefined local_304 [768];
  uint local_4;
  
  thunk_EXT_FUN_0000_0000(0x1000,0);
  FUN_1000_8b6c(0x64e3,local_304,0x300);
  FUN_1000_3088(1);
  FUN_1000_35fc(0x1f,0);
  FUN_1000_289a(0xee5,0x64e3);
  FUN_1000_3070(1);
  do {
    iVar1 = thunk_EXT_FUN_0000_0000(0x1a95);
  } while (iVar1 != 0);
  local_4 = thunk_EXT_FUN_0000_0000(0x1a95);
  local_4 = local_4 & 0x5f;
  if (local_4 == 0x59) {
    FUN_1000_76d1(0);
  }
  else {
    FUN_1000_3088(1);
    thunk_EXT_FUN_0000_0000(0x1a95,1,0,0,0,0,0,0x140,200);
    FUN_1000_8b6c(local_304,0x64e3,0x300);
    FUN_1000_3070(1);
  }
  return;
}



uint __cdecl16near FUN_1000_76c0_rand(uint param_1)

{
  uint uVar1;
  
  uVar1 = _rand();
  return uVar1 % param_1;
}



void __cdecl16near FUN_1000_76d1(int param_1)

{
  undefined2 unaff_DS;
  undefined local_10;
  undefined local_f;
  
  thunk_EXT_FUN_0000_0000(0x1000,0);
  if (*(int *)0xe086 != 0) {
    FUN_1000_40cf(*(undefined2 *)0xe086);
  }
  if (*(char *)0x73f2 != '\0') {
    FUN_1000_85db();
  }
  if (*(char *)0xadfb != '\0') {
    FUN_1000_8ce6();
  }
  if (param_1 < 2) {
    local_f = 0;
    local_10 = 3;
    FUN_1000_9520(0x10,&local_10,&local_10);
  }
  thunk_EXT_FUN_0000_0000(0x1a95);
  if (param_1 == 1) {
    FUN_1000_9430(0xeed);
    param_1 = 0;
  }
  FUN_1000_9094(param_1);
  return;
}



undefined2 __cdecl16near
FUN_1000_7744_get_obj_from_coords_in_ca8e(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 unaff_DS;
  undefined local_1e;
  uint local_1c;
  undefined local_1a;
  uint local_18;
  uint local_16;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  *(undefined2 *)0xca90 = 0x7fff;
  for (local_10 = 1; local_10 < 3; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
      uVar2 = FUN_1000_7c05(local_10,param_1,param_2);
      iVar3 = FUN_1000_97f4();
      uVar4 = FUN_1000_7c05(local_10,param_3,param_4);
      iVar7 = *(int *)(local_14 * 2 + 0x105a);
      iVar9 = *(int *)(local_14 * 2 + 0x106c);
      iVar1 = *(int *)(iVar7 * 2 + 0x1054);
      iVar5 = -((uVar4 & 0xfff) - *(int *)(iVar9 * 2 + 0x1054));
      iVar6 = FUN_1000_97f4();
      iVar9 = iVar9 + iVar6;
      iVar3 = iVar3 + iVar7;
      iVar7 = FUN_1000_7c56(local_10,iVar3,iVar9);
      if (iVar7 != -1) {
        local_c = *(int **)((local_10 * 0x20 + iVar7) * 2 + -0x37a4);
        for (local_16 = 0; local_16 < *(uint *)((local_10 * 0x20 + iVar7) * 2 + 0xf0a);
            local_16 = local_16 + 1) {
          if (*(char *)(*(byte *)(local_c + 3) + 0xd2a6) != '\0') {
            local_18 = *local_c + (iVar1 - (uVar2 & 0xfff)) + 0x800;
            local_1c = local_c[1] + CONCAT11((char)((uint)iVar5 >> 8) + '\b',(char)iVar5);
            local_8 = FUN_1000_96ae_abs(local_1c);
            iVar6 = FUN_1000_96ae_abs(local_18);
            local_8 = local_8 + iVar6;
            if (local_10 == 1) {
              local_8 = local_8 >> 2;
            }
            else {
              local_18 = local_18 * 4;
              local_1c = local_1c * 4;
            }
            if (local_8 < *(int *)0xca90) {
              *(undefined *)0xca9c = (undefined)local_10;
              *(undefined *)0xca9d = (undefined)local_16;
              local_1a = (undefined)iVar3;
              *(undefined *)0xca9e = local_1a;
              local_1e = (undefined)iVar9;
              *(undefined *)0xca9f = local_1e;
              *(int **)0xca9a = local_c;
              *(uint *)0xca8e = (uint)*(byte *)(local_c + 3);
              *(int *)0xca90 = local_8;
              *(int *)0xca92 = local_18 + param_1;
              *(int *)0xca94 = ((int)local_18 >> 0xf) + param_2 + (uint)CARRY2(local_18,param_1);
              *(int *)0xca96 = local_1c + param_3;
              *(int *)0xca98 = ((int)local_1c >> 0xf) + param_4 + (uint)CARRY2(local_1c,param_3);
            }
          }
          local_c = (int *)((int)local_c + 7);
        }
      }
    }
  }
  if (*(int *)0xca90 == 0x7fff) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0xca8e;
  }
  return uVar8;
}



undefined2 __cdecl16near FUN_1000_7904_get_obj_info_in_ca8e(char param_1)

{
  uint *puVar1;
  int iVar2;
  int **ppiVar3;
  undefined extraout_AH;
  char cVar6;
  uint uVar4;
  uint uVar5;
  int *piVar7;
  undefined2 uVar8;
  int unaff_DS;
  int local_1c;
  uint local_1a;
  int **local_18;
  int local_12;
  uint local_10;
  int local_e;
  int local_c;
  int local_a;
  
  local_18 = (int **)CONCAT22(*(undefined2 *)0xd338,*(int **)0xd336);
  *(undefined2 *)0xca90 = 0x7fff;
  local_12 = 0;
                    // wld_obj_table
  if (*(char *)(param_1 + -0x2d5a) == '\x10') {
    for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
      for (local_10 = 0; (int)local_10 < 0x10; local_10 = local_10 + 1) {
        if (((*(byte *)(local_c + local_10 * -0x10 + -0x3438) & 3) == 0) &&
           (iVar2 = FUN_1000_7c56(3,local_c,local_10), iVar2 != -1)) {
          local_a = *(int *)(iVar2 * 2 + -0x36e4);
          for (local_1a = 0; local_1a < *(uint *)(iVar2 * 2 + 0xfca); local_1a = local_1a + 1) {
            if ((uint)*(byte *)(local_a + 6) == (int)param_1) {
              uVar8 = (undefined2)((ulong)local_18 >> 0x10);
              piVar7 = (int *)local_18;
              *(int *)local_18 = local_a;
              piVar7[1] = unaff_DS;
              *(undefined *)(piVar7 + 3) = 3;
              *(char *)(piVar7 + 2) = (char)local_c << 4;
              *(char *)((int)piVar7 + 5) = (char)local_10 << 4;
              local_18 = (int **)CONCAT22(uVar8,piVar7 + 4);
              local_12 = local_12 + 1;
            }
            local_a = local_a + 7;
          }
        }
      }
    }
  }
  else {
    local_1c = 1;
                    // 79eb
    for (local_e = 1; local_e < 3; local_e = local_e + 1) {
      for (local_c = 0; local_c < 0x100; local_c = local_c + local_1c) {
        for (local_10 = 0; (int)local_10 < 0x100; local_10 = local_10 + local_1c) {
          if ((*(byte *)(((local_c >> 4) - (local_10 & 0xfff0)) + -0x3438) & 3) == 0) {
            iVar2 = local_c;
            uVar5 = local_10;
            if (local_e != 1) {
              iVar2 = local_c >> 2;
              uVar5 = (int)local_10 >> 2;
            }
            iVar2 = FUN_1000_7c56(local_e,iVar2,uVar5);
            if (iVar2 != -1) {
              local_a = *(int *)((local_e * 0x20 + iVar2) * 2 + -0x37a4);
              for (local_1a = 0; local_1a < *(uint *)((local_e * 0x20 + iVar2) * 2 + 0xf0a);
                  local_1a = local_1a + 1) {
                if ((uint)*(byte *)(local_a + 6) == (int)param_1) {
                  uVar8 = (undefined2)((ulong)local_18 >> 0x10);
                  piVar7 = (int *)local_18;
                  *(int *)local_18 = local_a;
                  piVar7[1] = unaff_DS;
                  *(undefined *)(piVar7 + 3) = (undefined)local_e;
                  *(char *)(piVar7 + 2) = (char)local_c;
                  *(undefined *)((int)piVar7 + 5) = (char)local_10;
                  local_18 = (int **)CONCAT22(uVar8,piVar7 + 4);
                  local_12 = local_12 + 1;
                }
                local_a = local_a + 7;
              }
            }
          }
        }
      }
      local_1c = local_1c + 3;
    }
  }
                    // 7aed
  ppiVar3 = (int **)*(int *)0xd336;
  uVar8 = *(undefined2 *)0xd338;
  if (local_12 == 0) {
    return 0;
  }
  if (1 < local_12) {
    iVar2 = FUN_1000_76c0_rand(local_12);
    ppiVar3 = ppiVar3 + iVar2 * 2;
  }
  local_18 = (int **)CONCAT22(uVar8,ppiVar3);
  *(uint *)0xca8e = (uint)*(byte *)((int *)*local_18 + 3);
  *(uint *)0xca92 = (uint)*(byte *)(ppiVar3 + 1);
  *(undefined2 *)0xca94 = 0;
  *(uint *)0xca96 = (uint)*(byte *)((int)ppiVar3 + 5);
  *(undefined2 *)0xca98 = 0;
  FUN_1000_97d8(0xca92,0xc);
  FUN_1000_97d8(0xca96,CONCAT11(extraout_AH,0xc));
  cVar6 = *(char *)((int)ppiVar3 + 6);
  if (cVar6 == '\x01') {
    cVar6 = (char)((uint)**local_18 >> 8) + '\b';
    uVar4 = CONCAT11(cVar6,(char)**local_18);
    puVar1 = (uint *)0xca92;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)0xca94 = *(int *)0xca94 + ((int)cVar6 >> 7) + (uint)CARRY2(uVar5,uVar4);
    iVar2 = ((int *)*ppiVar3)[1];
    uVar5 = CONCAT11((char)((uint)iVar2 >> 8) + '\b',(char)iVar2);
  }
  else {
    if (cVar6 != '\x02') {
      if (cVar6 != '\x03') {
        return 0xca8e;
      }
      uVar4 = **local_18 * 0x10;
      puVar1 = (uint *)0xca92;
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + uVar4 + 0x8000;
      *(int *)0xca94 =
           *(int *)0xca94 + ((int)uVar4 >> 0xf) + (uint)(0x7fff < uVar4) +
           (uint)CARRY2(uVar5,uVar4 + 0x8000);
      uVar4 = ((int *)*ppiVar3)[1] * 0x10;
      uVar5 = uVar4 + 0x8000;
      iVar2 = ((int)uVar4 >> 0xf) + (uint)(0x7fff < uVar4);
      goto LAB_1000_7b94;
    }
    uVar4 = CONCAT11((char)((uint)**local_18 >> 8) + '\b',(char)**local_18) * 4;
    puVar1 = (uint *)0xca92;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)0xca94 = *(int *)0xca94 + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar5,uVar4);
    iVar2 = ((int *)*ppiVar3)[1];
    uVar5 = CONCAT11((char)((uint)iVar2 >> 8) + '\b',(char)iVar2) << 2;
  }
  iVar2 = (int)uVar5 >> 0xf;
LAB_1000_7b94:
  puVar1 = (uint *)0xca96;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0xca98 = *(int *)0xca98 + iVar2 + (uint)CARRY2(uVar4,uVar5);
  return 0xca8e;
}



int __cdecl16near FUN_1000_7c05(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_2 = param_2 << 1;
  }
  else if ((param_1 != 1) &&
          (((param_1 == 2 || (param_1 == 3)) || (param_2 = param_1 + -4, param_2 == 0)))) {
    param_2 = FUN_1000_97f4();
  }
  return param_2;
}



uint __cdecl16near FUN_1000_7c56(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  if (((((int)param_2 < 0) || ((int)param_3 < 0)) ||
      (*(int *)(param_1 * 2 + 0x107e) <= (int)param_2)) ||
     (*(int *)(param_1 * 2 + 0x107e) <= (int)param_3)) {
    uVar2 = 0xffff;
  }
  else {
    iVar3 = (int)param_3 >> 2;
    iVar4 = (int)param_2 >> 2;
    if (param_1 == 0) {
      iVar3 = FUN_1000_7c56(1,iVar4,iVar3);
      bVar1 = *(byte *)((param_2 & 3) + iVar3 * 0x10 + (param_3 & 3) * 4 + -0x4c60);
    }
    else if (param_1 == 1) {
      iVar3 = FUN_1000_7c56(2,iVar4,iVar3);
      bVar1 = *(byte *)((param_2 & 3) + iVar3 * 0x10 + (param_3 & 3) * 4 + -0x4a60);
    }
    else if (param_1 == 2) {
      iVar3 = FUN_1000_7c56(3,iVar4,iVar3);
      bVar1 = *(byte *)((param_2 & 3) + iVar3 * 0x10 + (param_3 & 3) * 4 + -0x4860);
    }
    else if (param_1 == 3) {
      bVar1 = *(byte *)(param_2 + param_3 * 0x10 + -0x4660);
    }
    else {
      if (param_1 - 4U != 0) {
        return param_1 - 4U;
      }
      bVar1 = *(byte *)(param_2 + param_3 * 4 + -0x4560);
    }
    uVar2 = (uint)bVar1;
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_7d71(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  int local_4;
  
  iVar1 = _fopen(param_1,0x1088);
  *(int *)0xb39e = iVar1;
  if (iVar1 == 0) {
    local_4 = 0;
    do {
      *(undefined *)(local_4 + -0x4560) = (undefined)local_4;
      local_4 = local_4 + 1;
    } while (local_4 < 0x10);
    FUN_1000_963e(0xb9a0,0,0x100);
    FUN_1000_963e(0xb7a0,0,0x200);
    FUN_1000_963e(0xb5a0,0,0x200);
    FUN_1000_963e(0xb3a0,0,0x200);
  }
  else {
    _fread(0x104c,2,1,iVar1);
    if (*(int *)0x104c == 0x3232) {
      _fread(0xbaa0,1,0x10,*(undefined2 *)0xb39e);
      _fread(0xb9a0,1,0x100,*(undefined2 *)0xb39e);
      _fread(0xb7a0,1,0x200,*(undefined2 *)0xb39e);
      _fread(0xb5a0,1,0x200,*(undefined2 *)0xb39e);
      _fread(0xb3a0,1,0x200,*(undefined2 *)0xb39e);
      uVar2 = _fclose(*(undefined2 *)0xb39e);
      return uVar2;
    }
    _fclose(*(undefined2 *)0xb39e);
  }
  return 0;
}



undefined2 __cdecl16near FUN_1000_7e88(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  uint local_c;
  uint local_a;
  int local_8;
  int local_6;
  undefined local_4 [2];
  
  iVar1 = _fopen(param_1,0x108b);
  *(int *)0xb39e = iVar1;
  if (iVar1 != 0) {
    _fread(0x104e,2,1,iVar1);
    if (*(int *)0x104e == 0x3131) {
      _fread(0xf00,2,5,*(undefined2 *)0xb39e);
      local_6 = 0;
      while (*(uint *)(local_6 * 2 + 0xf00) < 0x21) {
        _fread(local_6 * 0x40 + 0xf0a,2,*(undefined2 *)(local_6 * 2 + 0xf00),*(undefined2 *)0xb39e);
        local_6 = local_6 + 1;
        if (4 < local_6) {
          local_8 = 0;
          local_6 = 0;
          do {
            if (4 < local_6) {
              uVar2 = _fclose(*(undefined2 *)0xb39e);
              return uVar2;
            }
            for (local_a = 0; local_a < *(uint *)(local_6 * 2 + 0xf00); local_a = local_a + 1) {
              *(int *)((local_6 * 0x20 + local_a) * 2 + -0x37a4) = local_8 + -0x4550;
              for (local_c = 0; local_c < *(uint *)((local_6 * 0x20 + local_a) * 2 + 0xf0a);
                  local_c = local_c + 1) {
                if (0xdac < local_8) {
                  return 0;
                }
                _fread(local_8 + -0x4550,2,1,*(undefined2 *)0xb39e);
                _fread(local_8 + -0x454e,2,1,*(undefined2 *)0xb39e);
                _fread(local_8 + -0x454c,2,1,*(undefined2 *)0xb39e);
                _fread(local_4,2,1,*(undefined2 *)0xb39e);
                *(undefined *)(local_8 + -0x454a) = local_4[0];
                local_8 = local_8 + 7;
              }
            }
            local_6 = local_6 + 1;
          } while( true );
        }
      }
    }
    else {
      _fclose(*(undefined2 *)0xb39e);
    }
  }
  return 0;
}



void __cdecl16near FUN_1000_800a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined2 __cdecl16near FUN_1000_8030(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}



void __cdecl16near FUN_1000_804e(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  cVar4 = (*pcVar3)();
  if (cVar4 == '\0') {
    iVar5 = -1;
    do {
      pcVar1 = (char *)(iVar5 + 0x617f);
      if (*pcVar1 == '\0') {
        return;
      }
      pcVar2 = (char *)(iVar5 + 0x61bc);
      iVar5 = iVar5 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  return;
}



void __cdecl16near FUN_1000_8075(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *(undefined2 *)0x649d = 0x200;
    return;
  }
  if ((iVar2 != 2) && (iVar2 != 3)) {
    if (iVar2 == 4) {
      FUN_1000_8230();
      return;
    }
    FUN_1000_8230();
    return;
  }
  FUN_1000_8230();
  return;
}



void __cdecl16near FUN_1000_80cc(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined in_CF;
  
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *(undefined2 *)0x649d = 0x200;
    return;
  }
  if ((iVar2 != 2) && (iVar2 != 3)) {
    if (iVar2 == 4) {
      FUN_1000_8230();
      return;
    }
    FUN_1000_8230();
    return;
  }
  FUN_1000_8230();
  return;
}



void __cdecl16near FUN_1000_8123(undefined2 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 unaff_DS;
  undefined in_CF;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if ((bool)in_CF) {
    iVar5 = -1;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (iVar5 != -1) {
      *(char *)0x6233 = (char)iVar5 + '0';
      *(undefined *)0x6234 = 0x24;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar7 = (undefined *)0x64e3;
    uVar4 = *(undefined4 *)0xd092;
    if (7 < param_2) {
      param_2 = 8;
    }
    puVar6 = (undefined *)((int)uVar4 + param_2 * 0x300);
    for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  return;
}



void __cdecl16near FUN_1000_8144(undefined2 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 unaff_SS;
  undefined in_CF;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if ((bool)in_CF) {
    iVar5 = -1;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (iVar5 != -1) {
      *(char *)0x6233 = (char)iVar5 + '0';
      *(undefined *)0x6234 = 0x24;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar7 = (undefined *)0x64e3;
    uVar4 = *(undefined4 *)0xd092;
    if (7 < param_2) {
      param_2 = 8;
    }
    puVar6 = (undefined *)((int)uVar4 + param_2 * 0x300);
    for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  return;
}



void __cdecl16near FUN_1000_816f(undefined2 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 unaff_ES;
  undefined in_CF;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)(&stack0xfffe);
  if ((bool)in_CF) {
    iVar5 = -1;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (iVar5 != -1) {
      *(char *)0x6233 = (char)iVar5 + '0';
      *(undefined *)0x6234 = 0x24;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar7 = (undefined *)0x64e3;
    uVar4 = *(undefined4 *)0xd092;
    if (7 < param_2) {
      param_2 = 8;
    }
    puVar6 = (undefined *)((int)uVar4 + param_2 * 0x300);
    for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  return;
}



void __cdecl16near FUN_1000_81c6(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined in_CF;
  int in_stack_0000000c;
  
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if ((bool)in_CF) {
    iVar5 = -1;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (iVar5 != -1) {
      cRam00020b83 = (char)iVar5 + '0';
      uRam00020b84 = 0x24;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar7 = (undefined *)0x64e3;
    uVar4 = (ulong)uRam000279e2 >> 0x10;
    if (7 < in_stack_0000000c) {
      in_stack_0000000c = 8;
    }
    puVar6 = (undefined *)((int)uRam000279e2 + in_stack_0000000c * 0x300);
    for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  return;
}



void __cdecl16near FUN_1000_81e7(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x649f = param_1;
  FUN_1000_81c6(&stack0xfffe);
  return;
}



void __cdecl16near
FUN_1000_81ff(undefined2 param_1,int param_2,uint param_3,undefined2 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 unaff_ES;
  bool bVar8;
  
  bVar8 = CARRY2(param_3,param_5);
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)(&stack0xfffe);
  if (bVar8) {
    iVar5 = -1;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (iVar5 != -1) {
      *(char *)0x6233 = (char)iVar5 + '0';
      *(undefined *)0x6234 = 0x24;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar7 = (undefined *)0x64e3;
    uVar4 = *(undefined4 *)0xd092;
    if (7 < param_2) {
      param_2 = 8;
    }
    puVar6 = (undefined *)((int)uVar4 + param_2 * 0x300);
    for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    return;
  }
  return;
}



void FUN_1000_8230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int in_CX;
  int in_BX;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined2 unaff_DS;
  int in_stack_00000012;
  
  pcVar3 = (code *)swi(0x10);
  (*pcVar3)();
  for (iVar6 = 0; *(char *)(in_BX + iVar6) != '\0'; iVar6 = iVar6 + 1) {
  }
  *(undefined *)(in_BX + iVar6) = 0x24;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  if (in_CX != -1) {
    *(char *)0x6233 = (char)in_CX + '0';
    *(undefined *)0x6234 = 0x24;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
  }
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  puVar7 = (undefined *)0x64e3;
  uVar4 = *(undefined4 *)0xd092;
  if (7 < in_stack_00000012) {
    in_stack_00000012 = 8;
  }
  puVar5 = (undefined *)((int)uVar4 + in_stack_00000012 * 0x300);
  for (iVar6 = 0x300; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_1000_826c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 unaff_DS;
  
  puVar6 = (undefined *)0x64e3;
  uVar3 = *(undefined4 *)0xd092;
  if (7 < param_1) {
    param_1 = 8;
  }
  puVar5 = (undefined *)((int)uVar3 + param_1 * 0x300);
  for (iVar4 = 0x300; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near
FUN_1000_829a(int *param_1,int param_2,undefined *param_3,int param_4,undefined *param_5,
             undefined param_6)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  puVar6 = &stack0xfffe;
  uVar1 = *(undefined2 *)(*param_1 * 2 + -0x3550);
  bVar8 = param_2 == param_4;
  iVar7 = param_2;
  puVar5 = param_5;
  if (param_4 < param_2) {
    iVar7 = param_4;
    param_4 = param_2;
    puVar5 = param_3;
    param_3 = param_5;
  }
  cVar2 = (char)((uint)iVar7 >> 8);
  if ((bVar8) && (param_3 == puVar5)) {
    iVar3 = 0;
  }
  else {
    *(undefined2 *)0x67ec = 1;
    param_4 = param_4 - iVar7;
    iVar3 = (int)puVar5 - (int)param_3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      *(int *)0x67ec = -*(int *)0x67ec;
    }
    cVar2 = param_4 < iVar3;
    iVar4 = param_4;
    if ((bool)cVar2) {
      iVar4 = iVar3;
      iVar3 = param_4;
    }
    *(int *)0x67e4 = iVar4;
    *(int *)0x67e6 = iVar3;
    puVar6 = (undefined *)*(undefined2 *)0x67e6;
    iVar3 = *(int *)0x67e4;
    puVar5 = (undefined *)-(iVar3 + 1U >> 1);
  }
  while( true ) {
    if ((((-1 < iVar7) && (iVar7 < 0x140)) && (-1 < (int)param_3)) && ((int)param_3 < 0xa8)) {
      *(undefined *)(*(int *)((int)param_3 * 2 + 0x67f2) + iVar7) = param_6;
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    if (cVar2 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      param_3 = param_3 + *(int *)0x67ec;
    }
    puVar5 = puVar5 + (int)puVar6;
    if (-1 < (int)puVar5) {
      puVar5 = puVar5 + -*(int *)0x67e4;
      if (cVar2 == '\0') {
        param_3 = param_3 + *(int *)0x67ec;
      }
      else {
        iVar7 = iVar7 + 1;
      }
    }
  }
  return;
}



void __cdecl16near FUN_1000_8364(void)

{
  FUN_1000_8378();
  return;
}



undefined4 __cdecl16near FUN_1000_8378(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  undefined uVar8;
  int iVar7;
  undefined uVar9;
  int in_CX;
  byte *in_DX;
  int iVar10;
  int in_BX;
  uint uVar11;
  undefined2 unaff_ES;
  
  uVar6 = 0;
  if ((bRam00000489 & 2) != 0) {
    do {
      pbVar1 = in_DX;
      pbVar2 = in_DX + 1;
      pbVar3 = in_DX + 2;
      in_DX = in_DX + 3;
      lVar4 = (ulong)*pbVar2 * 0x970a + (ulong)*pbVar1 * 0x4ccd + (ulong)*pbVar3 * 0x1c29;
      iVar10 = (int)lVar4;
      iVar7 = iVar10 << 1;
      uVar8 = (undefined)in_BX;
      while( true ) {
        uVar9 = (undefined)((uint)iVar7 >> 8);
        bVar5 = in(0x3da);
        iVar7 = CONCAT11(uVar9,bVar5);
        if ((bVar5 & 1) != 0) break;
        do {
          bVar5 = in(0x3da);
          iVar7 = CONCAT11((char)((uint)iVar7 >> 8),bVar5);
        } while ((bVar5 & 8) == 0);
      }
      in_BX = CONCAT11((char)((ulong)lVar4 >> 0x10) + (iVar10 < 0),uVar8) + 1;
      out(0x3c8,uVar8);
      uVar8 = (undefined)((uint)in_BX >> 8);
      out(0x3c9,uVar8);
      out(0x3c9,uVar8);
      out(0x3c9,uVar8);
      in_CX = in_CX + -1;
    } while (in_CX != 0);
    return CONCAT22(0x3c9,CONCAT11(uVar9,uVar8));
  }
  do {
    iVar10 = 0x3da;
    do {
      bVar5 = in(0x3da);
      uVar6 = CONCAT11((char)(uVar6 >> 8),bVar5);
    } while ((bVar5 & 8) == 0);
    uVar11 = 0;
    while( true ) {
      do {
        iVar10 = CONCAT11((char)((uint)iVar10 >> 8),200);
        uVar8 = (undefined)(uVar6 >> 8);
        uVar9 = (undefined)in_BX;
        in_BX = in_BX + 1;
        out(iVar10,uVar9);
        iVar10 = iVar10 + 1;
        out(iVar10,*in_DX);
        pbVar2 = in_DX + 2;
        out(iVar10,in_DX[1]);
        in_DX = in_DX + 3;
        uVar6 = CONCAT11(uVar8,*pbVar2);
        out(iVar10,*pbVar2);
        in_CX = in_CX + -1;
        if (in_CX == 0) {
          return CONCAT22(iVar10,uVar6);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 0);
      if (uVar11 == 0) break;
      iVar10 = CONCAT11((char)((uint)iVar10 >> 8),0xda);
      bVar5 = in(iVar10);
      uVar6 = CONCAT11(uVar8,bVar5);
      if ((bVar5 & 8) == 0) {
        uVar6 = (uVar11 & 0xff) * -0xd;
        uVar11 = uVar6;
      }
    }
  } while( true );
}



void __cdecl16near FUN_1000_8427(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined *)0xadfc = 0;
  do {
  } while (*(char *)0xadfc == '\0');
  while (*(char *)0x64e2 != '\0') {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    *(char *)0x64e2 = *(char *)0x64e2 + -1;
  }
  return;
}



void __cdecl16near FUN_1000_845a(void)

{
  FUN_1000_8469();
  FUN_1000_84b1();
  FUN_1000_84b1();
  return;
}



undefined4 __cdecl16near FUN_1000_8469(void)

{
  byte bVar1;
  undefined2 in_AX;
  int iVar2;
  undefined2 in_DX;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar4 = 0;
  out(0x201,(char)in_AX);
  do {
    bVar1 = in(0x201);
    iVar3 = iVar3 + (uint)((byte)(bVar1 & 3) & 1);
    iVar4 = iVar4 + ((bVar1 & 3) >> 1);
    bVar5 = (bVar1 & 3) != 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0 && bVar5);
  if (bVar5) {
    iVar3 = -1;
    iVar4 = -1;
  }
  *(int *)0x69aa = iVar3;
  *(int *)0x69ac = iVar4;
  return CONCAT22(in_DX,in_AX);
}



undefined4 __cdecl16near FUN_1000_84b1(void)

{
  uint uVar1;
  undefined2 in_AX;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined2 in_DX;
  uint unaff_SI;
  int iVar5;
  undefined2 unaff_DS;
  
  iVar5 = unaff_SI * 2;
  uVar1 = *(uint *)(iVar5 + 0x69aa);
  uVar2 = uVar1 - *(int *)(iVar5 + 0x6992);
  if (uVar2 == 0) {
    bVar3 = 0x7f;
  }
  else {
    if (-1 < (int)uVar2) {
      if (uVar1 < *(uint *)(iVar5 + 0x698a)) {
        cVar4 = ((byte)(((ulong)uVar2 << 0x10) / (ulong)*(uint *)(iVar5 + 0x69a2) >> 8) >> 1) + 0x80
        ;
      }
      else {
        cVar4 = -1;
      }
      *(char *)((unaff_SI & 0x7fff) + 0x69b2) = cVar4;
      return CONCAT22(in_DX,in_AX);
    }
    if (*(uint *)(iVar5 + 0x6982) < uVar1) {
      bVar3 = (byte)~(byte)(((ulong)-uVar2 << 0x10) / (ulong)*(uint *)(iVar5 + 0x699a) >> 8) >> 1;
    }
    else {
      *(uint *)(iVar5 + 0x6982) = uVar1;
      *(int *)(iVar5 + 0x699a) = -uVar2;
      bVar3 = 0;
    }
  }
  *(byte *)((unaff_SI & 0x7fff) + 0x69b2) = bVar3;
  return CONCAT22(in_DX,in_AX);
}



void __cdecl16near FUN_1000_851a(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)param_1;
  puVar5 = (undefined2 *)0x6982;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



undefined __cdecl16near FUN_1000_8530(char param_1)

{
  undefined uVar1;
  undefined2 unaff_DS;
  
  if (param_1 == '\0') {
    uVar1 = *(undefined *)0x69b6;
  }
  else {
    uVar1 = *(undefined *)0x69b7;
  }
  return uVar1;
}



void __cdecl16near FUN_1000_8545(void)

{
  code *pcVar1;
  uint in_CX;
  undefined2 extraout_DX;
  uint in_BX;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  *(uint *)0xe08a = in_CX >> 1;
  *(undefined2 *)0xe08c = extraout_DX;
  *(undefined *)0x69b6 = 0;
  *(undefined *)0x69b7 = 0;
  if ((in_BX & 1) != 0) {
    *(char *)0x69b6 = *(char *)0x69b6 + '\x01';
  }
  if ((in_BX & 2) != 0) {
    *(char *)0x69b7 = *(char *)0x69b7 + '\x01';
  }
  return;
}



void __cdecl16near FUN_1000_8573(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_85a7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_85db(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined2 __cdecl16near FUN_1000_8607(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x1a);
  (*pcVar1)();
  return extraout_DX;
}



void __cdecl16near FUN_1000_860e(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  *(undefined *)0x73fc = 0;
  iVar3 = (*(uint *)0x1c & 0xff) * 5 + 0x69b8;
  iVar2 = *(int *)0x22;
  puVar4 = (undefined2 *)0x24;
  uVar1 = *(undefined2 *)0x18;
  do {
    *(undefined2 *)(iVar3 + 1) = *puVar4;
    *(undefined2 *)(iVar3 + 3) = uVar1;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __cdecl16near FUN_1000_8667(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  undefined in_CF;
  
  *(undefined *)0x73fc = 0;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if ((bool)in_CF) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x21);
    cVar3 = (*pcVar2)();
    *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
    *(undefined2 *)0x8d6a = 0x81c6;
    *(undefined2 *)0x649f = param_1;
    *(undefined2 *)0x8d62 = param_2;
    FUN_1000_885e(&stack0xfffe,param_1);
    thunk_EXT_FUN_0000_0000(0x1000);
    thunk_EXT_FUN_0000_0000(0x1a95);
    *(undefined2 *)0x8d68 = 0;
    *(undefined2 *)0x8d60 = 64000;
    do {
      uVar4 = thunk_EXT_FUN_0000_0000(0x1a95);
      *(undefined2 *)0x8d64 = uVar4;
      FUN_1000_885f();
      thunk_EXT_FUN_0000_0000(0x1a95);
      thunk_EXT_FUN_0000_0000(0x1a95);
      *(int *)0x8d68 = *(int *)0x8d68 + 1;
      piVar1 = (int *)0x8d60;
      *piVar1 = *piVar1 + -0x140;
    } while (*piVar1 != 0);
    return;
  }
  return;
}



void __cdecl16near FUN_1000_871a(undefined2 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8d6a = 0x81c6;
  *(undefined2 *)0x649f = param_1;
  thunk_EXT_FUN_0000_0000(0x1000,&stack0xfffe);
  FUN_1000_885e();
  *(undefined2 *)0x8d68 = 0;
  *(undefined2 *)0x8d60 = 64000;
  do {
    uVar2 = thunk_EXT_FUN_0000_0000(0x1a95);
    *(undefined2 *)0x8d64 = uVar2;
    FUN_1000_885f();
    thunk_EXT_FUN_0000_0000(0x1a95);
    thunk_EXT_FUN_0000_0000(0x1a95);
    *(int *)0x8d68 = *(int *)0x8d68 + 1;
    piVar1 = (int *)0x8d60;
    *piVar1 = *piVar1 + -0x140;
  } while (*piVar1 != 0);
  return;
}



void __cdecl16near FUN_1000_8782(undefined2 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8d6a = 0x819d;
  *(undefined2 *)0x649d = 0x200;
  *(undefined2 *)0x6499 = 0;
  *(undefined2 *)0x6497 = param_1;
  thunk_EXT_FUN_0000_0000(0x1000,&stack0xfffe);
  FUN_1000_885e();
  *(undefined2 *)0x8d68 = 0;
  *(undefined2 *)0x8d60 = 64000;
  do {
    uVar2 = thunk_EXT_FUN_0000_0000(0x1a95);
    *(undefined2 *)0x8d64 = uVar2;
    FUN_1000_885f();
    thunk_EXT_FUN_0000_0000(0x1a95);
    thunk_EXT_FUN_0000_0000(0x1a95);
    *(int *)0x8d68 = *(int *)0x8d68 + 1;
    piVar1 = (int *)0x8d60;
    *piVar1 = *piVar1 + -0x140;
  } while (*piVar1 != 0);
  return;
}



void __cdecl16near FUN_1000_87f6(undefined2 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8d6a = 0x81c6;
  *(undefined2 *)0x649f = param_1;
  thunk_EXT_FUN_0000_0000(0x1000,&stack0xfffe);
  FUN_1000_885e();
  *(undefined2 *)0x8d68 = 0;
  *(undefined2 *)0x8d60 = 64000;
  do {
    uVar2 = thunk_EXT_FUN_0000_0000(0x1a95);
    *(undefined2 *)0x8d64 = uVar2;
    FUN_1000_885f();
    thunk_EXT_FUN_0000_0000(0x1a95);
    thunk_EXT_FUN_0000_0000(0x1a95);
    *(int *)0x8d68 = *(int *)0x8d68 + 1;
    piVar1 = (int *)0x8d60;
    *piVar1 = *piVar1 + -0x140;
  } while (*piVar1 != 0);
  return;
}



void __cdecl16near FUN_1000_885e(void)

{
  return;
}



void __cdecl16near FUN_1000_885f(void)

{
  undefined2 uVar1;
  uint unaff_DI;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x649d;
  if (unaff_DI >> 1 == 0) {
    FUN_1000_8889();
  }
  *(undefined2 *)0x8d70 = 0x140;
  FUN_1000_890a();
  *(undefined2 *)0x649d = uVar1;
  return;
}



void __cdecl16near FUN_1000_8889(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 *unaff_SI;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8d6c = 0x6435;
  *(undefined2 *)0x8d6e = 0x8f81;
  *(undefined *)0x8d72 = 0;
  *(undefined *)0x8d73 = 0;
  if (*(undefined2 **)0x8d6c <= unaff_SI) {
    (**(code **)0x8d6a)();
    unaff_SI = (undefined2 *)0x6235;
  }
  uVar1 = *unaff_SI;
  *(undefined2 *)0x8d7a = uVar1;
  *(undefined *)0x8d7c = 8;
  *(undefined *)0x8d7d = 1;
  cVar2 = (char)uVar1;
  if (cVar2 < '\0') {
    *(char *)0x8d7d = *(char *)0x8d7d + -1;
    cVar2 = -cVar2;
  }
  *(char *)0x8d75 = cVar2;
  FUN_1000_88d4();
  return;
}



void __cdecl16near FUN_1000_88d4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(undefined *)0x8d74 = 9;
  *(undefined2 *)0x8d76 = 0x1ff;
  *(undefined2 *)0x8d78 = 0x100;
  iVar3 = 0;
  iVar2 = 0x800;
  do {
    *(undefined2 *)(iVar3 + 0x7420) = 0xffff;
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cVar1 = '\0';
  iVar3 = 0;
  iVar2 = 0x100;
  do {
    *(char *)(iVar3 + 0x7422) = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void __cdecl16near FUN_1000_890a(void)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar6;
  undefined *puVar7;
  undefined2 *puVar9;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 *puVar8;
  
  if (*(char *)0x8d7d != '\0') {
    *(uint *)0x8d70 = *(uint *)0x8d70 >> 1;
  }
  puVar7 = (undefined *)*(undefined2 *)0x8d6e;
  *(BADSPACEBASE **)0x8d6e = register0x00000010;
  uVar6 = *(undefined2 *)0x8d78;
  do {
    if (*(char *)0x8d72 == '\0') {
      puVar8 = (undefined2 *)(puVar7 + -2);
      puVar7 = puVar7 + -2;
      *puVar8 = 0x892c;
      cVar4 = FUN_1000_8983();
      if (cVar4 == -0x70) {
        puVar9 = (undefined2 *)(puVar7 + -2);
        puVar7 = puVar7 + -2;
        *puVar9 = 0x8939;
        cVar4 = FUN_1000_8983();
        uVar6 = extraout_DX_00;
        if (cVar4 != '\0') {
          *(char *)0x8d72 = cVar4 + -1;
          goto LAB_1000_894a;
        }
        cVar4 = -0x70;
        *(undefined *)0x8d73 = 0x90;
      }
      else {
        *(char *)0x8d73 = cVar4;
        uVar6 = extraout_DX;
      }
    }
    else {
LAB_1000_894a:
      cVar4 = *(char *)0x8d73;
      *(char *)0x8d72 = *(char *)0x8d72 + -1;
    }
    if (*(char *)0x8d7d == '\0') {
      puVar3 = unaff_DI;
      unaff_DI = (undefined2 *)((int)unaff_DI + 1);
      *(char *)puVar3 = cVar4;
      piVar1 = (int *)0x8d70;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    else {
      uVar5 = CONCAT11(cVar4,cVar4) & 0xff0f;
      puVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar3 = CONCAT11((byte)(uVar5 >> 0xc),(char)uVar5);
      piVar1 = (int *)0x8d70;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    if (iVar2 == 0) {
      *(undefined2 *)0x8d78 = uVar6;
      *(undefined **)0x8d6e = puVar7;
      return;
    }
  } while( true );
}



void FUN_1000_8983(void)

{
  int *piVar1;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  uint uVar5;
  uint in_DX;
  uint uVar6;
  int *unaff_SI;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if (&stack0x0000 == (undefined *)0x8f7f) {
    bVar4 = *(byte *)0x8d7c;
    uVar6 = *(uint *)0x8d7a >> (0x10 - bVar4 & 0x1f);
    for (; (char)bVar4 < *(char *)0x8d74; bVar4 = bVar4 + 0x10) {
      if (*(int **)0x8d6c <= unaff_SI) {
        (**(code **)0x8d6a)();
        unaff_SI = (int *)0x6235;
      }
      piVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      iVar2 = *piVar1;
      *(int *)0x8d7a = iVar2;
      uVar6 = uVar6 | iVar2 << (bVar4 & 0x1f);
    }
    *(char *)0x8d7c = bVar4 - *(char *)0x8d74;
    uVar6 = uVar6 & *(uint *)0x8d76;
    uVar5 = uVar6;
    if ((int)in_DX <= (int)uVar6) {
      uVar6 = *(uint *)0x8d7e;
      uVar5 = in_DX;
    }
    do {
      iVar2 = uVar6 * 3;
      uVar6 = *(uint *)(iVar2 + 0x7420);
    } while (uVar6 != 0xffff);
    uVar3 = *(undefined *)(iVar2 + 0x7422);
    *(undefined *)0x8d80 = uVar3;
    *(undefined *)(in_DX * 3 + 0x7422) = uVar3;
    *(undefined2 *)(in_DX * 3 + 0x7420) = *(undefined2 *)0x8d7e;
    if (*(int *)0x8d76 < (int)(in_DX + 1)) {
      *(char *)0x8d74 = *(char *)0x8d74 + '\x01';
      *(uint *)0x8d76 = *(uint *)0x8d76 << 1 | 1;
    }
    if (*(char *)0x8d75 < *(char *)0x8d74) {
      FUN_1000_88d4();
    }
    *(uint *)0x8d7e = uVar5;
  }
  (*in_stack_00000000)();
  return;
}



void __cdecl16near
FUN_1000_8a32(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  uVar2 = thunk_EXT_FUN_0000_0000(0x1000,&stack0xfffe);
  thunk_EXT_FUN_0000_0000(0x1a95,uVar2);
  thunk_EXT_FUN_0000_0000(0x1a95);
  FUN_1000_8aa0();
  *(int *)0x8f84 = param_5;
  *(int *)0x8f82 = param_3;
  puVar5 = (undefined2 *)(param_3 * 2 + -0x707a);
  iVar3 = (param_5 - param_3) + 1;
  for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_2;
  }
  puVar5 = (undefined2 *)(param_3 * 2 + -0x6ec2);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_4;
  }
  thunk_EXT_FUN_0000_0000(0x1a95);
  thunk_EXT_FUN_0000_0000(0x1a95);
  return;
}



void __cdecl16near FUN_1000_8aa0(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x8f82;
  if (-1 < iVar2) {
    puVar5 = (undefined2 *)(iVar2 * 2 + -0x707a);
    iVar3 = (*(int *)0x8f84 + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)0x8f82 = 0xffff;
    puVar5 = (undefined2 *)(iVar2 * 2 + -0x6ec2);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x8f84 = 0;
  }
  return;
}



void __cdecl16near
FUN_1000_8ad1(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,int param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  uVar2 = thunk_EXT_FUN_0000_0000(0x1000,&stack0xfffe);
  thunk_EXT_FUN_0000_0000(0x1a95,uVar2);
  thunk_EXT_FUN_0000_0000(0x1a95);
  FUN_1000_8aa0();
  *(int *)0x8f84 = param_5;
  *(int *)0x8f82 = param_3;
  puVar5 = (undefined2 *)(param_3 * 2 + -0x707a);
  iVar3 = (param_5 - param_3) + 1;
  for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_2;
  }
  puVar5 = (undefined2 *)(param_3 * 2 + -0x6ec2);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = param_4;
  }
  thunk_EXT_FUN_0000_0000(0x1a95);
  thunk_EXT_FUN_0000_0000(0x1a95);
  return;
}



void __cdecl16near FUN_1000_8b3e(undefined *param_1,int param_2)

{
  undefined *puVar1;
  undefined2 unaff_DS;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = 0;
  }
  return;
}



void __cdecl16near FUN_1000_8b55(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = 0;
  }
  return;
}



void __cdecl16near FUN_1000_8b6c(undefined *param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 unaff_DS;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar2 = param_2;
    param_2 = param_2 + 1;
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_1000_8b86(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar2 = param_2;
    param_2 = param_2 + 1;
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_1000_8ba0(undefined *param_1,undefined2 param_2,int param_3)

{
  undefined *puVar1;
  undefined2 unaff_DS;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = 0;
  }
  return;
}



void __cdecl16near FUN_1000_8bba(undefined2 *param_1,undefined2 param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = param_2;
  }
  return;
}



void __cdecl16near FUN_1000_8bd2(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar3 = (undefined2 *)param_1;
  puVar4 = (undefined2 *)param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



int __cdecl16near FUN_1000_8bea(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - param_3;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  uVar2 = param_2 - param_4;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  if ((int)uVar2 <= (int)uVar1) {
    return uVar1 + (uVar2 >> 2);
  }
  return (uVar1 >> 2) + uVar2;
}



int __cdecl16near FUN_1000_8c15(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)((long)param_1 * (long)param_2);
  return ((int)((ulong)((long)param_1 * (long)param_2) >> 0x10) << 1 | (uint)(iVar1 < 0)) +
         (uint)(iVar1 << 1 < 0);
}



undefined2 __cdecl16near FUN_1000_8c7c(undefined2 param_1)

{
  FUN_1000_8c88();
  return param_1;
}



undefined4 __cdecl16near FUN_1000_8c88(void)

{
  long lVar1;
  uint in_BX;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = (in_BX >> 8) * 2;
  lVar1 = (long)(*(int *)(iVar2 + -0x5406) - *(int *)(iVar2 + -0x5408)) * (long)(int)(in_BX & 0xff);
  return CONCAT22((int)((ulong)lVar1 >> 8),CONCAT11((char)((ulong)lVar1 >> 8),(char)lVar1 << 1));
}



void __cdecl16near FUN_1000_8ca8(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xae07 = 1;
  *(undefined2 *)0xae11 = 1;
  *(undefined2 *)0xadfd = 0;
  *(undefined2 *)0xadff = 0;
  FUN_1000_8dd8();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  DAT_1000_8d6d._0_2_ = in_BX;
  DAT_1000_8d6d._2_2_ = unaff_ES;
  (*pcVar1)();
  *(undefined *)0xadfb = 1;
  return;
}



void __cdecl16near FUN_1000_8ce6(undefined2 param_1)

{
  code *pcVar1;
  
  out(0x43,0x36);
  out(0x40,0);
  out(0x40,0);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined *)0xadfb = 0;
  return;
}



void __cdecl16near FUN_1000_8dd8(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  *(undefined *)0xae09 = 1;
  *(undefined *)0xae10 = 1;
  *(undefined2 *)0xae0c = 0;
  *(undefined2 *)0xae0e = 0;
  iVar2 = FUN_1000_8ead((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                        (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                        (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                        (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  iVar6 = 0x10;
  do {
    iVar3 = FUN_1000_8ead();
    puVar1 = (uint *)0xae0c;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + (iVar2 - iVar3);
    *(int *)0xae0e = *(int *)0xae0e + (uint)CARRY2(uVar4,iVar2 - iVar3);
    iVar6 = iVar6 + -1;
    iVar2 = iVar3;
  } while (iVar6 != 0);
  uVar5 = *(uint *)0xae0c;
  iVar2 = *(int *)0xae0e;
  puVar1 = (uint *)0xadfd;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0xadff = *(int *)0xadff + iVar2 + (uint)CARRY2(uVar4,uVar5);
  uVar4 = (uint)(CONCAT22(iVar2,uVar5) / 0x10);
  uVar5 = uVar4 >> 1;
  *(uint *)0xae0c = uVar5;
  uVar4 = (uVar5 + (uVar4 >> 5)) / 0xf89;
  if ((uVar4 < 4) || (6 < uVar4)) {
    *(undefined *)0xae10 = 0;
    *(undefined2 *)0xae0c = 0x4dae;
    uVar4 = 5;
  }
  *(uint *)0xae0a = uVar4;
  if (*(int *)0xae07 != 1) {
    *(uint *)0xae07 = uVar4;
  }
  uVar4 = *(uint *)0xae0c;
  uVar5 = *(uint *)0xae07;
  *(uint *)0xae03 = uVar4 / uVar5;
  *(uint *)0xae01 = uVar4 / uVar5;
  return;
}



undefined2 __cdecl16near FUN_1000_8ead(void)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x43,0);
  uVar2 = in(0x40);
  uVar3 = in(0x40);
  return CONCAT11(uVar3,uVar2);
}



void __cdecl16far entry(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined *puVar12;
  undefined2 unaff_ES;
  undefined2 uVar13;
  undefined2 unaff_DS;
  
  puVar6 = (undefined *)0x1000;
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  if (bVar4 < 2) {
    *(undefined2 *)(puVar6 + -2) = unaff_ES;
    *(undefined2 *)(puVar6 + -4) = 0;
    return;
  }
  uVar11 = *(int *)0x2 + 0xe56b;
  if (0xfff < uVar11) {
    uVar11 = 0x1000;
  }
  puVar7 = puVar6 + -0x1f62;
  puVar12 = puVar6 + -0x1f62;
  if ((undefined *)0x1f61 < puVar6) {
    *(undefined2 *)(puVar6 + -0x1f64) = 0x1a95;
    unaff_DS = *(undefined2 *)(puVar6 + -0x1f64);
    *(undefined2 *)(puVar6 + -0x1f64) = 0x8f0a;
    FUN_1000_9800();
    *(undefined2 *)(puVar6 + -0x1f64) = 0;
    *(undefined2 *)(puVar6 + -0x1f66) = 0x8f10;
    FUN_1000_9873();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    puVar12 = puVar7;
  }
  DAT_1a95_ae1c = uVar11 * 0x10 + -1;
  DAT_1a95_ae1e = 0x1a95;
  puVar8 = (undefined *)((uint)puVar12 & 0xfffe);
  DAT_1a95_ae28 = puVar8 + -2;
  DAT_1a95_ae22 = puVar8;
  *(undefined2 *)(puVar8 + -2) = 0xfffe;
  puVar9 = puVar8 + -4;
  DAT_1a95_ae24 = puVar8 + -4;
  DAT_1a95_ae26 = puVar8 + -4;
  DAT_1a95_ae18 = puVar8 + -4;
  *(undefined2 *)(puVar8 + -4) = 1;
  *(int *)0x2 = uVar11 + 0x1a95;
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  DAT_1a95_ae58 = unaff_DS;
  *(undefined2 *)(puVar9 + -2) = 0x1a95;
  uVar13 = *(undefined2 *)(puVar9 + -2);
  puVar12 = (undefined *)0xb270;
  for (iVar5 = 0x2e30; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar12;
    puVar12 = puVar12 + 1;
    *puVar1 = 0;
  }
  *(undefined2 *)(puVar9 + -2) = 0x1a95;
  pcVar2 = *(code **)0xb16e;
  if (pcVar2 != (code *)0x0) {
    puVar10 = (undefined2 *)(puVar9 + -2);
    puVar9 = puVar9 + -2;
    *puVar10 = 0x8f73;
    (*pcVar2)();
  }
  *(undefined2 *)(puVar9 + -2) = 0x8f76;
  FUN_1000_057c();
  *(undefined2 *)(puVar9 + -2) = 0x8f79;
  FUN_1000_057b();
  *(undefined2 *)(puVar9 + -2) = 0x8f7e;
  FUN_1000_8fc6();
  *(undefined2 *)(puVar9 + -2) = 0x1a95;
  uVar13 = *(undefined2 *)(puVar9 + -2);
  *(undefined2 *)(puVar9 + -2) = *(undefined2 *)0xae79;
  *(undefined2 *)(puVar9 + -4) = *(undefined2 *)0xae77;
  *(undefined2 *)(puVar9 + -6) = *(undefined2 *)0xae75;
  *(undefined2 *)(puVar9 + -8) = 0x8f8f;
  uVar13 = FUN_1000_0010();
  *(undefined2 *)(puVar9 + -8) = uVar13;
  *(undefined2 *)(puVar9 + -10) = 0x8f93;
  FUN_1000_9094();
  return;
}



void FUN_1000_8fa4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  FUN_1000_9800();
  FUN_1000_9873();
  if (*(int *)0xb170 == -0x292a) {
    (**(code **)0xb174)();
  }
  (**(code **)0xae1a)(0xff);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0xae44 = in_BX;
  *(undefined2 *)0xae46 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xb180 != 0) {
    *(undefined2 *)0xb182 = 0x1000;
    *(undefined2 *)0xb18a = 0x1000;
    bVar9 = false;
    (**(code **)0xb180)();
    if (bVar9) {
      FUN_1000_9820();
      return;
    }
    (**(code **)0xb180)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar9 = *pbVar8 == 0;
      if (bVar9) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0xae36;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0xae61;
        goto LAB_1000_9051;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_9065:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + -0x519f) = *(byte *)(iVar6 + -0x519f) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + -0x519f) = *(byte *)(iVar6 + -0x519f) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_9151();
  FUN_1000_9142();
  return;
LAB_1000_9051:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_9065;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_9065;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_9051;
}



void __cdecl16near FUN_1000_8fc6(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  code *pcVar4;
  int iVar5;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0xae44 = in_BX;
  *(undefined2 *)0xae46 = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0xb180 != 0) {
    *(undefined2 *)0xb182 = 0x1000;
    *(undefined2 *)0xb18a = 0x1000;
    bVar9 = false;
    (**(code **)0xb180)();
    if (bVar9) {
      FUN_1000_9820();
      return;
    }
    (**(code **)0xb180)();
  }
  iVar6 = *(int *)0x2c;
  if (iVar6 != 0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar9 = *pbVar8 == 0;
      if (bVar9) break;
      iVar5 = 0xd;
      pbVar7 = (byte *)0xae36;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar1 = pbVar7;
        pbVar7 = pbVar7 + 1;
        bVar9 = *pbVar1 == *pbVar3;
      } while (bVar9);
      if (bVar9) {
        pbVar7 = (byte *)0xae61;
        goto LAB_1000_9051;
      }
      iVar5 = 0x7fff;
      bVar9 = true;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pbVar1 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar9 = *pbVar1 == 0;
      } while (!bVar9);
    } while (bVar9);
  }
LAB_1000_9065:
  iVar6 = 4;
  do {
    bVar9 = false;
    *(byte *)(iVar6 + -0x519f) = *(byte *)(iVar6 + -0x519f) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar9) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar6 + -0x519f) = *(byte *)(iVar6 + -0x519f) | 0x40;
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_1000_9151();
  FUN_1000_9142();
  return;
LAB_1000_9051:
  pbVar1 = pbVar8;
  pbVar2 = pbVar8 + 1;
  if (*pbVar1 < 0x41) goto LAB_1000_9065;
  pbVar8 = pbVar8 + 2;
  if (*pbVar2 < 0x41) goto LAB_1000_9065;
  pbVar3 = pbVar7;
  pbVar7 = pbVar7 + 1;
  *pbVar3 = *pbVar2 + 0xbf | (*pbVar1 + 0xbf) * '\x10';
  goto LAB_1000_9051;
}



void __cdecl16near FUN_1000_9094(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_9142();
  FUN_1000_9142();
  if (*(int *)0xb170 == -0x292a) {
    (**(code **)0xb176)();
  }
  FUN_1000_9142();
  FUN_1000_9151();
  FUN_1000_9826();
  FUN_1000_9115();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_1000_9115(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xb182 != 0) {
    (**(code **)0xb180)(0x1000);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0xae82 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



void __cdecl16near FUN_1000_9142(void)

{
  code **unaff_SI;
  code **unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    if (*unaff_DI != (code *)0x0) {
      (**unaff_DI)();
    }
  }
  return;
}



void __cdecl16near FUN_1000_9151(void)

{
  code **ppcVar1;
  code **unaff_SI;
  code **unaff_DI;
  code **ppcVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    ppcVar2 = unaff_DI + -2;
    ppcVar1 = unaff_DI + -1;
    unaff_DI = ppcVar2;
    if (((uint)*ppcVar2 | (uint)*ppcVar1) != 0) {
      (**ppcVar2)(0x1000);
    }
  }
  return;
}



undefined2 __cdecl16near _fclose(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  char local_10;
  undefined uStack_f;
  undefined local_e [8];
  int local_6;
  undefined *local_4;
  
  uVar2 = 0xffff;
  if (((*(byte *)(param_1 + 6) & 0x40) != 0) || ((*(byte *)(param_1 + 6) & 0x83) == 0))
  goto LAB_1000_9206;
  uVar2 = FUN_1000_9c32(param_1);
  local_6 = *(int *)(param_1 + 0xa4);
  FUN_1000_9a72(param_1);
  iVar1 = FUN_1000_a210(*(undefined *)(param_1 + 7));
  if (-1 < iVar1) {
    if (local_6 == 0) goto LAB_1000_9206;
    FUN_1000_94ac(&local_10,0xae88);
    local_4 = local_e;
    if (local_10 == '\\') {
      local_4 = &uStack_f;
    }
    else {
      FUN_1000_946c(&local_10,0xae8a);
    }
    FUN_1000_94fa(local_6,local_4,10);
    iVar1 = FUN_1000_a4b8(&local_10);
    if (iVar1 == 0) goto LAB_1000_9206;
  }
  uVar2 = 0xffff;
LAB_1000_9206:
  *(undefined *)(param_1 + 6) = 0;
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_9212(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_1000_a1dc();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_9a9c(param_1,param_2,param_3,iVar1);
  }
  return uVar2;
}



void __cdecl16near _fopen(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_9212(param_1,param_2,0);
  return;
}



uint __cdecl16near _fread(undefined *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar1 = param_2 * param_3;
  if (uVar1 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar1;
    if (((*(byte *)(param_4 + 3) & 0xc) == 0) && ((*(byte *)(param_4 + 0x50) & 1) == 0)) {
      local_6 = 0x200;
    }
    else {
      local_6 = param_4[0x51];
    }
    do {
      if ((((*(byte *)(param_4 + 3) & 0xc) == 0) && ((*(byte *)(param_4 + 0x50) & 1) == 0)) ||
         (uVar2 = param_4[1], uVar2 == 0)) {
        if (uVar4 < local_6) {
          iVar3 = FUN_1000_98fe(param_4);
          if (iVar3 == -1) break;
          *param_1 = (char)iVar3;
          param_1 = param_1 + 1;
          uVar4 = uVar4 - 1;
          local_6 = param_4[0x51];
        }
        else {
          iVar3 = FUN_1000_a230(*(undefined *)((int)param_4 + 7),param_1,uVar4 - uVar4 % local_6);
          if (iVar3 == 0) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x10;
            break;
          }
          if (iVar3 == -1) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
            break;
          }
          uVar4 = uVar4 - iVar3;
          param_1 = param_1 + iVar3;
        }
      }
      else {
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_1000_9612(param_1,*param_4,uVar2);
        uVar4 = uVar4 - uVar2;
        param_4[1] = param_4[1] - uVar2;
        param_1 = param_1 + uVar2;
        *param_4 = *param_4 + uVar2;
      }
    } while (uVar4 != 0);
    if (uVar4 != 0) {
      param_3 = (uVar1 - uVar4) / param_2;
    }
  }
  return param_3;
}



uint __cdecl16near FUN_1000_932e(undefined *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar1 = param_2 * param_3;
  if (uVar1 == 0) {
    param_3 = 0;
  }
  else {
    piVar6 = param_4 + 0x50;
    uVar5 = uVar1;
    if (((*(byte *)(param_4 + 3) & 0xc) == 0) && ((*(byte *)piVar6 & 1) == 0)) {
      local_6 = 0x200;
    }
    else {
      local_6 = param_4[0x51];
    }
    do {
      if ((((*(byte *)(param_4 + 3) & 8) == 0) && ((*(byte *)piVar6 & 1) == 0)) ||
         (uVar2 = param_4[1], uVar2 == 0)) {
        if (uVar5 < local_6) {
          iVar3 = FUN_1000_9992(*param_1,param_4);
          if (iVar3 == -1) break;
          param_1 = param_1 + 1;
          uVar5 = uVar5 - 1;
          local_6 = param_4[0x51];
          if (local_6 == 0) {
            local_6 = 1;
          }
        }
        else {
          if ((((*(byte *)(param_4 + 3) & 8) != 0) || ((*(byte *)piVar6 & 1) != 0)) &&
             (iVar3 = FUN_1000_9c32(param_4), iVar3 != 0)) break;
          iVar3 = uVar5 - uVar5 % local_6;
          iVar4 = FUN_1000_a31a(*(undefined *)((int)param_4 + 7),param_1,iVar3);
          if ((iVar4 == -1) || (uVar5 = uVar5 - iVar4, iVar4 != iVar3)) {
            *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | 0x20;
            break;
          }
          param_1 = param_1 + iVar4;
        }
      }
      else {
        if (uVar5 < uVar2) {
          uVar2 = uVar5;
        }
        FUN_1000_9612(*param_4,param_1,uVar2);
        uVar5 = uVar5 - uVar2;
        param_4[1] = param_4[1] - uVar2;
        param_1 = param_1 + uVar2;
        *param_4 = *param_4 + uVar2;
      }
    } while (uVar5 != 0);
    if (uVar5 != 0) {
      param_3 = (uVar1 - uVar5) / param_2;
    }
  }
  return param_3;
}



undefined2 __cdecl16near FUN_1000_9430(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_9b82(0xaeae);
  uVar2 = FUN_1000_9d06(0xaeae,param_1,&stack0x0004);
  FUN_1000_9bf3(uVar1,0xaeae);
  return uVar2;
}



undefined2 * __cdecl16near FUN_1000_946c(undefined2 *param_1,char *param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  
  iVar4 = -1;
  puVar7 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar1 = puVar7;
    puVar7 = (undefined2 *)((int)puVar7 + 1);
  } while (*(char *)puVar1 != '\0');
  uVar5 = 0xffff;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar2 != '\0');
  uVar5 = ~uVar5;
  puVar8 = (undefined2 *)(param_2 + -uVar5);
  puVar9 = (undefined2 *)((int)puVar7 + -1);
  if (((uint)puVar8 & 1) != 0) {
    puVar1 = puVar8;
    puVar8 = (undefined2 *)((int)puVar8 + 1);
    *(undefined *)(undefined2 *)((int)puVar7 + -1) = *(undefined *)puVar1;
    uVar5 = uVar5 - 1;
    puVar9 = puVar7;
  }
  for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar1;
  }
  for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
    puVar3 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    puVar1 = puVar8;
    puVar8 = (undefined2 *)((int)puVar8 + 1);
    *(undefined *)puVar3 = *(undefined *)puVar1;
  }
  return param_1;
}



void __cdecl16near FUN_1000_94ac(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  puVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    puVar1 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
  } while (*(char *)puVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    puVar2 = param_1;
    param_1 = (undefined2 *)((int)param_1 + 1);
    puVar1 = param_2;
    param_2 = (undefined2 *)((int)param_2 + 1);
    *(undefined *)puVar2 = *(undefined *)puVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar2 = param_1;
    param_1 = param_1 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = param_1;
    param_1 = (undefined2 *)((int)param_1 + 1);
    puVar1 = param_2;
    param_2 = (undefined2 *)((int)param_2 + 1);
    *(undefined *)puVar2 = *(undefined *)puVar1;
  }
  return;
}



int __cdecl16near FUN_1000_94de(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



byte * __cdecl16near FUN_1000_94fa(uint param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  bool bVar10;
  char cVar3;
  
  uVar5 = 0;
  pbVar8 = param_2;
  pbVar7 = param_2;
  if ((param_3 == 10) && (uVar5 = (int)param_1 >> 0xf, (int)uVar5 < 0)) {
    pbVar8 = param_2 + 1;
    *param_2 = 0x2d;
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    uVar5 = -(uVar5 + bVar10);
    pbVar7 = pbVar8;
  }
  do {
    uVar6 = 0;
    uVar4 = uVar5;
    if (uVar5 != 0) {
      uVar4 = uVar5 / param_3;
      uVar6 = uVar5 % param_3;
    }
    uVar1 = CONCAT22(uVar6,param_1);
    param_1 = (uint)(uVar1 / param_3);
    cVar3 = (char)(uVar1 % (ulong)param_3);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar9 = pbVar8 + 1;
    *pbVar8 = bVar2;
    uVar5 = uVar4;
    pbVar8 = pbVar9;
  } while ((uVar4 | param_1) != 0);
  *pbVar9 = 0;
  do {
    pbVar9 = pbVar9 + -1;
    LOCK();
    bVar2 = *pbVar9;
    *pbVar9 = *pbVar7;
    UNLOCK();
    *pbVar7 = bVar2;
    pbVar8 = pbVar7 + 2;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 < pbVar9);
  return param_2;
}



void FUN_1000_9516(void)

{
  FUN_1000_a458();
  return;
}



undefined2 __cdecl16near FUN_1000_9520(byte param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 uVar7;
  undefined local_c;
  byte local_b;
  undefined local_a;
  undefined local_9;
  undefined local_8;
  
  local_c = (code)0xcd;
  local_b = param_1;
  bVar6 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar6 = param_1 < 0x26, param_1 == 0x26)) {
    local_8 = 0xcb;
    local_9 = 0x44;
    local_a = 0x44;
  }
  else {
    local_a = 0xcb;
  }
  uVar5 = *(undefined2 *)(param_2 + 2);
  uVar4 = *(undefined2 *)(param_2 + 4);
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined2 *)(param_2 + 10);
  uVar7 = (*(code *)&local_c)(0x1000);
  uVar3 = (undefined2)uVar7;
  *param_3 = uVar3;
  param_3[1] = uVar5;
  param_3[2] = uVar4;
  param_3[3] = (int)((ulong)uVar7 >> 0x10);
  param_3[4] = uVar1;
  param_3[5] = uVar2;
  if (bVar6) {
    FUN_1000_98ca();
    uVar3 = *param_3;
  }
  param_3[6] = (uint)bVar6;
  return uVar3;
}



undefined2 __cdecl16near FUN_1000_959e(undefined2 param_1,undefined2 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  *(undefined *)0xcaaa = 0x42;
  *(undefined2 *)0xcaa8 = param_1;
  *(undefined2 *)0xcaa4 = param_1;
  *(undefined2 *)0xcaa6 = 0x7fff;
  uVar3 = FUN_1000_9d06(0xcaa4,param_2,&stack0x0006);
  piVar1 = (int *)0xcaa6;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    FUN_1000_9992(0,0xcaa4);
  }
  else {
    puVar2 = (undefined *)*(undefined2 *)0xcaa4;
    *(int *)0xcaa4 = *(int *)0xcaa4 + 1;
    *puVar2 = 0;
  }
  return uVar3;
}



void __cdecl16near
_movedata(undefined2 param_1,undefined *param_2,undefined2 param_3,undefined *param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_1000_9612(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    if (((uint)param_1 & 1) != 0) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined *)puVar2 = *(undefined *)puVar1;
      param_3 = param_3 - 1;
    }
    for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = param_1 + 1;
      puVar1 = param_2;
      param_2 = param_2 + 1;
      *puVar2 = *puVar1;
    }
    for (uVar3 = (uint)((param_3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined *)puVar2 = *(undefined *)puVar1;
    }
  }
  return;
}



undefined2 * __cdecl16near FUN_1000_963e(undefined2 *param_1,undefined param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    if (((uint)param_1 & 1) != 0) {
      puVar3 = (undefined2 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + 1);
      *(undefined *)puVar1 = param_2;
    }
  }
  return param_1;
}



byte __cdecl16near FUN_1000_9694(int param_1)

{
  undefined2 unaff_DS;
  
  return *(byte *)(param_1 + -0x4faf) & 0x57;
}



int __cdecl16near FUN_1000_96ae_abs(uint param_1)

{
  return (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
}



void __cdecl16near FUN_1000_96bc(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xae8c = param_1;
  *(undefined2 *)0xae8e = 0;
  return;
}



uint __cdecl16near _rand(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_1000_978e(*(undefined2 *)0xae8c,*(undefined2 *)0xae8e,0x43fd,3);
  uVar1 = (uint)((ulong)(lVar2 + 0x269ec3) >> 0x10);
  *(undefined2 *)0xae8c = (int)(lVar2 + 0x269ec3);
  *(uint *)0xae8e = uVar1;
  return uVar1 & 0x7fff;
}



undefined4 FUN_1000_96f4(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar3 = param_1;
  uVar5 = param_3;
  uVar6 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar5 = uVar5 >> 1 | (uint)((uVar9 & 1) != 0) << 0xf;
      uVar7 = uVar6 >> 1;
      uVar3 = uVar3 >> 1 | (uint)((uVar6 & 1) != 0) << 0xf;
      uVar6 = uVar7;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar7,uVar3) / (ulong)uVar5;
    iVar4 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar3 = (uint)((ulong)lVar2 >> 0x10);
    uVar5 = uVar3 + iVar4 * param_4;
    if (((CARRY2(uVar3,iVar4 * param_4)) || (param_2 < uVar5)) ||
       ((param_2 <= uVar5 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT22(uVar3,iVar4);
}



long FUN_1000_978e(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_4 | param_2) == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



void __cdecl16near FUN_1000_97c0_aNlshl(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_1000_97cc_aNlshr(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void FUN_1000_97d8(undefined2 *param_1)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_97c0_aNlshl();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}



void __cdecl16near FUN_1000_97f4(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_1000_9800(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_9873(0xfc);
  if (*(int *)0xae90 != 0) {
    (**(code **)0xae90)();
  }
  FUN_1000_9873(0xff);
  return;
}



void FUN_1000_9820(void)

{
  FUN_1000_8fa4();
  return;
}



uint __cdecl16near FUN_1000_9826(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_9800();
    FUN_1000_9873(1);
    uVar2 = 1;
  }
  return uVar2;
}



int * FUN_1000_9848(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0xb196;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    piVar2 = piVar4;
    if ((*piVar1 == param_1) || (piVar2 = (int *)(*piVar1 + 1), piVar2 == (int *)0x0)) {
      return piVar2;
    }
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      piVar1 = piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (*(char *)piVar1 != '\0');
  } while( true );
}



void FUN_1000_9873(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar3 = (char *)FUN_1000_9848(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    if (*(int *)0xb170 == -0x292a) {
      (**(code **)0xb172)();
    }
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



long __cdecl16near FUN_1000_98a8(void)

{
  uint in_DX;
  bool in_CF;
  
  if (!in_CF) {
    return (ulong)in_DX << 0x10;
  }
  FUN_1000_98d0();
  return -1;
}



void __cdecl16near FUN_1000_98bd(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_1000_98d0();
  }
  return;
}



void __cdecl16near FUN_1000_98ca(void)

{
  FUN_1000_98d0();
  return;
}



void __cdecl16near FUN_1000_98d0(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0xae5d = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_98f4;
  if (*(byte *)0xae5a < 3) {
LAB_1000_98ea:
    if (0x13 < bVar1) {
LAB_1000_98ee:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_98ee;
    if (bVar1 < 0x20) goto LAB_1000_98ea;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xae92);
LAB_1000_98f4:
  *(int *)0xae52 = (int)cVar2;
  return;
}



uint __cdecl16near FUN_1000_98fe(byte **param_1)

{
  byte **ppbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_1 + 3);
  if (((bVar2 & 0x83) != 0) && ((bVar2 & 0x40) == 0)) {
    if ((bVar2 & 2) == 0) {
      *(byte *)(param_1 + 3) = bVar2 | 1;
      if (((bVar2 & 0xc) == 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
        FUN_1000_a4de(param_1);
      }
      pbVar3 = param_1[2];
      *param_1 = pbVar3;
      uVar5 = (uint)*(byte *)((int)param_1 + 7);
      iVar4 = FUN_1000_a230(uVar5,pbVar3,param_1[0x51]);
      if (iVar4 == 0) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x10;
      }
      else {
        if (iVar4 != -1) {
          if (((*(byte *)(uVar5 + 0xae61) & 0x82) == 0x82) && ((*(byte *)(param_1 + 3) & 0x82) == 0)
             ) {
            ppbVar1 = param_1 + 0x50;
            *(byte *)ppbVar1 = *(byte *)ppbVar1 | 0x20;
          }
          param_1[1] = (byte *)(iVar4 + -1);
          bVar2 = **param_1;
          *param_1 = *param_1 + 1;
          return (uint)bVar2;
        }
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
      }
      param_1[1] = (byte *)0x0;
    }
    else {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
    }
  }
  return 0xffff;
}



uint __cdecl16near FUN_1000_9992(uint param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_DI;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  bVar2 = *(byte *)(param_2 + 3);
  if (((bVar2 & 0x82) != 0) && ((bVar2 & 0x40) == 0)) {
    param_2[1] = 0;
    if ((bVar2 & 1) != 0) {
      if ((bVar2 & 0x10) == 0) goto LAB_1000_9a09;
      *param_2 = param_2[2];
      bVar2 = bVar2 & 0xfe;
    }
    *(byte *)(param_2 + 3) = bVar2 & 0xef | 2;
    uVar4 = (uint)*(byte *)((int)param_2 + 7);
    if (((bVar2 & 8) == 0) &&
       (((bVar2 & 4) != 0 ||
        (((*(byte *)(param_2 + 0x50) & 1) == 0 &&
         (((((param_2 == (int *)0xaeae || (param_2 == (int *)0xaeb6)) || (param_2 == (int *)0xaec6))
           && ((*(byte *)(uVar4 + 0xae61) & 0x40) != 0)) ||
          (FUN_1000_a4de(param_2), (*(byte *)(piVar1 + 3) & 8) == 0)))))))) {
      iVar3 = FUN_1000_a31a(uVar4,&param_1,1);
      unaff_DI = 1;
    }
    else {
      iVar3 = *piVar1 - piVar1[2];
      *piVar1 = piVar1[2] + 1;
      piVar1[1] = piVar1[0x51] + -1;
      if (iVar3 == 0) {
        iVar3 = 0;
        unaff_DI = 0;
        if ((*(byte *)(uVar4 + 0xae61) & 0x20) != 0) {
          FUN_1000_a520(uVar4,0,0,2);
          iVar3 = 0;
          unaff_DI = 0;
        }
      }
      else {
        iVar3 = FUN_1000_a31a(uVar4,piVar1[2],iVar3,iVar3);
      }
      *(undefined *)piVar1[2] = (char)param_1;
    }
    if (iVar3 == unaff_DI) {
      return param_1 & 0xff;
    }
  }
LAB_1000_9a09:
  *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 0x20;
  return 0xffff;
}



void __cdecl16near FUN_1000_9a72(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    thunk_FUN_1000_a770(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



undefined2 * __cdecl16near
FUN_1000_9a9c(undefined2 param_1,byte *param_2,undefined2 param_3,undefined2 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined local_8;
  undefined local_6;
  
  bVar1 = *param_2;
  if (bVar1 == 0x77) {
    uVar4 = 0x301;
  }
  else {
    if (0x77 < bVar1) {
      return (undefined2 *)0x0;
    }
    if (bVar1 != 0x61) {
      if (bVar1 != 0x72) {
        return (undefined2 *)0x0;
      }
      uVar4 = 0;
      local_6 = 1;
      goto LAB_1000_9ac4;
    }
    uVar4 = 0x109;
  }
  local_6 = 2;
LAB_1000_9ac4:
  bVar2 = true;
  do {
    while( true ) {
      param_2 = param_2 + 1;
      if ((*param_2 == 0) || (!bVar2)) {
        iVar3 = FUN_1000_a59a(param_1,uVar4,param_3,0x1a4);
        if (iVar3 < 0) {
          return (undefined2 *)0x0;
        }
        *(int *)0xb156 = *(int *)0xb156 + 1;
        *(undefined *)(param_4 + 3) = local_6;
        *(undefined *)(param_4 + 0x50) = 0;
        param_4[1] = 0;
        param_4[0x52] = 0;
        *param_4 = 0;
        param_4[2] = 0;
        local_8 = (undefined)iVar3;
        *(undefined *)((int)param_4 + 7) = local_8;
        return param_4;
      }
      bVar1 = *param_2;
      if (bVar1 != 0x74) break;
      if ((uVar4 & 0xc000) == 0) {
        uVar4 = uVar4 | 0x4000;
      }
      else {
LAB_1000_9aec:
        bVar2 = false;
      }
    }
    if (0x74 < bVar1) goto LAB_1000_9aec;
    if (bVar1 == 0x2b) {
      if ((uVar4 & 2) != 0) goto LAB_1000_9aec;
      uVar4 = uVar4 & 0xfffe | 2;
      local_6 = 0x80;
    }
    else {
      if ((bVar1 != 0x62) || ((uVar4 & 0xc000) != 0)) goto LAB_1000_9aec;
      uVar4 = uVar4 | 0x8000;
    }
  } while( true );
}



undefined2 __cdecl16near FUN_1000_9b82(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0xafe8;
  if ((((param_1 == (int *)0xaeae) || (piVar3 = (int *)0xafea, param_1 == (int *)0xaeb6)) ||
      (piVar3 = (int *)0xafec, param_1 == (int *)0xaec6)) &&
     (((*(byte *)(param_1 + 3) & 0xc) == 0 && ((*(byte *)(param_1 + 0x50) & 1) == 0)))) {
    iVar2 = *piVar3;
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_1000_a791(0x200);
      if (iVar2 == 0) goto LAB_1000_9bed;
      *piVar3 = iVar2;
    }
    param_1[2] = iVar2;
    *param_1 = iVar2;
    param_1[1] = 0x200;
    param_1[0x51] = 0x200;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    *(byte *)(param_1 + 0x50) = 0x11;
    uVar1 = 1;
  }
  else {
LAB_1000_9bed:
    uVar1 = 0;
  }
  return uVar1;
}



void __cdecl16near FUN_1000_9bf3(int param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 + 0x50) & 0x10) != 0) &&
     ((*(byte *)(*(byte *)((int)param_2 + 7) + 0xae61) & 0x40) != 0)) {
    FUN_1000_9c32(param_2);
    if (param_1 != 0) {
      *(undefined *)(param_2 + 0x50) = 0;
      param_2[0x51] = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}



undefined2 __cdecl16near FUN_1000_9c32(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1000_9cac(0);
  }
  else {
    if (((*(byte *)(param_1 + 3) & 3) == 2) &&
       (((*(byte *)(param_1 + 3) & 8) != 0 || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
      iVar1 = *param_1 - param_1[2];
      if (0 < iVar1) {
        iVar2 = FUN_1000_a31a(*(undefined *)((int)param_1 + 7),param_1[2],iVar1);
        if (iVar1 != iVar2) {
          *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
          uVar3 = 0xffff;
        }
      }
    }
    *param_1 = param_1[2];
    param_1[1] = 0;
  }
  return uVar3;
}



int FUN_1000_9cac(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = 0;
  local_4 = 0;
  for (uVar2 = 0xaea6; uVar2 <= *(uint *)0xafe6; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_1000_9c32(uVar2);
      if (iVar1 == -1) {
        local_4 = -1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
    }
  }
  if (param_1 == 1) {
    local_4 = iVar3;
  }
  return local_4;
}



undefined2 __cdecl16near FUN_1000_9d06(undefined2 param_1_00,char *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_1000_a4c6();
  if (*param_1 == '\0') {
    return 0;
  }
  bVar1 = *param_1 - 0x20;
  if (bVar1 < 0x59) {
    bVar1 = *(byte *)(ulong)(bVar1 + 0xafee) & 0xf;
  }
  else {
    bVar1 = 0;
  }
  uVar2 = (**(code **)((char)(*(byte *)(ulong)((byte)(bVar1 * '\b') + 0xafee) >> 4) * 2 + -0x630a))
                    ();
  return uVar2;
}



undefined2 * __cdecl16near FUN_1000_a1dc(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0xaea6;
  while( true ) {
    if (*(undefined2 **)0xafe6 < puVar1) {
      return (undefined2 *)0x0;
    }
    if ((*(byte *)(puVar1 + 3) & 0x83) == 0) break;
    puVar1 = puVar1 + 4;
  }
  puVar1[1] = 0;
  *(undefined *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined *)((int)puVar1 + 7) = 0xff;
  return puVar1;
}



void FUN_1000_a210(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_1 < *(uint *)0xae5f;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined *)(param_1 + 0xae61) = 0;
    }
  }
  FUN_1000_98a8();
  return;
}



void FUN_1000_a230(uint param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined extraout_AH;
  undefined extraout_AH_00;
  int iVar5;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0xae5f <= param_1) || (param_3 == 0)) || ((*(byte *)(param_1 + 0xae61) & 2) != 0))
  {
LAB_1000_a2ad:
    FUN_1000_98bd();
    return;
  }
  uVar10 = *(uint *)0xb170 < 0xd6d6;
  if (*(uint *)0xb170 == 0xd6d6) {
    (**(code **)0xb172)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_1 + 0xae61) & 0x80) == 0)) ||
     (*(byte *)(param_1 + 0xae61) = *(byte *)(param_1 + 0xae61) & 0xfb, (int)uVar12 == 0))
  goto LAB_1000_a2ad;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_1 + 0xae61) = *(byte *)(param_1 + 0xae61) | 4;
  }
LAB_1000_a292:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_a2a2;
      goto LAB_1000_a2a5;
    }
    bVar11 = false;
    if ((*(byte *)(param_1 + 0xae61) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          iVar5 = (*pcVar3)();
          iVar7 = 1;
        }
        uVar4 = CONCAT11((char)((uint)iVar5 >> 8),0xd);
        goto LAB_1000_a2a2;
      }
      goto LAB_1000_a2ad;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_a2ad;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_1 + 0xae61) = *(byte *)(param_1 + 0xae61) | 2;
    goto LAB_1000_a2ad;
  }
LAB_1000_a2a2:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_a2a5:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_a2ad;
  goto LAB_1000_a292;
}



undefined2 FUN_1000_a31a(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if (*(uint *)0xae5f <= param_1) {
LAB_1000_a32d:
    uVar4 = FUN_1000_98bd();
    return uVar4;
  }
  if (*(int *)0xb170 == -0x292a) {
    (**(code **)0xb172)();
  }
  if ((*(byte *)(param_1 + 0xae61) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_a32d;
  }
  if ((*(byte *)(param_1 + 0xae61) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_3;
    pcVar8 = param_2;
    if (param_3 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_1000_a3c3;
      uVar5 = FUN_1000_a756();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_a4c6();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_98bd();
            return uVar4;
          }
        }
        return (int)uVar10;
      }
      pcVar7 = &stack0xfff2;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_1000_a3cb();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_a3cb();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_a3cb();
    }
    uVar4 = FUN_1000_a415();
    return uVar4;
  }
LAB_1000_a3c3:
  uVar4 = FUN_1000_a423();
  return uVar4;
}



undefined2 __cdecl16near FUN_1000_a3cb(void)

{
  code *pcVar1;
  undefined2 in_AX;
  uint uVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bVar4) ||
       (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + uVar2, uVar2 < unaff_DI - in_DX)) {
      uVar3 = FUN_1000_98bd();
      return uVar3;
    }
  }
  return in_AX;
}



void FUN_1000_a415(void)

{
  FUN_1000_98bd();
  return;
}



void FUN_1000_a423(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 8) != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    FUN_1000_98bd();
    return;
  }
  FUN_1000_98bd();
  return;
}



byte * __cdecl16near FUN_1000_a458(void)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char in_BL;
  uint uVar9;
  int unaff_BP;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  char cVar5;
  
  uVar1 = *(uint *)(unaff_BP + 10);
  uVar9 = *(uint *)(unaff_BP + 4);
  uVar7 = *(uint *)(unaff_BP + 6);
  pbVar2 = *(byte **)(unaff_BP + 8);
  pbVar11 = pbVar2;
  pbVar10 = pbVar2;
  if (((in_BL != '\0') && (uVar1 == 10)) && ((int)uVar7 < 0)) {
    pbVar11 = pbVar2 + 1;
    *pbVar2 = 0x2d;
    bVar13 = uVar9 != 0;
    uVar9 = -uVar9;
    uVar7 = -(uVar7 + bVar13);
    pbVar10 = pbVar11;
  }
  do {
    uVar8 = 0;
    uVar6 = uVar7;
    if (uVar7 != 0) {
      uVar6 = uVar7 / uVar1;
      uVar8 = uVar7 % uVar1;
    }
    uVar3 = CONCAT22(uVar8,uVar9);
    uVar9 = (uint)(uVar3 / uVar1);
    cVar5 = (char)(uVar3 % (ulong)uVar1);
    bVar4 = cVar5 + 0x30;
    if (0x39 < bVar4) {
      bVar4 = cVar5 + 0x57;
    }
    pbVar12 = pbVar11 + 1;
    *pbVar11 = bVar4;
    uVar7 = uVar6;
    pbVar11 = pbVar12;
  } while ((uVar6 | uVar9) != 0);
  *pbVar12 = 0;
  do {
    pbVar12 = pbVar12 + -1;
    LOCK();
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar10;
    UNLOCK();
    *pbVar10 = bVar4;
    pbVar11 = pbVar10 + 2;
    pbVar10 = pbVar10 + 1;
  } while (pbVar11 < pbVar12);
  return pbVar2;
}



void FUN_1000_a4b8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_98a8();
  return;
}



void FUN_1000_a4c6(void)

{
  undefined *in_AX;
  undefined2 unaff_DS;
  code *in_stack_00000000;
  
  if ((in_AX <= &stack0x0002) && ((undefined *)*(uint *)0xb154 <= &stack0x0002 + -(int)in_AX)) {
    (*in_stack_00000000)();
    return;
  }
  FUN_1000_8fa4();
  return;
}



void __cdecl16near FUN_1000_a4de(int *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = thunk_FUN_1000_a791(0x200);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[0x51] = 1;
    iVar1 = (int)param_1 + 0xa1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    param_1[0x51] = 0x200;
  }
  *param_1 = iVar1;
  param_1[2] = iVar1;
  param_1[1] = 0;
  return;
}



void FUN_1000_a520(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0xae5f <= param_1) goto LAB_1000_a597;
  bVar5 = false;
  if ((param_3 & 0x8000) != 0) {
    if (param_4 == 0) goto LAB_1000_a597;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_a597;
    if ((param_4 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_2);
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,uVar1);
      if ((int)(uVar3 + param_3 + uVar1) < 0) goto LAB_1000_a597;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_2);
      uVar1 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_a597;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_1 + 0xae61) = *(byte *)(param_1 + 0xae61) & 0xfd;
  }
LAB_1000_a597:
  FUN_1000_98bd();
  return;
}



uint __cdecl16near FUN_1000_a59a(undefined2 param_1,uint param_2,char param_3,uint param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined uVar8;
  bool bVar9;
  byte local_6;
  undefined2 local_4;
  
  cVar2 = '\0';
  if (2 < *(byte *)0xae5a) {
    cVar2 = param_3;
  }
  _param_3 = param_4;
  local_6 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || ((*(byte *)0xb16b & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar5 = param_2;
  uVar3 = (*pcVar1)();
  if (bVar7) {
    if ((uVar3 != 2) || ((uVar5 & 0x100) == 0)) goto LAB_1000_a5f8;
    bVar7 = false;
    local_4._0_1_ = -0x5f;
    FUN_1000_a745();
    uVar8 = 0;
    uVar5 = 0;
    _param_3 = param_4;
LAB_1000_a6b4:
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_1000_a6bd:
      uVar5 = FUN_1000_98bd();
      return uVar5;
    }
    if (((char)local_4 != '\0') || ((param_2 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar3 = (*pcVar1)();
      if (bVar9) goto LAB_1000_a6bd;
      if ((!bVar7) && ((_param_3 & 1) != 0)) {
        bVar7 = false;
        uVar5 = (uint)(byte)((byte)uVar5 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_1000_a6bd;
      }
    }
  }
  else {
    if ((uVar5 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_1000_a5f8;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_2 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_2 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) && (local_4._1_1_ == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar5 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          local_4._0_1_ = cVar2;
          goto LAB_1000_a6b4;
        }
        uVar5 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar6 = 0;
    if ((uVar5 & 1) != 0) {
      bVar6 = 0x10;
    }
    if ((param_2 & 8) != 0) {
      bVar6 = bVar6 | 0x20;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar3 < *(uint *)0xae5f) {
    *(byte *)(uVar3 + 0xae61) = bVar6 | local_6 | 1;
    return uVar3;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_1000_a5f8:
  uVar5 = FUN_1000_98bd();
  return uVar5;
}



void __cdecl16near FUN_1000_a745(void)

{
  return;
}



void FUN_1000_a756(void)

{
  code *in_stack_00000000;
  
  (*in_stack_00000000)();
  return;
}



void __cdecl16near thunk_FUN_1000_a791(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_a7ba(), bVar1)) && (FUN_1000_a836(), !bVar1)) {
    FUN_1000_a7ba();
  }
  return;
}



void __cdecl16near thunk_FUN_1000_a770(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0xae24 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < *(byte **)0xae26) {
      *(byte **)0xae26 = pbVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_a770(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0xae24 < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < *(byte **)0xae26) {
      *(byte **)0xae26 = pbVar1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_a791(uint param_1)

{
  bool bVar1;
  
  bVar1 = param_1 < 0xffe8;
  if (((param_1 < 0xffe9) && (FUN_1000_a7ba(), bVar1)) && (FUN_1000_a836(), !bVar1)) {
    FUN_1000_a7ba();
  }
  return;
}



uint * __cdecl16near FUN_1000_a7ba(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int in_BX;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 unaff_DS;
  
  uVar4 = in_CX + 1U & 0xfffe;
  puVar7 = *(uint **)(in_BX + 8);
  puVar5 = *(uint **)(in_BX + 10);
  do {
    while( true ) {
      puVar1 = puVar7 + 1;
      uVar3 = *puVar7;
      puVar6 = puVar1;
      if ((uVar3 & 1) != 0) {
        while( true ) {
          uVar2 = uVar3 - 1;
          if (uVar4 <= uVar2) {
            *puVar7 = uVar4;
            puVar7 = puVar1;
            if (uVar2 != uVar4) {
              *(int *)((int)puVar1 + uVar4) = (uVar2 - uVar4) + -1;
              puVar7 = (uint *)((int)(int *)((int)puVar1 + uVar4) - uVar4);
            }
            *(int *)(in_BX + 8) = (int)puVar7 + uVar4;
            return puVar1;
          }
          if (CARRY2((uint)puVar1,uVar2)) goto LAB_1000_a813;
          puVar6 = (uint *)((int)puVar1 + uVar2) + 1;
          uVar3 = *(uint *)((int)puVar1 + uVar2);
          if ((uVar3 & 1) == 0) break;
          uVar3 = uVar3 + uVar2 + 2;
          *puVar7 = uVar3;
        }
      }
      if (puVar6 + -1 < puVar5) break;
      if (((uint)puVar5 & 1) != 0) goto LAB_1000_a813;
      puVar7 = *(uint **)(in_BX + 6);
      if (*(uint **)(in_BX + 8) == puVar7) goto LAB_1000_a813;
      puVar5 = (uint *)((int)*(uint **)(in_BX + 8) + -1);
    }
    puVar7 = (uint *)((int)puVar6 + uVar3);
  } while (!CARRY2((uint)puVar6,uVar3));
LAB_1000_a813:
  puVar7 = *(uint **)(in_BX + 6);
  *(uint **)(in_BX + 8) = puVar7;
  return puVar7;
}



void __cdecl16near FUN_1000_a836(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *unaff_SI;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((*(byte *)(in_BX + 2) & 1) != 0) {
    FUN_1000_a913();
    if ((*unaff_SI & 1) != 0) {
      in_CX = (in_CX - *unaff_SI) + -1;
    }
    uVar3 = *(uint *)(in_BX + 4);
    if (uVar3 != 0) {
      if (!CARRY2(in_CX + 2U,uVar3)) {
        uVar3 = *(uint *)0xb16c;
        if (uVar3 == 0x2000) goto LAB_1000_a883;
        uVar4 = 0x8000;
        while (uVar3 <= uVar4) {
          uVar4 = uVar4 >> 1;
          if (uVar4 == 0) goto LAB_1000_a89c;
        }
        if (uVar4 < 8) goto LAB_1000_a89c;
        uVar3 = uVar4 << 1;
        goto LAB_1000_a883;
      }
      uVar4 = 0xfff0;
      if (in_CX + 2U + uVar3 == 0) {
        while( true ) {
          bVar7 = false;
          iVar2 = FUN_1000_a8c2();
          if (!bVar7) break;
          if (uVar4 == 0xfff0) {
            return;
          }
LAB_1000_a89c:
          uVar3 = 0x10;
LAB_1000_a883:
          uVar4 = ~(uVar3 - 1);
        }
        iVar5 = iVar2 - *(int *)(in_BX + 4);
        *(int *)(in_BX + 4) = iVar2;
        *(uint **)(in_BX + 8) = unaff_SI;
        piVar1 = *(int **)(in_BX + 10);
        *piVar1 = iVar5 + -1;
        puVar6 = (undefined2 *)((int)piVar1 + iVar5);
        *puVar6 = 0xfffe;
        *(undefined2 **)(in_BX + 10) = puVar6;
      }
    }
  }
  return;
}



void __cdecl16near FUN_1000_a8c2(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 < *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0xae58;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}



void __cdecl16near FUN_1000_a913(void)

{
  int in_BX;
  uint *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = *(uint **)(in_BX + 8);
  if (puVar1 == *(uint **)(in_BX + 10)) {
    puVar1 = *(uint **)(in_BX + 6);
  }
  while( true ) {
    if (*puVar1 == 0xfffe) break;
    puVar1 = (uint *)((int)puVar1 + (*puVar1 & 0xfffe) + 2);
  }
  return;
}
