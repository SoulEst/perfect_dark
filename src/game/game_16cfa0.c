#include <ultra64.h>
#include "constants.h"
#include "gvars/gvars.h"
#include "setup/setup_000000.h"
#include "setup/setup_0160b0.h"
#include "setup/setup_020df0.h"
#include "types.h"
#include "game/game_0b28d0.h"
#include "game/game_0f09f0.h"
#include "game/game_129900.h"
#include "game/game_1668e0.h"
#include "game/game_16cfa0.h"
#include "game/game_176080.h"
#include "library/library.h"

const u32 var7f1b7930[] = {0x7f16e224};
const u32 var7f1b7934[] = {0x7f16e3ec};
const u32 var7f1b7938[] = {0x7f16e3ec};
const u32 var7f1b793c[] = {0x7f16e3ec};
const u32 var7f1b7940[] = {0x7f16e3ec};
const u32 var7f1b7944[] = {0x7f16e3ec};
const u32 var7f1b7948[] = {0x7f16e3ec};
const u32 var7f1b794c[] = {0x7f16e3ec};
const u32 var7f1b7950[] = {0x7f16e3ec};
const u32 var7f1b7954[] = {0x7f16e3ec};
const u32 var7f1b7958[] = {0x7f16e3ec};
const u32 var7f1b795c[] = {0x7f16e3e4};
const u32 var7f1b7960[] = {0x7f16e3ec};
const u32 var7f1b7964[] = {0x7f16e244};
const u32 var7f1b7968[] = {0x7f16e304};
const u32 var7f1b796c[] = {0x7f16e2fc};
const u32 var7f1b7970[] = {0x7f16e25c};
const u32 var7f1b7974[] = {0x7f16e22c};
const u32 var7f1b7978[] = {0x7f16e23c};
const u32 var7f1b797c[] = {0x7f16e30c};
const u32 var7f1b7980[] = {0x7f16e24c};
const u32 var7f1b7984[] = {0x7f16e254};
const u32 var7f1b7988[] = {0x7f16e284};
const u32 var7f1b798c[] = {0x7f16e274};
const u32 var7f1b7990[] = {0x7f16e204};
const u32 var7f1b7994[] = {0x7f16e20c};
const u32 var7f1b7998[] = {0x7f16e214};
const u32 var7f1b799c[] = {0x7f16e21c};
const u32 var7f1b79a0[] = {0x7f16e264};
const u32 var7f1b79a4[] = {0x7f16e27c};
const u32 var7f1b79a8[] = {0x7f16e314};
const u32 var7f1b79ac[] = {0x7f16e2dc};
const u32 var7f1b79b0[] = {0x7f16e26c};
const u32 var7f1b79b4[] = {0x7f16e2ec};
const u32 var7f1b79b8[] = {0x7f16e234};
const u32 var7f1b79bc[] = {0x7f16e2a4};
const u32 var7f1b79c0[] = {0x7f16e2ac};
const u32 var7f1b79c4[] = {0x7f16e2b4};
const u32 var7f1b79c8[] = {0x7f16e2d4};
const u32 var7f1b79cc[] = {0x7f16e29c};
const u32 var7f1b79d0[] = {0x7f16e2f4};
const u32 var7f1b79d4[] = {0x7f16e28c};
const u32 var7f1b79d8[] = {0x7f16e2bc};
const u32 var7f1b79dc[] = {0x7f16e2c4};
const u32 var7f1b79e0[] = {0x7f16e2cc};
const u32 var7f1b79e4[] = {0x7f16e294};
const u32 var7f1b79e8[] = {0x7f16e3dc};
const u32 var7f1b79ec[] = {0x7f16e2e4};
const u32 var7f1b79f0[] = {0x7f16e33c};
const u32 var7f1b79f4[] = {0x7f16e344};
const u32 var7f1b79f8[] = {0x7f16e34c};
const u32 var7f1b79fc[] = {0x7f16e354};
const u32 var7f1b7a00[] = {0x7f16e35c};
const u32 var7f1b7a04[] = {0x7f16e364};
const u32 var7f1b7a08[] = {0x7f16e36c};
const u32 var7f1b7a0c[] = {0x7f16e374};
const u32 var7f1b7a10[] = {0x7f16e37c};
const u32 var7f1b7a14[] = {0x7f16e384};
const u32 var7f1b7a18[] = {0x7f16e38c};
const u32 var7f1b7a1c[] = {0x7f16e394};
const u32 var7f1b7a20[] = {0x7f16e39c};
const u32 var7f1b7a24[] = {0x7f16e3a4};
const u32 var7f1b7a28[] = {0x7f16e3ac};
const u32 var7f1b7a2c[] = {0x7f16e3b4};
const u32 var7f1b7a30[] = {0x7f16e3bc};
const u32 var7f1b7a34[] = {0x7f16e3c4};
const u32 var7f1b7a38[] = {0x7f16e3cc};
const u32 var7f1b7a3c[] = {0x7f16e3d4};
const u32 var7f1b7a40[] = {0x7f16e31c};
const u32 var7f1b7a44[] = {0x7f16e324};
const u32 var7f1b7a48[] = {0x7f16e32c};
const u32 var7f1b7a4c[] = {0x7f16e334};
const u32 var7f1b7a50[] = {0x7f17004c};
const u32 var7f1b7a54[] = {0x7f17004c};
const u32 var7f1b7a58[] = {0x7f170070};
const u32 var7f1b7a5c[] = {0x7f170108};
const u32 var7f1b7a60[] = {0x7f1701bc};
const u32 var7f1b7a64[] = {0x7f170248};
const u32 var7f1b7a68[] = {0x7f170294};
const u32 var7f1b7a6c[] = {0x7f1702fc};
const u32 var7f1b7a70[] = {0x7f170360};
const u32 var7f1b7a74[] = {0x7f170434};
const u32 var7f1b7a78[] = {0x7f170764};
const u32 var7f1b7a7c[] = {0x7f170788};
const u32 var7f1b7a80[] = {0x7f170764};
const u32 var7f1b7a84[] = {0x7f170788};
const u32 var7f1b7a88[] = {0x7f170788};
const u32 var7f1b7a8c[] = {0x7f1707ac};
const u32 var7f1b7a90[] = {0x7f1707d0};
const u32 var7f1b7a94[] = {0x7f1707ac};
const u32 var7f1b7a98[] = {0x7f1707d0};
const u32 var7f1b7a9c[] = {0x7f170814};
const u32 var7f1b7aa0[] = {0x7f1709c4};
const u32 var7f1b7aa4[] = {0x7f170814};
const u32 var7f1b7aa8[] = {0x7f1709c4};
const u32 var7f1b7aac[] = {0x7f170b74};
const u32 var7f1b7ab0[] = {0x7f170cb4};
const u32 var7f1b7ab4[] = {0x7f170ee4};
const u32 var7f1b7ab8[] = {0x7f170e00};
const u32 var7f1b7abc[] = {0x7f171074};
const u32 var7f1b7ac0[] = {0x7f171910};
const u32 var7f1b7ac4[] = {0x7f1719f0};
const u32 var7f1b7ac8[] = {0x7f171988};
const u32 var7f1b7acc[] = {0x7f171a50};
const u32 var7f1b7ad0[] = {0x7f1719f0};
const u32 var7f1b7ad4[] = {0x7f171ab8};
const u32 var7f1b7ad8[] = {0x7f171b14};
const u32 var7f1b7adc[] = {0x7f171ab8};
const u32 var7f1b7ae0[] = {0x7f171b14};
const u32 var7f1b7ae4[] = {0x7f171bf0};
const u32 var7f1b7ae8[] = {0x7f171d5c};
const u32 var7f1b7aec[] = {0x7f171cb0};
const u32 var7f1b7af0[] = {0x7f171ea4};
const u32 var7f1b7af4[] = {0x7f171e1c};
const u32 var7f1b7af8[] = {0x7f171f50};
const u32 var7f1b7afc[] = {0x7f172038};
const u32 var7f1b7b00[] = {0x7f171fd4};
const u32 var7f1b7b04[] = {0x7f1720f0};
const u32 var7f1b7b08[] = {0x7f172204};
const u32 var7f1b7b0c[] = {0x7f1722f8};
const u32 var7f1b7b10[] = {0x7f172278};
const u32 var7f1b7b14[] = {0x7f172374};
const u32 var7f1b7b18[] = {0x7f1722f8};
const u32 var7f1b7b1c[] = {0x7f1723f8};
const u32 var7f1b7b20[] = {0x7f172470};
const u32 var7f1b7b24[] = {0x7f1723f8};
const u32 var7f1b7b28[] = {0x7f172470};
const u32 var7f1b7b2c[] = {0x7f1725ac};
const u32 var7f1b7b30[] = {0x7f172704};
const u32 var7f1b7b34[] = {0x7f172650};
const u32 var7f1b7b38[] = {0x7f1727ac};
const u32 var7f1b7b3c[] = {0x7f172704};
const u32 var7f1b7b40[] = {0x7f172864};
const u32 var7f1b7b44[] = {0x7f172904};
const u32 var7f1b7b48[] = {0x7f172864};
const u32 var7f1b7b4c[] = {0x7f172904};
const u32 var7f1b7b50[] = {0x7f172a24};
const u32 var7f1b7b54[] = {0x7f172a38};
const u32 var7f1b7b58[] = {0x7f172a24};
const u32 var7f1b7b5c[] = {0x7f172a38};
const u32 var7f1b7b60[] = {0x7f172a38};
const u32 var7f1b7b64[] = {0x7f172a50};
const u32 var7f1b7b68[] = {0x7f172a68};
const u32 var7f1b7b6c[] = {0x7f172a50};
const u32 var7f1b7b70[] = {0x7f172a68};
const u32 var7f1b7b74[] = {0x7f172a50};
const u32 var7f1b7b78[] = {0x7f172a68};
const u32 var7f1b7b7c[] = {0x7f172a50};
const u32 var7f1b7b80[] = {0x7f172a68};
const u32 var7f1b7b84[] = {0x7f172c24};
const u32 var7f1b7b88[] = {0x7f172c68};
const u32 var7f1b7b8c[] = {0x7f172cac};
const u32 var7f1b7b90[] = {0x7f172cf0};
const u32 var7f1b7b94[] = {0x7f172d3c};
const u32 var7f1b7b98[] = {0x7f172d98};
const u32 var7f1b7b9c[] = {0x7f172df4};

const char var7f1b7ba0[] = "default";
const char var7f1b7ba8[] = "stone";
const char var7f1b7bb0[] = "wood";
const char var7f1b7bb8[] = "metal";
const char var7f1b7bc0[] = "glass";
const char var7f1b7bc8[] = "shallow water";
const char var7f1b7bd8[] = "snow";
const char var7f1b7be0[] = "dirt";
const char var7f1b7be8[] = "mud";
const char var7f1b7bec[] = "tile";
const char var7f1b7bf4[] = "metalobj";
const char var7f1b7c00[] = "chr";
const char var7f1b7c04[] = "glass xlu";
const char var7f1b7c10[] = "no hit";
const char var7f1b7c18[] = "deep water";

const u32 var7f1b7c24[] = {0x00000000};
const u32 var7f1b7c28[] = {0x00000000};
const u32 var7f1b7c2c[] = {0x00000000};
const u32 var7f1b7c30[] = {0x7f175c04};
const u32 var7f1b7c34[] = {0x7f175e28};
const u32 var7f1b7c38[] = {0x7f175e28};
const u32 var7f1b7c3c[] = {0x7f175e28};
const u32 var7f1b7c40[] = {0x7f175e28};
const u32 var7f1b7c44[] = {0x7f175e28};
const u32 var7f1b7c48[] = {0x7f175e28};
const u32 var7f1b7c4c[] = {0x7f175e28};
const u32 var7f1b7c50[] = {0x7f175e28};
const u32 var7f1b7c54[] = {0x7f175e0c};
const u32 var7f1b7c58[] = {0x7f175dcc};
const u32 var7f1b7c5c[] = {0x7f175e28};
const u32 var7f1b7c60[] = {0x7f175e28};
const u32 var7f1b7c64[] = {0x7f175e28};
const u32 var7f1b7c68[] = {0x7f175c04};
const u32 var7f1b7c6c[] = {0x7f1757d4};
const u32 var7f1b7c70[] = {0x7f175880};
const u32 var7f1b7c74[] = {0x7f1758e4};
const u32 var7f1b7c78[] = {0x7f17597c};
const u32 var7f1b7c7c[] = {0x7f1759b8};
const u32 var7f1b7c80[] = {0x7f1759f0};
const u32 var7f1b7c84[] = {0x00000000};
const u32 var7f1b7c88[] = {0x00000000};
const u32 var7f1b7c8c[] = {0x00000000};

GLOBAL_ASM(
glabel func0f16cfa0
/*  f16cfa0:	3c0e800a */ 	lui	$t6,0x800a
/*  f16cfa4:	8dcea474 */ 	lw	$t6,-0x5b8c($t6)
/*  f16cfa8:	2401005c */ 	addiu	$at,$zero,0x5c
/*  f16cfac:	3c028008 */ 	lui	$v0,0x8008
/*  f16cfb0:	15c10003 */ 	bne	$t6,$at,.L0f16cfc0
/*  f16cfb4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cfb8:	03e00008 */ 	jr	$ra
/*  f16cfbc:	24025000 */ 	addiu	$v0,$zero,0x5000
.L0f16cfc0:
/*  f16cfc0:	944240ec */ 	lhu	$v0,0x40ec($v0)
/*  f16cfc4:	24035000 */ 	addiu	$v1,$zero,0x5000
/*  f16cfc8:	28415000 */ 	slti	$at,$v0,0x5000
/*  f16cfcc:	10200003 */ 	beqz	$at,.L0f16cfdc
/*  f16cfd0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16cfd4:	10000001 */ 	beqz	$zero,.L0f16cfdc
/*  f16cfd8:	00401825 */ 	or	$v1,$v0,$zero
.L0f16cfdc:
/*  f16cfdc:	3062ffff */ 	andi	$v0,$v1,0xffff
/*  f16cfe0:	03e00008 */ 	jr	$ra
/*  f16cfe4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16cfe8
/*  f16cfe8:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f16cfec:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f16cff0:	3096ffff */ 	andi	$s6,$a0,0xffff
/*  f16cff4:	2ac15001 */ 	slti	$at,$s6,0x5001
/*  f16cff8:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f16cffc:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f16d000:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f16d004:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f16d008:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f16d00c:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f16d010:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16d014:	14200002 */ 	bnez	$at,.L0f16d020
/*  f16d018:	afa40038 */ 	sw	$a0,0x38($sp)
/*  f16d01c:	24165000 */ 	addiu	$s6,$zero,0x5000
.L0f16d020:
/*  f16d020:	3c11800b */ 	lui	$s1,%hi(var800aaa38)
/*  f16d024:	3c138009 */ 	lui	$s3,%hi(var80094ed8)
/*  f16d028:	26734ed8 */ 	addiu	$s3,$s3,%lo(var80094ed8)
/*  f16d02c:	2631aa38 */ 	addiu	$s1,$s1,%lo(var800aaa38)
/*  f16d030:	00008025 */ 	or	$s0,$zero,$zero
/*  f16d034:	24150003 */ 	addiu	$s5,$zero,0x3
/*  f16d038:	24140108 */ 	addiu	$s4,$zero,0x108
/*  f16d03c:	24120005 */ 	addiu	$s2,$zero,0x5
.L0f16d040:
/*  f16d040:	8e220000 */ 	lw	$v0,0x0($s1)
/*  f16d044:	5040000a */ 	beqzl	$v0,.L0f16d070
/*  f16d048:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16d04c:	52420008 */ 	beql	$s2,$v0,.L0f16d070
/*  f16d050:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f16d054:	02140019 */ 	multu	$s0,$s4
/*  f16d058:	32c5ffff */ 	andi	$a1,$s6,0xffff
/*  f16d05c:	00007012 */ 	mflo	$t6
/*  f16d060:	026e2021 */ 	addu	$a0,$s3,$t6
/*  f16d064:	0c003f67 */ 	jal	func0000fd9c
/*  f16d068:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d06c:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f16d070:
/*  f16d070:	1615fff3 */ 	bne	$s0,$s5,.L0f16d040
/*  f16d074:	26310010 */ 	addiu	$s1,$s1,0x10
/*  f16d078:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f16d07c:	3c018008 */ 	lui	$at,0x8008
/*  f16d080:	a43640ec */ 	sh	$s6,0x40ec($at)
/*  f16d084:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f16d088:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f16d08c:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f16d090:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f16d094:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f16d098:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f16d09c:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f16d0a0:	03e00008 */ 	jr	$ra
/*  f16d0a4:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f16d0a8
/*  f16d0a8:	3c03800b */ 	lui	$v1,%hi(var800aaa38)
/*  f16d0ac:	3c07800b */ 	lui	$a3,%hi(var800aaa68)
/*  f16d0b0:	24e7aa68 */ 	addiu	$a3,$a3,%lo(var800aaa68)
/*  f16d0b4:	2463aa38 */ 	addiu	$v1,$v1,%lo(var800aaa38)
/*  f16d0b8:	24060002 */ 	addiu	$a2,$zero,0x2
/*  f16d0bc:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f16d0c0:	8c6e0000 */ 	lw	$t6,0x0($v1)
.L0f16d0c4:
/*  f16d0c4:	548e0012 */ 	bnel	$a0,$t6,.L0f16d110
/*  f16d0c8:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f16d0cc:	50a00008 */ 	beqzl	$a1,.L0f16d0f0
/*  f16d0d0:	8c620004 */ 	lw	$v0,0x4($v1)
/*  f16d0d4:	10a20009 */ 	beq	$a1,$v0,.L0f16d0fc
/*  f16d0d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d0dc:	10a60009 */ 	beq	$a1,$a2,.L0f16d104
/*  f16d0e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d0e4:	1000000a */ 	beqz	$zero,.L0f16d110
/*  f16d0e8:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f16d0ec:	8c620004 */ 	lw	$v0,0x4($v1)
.L0f16d0f0:
/*  f16d0f0:	2c4f0001 */ 	sltiu	$t7,$v0,0x1
/*  f16d0f4:	03e00008 */ 	jr	$ra
/*  f16d0f8:	01e01025 */ 	or	$v0,$t7,$zero
.L0f16d0fc:
/*  f16d0fc:	03e00008 */ 	jr	$ra
/*  f16d100:	8c620004 */ 	lw	$v0,0x4($v1)
.L0f16d104:
/*  f16d104:	03e00008 */ 	jr	$ra
/*  f16d108:	8c620008 */ 	lw	$v0,0x8($v1)
/*  f16d10c:	24630010 */ 	addiu	$v1,$v1,0x10
.L0f16d110:
/*  f16d110:	5467ffec */ 	bnel	$v1,$a3,.L0f16d0c4
/*  f16d114:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f16d118:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d11c:	03e00008 */ 	jr	$ra
/*  f16d120:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d124
/*  f16d124:	3c03800b */ 	lui	$v1,%hi(var800aaa38)
/*  f16d128:	3c02800b */ 	lui	$v0,%hi(var800aaa68)
/*  f16d12c:	2442aa68 */ 	addiu	$v0,$v0,%lo(var800aaa68)
/*  f16d130:	2463aa38 */ 	addiu	$v1,$v1,%lo(var800aaa38)
/*  f16d134:	8c6e0000 */ 	lw	$t6,0x0($v1)
.L0f16d138:
/*  f16d138:	548e000c */ 	bnel	$a0,$t6,.L0f16d16c
/*  f16d13c:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f16d140:	8c6f0008 */ 	lw	$t7,0x8($v1)
/*  f16d144:	51e00004 */ 	beqzl	$t7,.L0f16d158
/*  f16d148:	8c780004 */ 	lw	$t8,0x4($v1)
/*  f16d14c:	03e00008 */ 	jr	$ra
/*  f16d150:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f16d154:	8c780004 */ 	lw	$t8,0x4($v1)
.L0f16d158:
/*  f16d158:	53000004 */ 	beqzl	$t8,.L0f16d16c
/*  f16d15c:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f16d160:	03e00008 */ 	jr	$ra
/*  f16d164:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f16d168:	24630010 */ 	addiu	$v1,$v1,0x10
.L0f16d16c:
/*  f16d16c:	5462fff2 */ 	bnel	$v1,$v0,.L0f16d138
/*  f16d170:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f16d174:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d178:	03e00008 */ 	jr	$ra
/*  f16d17c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d180:	3c02800b */ 	lui	$v0,%hi(var800aaa38)
/*  f16d184:	2442aa38 */ 	addiu	$v0,$v0,%lo(var800aaa38)
/*  f16d188:	00001825 */ 	or	$v1,$zero,$zero
/*  f16d18c:	24050003 */ 	addiu	$a1,$zero,0x3
.L0f16d190:
/*  f16d190:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f16d194:	548e0004 */ 	bnel	$a0,$t6,.L0f16d1a8
/*  f16d198:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f16d19c:	03e00008 */ 	jr	$ra
/*  f16d1a0:	00601025 */ 	or	$v0,$v1,$zero
/*  f16d1a4:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f16d1a8:
/*  f16d1a8:	1465fff9 */ 	bne	$v1,$a1,.L0f16d190
/*  f16d1ac:	24420010 */ 	addiu	$v0,$v0,0x10
/*  f16d1b0:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f16d1b4:	03e00008 */ 	jr	$ra
/*  f16d1b8:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d1bc
/*  f16d1bc:	3c0f8006 */ 	lui	$t7,0x8006
/*  f16d1c0:	8defdda0 */ 	lw	$t7,-0x2260($t7)
/*  f16d1c4:	44866000 */ 	mtc1	$a2,$f12
/*  f16d1c8:	afa7000c */ 	sw	$a3,0xc($sp)
/*  f16d1cc:	15e0001a */ 	bnez	$t7,.L0f16d238
/*  f16d1d0:	30eeffff */ 	andi	$t6,$a3,0xffff
/*  f16d1d4:	3c088008 */ 	lui	$t0,%hi(var800840c4)
/*  f16d1d8:	250840c4 */ 	addiu	$t0,$t0,%lo(var800840c4)
/*  f16d1dc:	8d020000 */ 	lw	$v0,0x0($t0)
/*  f16d1e0:	3c19800b */ 	lui	$t9,%hi(var800aa5d8)
/*  f16d1e4:	2739a5d8 */ 	addiu	$t9,$t9,%lo(var800aa5d8)
/*  f16d1e8:	0002c0c0 */ 	sll	$t8,$v0,0x3
/*  f16d1ec:	0302c023 */ 	subu	$t8,$t8,$v0
/*  f16d1f0:	0018c080 */ 	sll	$t8,$t8,0x2
/*  f16d1f4:	03191821 */ 	addu	$v1,$t8,$t9
/*  f16d1f8:	3c098008 */ 	lui	$t1,%hi(var800840d4)
/*  f16d1fc:	252940d4 */ 	addiu	$t1,$t1,%lo(var800840d4)
/*  f16d200:	8d260000 */ 	lw	$a2,0x0($t1)
/*  f16d204:	240a0001 */ 	addiu	$t2,$zero,0x1
/*  f16d208:	244c0001 */ 	addiu	$t4,$v0,0x1
/*  f16d20c:	24cb0001 */ 	addiu	$t3,$a2,0x1
/*  f16d210:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f16d214:	ac650004 */ 	sw	$a1,0x4($v1)
/*  f16d218:	e46c000c */ 	swc1	$f12,0xc($v1)
/*  f16d21c:	a46e0010 */ 	sh	$t6,0x10($v1)
/*  f16d220:	a46a0012 */ 	sh	$t2,0x12($v1)
/*  f16d224:	ad2b0000 */ 	sw	$t3,0x0($t1)
/*  f16d228:	a4600018 */ 	sh	$zero,0x18($v1)
/*  f16d22c:	a4600016 */ 	sh	$zero,0x16($v1)
/*  f16d230:	ad0c0000 */ 	sw	$t4,0x0($t0)
/*  f16d234:	a4660014 */ 	sh	$a2,0x14($v1)
.L0f16d238:
/*  f16d238:	03e00008 */ 	jr	$ra
/*  f16d23c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d240
/*  f16d240:	3c0e8006 */ 	lui	$t6,0x8006
/*  f16d244:	8dcedda0 */ 	lw	$t6,-0x2260($t6)
/*  f16d248:	3c068008 */ 	lui	$a2,%hi(var800840c4)
/*  f16d24c:	24c640c4 */ 	addiu	$a2,$a2,%lo(var800840c4)
/*  f16d250:	15c00014 */ 	bnez	$t6,.L0f16d2a4
/*  f16d254:	3c078008 */ 	lui	$a3,%hi(var800840d4)
/*  f16d258:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f16d25c:	3c18800b */ 	lui	$t8,%hi(var800aa5d8)
/*  f16d260:	2718a5d8 */ 	addiu	$t8,$t8,%lo(var800aa5d8)
/*  f16d264:	000278c0 */ 	sll	$t7,$v0,0x3
/*  f16d268:	01e27823 */ 	subu	$t7,$t7,$v0
/*  f16d26c:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f16d270:	24e740d4 */ 	addiu	$a3,$a3,%lo(var800840d4)
/*  f16d274:	01f81821 */ 	addu	$v1,$t7,$t8
/*  f16d278:	8ce50000 */ 	lw	$a1,0x0($a3)
/*  f16d27c:	24190002 */ 	addiu	$t9,$zero,0x2
/*  f16d280:	24490001 */ 	addiu	$t1,$v0,0x1
/*  f16d284:	24a80001 */ 	addiu	$t0,$a1,0x1
/*  f16d288:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f16d28c:	a4790012 */ 	sh	$t9,0x12($v1)
/*  f16d290:	ace80000 */ 	sw	$t0,0x0($a3)
/*  f16d294:	a4600018 */ 	sh	$zero,0x18($v1)
/*  f16d298:	a4600016 */ 	sh	$zero,0x16($v1)
/*  f16d29c:	acc90000 */ 	sw	$t1,0x0($a2)
/*  f16d2a0:	a4650014 */ 	sh	$a1,0x14($v1)
.L0f16d2a4:
/*  f16d2a4:	03e00008 */ 	jr	$ra
/*  f16d2a8:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d2ac
/*  f16d2ac:	3c0e8006 */ 	lui	$t6,0x8006
/*  f16d2b0:	8dcedda0 */ 	lw	$t6,-0x2260($t6)
/*  f16d2b4:	44856000 */ 	mtc1	$a1,$f12
/*  f16d2b8:	3c078008 */ 	lui	$a3,%hi(var800840c4)
/*  f16d2bc:	15c00017 */ 	bnez	$t6,.L0f16d31c
/*  f16d2c0:	24e740c4 */ 	addiu	$a3,$a3,%lo(var800840c4)
/*  f16d2c4:	8ce20000 */ 	lw	$v0,0x0($a3)
/*  f16d2c8:	3c18800b */ 	lui	$t8,%hi(var800aa5d8)
/*  f16d2cc:	2718a5d8 */ 	addiu	$t8,$t8,%lo(var800aa5d8)
/*  f16d2d0:	000278c0 */ 	sll	$t7,$v0,0x3
/*  f16d2d4:	01e27823 */ 	subu	$t7,$t7,$v0
/*  f16d2d8:	000f7880 */ 	sll	$t7,$t7,0x2
/*  f16d2dc:	01f81821 */ 	addu	$v1,$t7,$t8
/*  f16d2e0:	3c088008 */ 	lui	$t0,%hi(var800840d4)
/*  f16d2e4:	250840d4 */ 	addiu	$t0,$t0,%lo(var800840d4)
/*  f16d2e8:	8d050000 */ 	lw	$a1,0x0($t0)
/*  f16d2ec:	24190003 */ 	addiu	$t9,$zero,0x3
/*  f16d2f0:	244a0001 */ 	addiu	$t2,$v0,0x1
/*  f16d2f4:	24a90001 */ 	addiu	$t1,$a1,0x1
/*  f16d2f8:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f16d2fc:	e46c000c */ 	swc1	$f12,0xc($v1)
/*  f16d300:	ac660008 */ 	sw	$a2,0x8($v1)
/*  f16d304:	a4790012 */ 	sh	$t9,0x12($v1)
/*  f16d308:	ad090000 */ 	sw	$t1,0x0($t0)
/*  f16d30c:	a4600018 */ 	sh	$zero,0x18($v1)
/*  f16d310:	a4600016 */ 	sh	$zero,0x16($v1)
/*  f16d314:	acea0000 */ 	sw	$t2,0x0($a3)
/*  f16d318:	a4650014 */ 	sh	$a1,0x14($v1)
.L0f16d31c:
/*  f16d31c:	03e00008 */ 	jr	$ra
/*  f16d320:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d324
/*  f16d324:	3c0e8006 */ 	lui	$t6,0x8006
/*  f16d328:	8dcedda0 */ 	lw	$t6,-0x2260($t6)
/*  f16d32c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16d330:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d334:	15c00022 */ 	bnez	$t6,.L0f16d3c0
/*  f16d338:	3c03800b */ 	lui	$v1,%hi(var800aaa68)
/*  f16d33c:	3c04800b */ 	lui	$a0,%hi(var800aaa78)
/*  f16d340:	3c02800b */ 	lui	$v0,%hi(var800aaa88)
/*  f16d344:	3c05800b */ 	lui	$a1,%hi(var800aaa98)
/*  f16d348:	24a5aa98 */ 	addiu	$a1,$a1,%lo(var800aaa98)
/*  f16d34c:	2442aa88 */ 	addiu	$v0,$v0,%lo(var800aaa88)
/*  f16d350:	2484aa78 */ 	addiu	$a0,$a0,%lo(var800aaa78)
/*  f16d354:	2463aa68 */ 	addiu	$v1,$v1,%lo(var800aaa68)
.L0f16d358:
/*  f16d358:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f16d35c:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f16d360:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f16d364:	ac60fffc */ 	sw	$zero,-0x4($v1)
/*  f16d368:	ac80fffc */ 	sw	$zero,-0x4($a0)
/*  f16d36c:	1445fffa */ 	bne	$v0,$a1,.L0f16d358
/*  f16d370:	ac40fffc */ 	sw	$zero,-0x4($v0)
/*  f16d374:	0fc5b50c */ 	jal	func0f16d430
/*  f16d378:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d37c:	0fc5b4f4 */ 	jal	func0f16d3d0
/*  f16d380:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d384:	0fc5b513 */ 	jal	func0f16d44c
/*  f16d388:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d38c:	3c018008 */ 	lui	$at,0x8008
/*  f16d390:	ac2040e8 */ 	sw	$zero,0x40e8($at)
/*  f16d394:	3c018008 */ 	lui	$at,0x8008
/*  f16d398:	ac2040f0 */ 	sw	$zero,0x40f0($at)
/*  f16d39c:	2402ffff */ 	addiu	$v0,$zero,-1
/*  f16d3a0:	3c018008 */ 	lui	$at,0x8008
/*  f16d3a4:	ac2240c0 */ 	sw	$v0,0x40c0($at)
/*  f16d3a8:	3c018008 */ 	lui	$at,0x8008
/*  f16d3ac:	ac2240c8 */ 	sw	$v0,0x40c8($at)
/*  f16d3b0:	3c018008 */ 	lui	$at,0x8008
/*  f16d3b4:	ac2240cc */ 	sw	$v0,0x40cc($at)
/*  f16d3b8:	3c018008 */ 	lui	$at,0x8008
/*  f16d3bc:	ac2040d8 */ 	sw	$zero,0x40d8($at)
.L0f16d3c0:
/*  f16d3c0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d3c4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16d3c8:	03e00008 */ 	jr	$ra
/*  f16d3cc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d3d0
/*  f16d3d0:	3c02800b */ 	lui	$v0,%hi(var800aa5d8)
/*  f16d3d4:	3c048008 */ 	lui	$a0,%hi(var800840d4)
/*  f16d3d8:	248440d4 */ 	addiu	$a0,$a0,%lo(var800840d4)
/*  f16d3dc:	2442a5d8 */ 	addiu	$v0,$v0,%lo(var800aa5d8)
/*  f16d3e0:	8c830000 */ 	lw	$v1,0x0($a0)
/*  f16d3e4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16d3e8:	240e0006 */ 	addiu	$t6,$zero,0x6
/*  f16d3ec:	240f0004 */ 	addiu	$t7,$zero,0x4
/*  f16d3f0:	24780001 */ 	addiu	$t8,$v1,0x1
/*  f16d3f4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d3f8:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f16d3fc:	a44f0012 */ 	sh	$t7,0x12($v0)
/*  f16d400:	ac980000 */ 	sw	$t8,0x0($a0)
/*  f16d404:	a4400018 */ 	sh	$zero,0x18($v0)
/*  f16d408:	a4400016 */ 	sh	$zero,0x16($v0)
/*  f16d40c:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f16d410:	3c018008 */ 	lui	$at,0x8008
/*  f16d414:	a4430014 */ 	sh	$v1,0x14($v0)
/*  f16d418:	0c004643 */ 	jal	func0001190c
/*  f16d41c:	ac3940c4 */ 	sw	$t9,0x40c4($at)
/*  f16d420:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d424:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16d428:	03e00008 */ 	jr	$ra
/*  f16d42c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d430
/*  f16d430:	3c028008 */ 	lui	$v0,%hi(var800840e0)
/*  f16d434:	244240e0 */ 	addiu	$v0,$v0,%lo(var800840e0)
/*  f16d438:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f16d43c:	3c018008 */ 	lui	$at,0x8008
/*  f16d440:	ac2e40d0 */ 	sw	$t6,0x40d0($at)
/*  f16d444:	03e00008 */ 	jr	$ra
/*  f16d448:	ac400000 */ 	sw	$zero,0x0($v0)
);

GLOBAL_ASM(
glabel func0f16d44c
/*  f16d44c:	3c068008 */ 	lui	$a2,%hi(var800840c4)
/*  f16d450:	24c640c4 */ 	addiu	$a2,$a2,%lo(var800840c4)
/*  f16d454:	8cc20000 */ 	lw	$v0,0x0($a2)
/*  f16d458:	3c078008 */ 	lui	$a3,%hi(var800840d4)
/*  f16d45c:	24e740d4 */ 	addiu	$a3,$a3,%lo(var800840d4)
/*  f16d460:	000270c0 */ 	sll	$t6,$v0,0x3
/*  f16d464:	3c05800b */ 	lui	$a1,%hi(var800aa5d8)
/*  f16d468:	01c27023 */ 	subu	$t6,$t6,$v0
/*  f16d46c:	8ce40000 */ 	lw	$a0,0x0($a3)
/*  f16d470:	24a5a5d8 */ 	addiu	$a1,$a1,%lo(var800aa5d8)
/*  f16d474:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f16d478:	00ae1821 */ 	addu	$v1,$a1,$t6
/*  f16d47c:	240f0006 */ 	addiu	$t7,$zero,0x6
/*  f16d480:	24180005 */ 	addiu	$t8,$zero,0x5
/*  f16d484:	24990001 */ 	addiu	$t9,$a0,0x1
/*  f16d488:	ac6f0000 */ 	sw	$t7,0x0($v1)
/*  f16d48c:	a4780012 */ 	sh	$t8,0x12($v1)
/*  f16d490:	acf90000 */ 	sw	$t9,0x0($a3)
/*  f16d494:	3c088008 */ 	lui	$t0,0x8008
/*  f16d498:	a4640014 */ 	sh	$a0,0x14($v1)
/*  f16d49c:	8d0840d0 */ 	lw	$t0,0x40d0($t0)
/*  f16d4a0:	24490001 */ 	addiu	$t1,$v0,0x1
/*  f16d4a4:	acc90000 */ 	sw	$t1,0x0($a2)
/*  f16d4a8:	ac680004 */ 	sw	$t0,0x4($v1)
/*  f16d4ac:	a4a00018 */ 	sh	$zero,0x18($a1)
/*  f16d4b0:	03e00008 */ 	jr	$ra
/*  f16d4b4:	a4a00016 */ 	sh	$zero,0x16($a1)
);

GLOBAL_ASM(
glabel func0f16d4b8
/*  f16d4b8:	3c028008 */ 	lui	$v0,0x8008
/*  f16d4bc:	8c4240c8 */ 	lw	$v0,0x40c8($v0)
/*  f16d4c0:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16d4c4:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d4c8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d4cc:	10410003 */ 	beq	$v0,$at,.L0f16d4dc
/*  f16d4d0:	e7ac0020 */ 	swc1	$f12,0x20($sp)
/*  f16d4d4:	10000005 */ 	beqz	$zero,.L0f16d4ec
/*  f16d4d8:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d4dc:
/*  f16d4dc:	3c04800b */ 	lui	$a0,0x800b
/*  f16d4e0:	0fc5db10 */ 	jal	func0f176c40
/*  f16d4e4:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d4e8:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d4ec:
/*  f16d4ec:	04a00012 */ 	bltz	$a1,.L0f16d538
/*  f16d4f0:	3c028008 */ 	lui	$v0,0x8008
/*  f16d4f4:	8c4240c8 */ 	lw	$v0,0x40c8($v0)
/*  f16d4f8:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d4fc:	3c04800b */ 	lui	$a0,0x800b
/*  f16d500:	10410003 */ 	beq	$v0,$at,.L0f16d510
/*  f16d504:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d508:	10000004 */ 	beqz	$zero,.L0f16d51c
/*  f16d50c:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d510:
/*  f16d510:	0fc5db10 */ 	jal	func0f176c40
/*  f16d514:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d518:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d51c:
/*  f16d51c:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16d520:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f16d524:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f16d528:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16d52c:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f16d530:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16d534:	3047ffff */ 	andi	$a3,$v0,0xffff
.L0f16d538:
/*  f16d538:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d53c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16d540:	03e00008 */ 	jr	$ra
/*  f16d544:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d548
/*  f16d548:	3c028008 */ 	lui	$v0,0x8008
/*  f16d54c:	8c4240cc */ 	lw	$v0,0x40cc($v0)
/*  f16d550:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16d554:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d558:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d55c:	e7ac0020 */ 	swc1	$f12,0x20($sp)
/*  f16d560:	10410003 */ 	beq	$v0,$at,.L0f16d570
/*  f16d564:	00002825 */ 	or	$a1,$zero,$zero
/*  f16d568:	10000007 */ 	beqz	$zero,.L0f16d588
/*  f16d56c:	00401825 */ 	or	$v1,$v0,$zero
.L0f16d570:
/*  f16d570:	3c04800b */ 	lui	$a0,0x800b
/*  f16d574:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d578:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d57c:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f16d580:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f16d584:	00401825 */ 	or	$v1,$v0,$zero
.L0f16d588:
/*  f16d588:	0460002c */ 	bltz	$v1,.L0f16d63c
/*  f16d58c:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16d590:	8dce40cc */ 	lw	$t6,0x40cc($t6)
/*  f16d594:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d598:	11c10003 */ 	beq	$t6,$at,.L0f16d5a8
/*  f16d59c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d5a0:	10000026 */ 	beqz	$zero,.L0f16d63c
/*  f16d5a4:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16d5a8:
/*  f16d5a8:	0fc5b5b0 */ 	jal	func0f16d6c0
/*  f16d5ac:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f16d5b0:	10400022 */ 	beqz	$v0,.L0f16d63c
/*  f16d5b4:	8fa5001c */ 	lw	$a1,0x1c($sp)
/*  f16d5b8:	3c0f800a */ 	lui	$t7,0x800a
/*  f16d5bc:	8defa26c */ 	lw	$t7,-0x5d94($t7)
/*  f16d5c0:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16d5c4:	3c028008 */ 	lui	$v0,0x8008
/*  f16d5c8:	51e1001c */ 	beql	$t7,$at,.L0f16d63c
/*  f16d5cc:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f16d5d0:	8c4240cc */ 	lw	$v0,0x40cc($v0)
/*  f16d5d4:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d5d8:	3c04800b */ 	lui	$a0,0x800b
/*  f16d5dc:	10410003 */ 	beq	$v0,$at,.L0f16d5ec
/*  f16d5e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d5e4:	10000004 */ 	beqz	$zero,.L0f16d5f8
/*  f16d5e8:	00401825 */ 	or	$v1,$v0,$zero
.L0f16d5ec:
/*  f16d5ec:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d5f0:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d5f4:	00401825 */ 	or	$v1,$v0,$zero
.L0f16d5f8:
/*  f16d5f8:	3c04800b */ 	lui	$a0,0x800b
/*  f16d5fc:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d600:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d604:	afa30018 */ 	sw	$v1,0x18($sp)
/*  f16d608:	8fa30018 */ 	lw	$v1,0x18($sp)
/*  f16d60c:	5043000b */ 	beql	$v0,$v1,.L0f16d63c
/*  f16d610:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f16d614:	0fc5b490 */ 	jal	func0f16d240
/*  f16d618:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16d61c:	3c04800b */ 	lui	$a0,0x800b
/*  f16d620:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d624:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d628:	0fc5b7f4 */ 	jal	func0f16dfd0
/*  f16d62c:	00402025 */ 	or	$a0,$v0,$zero
/*  f16d630:	10000020 */ 	beqz	$zero,.L0f16d6b4
/*  f16d634:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d638:	24050001 */ 	addiu	$a1,$zero,0x1
.L0f16d63c:
/*  f16d63c:	50a0001d */ 	beqzl	$a1,.L0f16d6b4
/*  f16d640:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d644:	0fc5b449 */ 	jal	func0f16d124
/*  f16d648:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16d64c:	10400002 */ 	beqz	$v0,.L0f16d658
/*  f16d650:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16d654:	14410016 */ 	bne	$v0,$at,.L0f16d6b0
.L0f16d658:
/*  f16d658:	3c028008 */ 	lui	$v0,0x8008
/*  f16d65c:	8c4240cc */ 	lw	$v0,0x40cc($v0)
/*  f16d660:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16d664:	3c04800b */ 	lui	$a0,0x800b
/*  f16d668:	10410003 */ 	beq	$v0,$at,.L0f16d678
/*  f16d66c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d670:	10000004 */ 	beqz	$zero,.L0f16d684
/*  f16d674:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d678:
/*  f16d678:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d67c:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d680:	00402825 */ 	or	$a1,$v0,$zero
.L0f16d684:
/*  f16d684:	3c028006 */ 	lui	$v0,0x8006
/*  f16d688:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16d68c:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16d690:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f16d694:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16d698:	14200003 */ 	bnez	$at,.L0f16d6a8
/*  f16d69c:	00401825 */ 	or	$v1,$v0,$zero
/*  f16d6a0:	10000001 */ 	beqz	$zero,.L0f16d6a8
/*  f16d6a4:	24035000 */ 	addiu	$v1,$zero,0x5000
.L0f16d6a8:
/*  f16d6a8:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16d6ac:	3067ffff */ 	andi	$a3,$v1,0xffff
.L0f16d6b0:
/*  f16d6b0:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16d6b4:
/*  f16d6b4:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16d6b8:	03e00008 */ 	jr	$ra
/*  f16d6bc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d6c0
/*  f16d6c0:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f16d6c4:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f16d6c8:	8cae02ac */ 	lw	$t6,0x2ac($a1)
/*  f16d6cc:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16d6d0:	24010006 */ 	addiu	$at,$zero,0x6
/*  f16d6d4:	15c10003 */ 	bne	$t6,$at,.L0f16d6e4
/*  f16d6d8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d6dc:	1000006b */ 	beqz	$zero,.L0f16d88c
/*  f16d6e0:	00001025 */ 	or	$v0,$zero,$zero
.L0f16d6e4:
/*  f16d6e4:	0fc5b364 */ 	jal	func0f16cd90
/*  f16d6e8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d6ec:	3c05800a */ 	lui	$a1,%hi(g_Vars)
/*  f16d6f0:	10400003 */ 	beqz	$v0,.L0f16d700
/*  f16d6f4:	24a59fc0 */ 	addiu	$a1,$a1,%lo(g_Vars)
/*  f16d6f8:	10000064 */ 	beqz	$zero,.L0f16d88c
/*  f16d6fc:	00001025 */ 	or	$v0,$zero,$zero
.L0f16d700:
/*  f16d700:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16d704:	8def40e8 */ 	lw	$t7,0x40e8($t7)
/*  f16d708:	3c188008 */ 	lui	$t8,0x8008
/*  f16d70c:	11e00003 */ 	beqz	$t7,.L0f16d71c
/*  f16d710:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d714:	1000005d */ 	beqz	$zero,.L0f16d88c
/*  f16d718:	00001025 */ 	or	$v0,$zero,$zero
.L0f16d71c:
/*  f16d71c:	8f1840d8 */ 	lw	$t8,0x40d8($t8)
/*  f16d720:	3c198008 */ 	lui	$t9,0x8008
/*  f16d724:	53000007 */ 	beqzl	$t8,.L0f16d744
/*  f16d728:	8cbf006c */ 	lw	$ra,0x6c($a1)
/*  f16d72c:	8f3940dc */ 	lw	$t9,0x40dc($t9)
/*  f16d730:	53200004 */ 	beqzl	$t9,.L0f16d744
/*  f16d734:	8cbf006c */ 	lw	$ra,0x6c($a1)
/*  f16d738:	10000054 */ 	beqz	$zero,.L0f16d88c
/*  f16d73c:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d740:	8cbf006c */ 	lw	$ra,0x6c($a1)
.L0f16d744:
/*  f16d744:	00003825 */ 	or	$a3,$zero,$zero
/*  f16d748:	00003025 */ 	or	$a2,$zero,$zero
/*  f16d74c:	13e00003 */ 	beqz	$ra,.L0f16d75c
/*  f16d750:	00002025 */ 	or	$a0,$zero,$zero
/*  f16d754:	10000001 */ 	beqz	$zero,.L0f16d75c
/*  f16d758:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f16d75c:
/*  f16d75c:	8cad0068 */ 	lw	$t5,0x68($a1)
/*  f16d760:	00001825 */ 	or	$v1,$zero,$zero
/*  f16d764:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d768:	11a00003 */ 	beqz	$t5,.L0f16d778
/*  f16d76c:	0007c880 */ 	sll	$t9,$a3,0x2
/*  f16d770:	10000001 */ 	beqz	$zero,.L0f16d778
/*  f16d774:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16d778:
/*  f16d778:	8cac0064 */ 	lw	$t4,0x64($a1)
/*  f16d77c:	3c0a800a */ 	lui	$t2,%hi(var800a4928)
/*  f16d780:	254a4928 */ 	addiu	$t2,$t2,%lo(var800a4928)
/*  f16d784:	11800003 */ 	beqz	$t4,.L0f16d794
/*  f16d788:	240b008c */ 	addiu	$t3,$zero,0x8c
/*  f16d78c:	10000001 */ 	beqz	$zero,.L0f16d794
/*  f16d790:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16d794:
/*  f16d794:	8ca80070 */ 	lw	$t0,0x70($a1)
/*  f16d798:	2409ffff */ 	addiu	$t1,$zero,-1
/*  f16d79c:	11000003 */ 	beqz	$t0,.L0f16d7ac
/*  f16d7a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d7a4:	10000001 */ 	beqz	$zero,.L0f16d7ac
/*  f16d7a8:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16d7ac:
/*  f16d7ac:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16d7b0:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16d7b4:	01e6c021 */ 	addu	$t8,$t7,$a2
/*  f16d7b8:	1b000033 */ 	blez	$t8,.L0f16d888
/*  f16d7bc:	3c0e800a */ 	lui	$t6,%hi(g_Vars)
/*  f16d7c0:	25ce9fc0 */ 	addiu	$t6,$t6,%lo(g_Vars)
/*  f16d7c4:	032e2821 */ 	addu	$a1,$t9,$t6
/*  f16d7c8:	8caf0064 */ 	lw	$t7,0x64($a1)
.L0f16d7cc:
/*  f16d7cc:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16d7d0:	8de200bc */ 	lw	$v0,0xbc($t7)
/*  f16d7d4:	10400015 */ 	beqz	$v0,.L0f16d82c
/*  f16d7d8:	24580028 */ 	addiu	$t8,$v0,0x28
/*  f16d7dc:	13000013 */ 	beqz	$t8,.L0f16d82c
/*  f16d7e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d7e4:	84430028 */ 	lh	$v1,0x28($v0)
/*  f16d7e8:	11230010 */ 	beq	$t1,$v1,.L0f16d82c
/*  f16d7ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d7f0:	006b0019 */ 	multu	$v1,$t3
/*  f16d7f4:	8d590000 */ 	lw	$t9,0x0($t2)
/*  f16d7f8:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d7fc:	00007012 */ 	mflo	$t6
/*  f16d800:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f16d804:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f16d808:	33194000 */ 	andi	$t9,$t8,0x4000
/*  f16d80c:	13200003 */ 	beqz	$t9,.L0f16d81c
/*  f16d810:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d814:	10000001 */ 	beqz	$zero,.L0f16d81c
/*  f16d818:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16d81c:
/*  f16d81c:	10400003 */ 	beqz	$v0,.L0f16d82c
/*  f16d820:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d824:	10000019 */ 	beqz	$zero,.L0f16d88c
/*  f16d828:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16d82c:
/*  f16d82c:	13e00003 */ 	beqz	$ra,.L0f16d83c
/*  f16d830:	24a50004 */ 	addiu	$a1,$a1,0x4
/*  f16d834:	10000002 */ 	beqz	$zero,.L0f16d840
/*  f16d838:	24060001 */ 	addiu	$a2,$zero,0x1
.L0f16d83c:
/*  f16d83c:	00003025 */ 	or	$a2,$zero,$zero
.L0f16d840:
/*  f16d840:	11a00003 */ 	beqz	$t5,.L0f16d850
/*  f16d844:	00002025 */ 	or	$a0,$zero,$zero
/*  f16d848:	10000001 */ 	beqz	$zero,.L0f16d850
/*  f16d84c:	24040001 */ 	addiu	$a0,$zero,0x1
.L0f16d850:
/*  f16d850:	11800003 */ 	beqz	$t4,.L0f16d860
/*  f16d854:	00001825 */ 	or	$v1,$zero,$zero
/*  f16d858:	10000001 */ 	beqz	$zero,.L0f16d860
/*  f16d85c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16d860:
/*  f16d860:	11000003 */ 	beqz	$t0,.L0f16d870
/*  f16d864:	00001025 */ 	or	$v0,$zero,$zero
/*  f16d868:	10000001 */ 	beqz	$zero,.L0f16d870
/*  f16d86c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f16d870:
/*  f16d870:	00437021 */ 	addu	$t6,$v0,$v1
/*  f16d874:	01c47821 */ 	addu	$t7,$t6,$a0
/*  f16d878:	01e6c021 */ 	addu	$t8,$t7,$a2
/*  f16d87c:	00f8082a */ 	slt	$at,$a3,$t8
/*  f16d880:	5420ffd2 */ 	bnezl	$at,.L0f16d7cc
/*  f16d884:	8caf0064 */ 	lw	$t7,0x64($a1)
.L0f16d888:
/*  f16d888:	00001025 */ 	or	$v0,$zero,$zero
.L0f16d88c:
/*  f16d88c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d890:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16d894:	03e00008 */ 	jr	$ra
/*  f16d898:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d89c
/*  f16d89c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16d8a0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d8a4:	3c04800b */ 	lui	$a0,0x800b
/*  f16d8a8:	e7ac0020 */ 	swc1	$f12,0x20($sp)
/*  f16d8ac:	0fc5db48 */ 	jal	func0f176d20
/*  f16d8b0:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d8b4:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16d8b8:	afa20018 */ 	sw	$v0,0x18($sp)
/*  f16d8bc:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16d8c0:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16d8c4:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f16d8c8:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16d8cc:	3047ffff */ 	andi	$a3,$v0,0xffff
/*  f16d8d0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d8d4:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16d8d8:	03e00008 */ 	jr	$ra
/*  f16d8dc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d8e0:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16d8e4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d8e8:	0fc3f27d */ 	jal	func0f0fc9f4
/*  f16d8ec:	e7ac0020 */ 	swc1	$f12,0x20($sp)
/*  f16d8f0:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16d8f4:	afa20018 */ 	sw	$v0,0x18($sp)
/*  f16d8f8:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16d8fc:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16d900:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f16d904:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16d908:	3047ffff */ 	andi	$a3,$v0,0xffff
/*  f16d90c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d910:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16d914:	03e00008 */ 	jr	$ra
/*  f16d918:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d91c
/*  f16d91c:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16d920:	8def40c0 */ 	lw	$t7,0x40c0($t7)
/*  f16d924:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16d928:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d92c:	108f0018 */ 	beq	$a0,$t7,.L0f16d990
/*  f16d930:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16d934:	0fc5b490 */ 	jal	func0f16d240
/*  f16d938:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16d93c:	0fc5b490 */ 	jal	func0f16d240
/*  f16d940:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16d944:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16d948:	3c053f00 */ 	lui	$a1,0x3f00
/*  f16d94c:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16d950:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16d954:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16d958:	3c053f00 */ 	lui	$a1,0x3f00
/*  f16d95c:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16d960:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16d964:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16d968:	3c053f00 */ 	lui	$a1,0x3f00
/*  f16d96c:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16d970:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16d974:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16d978:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d97c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16d980:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16d984:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16d988:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16d98c:	3047ffff */ 	andi	$a3,$v0,0xffff
.L0f16d990:
/*  f16d990:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d994:	8fb80018 */ 	lw	$t8,0x18($sp)
/*  f16d998:	3c018008 */ 	lui	$at,0x8008
/*  f16d99c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16d9a0:	03e00008 */ 	jr	$ra
/*  f16d9a4:	ac3840c0 */ 	sw	$t8,0x40c0($at)
);

GLOBAL_ASM(
glabel func0f16d9a8
/*  f16d9a8:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16d9ac:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16d9b0:	3c01800b */ 	lui	$at,0x800b
/*  f16d9b4:	44806000 */ 	mtc1	$zero,$f12
/*  f16d9b8:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16d9bc:	ac24a5d0 */ 	sw	$a0,-0x5a30($at)
/*  f16d9c0:	3c04800b */ 	lui	$a0,0x800b
/*  f16d9c4:	0fc5db36 */ 	jal	func0f176cd8
/*  f16d9c8:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16d9cc:	04420005 */ 	bltzl	$v0,.L0f16d9e4
/*  f16d9d0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16d9d4:	44806000 */ 	mtc1	$zero,$f12
/*  f16d9d8:	0fc5b552 */ 	jal	func0f16d548
/*  f16d9dc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16d9e0:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16d9e4:
/*  f16d9e4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16d9e8:	03e00008 */ 	jr	$ra
/*  f16d9ec:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16d9f0
/*  f16d9f0:	3c01800b */ 	lui	$at,0x800b
/*  f16d9f4:	03e00008 */ 	jr	$ra
/*  f16d9f8:	ac24a5d0 */ 	sw	$a0,-0x5a30($at)
);

GLOBAL_ASM(
glabel func0f16d9fc
/*  f16d9fc:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16da00:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16da04:	0fc5b50c */ 	jal	func0f16d430
/*  f16da08:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16da0c:	0fc5b4f4 */ 	jal	func0f16d3d0
/*  f16da10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16da14:	0fc5b513 */ 	jal	func0f16d44c
/*  f16da18:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16da1c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16da20:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16da24:	03e00008 */ 	jr	$ra
/*  f16da28:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16da2c
/*  f16da2c:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16da30:	8dce40d8 */ 	lw	$t6,0x40d8($t6)
/*  f16da34:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16da38:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16da3c:	15c00015 */ 	bnez	$t6,.L0f16da94
/*  f16da40:	3c04800b */ 	lui	$a0,0x800b
/*  f16da44:	0fc5db48 */ 	jal	func0f176d20
/*  f16da48:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16da4c:	04420012 */ 	bltzl	$v0,.L0f16da98
/*  f16da50:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16da54:	0fc5b490 */ 	jal	func0f16d240
/*  f16da58:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16da5c:	0fc5b490 */ 	jal	func0f16d240
/*  f16da60:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16da64:	0fc5b490 */ 	jal	func0f16d240
/*  f16da68:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16da6c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16da70:	3c053f00 */ 	lui	$a1,0x3f00
/*  f16da74:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16da78:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16da7c:	44806000 */ 	mtc1	$zero,$f12
/*  f16da80:	0fc5b627 */ 	jal	func0f16d89c
/*  f16da84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16da88:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f16da8c:	3c018008 */ 	lui	$at,0x8008
/*  f16da90:	ac2f40d8 */ 	sw	$t7,0x40d8($at)
.L0f16da94:
/*  f16da94:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16da98:
/*  f16da98:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16da9c:	03e00008 */ 	jr	$ra
/*  f16daa0:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16daa4
/*  f16daa4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16daa8:	8dce40d8 */ 	lw	$t6,0x40d8($t6)
/*  f16daac:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16dab0:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dab4:	51c00014 */ 	beqzl	$t6,.L0f16db08
/*  f16dab8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16dabc:	0fc5b490 */ 	jal	func0f16d240
/*  f16dac0:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16dac4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dac8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16dacc:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16dad0:	3c053f80 */ 	lui	$a1,0x3f80
/*  f16dad4:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16dad8:	00003025 */ 	or	$a2,$zero,$zero
/*  f16dadc:	3c0f800a */ 	lui	$t7,0x800a
/*  f16dae0:	8defa488 */ 	lw	$t7,-0x5b78($t7)
/*  f16dae4:	3c013f00 */ 	lui	$at,0x3f00
/*  f16dae8:	15e00004 */ 	bnez	$t7,.L0f16dafc
/*  f16daec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16daf0:	44816000 */ 	mtc1	$at,$f12
/*  f16daf4:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16daf8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16dafc:
/*  f16dafc:	3c018008 */ 	lui	$at,0x8008
/*  f16db00:	ac2040d8 */ 	sw	$zero,0x40d8($at)
/*  f16db04:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16db08:
/*  f16db08:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16db0c:	03e00008 */ 	jr	$ra
/*  f16db10:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16db14
/*  f16db14:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16db18:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16db1c:	0fc3f27d */ 	jal	func0f0fc9f4
/*  f16db20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16db24:	0fc5b647 */ 	jal	func0f16d91c
/*  f16db28:	00402025 */ 	or	$a0,$v0,$zero
/*  f16db2c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16db30:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16db34:	03e00008 */ 	jr	$ra
/*  f16db38:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16db3c
/*  f16db3c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16db40:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16db44:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16db48:	3c053f80 */ 	lui	$a1,0x3f80
/*  f16db4c:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16db50:	00003025 */ 	or	$a2,$zero,$zero
/*  f16db54:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16db58:	0fc5b42a */ 	jal	func0f16d0a8
/*  f16db5c:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f16db60:	10400007 */ 	beqz	$v0,.L0f16db80
/*  f16db64:	3c013f80 */ 	lui	$at,0x3f80
/*  f16db68:	3c013f80 */ 	lui	$at,0x3f80
/*  f16db6c:	44816000 */ 	mtc1	$at,$f12
/*  f16db70:	0fc5b627 */ 	jal	func0f16d89c
/*  f16db74:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16db78:	10000005 */ 	beqz	$zero,.L0f16db90
/*  f16db7c:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16db80:
/*  f16db80:	44816000 */ 	mtc1	$at,$f12
/*  f16db84:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16db88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16db8c:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16db90:
/*  f16db90:	240effff */ 	addiu	$t6,$zero,-1
/*  f16db94:	3c018008 */ 	lui	$at,0x8008
/*  f16db98:	ac2e40c0 */ 	sw	$t6,0x40c0($at)
/*  f16db9c:	03e00008 */ 	jr	$ra
/*  f16dba0:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16dba4
/*  f16dba4:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16dba8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dbac:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16dbb0:	3c018008 */ 	lui	$at,0x8008
/*  f16dbb4:	0fc5b50c */ 	jal	func0f16d430
/*  f16dbb8:	ac2e40e8 */ 	sw	$t6,0x40e8($at)
/*  f16dbbc:	0fc5b490 */ 	jal	func0f16d240
/*  f16dbc0:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16dbc4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dbc8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16dbcc:	0fc5b82d */ 	jal	func0f16e0b4
/*  f16dbd0:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f16dbd4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dbd8:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16dbdc:	0fc5b490 */ 	jal	func0f16d240
/*  f16dbe0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16dbe4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dbe8:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16dbec:	3c028006 */ 	lui	$v0,0x8006
/*  f16dbf0:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16dbf4:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16dbf8:	14200003 */ 	bnez	$at,.L0f16dc08
/*  f16dbfc:	00401825 */ 	or	$v1,$v0,$zero
/*  f16dc00:	10000001 */ 	beqz	$zero,.L0f16dc08
/*  f16dc04:	24035000 */ 	addiu	$v1,$zero,0x5000
.L0f16dc08:
/*  f16dc08:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16dc0c:	afa30018 */ 	sw	$v1,0x18($sp)
/*  f16dc10:	8fa30018 */ 	lw	$v1,0x18($sp)
/*  f16dc14:	0043082a */ 	slt	$at,$v0,$v1
/*  f16dc18:	10200009 */ 	beqz	$at,.L0f16dc40
/*  f16dc1c:	3c028006 */ 	lui	$v0,0x8006
/*  f16dc20:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16dc24:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16dc28:	14200003 */ 	bnez	$at,.L0f16dc38
/*  f16dc2c:	00401825 */ 	or	$v1,$v0,$zero
/*  f16dc30:	10000006 */ 	beqz	$zero,.L0f16dc4c
/*  f16dc34:	24085000 */ 	addiu	$t0,$zero,0x5000
.L0f16dc38:
/*  f16dc38:	10000004 */ 	beqz	$zero,.L0f16dc4c
/*  f16dc3c:	00604025 */ 	or	$t0,$v1,$zero
.L0f16dc40:
/*  f16dc40:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16dc44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dc48:	00404025 */ 	or	$t0,$v0,$zero
.L0f16dc4c:
/*  f16dc4c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16dc50:	2405000a */ 	addiu	$a1,$zero,0xa
/*  f16dc54:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16dc58:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16dc5c:	3107ffff */ 	andi	$a3,$t0,0xffff
/*  f16dc60:	0fc5b513 */ 	jal	func0f16d44c
/*  f16dc64:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dc68:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16dc6c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16dc70:	03e00008 */ 	jr	$ra
/*  f16dc74:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16dc78
/*  f16dc78:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16dc7c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dc80:	0fc5b50c */ 	jal	func0f16d430
/*  f16dc84:	e7ac0020 */ 	swc1	$f12,0x20($sp)
/*  f16dc88:	3c028006 */ 	lui	$v0,0x8006
/*  f16dc8c:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16dc90:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16dc94:	14200003 */ 	bnez	$at,.L0f16dca4
/*  f16dc98:	00401825 */ 	or	$v1,$v0,$zero
/*  f16dc9c:	10000001 */ 	beqz	$zero,.L0f16dca4
/*  f16dca0:	24035000 */ 	addiu	$v1,$zero,0x5000
.L0f16dca4:
/*  f16dca4:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16dca8:	afa30018 */ 	sw	$v1,0x18($sp)
/*  f16dcac:	8fa30018 */ 	lw	$v1,0x18($sp)
/*  f16dcb0:	0043082a */ 	slt	$at,$v0,$v1
/*  f16dcb4:	10200009 */ 	beqz	$at,.L0f16dcdc
/*  f16dcb8:	3c028006 */ 	lui	$v0,0x8006
/*  f16dcbc:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16dcc0:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16dcc4:	14200003 */ 	bnez	$at,.L0f16dcd4
/*  f16dcc8:	00401825 */ 	or	$v1,$v0,$zero
/*  f16dccc:	10000006 */ 	beqz	$zero,.L0f16dce8
/*  f16dcd0:	24085000 */ 	addiu	$t0,$zero,0x5000
.L0f16dcd4:
/*  f16dcd4:	10000004 */ 	beqz	$zero,.L0f16dce8
/*  f16dcd8:	00604025 */ 	or	$t0,$v1,$zero
.L0f16dcdc:
/*  f16dcdc:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16dce0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dce4:	00404025 */ 	or	$t0,$v0,$zero
.L0f16dce8:
/*  f16dce8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16dcec:	24050019 */ 	addiu	$a1,$zero,0x19
/*  f16dcf0:	8fa60020 */ 	lw	$a2,0x20($sp)
/*  f16dcf4:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16dcf8:	3107ffff */ 	andi	$a3,$t0,0xffff
/*  f16dcfc:	0fc5b513 */ 	jal	func0f16d44c
/*  f16dd00:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dd04:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16dd08:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16dd0c:	03e00008 */ 	jr	$ra
/*  f16dd10:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16dd14
/*  f16dd14:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16dd18:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dd1c:	0fc5b50c */ 	jal	func0f16d430
/*  f16dd20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dd24:	0fc5b490 */ 	jal	func0f16d240
/*  f16dd28:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16dd2c:	0fc5b490 */ 	jal	func0f16d240
/*  f16dd30:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16dd34:	0fc5b490 */ 	jal	func0f16d240
/*  f16dd38:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16dd3c:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16dd40:	8dce40d8 */ 	lw	$t6,0x40d8($t6)
/*  f16dd44:	3c053dcc */ 	lui	$a1,0x3dcc
/*  f16dd48:	34a5cccd */ 	ori	$a1,$a1,0xcccd
/*  f16dd4c:	11c00008 */ 	beqz	$t6,.L0f16dd70
/*  f16dd50:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16dd54:	3c053dcc */ 	lui	$a1,0x3dcc
/*  f16dd58:	34a5cccd */ 	ori	$a1,$a1,0xcccd
/*  f16dd5c:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16dd60:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16dd64:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16dd68:	10000004 */ 	beqz	$zero,.L0f16dd7c
/*  f16dd6c:	44806000 */ 	mtc1	$zero,$f12
.L0f16dd70:
/*  f16dd70:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16dd74:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16dd78:	44806000 */ 	mtc1	$zero,$f12
.L0f16dd7c:
/*  f16dd7c:	0fc5b71e */ 	jal	func0f16dc78
/*  f16dd80:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dd84:	240f04b0 */ 	addiu	$t7,$zero,0x4b0
/*  f16dd88:	3c018008 */ 	lui	$at,0x8008
/*  f16dd8c:	ac2f40f0 */ 	sw	$t7,0x40f0($at)
/*  f16dd90:	3c018008 */ 	lui	$at,0x8008
/*  f16dd94:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f16dd98:	0fc5b513 */ 	jal	func0f16d44c
/*  f16dd9c:	ac3840dc */ 	sw	$t8,0x40dc($at)
/*  f16dda0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16dda4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16dda8:	03e00008 */ 	jr	$ra
/*  f16ddac:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16ddb0
/*  f16ddb0:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16ddb4:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16ddb8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16ddbc:	3c054000 */ 	lui	$a1,0x4000
/*  f16ddc0:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16ddc4:	00003025 */ 	or	$a2,$zero,$zero
/*  f16ddc8:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16ddcc:	8dce40d8 */ 	lw	$t6,0x40d8($t6)
/*  f16ddd0:	3c014000 */ 	lui	$at,0x4000
/*  f16ddd4:	44816000 */ 	mtc1	$at,$f12
/*  f16ddd8:	11c00005 */ 	beqz	$t6,.L0f16ddf0
/*  f16dddc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dde0:	0fc5b627 */ 	jal	func0f16d89c
/*  f16dde4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dde8:	10000004 */ 	beqz	$zero,.L0f16ddfc
/*  f16ddec:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16ddf0:
/*  f16ddf0:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16ddf4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ddf8:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16ddfc:
/*  f16ddfc:	3c018008 */ 	lui	$at,0x8008
/*  f16de00:	ac2040dc */ 	sw	$zero,0x40dc($at)
/*  f16de04:	03e00008 */ 	jr	$ra
/*  f16de08:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16de0c
/*  f16de0c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16de10:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16de14:	0fc5b50c */ 	jal	func0f16d430
/*  f16de18:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16de1c:	0fc5b490 */ 	jal	func0f16d240
/*  f16de20:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16de24:	0fc5b490 */ 	jal	func0f16d240
/*  f16de28:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16de2c:	0fc5b82d */ 	jal	func0f16e0b4
/*  f16de30:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f16de34:	0fc5b490 */ 	jal	func0f16d240
/*  f16de38:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16de3c:	0fc5b490 */ 	jal	func0f16d240
/*  f16de40:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16de44:	0fc5b490 */ 	jal	func0f16d240
/*  f16de48:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16de4c:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16de50:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16de54:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16de58:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16de5c:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16de60:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16de64:	3047ffff */ 	andi	$a3,$v0,0xffff
/*  f16de68:	0fc5b513 */ 	jal	func0f16d44c
/*  f16de6c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16de70:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16de74:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16de78:	03e00008 */ 	jr	$ra
/*  f16de7c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16de80
/*  f16de80:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16de84:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16de88:	0fc5b490 */ 	jal	func0f16d240
/*  f16de8c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16de90:	0fc5b490 */ 	jal	func0f16d240
/*  f16de94:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16de98:	3c013f00 */ 	lui	$at,0x3f00
/*  f16de9c:	44816000 */ 	mtc1	$at,$f12
/*  f16dea0:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16dea4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dea8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16deac:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16deb0:	03e00008 */ 	jr	$ra
/*  f16deb4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16deb8
/*  f16deb8:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16debc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dec0:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16dec4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dec8:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16decc:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16ded0:	3c018008 */ 	lui	$at,0x8008
/*  f16ded4:	ac2e40c8 */ 	sw	$t6,0x40c8($at)
/*  f16ded8:	3c013f00 */ 	lui	$at,0x3f00
/*  f16dedc:	44816000 */ 	mtc1	$at,$f12
/*  f16dee0:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16dee4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16dee8:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16deec:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16def0:	03e00008 */ 	jr	$ra
/*  f16def4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16def8
/*  f16def8:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16defc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16df00:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16df04:	0fc5b490 */ 	jal	func0f16d240
/*  f16df08:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f16df0c:	0fc5b490 */ 	jal	func0f16d240
/*  f16df10:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16df14:	0fc5b82d */ 	jal	func0f16e0b4
/*  f16df18:	2404ffff */ 	addiu	$a0,$zero,-1
/*  f16df1c:	0fc5b490 */ 	jal	func0f16d240
/*  f16df20:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f16df24:	0fc5b490 */ 	jal	func0f16d240
/*  f16df28:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16df2c:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16df30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16df34:	3c038006 */ 	lui	$v1,0x8006
/*  f16df38:	9463ddc8 */ 	lhu	$v1,-0x2238($v1)
/*  f16df3c:	0062082a */ 	slt	$at,$v1,$v0
/*  f16df40:	10200005 */ 	beqz	$at,.L0f16df58
/*  f16df44:	00604025 */ 	or	$t0,$v1,$zero
/*  f16df48:	0fc5b3e8 */ 	jal	func0f16cfa0
/*  f16df4c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16df50:	10000001 */ 	beqz	$zero,.L0f16df58
/*  f16df54:	00404025 */ 	or	$t0,$v0,$zero
.L0f16df58:
/*  f16df58:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16df5c:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16df60:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16df64:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16df68:	3107ffff */ 	andi	$a3,$t0,0xffff
/*  f16df6c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16df70:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16df74:	3c01800a */ 	lui	$at,0x800a
/*  f16df78:	ac2ea488 */ 	sw	$t6,-0x5b78($at)
/*  f16df7c:	03e00008 */ 	jr	$ra
/*  f16df80:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16df84
/*  f16df84:	3c0e8006 */ 	lui	$t6,0x8006
/*  f16df88:	8dce24a4 */ 	lw	$t6,0x24a4($t6)
/*  f16df8c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16df90:	3c01800a */ 	lui	$at,0x800a
/*  f16df94:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16df98:	15c00009 */ 	bnez	$t6,.L0f16dfc0
/*  f16df9c:	ac20a488 */ 	sw	$zero,-0x5b78($at)
/*  f16dfa0:	0fc5b490 */ 	jal	func0f16d240
/*  f16dfa4:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f16dfa8:	0fc5b490 */ 	jal	func0f16d240
/*  f16dfac:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16dfb0:	3c013f00 */ 	lui	$at,0x3f00
/*  f16dfb4:	44816000 */ 	mtc1	$at,$f12
/*  f16dfb8:	0fc5b52e */ 	jal	func0f16d4b8
/*  f16dfbc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16dfc0:
/*  f16dfc0:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16dfc4:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16dfc8:	03e00008 */ 	jr	$ra
/*  f16dfcc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16dfd0
/*  f16dfd0:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16dfd4:	3c018008 */ 	lui	$at,0x8008
/*  f16dfd8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16dfdc:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16dfe0:	ac2440cc */ 	sw	$a0,0x40cc($at)
/*  f16dfe4:	0fc5b490 */ 	jal	func0f16d240
/*  f16dfe8:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16dfec:	3c028006 */ 	lui	$v0,0x8006
/*  f16dff0:	9442ddc8 */ 	lhu	$v0,-0x2238($v0)
/*  f16dff4:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16dff8:	8fa50018 */ 	lw	$a1,0x18($sp)
/*  f16dffc:	28415001 */ 	slti	$at,$v0,0x5001
/*  f16e000:	14200003 */ 	bnez	$at,.L0f16e010
/*  f16e004:	24060000 */ 	addiu	$a2,$zero,0x0
/*  f16e008:	10000002 */ 	beqz	$zero,.L0f16e014
/*  f16e00c:	24035000 */ 	addiu	$v1,$zero,0x5000
.L0f16e010:
/*  f16e010:	00401825 */ 	or	$v1,$v0,$zero
.L0f16e014:
/*  f16e014:	0fc5b46f */ 	jal	func0f16d1bc
/*  f16e018:	3067ffff */ 	andi	$a3,$v1,0xffff
/*  f16e01c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e020:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16e024:	03e00008 */ 	jr	$ra
/*  f16e028:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e02c
/*  f16e02c:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e030:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e034:	240effff */ 	addiu	$t6,$zero,-1
/*  f16e038:	3c018008 */ 	lui	$at,0x8008
/*  f16e03c:	ac2e40cc */ 	sw	$t6,0x40cc($at)
/*  f16e040:	0fc5b490 */ 	jal	func0f16d240
/*  f16e044:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16e048:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e04c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16e050:	03e00008 */ 	jr	$ra
/*  f16e054:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e058
/*  f16e058:	3c0e800b */ 	lui	$t6,%hi(var800aaa68)
/*  f16e05c:	25ceaa68 */ 	addiu	$t6,$t6,%lo(var800aaa68)
/*  f16e060:	00041080 */ 	sll	$v0,$a0,0x2
/*  f16e064:	004e1821 */ 	addu	$v1,$v0,$t6
/*  f16e068:	8c6f0000 */ 	lw	$t7,0x0($v1)
/*  f16e06c:	240400f0 */ 	addiu	$a0,$zero,0xf0
/*  f16e070:	15e0000e */ 	bnez	$t7,.L0f16e0ac
/*  f16e074:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e078:	00a40019 */ 	multu	$a1,$a0
/*  f16e07c:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f16e080:	3c01800b */ 	lui	$at,0x800b
/*  f16e084:	ac780000 */ 	sw	$t8,0x0($v1)
/*  f16e088:	00220821 */ 	addu	$at,$at,$v0
/*  f16e08c:	0000c812 */ 	mflo	$t9
/*  f16e090:	ac39aa78 */ 	sw	$t9,-0x5588($at)
/*  f16e094:	3c01800b */ 	lui	$at,0x800b
/*  f16e098:	00c40019 */ 	multu	$a2,$a0
/*  f16e09c:	00220821 */ 	addu	$at,$at,$v0
/*  f16e0a0:	00004012 */ 	mflo	$t0
/*  f16e0a4:	ac28aa88 */ 	sw	$t0,-0x5578($at)
/*  f16e0a8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16e0ac:
/*  f16e0ac:	03e00008 */ 	jr	$ra
/*  f16e0b0:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e0b4
/*  f16e0b4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e0b8:	04800006 */ 	bltz	$a0,.L0f16e0d4
/*  f16e0bc:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e0c0:	00047080 */ 	sll	$t6,$a0,0x2
/*  f16e0c4:	3c01800b */ 	lui	$at,0x800b
/*  f16e0c8:	002e0821 */ 	addu	$at,$at,$t6
/*  f16e0cc:	10000016 */ 	beqz	$zero,.L0f16e128
/*  f16e0d0:	ac20aa68 */ 	sw	$zero,-0x5598($at)
.L0f16e0d4:
/*  f16e0d4:	3c03800b */ 	lui	$v1,%hi(var800aaa68)
/*  f16e0d8:	3c04800b */ 	lui	$a0,%hi(var800aaa78)
/*  f16e0dc:	3c02800b */ 	lui	$v0,%hi(var800aaa88)
/*  f16e0e0:	3c05800b */ 	lui	$a1,%hi(var800aaa98)
/*  f16e0e4:	24a5aa98 */ 	addiu	$a1,$a1,%lo(var800aaa98)
/*  f16e0e8:	2442aa88 */ 	addiu	$v0,$v0,%lo(var800aaa88)
/*  f16e0ec:	2484aa78 */ 	addiu	$a0,$a0,%lo(var800aaa78)
/*  f16e0f0:	2463aa68 */ 	addiu	$v1,$v1,%lo(var800aaa68)
.L0f16e0f4:
/*  f16e0f4:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f16e0f8:	24630004 */ 	addiu	$v1,$v1,0x4
/*  f16e0fc:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f16e100:	ac60fffc */ 	sw	$zero,-0x4($v1)
/*  f16e104:	ac80fffc */ 	sw	$zero,-0x4($a0)
/*  f16e108:	1445fffa */ 	bne	$v0,$a1,.L0f16e0f4
/*  f16e10c:	ac40fffc */ 	sw	$zero,-0x4($v0)
/*  f16e110:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16e114:	8def40d8 */ 	lw	$t7,0x40d8($t7)
/*  f16e118:	51e00004 */ 	beqzl	$t7,.L0f16e12c
/*  f16e11c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e120:	0fc5b6a9 */ 	jal	func0f16daa4
/*  f16e124:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16e128:
/*  f16e128:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16e12c:
/*  f16e12c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16e130:	03e00008 */ 	jr	$ra
/*  f16e134:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e138
/*  f16e138:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16e13c:	8dce40cc */ 	lw	$t6,0x40cc($t6)
/*  f16e140:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e144:	2401ffff */ 	addiu	$at,$zero,-1
/*  f16e148:	15c10014 */ 	bne	$t6,$at,.L0f16e19c
/*  f16e14c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e150:	0fc5b5b0 */ 	jal	func0f16d6c0
/*  f16e154:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e158:	10400006 */ 	beqz	$v0,.L0f16e174
/*  f16e15c:	3c013f80 */ 	lui	$at,0x3f80
/*  f16e160:	44816000 */ 	mtc1	$at,$f12
/*  f16e164:	0fc5b552 */ 	jal	func0f16d548
/*  f16e168:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e16c:	10000014 */ 	beqz	$zero,.L0f16e1c0
/*  f16e170:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16e174:
/*  f16e174:	0fc5b449 */ 	jal	func0f16d124
/*  f16e178:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16e17c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16e180:	1441000e */ 	bne	$v0,$at,.L0f16e1bc
/*  f16e184:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f16e188:	3c053f80 */ 	lui	$a1,0x3f80
/*  f16e18c:	0fc5b4ab */ 	jal	func0f16d2ac
/*  f16e190:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16e194:	1000000a */ 	beqz	$zero,.L0f16e1c0
/*  f16e198:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16e19c:
/*  f16e19c:	3c04800b */ 	lui	$a0,0x800b
/*  f16e1a0:	0fc5db36 */ 	jal	func0f176cd8
/*  f16e1a4:	8c84a5d0 */ 	lw	$a0,-0x5a30($a0)
/*  f16e1a8:	04400004 */ 	bltz	$v0,.L0f16e1bc
/*  f16e1ac:	3c013f80 */ 	lui	$at,0x3f80
/*  f16e1b0:	44816000 */ 	mtc1	$at,$f12
/*  f16e1b4:	0fc5b552 */ 	jal	func0f16d548
/*  f16e1b8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16e1bc:
/*  f16e1bc:	8fbf0014 */ 	lw	$ra,0x14($sp)
.L0f16e1c0:
/*  f16e1c0:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16e1c4:	03e00008 */ 	jr	$ra
/*  f16e1c8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e1cc:	03e00008 */ 	jr	$ra
/*  f16e1d0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e1d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e1d8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e1dc:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e1e0
/*  f16e1e0:	248efff7 */ 	addiu	$t6,$a0,-9
/*  f16e1e4:	2dc10048 */ 	sltiu	$at,$t6,0x48
/*  f16e1e8:	10200080 */ 	beqz	$at,.L0f16e3ec
/*  f16e1ec:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f16e1f0:	3c017f1b */ 	lui	$at,%hi(var7f1b7930)
/*  f16e1f4:	002e0821 */ 	addu	$at,$at,$t6
/*  f16e1f8:	8c2e7930 */ 	lw	$t6,%lo(var7f1b7930)($at)
/*  f16e1fc:	01c00008 */ 	jr	$t6
/*  f16e200:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e204:	03e00008 */ 	jr	$ra
/*  f16e208:	2402000b */ 	addiu	$v0,$zero,0xb
/*  f16e20c:	03e00008 */ 	jr	$ra
/*  f16e210:	24020003 */ 	addiu	$v0,$zero,0x3
/*  f16e214:	03e00008 */ 	jr	$ra
/*  f16e218:	2402001c */ 	addiu	$v0,$zero,0x1c
/*  f16e21c:	03e00008 */ 	jr	$ra
/*  f16e220:	2402001f */ 	addiu	$v0,$zero,0x1f
/*  f16e224:	03e00008 */ 	jr	$ra
/*  f16e228:	2402001e */ 	addiu	$v0,$zero,0x1e
/*  f16e22c:	03e00008 */ 	jr	$ra
/*  f16e230:	2402000d */ 	addiu	$v0,$zero,0xd
/*  f16e234:	03e00008 */ 	jr	$ra
/*  f16e238:	24020020 */ 	addiu	$v0,$zero,0x20
/*  f16e23c:	03e00008 */ 	jr	$ra
/*  f16e240:	2402001d */ 	addiu	$v0,$zero,0x1d
/*  f16e244:	03e00008 */ 	jr	$ra
/*  f16e248:	24020023 */ 	addiu	$v0,$zero,0x23
/*  f16e24c:	03e00008 */ 	jr	$ra
/*  f16e250:	24020019 */ 	addiu	$v0,$zero,0x19
/*  f16e254:	03e00008 */ 	jr	$ra
/*  f16e258:	2402000c */ 	addiu	$v0,$zero,0xc
/*  f16e25c:	03e00008 */ 	jr	$ra
/*  f16e260:	24020024 */ 	addiu	$v0,$zero,0x24
/*  f16e264:	03e00008 */ 	jr	$ra
/*  f16e268:	24020012 */ 	addiu	$v0,$zero,0x12
/*  f16e26c:	03e00008 */ 	jr	$ra
/*  f16e270:	24020009 */ 	addiu	$v0,$zero,0x9
/*  f16e274:	03e00008 */ 	jr	$ra
/*  f16e278:	2402000a */ 	addiu	$v0,$zero,0xa
/*  f16e27c:	03e00008 */ 	jr	$ra
/*  f16e280:	2402000e */ 	addiu	$v0,$zero,0xe
/*  f16e284:	03e00008 */ 	jr	$ra
/*  f16e288:	2402001a */ 	addiu	$v0,$zero,0x1a
/*  f16e28c:	03e00008 */ 	jr	$ra
/*  f16e290:	24020017 */ 	addiu	$v0,$zero,0x17
/*  f16e294:	03e00008 */ 	jr	$ra
/*  f16e298:	24020014 */ 	addiu	$v0,$zero,0x14
/*  f16e29c:	03e00008 */ 	jr	$ra
/*  f16e2a0:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f16e2a4:	03e00008 */ 	jr	$ra
/*  f16e2a8:	24020010 */ 	addiu	$v0,$zero,0x10
/*  f16e2ac:	03e00008 */ 	jr	$ra
/*  f16e2b0:	24020011 */ 	addiu	$v0,$zero,0x11
/*  f16e2b4:	03e00008 */ 	jr	$ra
/*  f16e2b8:	24020004 */ 	addiu	$v0,$zero,0x4
/*  f16e2bc:	03e00008 */ 	jr	$ra
/*  f16e2c0:	2402000f */ 	addiu	$v0,$zero,0xf
/*  f16e2c4:	03e00008 */ 	jr	$ra
/*  f16e2c8:	24020013 */ 	addiu	$v0,$zero,0x13
/*  f16e2cc:	03e00008 */ 	jr	$ra
/*  f16e2d0:	24020015 */ 	addiu	$v0,$zero,0x15
/*  f16e2d4:	03e00008 */ 	jr	$ra
/*  f16e2d8:	24020016 */ 	addiu	$v0,$zero,0x16
/*  f16e2dc:	03e00008 */ 	jr	$ra
/*  f16e2e0:	2402000b */ 	addiu	$v0,$zero,0xb
/*  f16e2e4:	03e00008 */ 	jr	$ra
/*  f16e2e8:	24020018 */ 	addiu	$v0,$zero,0x18
/*  f16e2ec:	03e00008 */ 	jr	$ra
/*  f16e2f0:	24020021 */ 	addiu	$v0,$zero,0x21
/*  f16e2f4:	03e00008 */ 	jr	$ra
/*  f16e2f8:	2402001b */ 	addiu	$v0,$zero,0x1b
/*  f16e2fc:	03e00008 */ 	jr	$ra
/*  f16e300:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f16e304:	03e00008 */ 	jr	$ra
/*  f16e308:	24020008 */ 	addiu	$v0,$zero,0x8
/*  f16e30c:	03e00008 */ 	jr	$ra
/*  f16e310:	24020005 */ 	addiu	$v0,$zero,0x5
/*  f16e314:	03e00008 */ 	jr	$ra
/*  f16e318:	24020007 */ 	addiu	$v0,$zero,0x7
/*  f16e31c:	03e00008 */ 	jr	$ra
/*  f16e320:	2402002d */ 	addiu	$v0,$zero,0x2d
/*  f16e324:	03e00008 */ 	jr	$ra
/*  f16e328:	2402002e */ 	addiu	$v0,$zero,0x2e
/*  f16e32c:	03e00008 */ 	jr	$ra
/*  f16e330:	2402002f */ 	addiu	$v0,$zero,0x2f
/*  f16e334:	03e00008 */ 	jr	$ra
/*  f16e338:	24020030 */ 	addiu	$v0,$zero,0x30
/*  f16e33c:	03e00008 */ 	jr	$ra
/*  f16e340:	24020031 */ 	addiu	$v0,$zero,0x31
/*  f16e344:	03e00008 */ 	jr	$ra
/*  f16e348:	24020032 */ 	addiu	$v0,$zero,0x32
/*  f16e34c:	03e00008 */ 	jr	$ra
/*  f16e350:	24020033 */ 	addiu	$v0,$zero,0x33
/*  f16e354:	03e00008 */ 	jr	$ra
/*  f16e358:	24020034 */ 	addiu	$v0,$zero,0x34
/*  f16e35c:	03e00008 */ 	jr	$ra
/*  f16e360:	24020035 */ 	addiu	$v0,$zero,0x35
/*  f16e364:	03e00008 */ 	jr	$ra
/*  f16e368:	24020036 */ 	addiu	$v0,$zero,0x36
/*  f16e36c:	03e00008 */ 	jr	$ra
/*  f16e370:	24020037 */ 	addiu	$v0,$zero,0x37
/*  f16e374:	03e00008 */ 	jr	$ra
/*  f16e378:	24020038 */ 	addiu	$v0,$zero,0x38
/*  f16e37c:	03e00008 */ 	jr	$ra
/*  f16e380:	24020039 */ 	addiu	$v0,$zero,0x39
/*  f16e384:	03e00008 */ 	jr	$ra
/*  f16e388:	2402003a */ 	addiu	$v0,$zero,0x3a
/*  f16e38c:	03e00008 */ 	jr	$ra
/*  f16e390:	2402003b */ 	addiu	$v0,$zero,0x3b
/*  f16e394:	03e00008 */ 	jr	$ra
/*  f16e398:	2402003c */ 	addiu	$v0,$zero,0x3c
/*  f16e39c:	03e00008 */ 	jr	$ra
/*  f16e3a0:	2402003d */ 	addiu	$v0,$zero,0x3d
/*  f16e3a4:	03e00008 */ 	jr	$ra
/*  f16e3a8:	2402003e */ 	addiu	$v0,$zero,0x3e
/*  f16e3ac:	03e00008 */ 	jr	$ra
/*  f16e3b0:	2402003f */ 	addiu	$v0,$zero,0x3f
/*  f16e3b4:	03e00008 */ 	jr	$ra
/*  f16e3b8:	24020040 */ 	addiu	$v0,$zero,0x40
/*  f16e3bc:	03e00008 */ 	jr	$ra
/*  f16e3c0:	24020041 */ 	addiu	$v0,$zero,0x41
/*  f16e3c4:	03e00008 */ 	jr	$ra
/*  f16e3c8:	24020042 */ 	addiu	$v0,$zero,0x42
/*  f16e3cc:	03e00008 */ 	jr	$ra
/*  f16e3d0:	24020043 */ 	addiu	$v0,$zero,0x43
/*  f16e3d4:	03e00008 */ 	jr	$ra
/*  f16e3d8:	24020044 */ 	addiu	$v0,$zero,0x44
/*  f16e3dc:	03e00008 */ 	jr	$ra
/*  f16e3e0:	24020025 */ 	addiu	$v0,$zero,0x25
/*  f16e3e4:	03e00008 */ 	jr	$ra
/*  f16e3e8:	24020022 */ 	addiu	$v0,$zero,0x22
.L0f16e3ec:
/*  f16e3ec:	1000ffff */ 	beqz	$zero,.L0f16e3ec
/*  f16e3f0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e3f4:	03e00008 */ 	jr	$ra
/*  f16e3f8:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16e3fc
/*  f16e3fc:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f16e400:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f16e404:	308e2000 */ 	andi	$t6,$a0,0x2000
/*  f16e408:	00808025 */ 	or	$s0,$a0,$zero
/*  f16e40c:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f16e410:	240affff */ 	addiu	$t2,$zero,-1
/*  f16e414:	240bffff */ 	addiu	$t3,$zero,-1
/*  f16e418:	11c00002 */ 	beqz	$t6,.L0f16e424
/*  f16e41c:	00004025 */ 	or	$t0,$zero,$zero
/*  f16e420:	24080001 */ 	addiu	$t0,$zero,0x1
.L0f16e424:
/*  f16e424:	3c0c800b */ 	lui	$t4,0x800b
/*  f16e428:	8d8cabb8 */ 	lw	$t4,-0x5448($t4)
/*  f16e42c:	00002825 */ 	or	$a1,$zero,$zero
/*  f16e430:	00003825 */ 	or	$a3,$zero,$zero
/*  f16e434:	2409007c */ 	addiu	$t1,$zero,0x7c
/*  f16e438:	01802025 */ 	or	$a0,$t4,$zero
.L0f16e43c:
/*  f16e43c:	15000006 */ 	bnez	$t0,.L0f16e458
/*  f16e440:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e444:	94980000 */ 	lhu	$t8,0x0($a0)
/*  f16e448:	00107843 */ 	sra	$t7,$s0,0x1
/*  f16e44c:	33193fff */ 	andi	$t9,$t8,0x3fff
/*  f16e450:	51f9001f */ 	beql	$t7,$t9,.L0f16e4d0
/*  f16e454:	28a1007c */ 	slti	$at,$a1,0x7c
.L0f16e458:
/*  f16e458:	1100000b */ 	beqz	$t0,.L0f16e488
/*  f16e45c:	94830000 */ 	lhu	$v1,0x0($a0)
/*  f16e460:	24ae0001 */ 	addiu	$t6,$a1,0x1
/*  f16e464:	29c1007c */ 	slti	$at,$t6,0x7c
/*  f16e468:	10200007 */ 	beqz	$at,.L0f16e488
/*  f16e46c:	00101043 */ 	sra	$v0,$s0,0x1
/*  f16e470:	30783fff */ 	andi	$t8,$v1,0x3fff
/*  f16e474:	54580005 */ 	bnel	$v0,$t8,.L0f16e48c
/*  f16e478:	00031382 */ 	srl	$v0,$v1,0xe
/*  f16e47c:	948f0002 */ 	lhu	$t7,0x2($a0)
/*  f16e480:	31f93fff */ 	andi	$t9,$t7,0x3fff
/*  f16e484:	10590011 */ 	beq	$v0,$t9,.L0f16e4cc
.L0f16e488:
/*  f16e488:	00031382 */ 	srl	$v0,$v1,0xe
.L0f16e48c:
/*  f16e48c:	14400002 */ 	bnez	$v0,.L0f16e498
/*  f16e490:	24a60001 */ 	addiu	$a2,$a1,0x1
/*  f16e494:	00a05025 */ 	or	$t2,$a1,$zero
.L0f16e498:
/*  f16e498:	14400009 */ 	bnez	$v0,.L0f16e4c0
/*  f16e49c:	24e70002 */ 	addiu	$a3,$a3,0x2
/*  f16e4a0:	948e0002 */ 	lhu	$t6,0x2($a0)
/*  f16e4a4:	28c1007c */ 	slti	$at,$a2,0x7c
/*  f16e4a8:	000ec382 */ 	srl	$t8,$t6,0xe
/*  f16e4ac:	57000005 */ 	bnezl	$t8,.L0f16e4c4
/*  f16e4b0:	00c02825 */ 	or	$a1,$a2,$zero
/*  f16e4b4:	50200003 */ 	beqzl	$at,.L0f16e4c4
/*  f16e4b8:	00c02825 */ 	or	$a1,$a2,$zero
/*  f16e4bc:	00a05825 */ 	or	$t3,$a1,$zero
.L0f16e4c0:
/*  f16e4c0:	00c02825 */ 	or	$a1,$a2,$zero
.L0f16e4c4:
/*  f16e4c4:	14c9ffdd */ 	bne	$a2,$t1,.L0f16e43c
/*  f16e4c8:	24840002 */ 	addiu	$a0,$a0,0x2
.L0f16e4cc:
/*  f16e4cc:	28a1007c */ 	slti	$at,$a1,0x7c
.L0f16e4d0:
/*  f16e4d0:	10200021 */ 	beqz	$at,.L0f16e558
/*  f16e4d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e4d8:	1500000c */ 	bnez	$t0,.L0f16e50c
/*  f16e4dc:	240d0060 */ 	addiu	$t5,$zero,0x60
/*  f16e4e0:	00ad0019 */ 	multu	$a1,$t5
/*  f16e4e4:	908f0000 */ 	lbu	$t7,0x0($a0)
/*  f16e4e8:	31f9ff3f */ 	andi	$t9,$t7,0xff3f
/*  f16e4ec:	372e0080 */ 	ori	$t6,$t9,0x80
/*  f16e4f0:	a08e0000 */ 	sb	$t6,0x0($a0)
/*  f16e4f4:	3c0f800b */ 	lui	$t7,0x800b
/*  f16e4f8:	8defabb4 */ 	lw	$t7,-0x544c($t7)
/*  f16e4fc:	0000c012 */ 	mflo	$t8
/*  f16e500:	030f1021 */ 	addu	$v0,$t8,$t7
/*  f16e504:	1000006f */ 	beqz	$zero,.L0f16e6c4
/*  f16e508:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f16e50c:
/*  f16e50c:	90990000 */ 	lbu	$t9,0x0($a0)
/*  f16e510:	3c09800b */ 	lui	$t1,%hi(var800aabb8)
/*  f16e514:	2529abb8 */ 	addiu	$t1,$t1,%lo(var800aabb8)
/*  f16e518:	332eff3f */ 	andi	$t6,$t9,0xff3f
/*  f16e51c:	35d80080 */ 	ori	$t8,$t6,0x80
/*  f16e520:	a0980000 */ 	sb	$t8,0x0($a0)
/*  f16e524:	8d2f0000 */ 	lw	$t7,0x0($t1)
/*  f16e528:	240d0060 */ 	addiu	$t5,$zero,0x60
/*  f16e52c:	00ad0019 */ 	multu	$a1,$t5
/*  f16e530:	01e72021 */ 	addu	$a0,$t7,$a3
/*  f16e534:	90990002 */ 	lbu	$t9,0x2($a0)
/*  f16e538:	332eff3f */ 	andi	$t6,$t9,0xff3f
/*  f16e53c:	35d80080 */ 	ori	$t8,$t6,0x80
/*  f16e540:	a0980002 */ 	sb	$t8,0x2($a0)
/*  f16e544:	3c19800b */ 	lui	$t9,0x800b
/*  f16e548:	8f39abb4 */ 	lw	$t9,-0x544c($t9)
/*  f16e54c:	00007812 */ 	mflo	$t7
/*  f16e550:	1000005b */ 	beqz	$zero,.L0f16e6c0
/*  f16e554:	01f91021 */ 	addu	$v0,$t7,$t9
.L0f16e558:
/*  f16e558:	15000025 */ 	bnez	$t0,.L0f16e5f0
/*  f16e55c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e560:	05400023 */ 	bltz	$t2,.L0f16e5f0
/*  f16e564:	240d0060 */ 	addiu	$t5,$zero,0x60
/*  f16e568:	014d0019 */ 	multu	$t2,$t5
/*  f16e56c:	000a3840 */ 	sll	$a3,$t2,0x1
/*  f16e570:	01871821 */ 	addu	$v1,$t4,$a3
/*  f16e574:	906e0000 */ 	lbu	$t6,0x0($v1)
/*  f16e578:	3c09800b */ 	lui	$t1,%hi(var800aabb8)
/*  f16e57c:	2529abb8 */ 	addiu	$t1,$t1,%lo(var800aabb8)
/*  f16e580:	31d8ff3f */ 	andi	$t8,$t6,0xff3f
/*  f16e584:	370f0080 */ 	ori	$t7,$t8,0x80
/*  f16e588:	a06f0000 */ 	sb	$t7,0x0($v1)
/*  f16e58c:	8d390000 */ 	lw	$t9,0x0($t1)
/*  f16e590:	00004012 */ 	mflo	$t0
/*  f16e594:	00101043 */ 	sra	$v0,$s0,0x1
/*  f16e598:	03271821 */ 	addu	$v1,$t9,$a3
/*  f16e59c:	004d0019 */ 	multu	$v0,$t5
/*  f16e5a0:	946f0000 */ 	lhu	$t7,0x0($v1)
/*  f16e5a4:	30583fff */ 	andi	$t8,$v0,0x3fff
/*  f16e5a8:	24060060 */ 	addiu	$a2,$zero,0x60
/*  f16e5ac:	31f9c000 */ 	andi	$t9,$t7,0xc000
/*  f16e5b0:	03197025 */ 	or	$t6,$t8,$t9
/*  f16e5b4:	a46e0000 */ 	sh	$t6,0x0($v1)
/*  f16e5b8:	3c0f800b */ 	lui	$t7,0x800b
/*  f16e5bc:	8defabb4 */ 	lw	$t7,-0x544c($t7)
/*  f16e5c0:	3c190019 */ 	lui	$t9,0x19
/*  f16e5c4:	27394440 */ 	addiu	$t9,$t9,0x4440
/*  f16e5c8:	0000c012 */ 	mflo	$t8
/*  f16e5cc:	03192821 */ 	addu	$a1,$t8,$t9
/*  f16e5d0:	afa80024 */ 	sw	$t0,0x24($sp)
/*  f16e5d4:	0c003504 */ 	jal	func0000d410
/*  f16e5d8:	010f2021 */ 	addu	$a0,$t0,$t7
/*  f16e5dc:	3c0e800b */ 	lui	$t6,0x800b
/*  f16e5e0:	8fa80024 */ 	lw	$t0,0x24($sp)
/*  f16e5e4:	8dceabb4 */ 	lw	$t6,-0x544c($t6)
/*  f16e5e8:	10000035 */ 	beqz	$zero,.L0f16e6c0
/*  f16e5ec:	010e1021 */ 	addu	$v0,$t0,$t6
.L0f16e5f0:
/*  f16e5f0:	11000032 */ 	beqz	$t0,.L0f16e6bc
/*  f16e5f4:	3c02800b */ 	lui	$v0,0x800b
/*  f16e5f8:	05600030 */ 	bltz	$t3,.L0f16e6bc
/*  f16e5fc:	000b1840 */ 	sll	$v1,$t3,0x1
/*  f16e600:	01831021 */ 	addu	$v0,$t4,$v1
/*  f16e604:	904f0000 */ 	lbu	$t7,0x0($v0)
/*  f16e608:	3c09800b */ 	lui	$t1,%hi(var800aabb8)
/*  f16e60c:	2529abb8 */ 	addiu	$t1,$t1,%lo(var800aabb8)
/*  f16e610:	31f8ff3f */ 	andi	$t8,$t7,0xff3f
/*  f16e614:	37190080 */ 	ori	$t9,$t8,0x80
/*  f16e618:	a0590000 */ 	sb	$t9,0x0($v0)
/*  f16e61c:	8d2e0000 */ 	lw	$t6,0x0($t1)
/*  f16e620:	240d0060 */ 	addiu	$t5,$zero,0x60
/*  f16e624:	016d0019 */ 	multu	$t3,$t5
/*  f16e628:	01c31021 */ 	addu	$v0,$t6,$v1
/*  f16e62c:	904f0002 */ 	lbu	$t7,0x2($v0)
/*  f16e630:	24060080 */ 	addiu	$a2,$zero,0x80
/*  f16e634:	31f8ff3f */ 	andi	$t8,$t7,0xff3f
/*  f16e638:	37190080 */ 	ori	$t9,$t8,0x80
/*  f16e63c:	a0590002 */ 	sb	$t9,0x2($v0)
/*  f16e640:	8d2e0000 */ 	lw	$t6,0x0($t1)
/*  f16e644:	00107843 */ 	sra	$t7,$s0,0x1
/*  f16e648:	31e73fff */ 	andi	$a3,$t7,0x3fff
/*  f16e64c:	01c31021 */ 	addu	$v0,$t6,$v1
/*  f16e650:	94590000 */ 	lhu	$t9,0x0($v0)
/*  f16e654:	00004012 */ 	mflo	$t0
/*  f16e658:	332ec000 */ 	andi	$t6,$t9,0xc000
/*  f16e65c:	00ee7825 */ 	or	$t7,$a3,$t6
/*  f16e660:	a44f0000 */ 	sh	$t7,0x0($v0)
/*  f16e664:	8d380000 */ 	lw	$t8,0x0($t1)
/*  f16e668:	03031021 */ 	addu	$v0,$t8,$v1
/*  f16e66c:	94590002 */ 	lhu	$t9,0x2($v0)
/*  f16e670:	3c18800b */ 	lui	$t8,0x800b
/*  f16e674:	332ec000 */ 	andi	$t6,$t9,0xc000
/*  f16e678:	00ee7825 */ 	or	$t7,$a3,$t6
/*  f16e67c:	a44f0002 */ 	sh	$t7,0x2($v0)
/*  f16e680:	8f18abb4 */ 	lw	$t8,-0x544c($t8)
/*  f16e684:	32191fff */ 	andi	$t9,$s0,0x1fff
/*  f16e688:	00197043 */ 	sra	$t6,$t9,0x1
/*  f16e68c:	01182021 */ 	addu	$a0,$t0,$t8
/*  f16e690:	3c18001a */ 	lui	$t8,0x1a
/*  f16e694:	2718fb40 */ 	addiu	$t8,$t8,-1216
/*  f16e698:	000e79c0 */ 	sll	$t7,$t6,0x7
/*  f16e69c:	01f82821 */ 	addu	$a1,$t7,$t8
/*  f16e6a0:	0c003504 */ 	jal	func0000d410
/*  f16e6a4:	afa80024 */ 	sw	$t0,0x24($sp)
/*  f16e6a8:	3c19800b */ 	lui	$t9,0x800b
/*  f16e6ac:	8fa80024 */ 	lw	$t0,0x24($sp)
/*  f16e6b0:	8f39abb4 */ 	lw	$t9,-0x544c($t9)
/*  f16e6b4:	10000002 */ 	beqz	$zero,.L0f16e6c0
/*  f16e6b8:	01191021 */ 	addu	$v0,$t0,$t9
.L0f16e6bc:
/*  f16e6bc:	8c42abb4 */ 	lw	$v0,-0x544c($v0)
.L0f16e6c0:
/*  f16e6c0:	8fbf001c */ 	lw	$ra,0x1c($sp)
.L0f16e6c4:
/*  f16e6c4:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f16e6c8:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*  f16e6cc:	03e00008 */ 	jr	$ra
/*  f16e6d0:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f16e6d4
/*  f16e6d4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16e6d8:	8dce4120 */ 	lw	$t6,0x4120($t6)
/*  f16e6dc:	00001825 */ 	or	$v1,$zero,$zero
/*  f16e6e0:	11c00002 */ 	beqz	$t6,.L0f16e6ec
/*  f16e6e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e6e8:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f16e6ec:
/*  f16e6ec:	03e00008 */ 	jr	$ra
/*  f16e6f0:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16e6f4
/*  f16e6f4:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e6f8:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e6fc:	0fc5b9b5 */ 	jal	func0f16e6d4
/*  f16e700:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16e704:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16e708:	3c188008 */ 	lui	$t8,0x8008
/*  f16e70c:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e710:	000e7840 */ 	sll	$t7,$t6,0x1
/*  f16e714:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f16e718:	97184124 */ 	lhu	$t8,0x4124($t8)
/*  f16e71c:	27bd0018 */ 	addiu	$sp,$sp,0x18
/*  f16e720:	03e00008 */ 	jr	$ra
/*  f16e724:	00581021 */ 	addu	$v0,$v0,$t8
);

GLOBAL_ASM(
glabel func0f16e728
/*  f16e728:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e72c:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e730:	0fc5b9bd */ 	jal	func0f16e6f4
/*  f16e734:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16e738:	00402025 */ 	or	$a0,$v0,$zero
/*  f16e73c:	0fc59c3f */ 	jal	func0f1670fc
/*  f16e740:	24050022 */ 	addiu	$a1,$zero,0x22
/*  f16e744:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16e748:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e74c:	3c01800b */ 	lui	$at,0x800b
/*  f16e750:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f16e754:	002f0821 */ 	addu	$at,$at,$t7
/*  f16e758:	ac22aaa0 */ 	sw	$v0,-0x5560($at)
/*  f16e75c:	03e00008 */ 	jr	$ra
/*  f16e760:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16e764
/*  f16e764:	27bdffe8 */ 	addiu	$sp,$sp,-24
/*  f16e768:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f16e76c:	afa40018 */ 	sw	$a0,0x18($sp)
/*  f16e770:	afa5001c */ 	sw	$a1,0x1c($sp)
/*  f16e774:	0fc5b9bd */ 	jal	func0f16e6f4
/*  f16e778:	afa60020 */ 	sw	$a2,0x20($sp)
/*  f16e77c:	00402025 */ 	or	$a0,$v0,$zero
/*  f16e780:	24050022 */ 	addiu	$a1,$zero,0x22
/*  f16e784:	8fa6001c */ 	lw	$a2,0x1c($sp)
/*  f16e788:	0fc59c80 */ 	jal	func0f167200
/*  f16e78c:	8fa70020 */ 	lw	$a3,0x20($sp)
/*  f16e790:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f16e794:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f16e798:	3c01800b */ 	lui	$at,0x800b
/*  f16e79c:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f16e7a0:	002f0821 */ 	addu	$at,$at,$t7
/*  f16e7a4:	ac22aaa0 */ 	sw	$v0,-0x5560($at)
/*  f16e7a8:	03e00008 */ 	jr	$ra
/*  f16e7ac:	27bd0018 */ 	addiu	$sp,$sp,0x18
);

GLOBAL_ASM(
glabel func0f16e7b0
/*  f16e7b0:	00047080 */ 	sll	$t6,$a0,0x2
/*  f16e7b4:	3c01800b */ 	lui	$at,0x800b
/*  f16e7b8:	002e0821 */ 	addu	$at,$at,$t6
/*  f16e7bc:	03e00008 */ 	jr	$ra
/*  f16e7c0:	ac20aaa0 */ 	sw	$zero,-0x5560($at)
);

GLOBAL_ASM(
glabel textGet
/*  f16e7c4:	00047243 */ 	sra	$t6,$a0,0x9
/*  f16e7c8:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f16e7cc:	3c02800b */ 	lui	$v0,0x800b
/*  f16e7d0:	004f1021 */ 	addu	$v0,$v0,$t7
/*  f16e7d4:	8c42aaa0 */ 	lw	$v0,-0x5560($v0)
/*  f16e7d8:	309801ff */ 	andi	$t8,$a0,0x1ff
/*  f16e7dc:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f16e7e0:	10400006 */ 	beqz	$v0,.L0f16e7fc
/*  f16e7e4:	00594021 */ 	addu	$t0,$v0,$t9
/*  f16e7e8:	8d050000 */ 	lw	$a1,0x0($t0)
/*  f16e7ec:	10a00003 */ 	beqz	$a1,.L0f16e7fc
/*  f16e7f0:	00a21821 */ 	addu	$v1,$a1,$v0
/*  f16e7f4:	03e00008 */ 	jr	$ra
/*  f16e7f8:	00601025 */ 	or	$v0,$v1,$zero
.L0f16e7fc:
/*  f16e7fc:	00001825 */ 	or	$v1,$zero,$zero
/*  f16e800:	03e00008 */ 	jr	$ra
/*  f16e804:	00601025 */ 	or	$v0,$v1,$zero
/*  f16e808:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e80c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e810:	03e00008 */ 	jr	$ra
/*  f16e814:	afa40000 */ 	sw	$a0,0x0($sp)
);

GLOBAL_ASM(
glabel func0f16e818
/*  f16e818:	27bde160 */ 	addiu	$sp,$sp,-7840
/*  f16e81c:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f16e820:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f16e824:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f16e828:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f16e82c:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f16e830:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f16e834:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f16e838:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f16e83c:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f16e840:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f16e844:	afa51ea4 */ 	sw	$a1,0x1ea4($sp)
/*  f16e848:	afa61ea8 */ 	sw	$a2,0x1ea8($sp)
/*  f16e84c:	afa71eac */ 	sw	$a3,0x1eac($sp)
/*  f16e850:	0000a825 */ 	or	$s5,$zero,$zero
/*  f16e854:	0fc5cd48 */ 	jal	func0f173520
/*  f16e858:	0000b025 */ 	or	$s6,$zero,$zero
/*  f16e85c:	8fa61ea8 */ 	lw	$a2,0x1ea8($sp)
/*  f16e860:	8fa71eac */ 	lw	$a3,0x1eac($sp)
/*  f16e864:	50c00006 */ 	beqzl	$a2,.L0f16e880
/*  f16e868:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16e86c:	50e00004 */ 	beqzl	$a3,.L0f16e880
/*  f16e870:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16e874:	10000004 */ 	beqz	$zero,.L0f16e888
/*  f16e878:	afa71e94 */ 	sw	$a3,0x1e94($sp)
/*  f16e87c:	240e0001 */ 	addiu	$t6,$zero,0x1
.L0f16e880:
/*  f16e880:	8fa71eac */ 	lw	$a3,0x1eac($sp)
/*  f16e884:	afae1e94 */ 	sw	$t6,0x1e94($sp)
.L0f16e888:
/*  f16e888:	8fbe1eb0 */ 	lw	$s8,0x1eb0($sp)
/*  f16e88c:	0007c940 */ 	sll	$t9,$a3,0x5
/*  f16e890:	00066140 */ 	sll	$t4,$a2,0x5
/*  f16e894:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16e898:	318d0020 */ 	andi	$t5,$t4,0x20
/*  f16e89c:	3c05800b */ 	lui	$a1,0x800b
/*  f16e8a0:	9068000b */ 	lbu	$t0,0xb($v1)
/*  f16e8a4:	3109ff1f */ 	andi	$t1,$t0,0xff1f
/*  f16e8a8:	03295025 */ 	or	$t2,$t9,$t1
/*  f16e8ac:	a06a000b */ 	sb	$t2,0xb($v1)
/*  f16e8b0:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16e8b4:	906e000c */ 	lbu	$t6,0xc($v1)
/*  f16e8b8:	31cfffdf */ 	andi	$t7,$t6,0xffdf
/*  f16e8bc:	01afc025 */ 	or	$t8,$t5,$t7
/*  f16e8c0:	10c00015 */ 	beqz	$a2,.L0f16e918
/*  f16e8c4:	a078000c */ 	sb	$t8,0xc($v1)
/*  f16e8c8:	8ca5b538 */ 	lw	$a1,-0x4ac8($a1)
/*  f16e8cc:	24150001 */ 	addiu	$s5,$zero,0x1
/*  f16e8d0:	58a00012 */ 	blezl	$a1,.L0f16e91c
/*  f16e8d4:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16e8d8:	8fc8000c */ 	lw	$t0,0xc($s8)
/*  f16e8dc:	3c09800b */ 	lui	$t1,0x800b
/*  f16e8e0:	2522abd8 */ 	addiu	$v0,$t1,-21544
/*  f16e8e4:	8d030000 */ 	lw	$v1,0x0($t0)
/*  f16e8e8:	00055100 */ 	sll	$t2,$a1,0x4
/*  f16e8ec:	01422021 */ 	addu	$a0,$t2,$v0
/*  f16e8f0:	0003cd02 */ 	srl	$t9,$v1,0x14
/*  f16e8f4:	03201825 */ 	or	$v1,$t9,$zero
/*  f16e8f8:	844b0000 */ 	lh	$t3,0x0($v0)
.L0f16e8fc:
/*  f16e8fc:	24420010 */ 	addiu	$v0,$v0,0x10
/*  f16e900:	0044082b */ 	sltu	$at,$v0,$a0
/*  f16e904:	146b0002 */ 	bne	$v1,$t3,.L0f16e910
/*  f16e908:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16e90c:	0000a825 */ 	or	$s5,$zero,$zero
.L0f16e910:
/*  f16e910:	5420fffa */ 	bnezl	$at,.L0f16e8fc
/*  f16e914:	844b0000 */ 	lh	$t3,0x0($v0)
.L0f16e918:
/*  f16e918:	24040008 */ 	addiu	$a0,$zero,0x8
.L0f16e91c:
/*  f16e91c:	0fc5cd4f */ 	jal	func0f17353c
/*  f16e920:	afa01e9c */ 	sw	$zero,0x1e9c($sp)
/*  f16e924:	afa21e8c */ 	sw	$v0,0x1e8c($sp)
/*  f16e928:	0fc5cd4f */ 	jal	func0f17353c
/*  f16e92c:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16e930:	24460001 */ 	addiu	$a2,$v0,0x1
/*  f16e934:	18c0000e */ 	blez	$a2,.L0f16e970
/*  f16e938:	afa61e78 */ 	sw	$a2,0x1e78($sp)
/*  f16e93c:	27a3146c */ 	addiu	$v1,$sp,0x146c
/*  f16e940:	00067040 */ 	sll	$t6,$a2,0x1
/*  f16e944:	01c38021 */ 	addu	$s0,$t6,$v1
/*  f16e948:	afa61e78 */ 	sw	$a2,0x1e78($sp)
.L0f16e94c:
/*  f16e94c:	24040010 */ 	addiu	$a0,$zero,0x10
/*  f16e950:	0fc5cd4f */ 	jal	func0f17353c
/*  f16e954:	afa3005c */ 	sw	$v1,0x5c($sp)
/*  f16e958:	8fa3005c */ 	lw	$v1,0x5c($sp)
/*  f16e95c:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f16e960:	0070082b */ 	sltu	$at,$v1,$s0
/*  f16e964:	1420fff9 */ 	bnez	$at,.L0f16e94c
/*  f16e968:	a462fffe */ 	sh	$v0,-0x2($v1)
/*  f16e96c:	afa01e9c */ 	sw	$zero,0x1e9c($sp)
.L0f16e970:
/*  f16e970:	8fad1e94 */ 	lw	$t5,0x1e94($sp)
/*  f16e974:	8fa61e78 */ 	lw	$a2,0x1e78($sp)
/*  f16e978:	00009825 */ 	or	$s3,$zero,$zero
/*  f16e97c:	19a0007f */ 	blez	$t5,.L0f16eb7c
/*  f16e980:	00009025 */ 	or	$s2,$zero,$zero
/*  f16e984:	afa61e78 */ 	sw	$a2,0x1e78($sp)
/*  f16e988:	27b4166c */ 	addiu	$s4,$sp,0x166c
/*  f16e98c:	8faf1ea4 */ 	lw	$t7,0x1ea4($sp)
.L0f16e990:
/*  f16e990:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16e994:	0fc5cd4f */ 	jal	func0f17353c
/*  f16e998:	01f68021 */ 	addu	$s0,$t7,$s6
/*  f16e99c:	0040b825 */ 	or	$s7,$v0,$zero
/*  f16e9a0:	0fc5cd4f */ 	jal	func0f17353c
/*  f16e9a4:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16e9a8:	1640002a */ 	bnez	$s2,.L0f16ea54
/*  f16e9ac:	afa21e7c */ 	sw	$v0,0x1e7c($sp)
/*  f16e9b0:	8fd8000c */ 	lw	$t8,0xc($s8)
/*  f16e9b4:	3c0e8008 */ 	lui	$t6,0x8008
/*  f16e9b8:	a3170008 */ 	sb	$s7,0x8($t8)
/*  f16e9bc:	8fc8000c */ 	lw	$t0,0xc($s8)
/*  f16e9c0:	a1020009 */ 	sb	$v0,0x9($t0)
/*  f16e9c4:	8fb91e78 */ 	lw	$t9,0x1e78($sp)
/*  f16e9c8:	8fc9000c */ 	lw	$t1,0xc($s8)
/*  f16e9cc:	272affff */ 	addiu	$t2,$t9,-1
/*  f16e9d0:	a12a000a */ 	sb	$t2,0xa($t1)
/*  f16e9d4:	8fa41e8c */ 	lw	$a0,0x1e8c($sp)
/*  f16e9d8:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16e9dc:	3c0a8008 */ 	lui	$t2,0x8008
/*  f16e9e0:	00045880 */ 	sll	$t3,$a0,0x2
/*  f16e9e4:	01cb7021 */ 	addu	$t6,$t6,$t3
/*  f16e9e8:	8dcc4288 */ 	lw	$t4,0x4288($t6)
/*  f16e9ec:	9078000b */ 	lbu	$t8,0xb($v1)
/*  f16e9f0:	014b5021 */ 	addu	$t2,$t2,$t3
/*  f16e9f4:	000c6880 */ 	sll	$t5,$t4,0x2
/*  f16e9f8:	31af001c */ 	andi	$t7,$t5,0x1c
/*  f16e9fc:	3308ffe3 */ 	andi	$t0,$t8,0xffe3
/*  f16ea00:	01e8c825 */ 	or	$t9,$t7,$t0
/*  f16ea04:	a079000b */ 	sb	$t9,0xb($v1)
/*  f16ea08:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16ea0c:	8d4942bc */ 	lw	$t1,0x42bc($t2)
/*  f16ea10:	01602025 */ 	or	$a0,$t3,$zero
/*  f16ea14:	906e000b */ 	lbu	$t6,0xb($v1)
/*  f16ea18:	312b0003 */ 	andi	$t3,$t1,0x3
/*  f16ea1c:	3c188008 */ 	lui	$t8,0x8008
/*  f16ea20:	31ccfffc */ 	andi	$t4,$t6,0xfffc
/*  f16ea24:	016c6825 */ 	or	$t5,$t3,$t4
/*  f16ea28:	a06d000b */ 	sb	$t5,0xb($v1)
/*  f16ea2c:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16ea30:	0304c021 */ 	addu	$t8,$t8,$a0
/*  f16ea34:	8f1842f0 */ 	lw	$t8,0x42f0($t8)
/*  f16ea38:	9069000c */ 	lbu	$t1,0xc($v1)
/*  f16ea3c:	00184383 */ 	sra	$t0,$t8,0xe
/*  f16ea40:	00085180 */ 	sll	$t2,$t0,0x6
/*  f16ea44:	312eff3f */ 	andi	$t6,$t1,0xff3f
/*  f16ea48:	014e5825 */ 	or	$t3,$t2,$t6
/*  f16ea4c:	1000000b */ 	beqz	$zero,.L0f16ea7c
/*  f16ea50:	a06b000c */ 	sb	$t3,0xc($v1)
.L0f16ea54:
/*  f16ea54:	12a00009 */ 	beqz	$s5,.L0f16ea7c
/*  f16ea58:	3c0c800b */ 	lui	$t4,0x800b
/*  f16ea5c:	8d8cb538 */ 	lw	$t4,-0x4ac8($t4)
/*  f16ea60:	3c0f800b */ 	lui	$t7,%hi(var800aabd8)
/*  f16ea64:	25efabd8 */ 	addiu	$t7,$t7,%lo(var800aabd8)
/*  f16ea68:	000c6900 */ 	sll	$t5,$t4,0x4
/*  f16ea6c:	01b2c021 */ 	addu	$t8,$t5,$s2
/*  f16ea70:	030f1821 */ 	addu	$v1,$t8,$t7
/*  f16ea74:	a0770001 */ 	sb	$s7,0x1($v1)
/*  f16ea78:	a0620008 */ 	sb	$v0,0x8($v1)
.L0f16ea7c:
/*  f16ea7c:	3c04800b */ 	lui	$a0,0x800b
/*  f16ea80:	8c84b540 */ 	lw	$a0,-0x4ac0($a0)
/*  f16ea84:	02802825 */ 	or	$a1,$s4,$zero
/*  f16ea88:	0c001d3c */ 	jal	func000074f0
/*  f16ea8c:	27a6006c */ 	addiu	$a2,$sp,0x6c
/*  f16ea90:	02802025 */ 	or	$a0,$s4,$zero
/*  f16ea94:	02e02825 */ 	or	$a1,$s7,$zero
/*  f16ea98:	8fa61e7c */ 	lw	$a2,0x1e7c($sp)
/*  f16ea9c:	8fa71e8c */ 	lw	$a3,0x1e8c($sp)
/*  f16eaa0:	0fc5bb6b */ 	jal	func0f16edac
/*  f16eaa4:	afb00010 */ 	sw	$s0,0x10($sp)
/*  f16eaa8:	0c002282 */ 	jal	func00008a08
/*  f16eaac:	00408825 */ 	or	$s1,$v0,$zero
/*  f16eab0:	0fc5cd48 */ 	jal	func0f173520
/*  f16eab4:	00402025 */ 	or	$a0,$v0,$zero
/*  f16eab8:	8fa81ea8 */ 	lw	$t0,0x1ea8($sp)
/*  f16eabc:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16eac0:	3c198009 */ 	lui	$t9,0x8009
/*  f16eac4:	15010026 */ 	bne	$t0,$at,.L0f16eb60
/*  f16eac8:	02d11021 */ 	addu	$v0,$s6,$s1
/*  f16eacc:	93390af0 */ 	lbu	$t9,0xaf0($t9)
/*  f16ead0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16ead4:	1721000c */ 	bne	$t9,$at,.L0f16eb08
/*  f16ead8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16eadc:	5641000b */ 	bnel	$s2,$at,.L0f16eb0c
/*  f16eae0:	28410801 */ 	slti	$at,$v0,0x801
/*  f16eae4:	56600009 */ 	bnezl	$s3,.L0f16eb0c
/*  f16eae8:	28410801 */ 	slti	$at,$v0,0x801
/*  f16eaec:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16eaf0:	00127140 */ 	sll	$t6,$s2,0x5
/*  f16eaf4:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f16eaf8:	906b000b */ 	lbu	$t3,0xb($v1)
/*  f16eafc:	316cff1f */ 	andi	$t4,$t3,0xff1f
/*  f16eb00:	01cc6825 */ 	or	$t5,$t6,$t4
/*  f16eb04:	a06d000b */ 	sb	$t5,0xb($v1)
.L0f16eb08:
/*  f16eb08:	28410801 */ 	slti	$at,$v0,0x801
.L0f16eb0c:
/*  f16eb0c:	10200003 */ 	beqz	$at,.L0f16eb1c
/*  f16eb10:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16eb14:	1260000b */ 	beqz	$s3,.L0f16eb44
/*  f16eb18:	02002025 */ 	or	$a0,$s0,$zero
.L0f16eb1c:
/*  f16eb1c:	56600012 */ 	bnezl	$s3,.L0f16eb68
/*  f16eb20:	8fab1e94 */ 	lw	$t3,0x1e94($sp)
/*  f16eb24:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16eb28:	00124140 */ 	sll	$t0,$s2,0x5
/*  f16eb2c:	24130001 */ 	addiu	$s3,$zero,0x1
/*  f16eb30:	9079000b */ 	lbu	$t9,0xb($v1)
/*  f16eb34:	3329ff1f */ 	andi	$t1,$t9,0xff1f
/*  f16eb38:	01095025 */ 	or	$t2,$t0,$t1
/*  f16eb3c:	10000009 */ 	beqz	$zero,.L0f16eb64
/*  f16eb40:	a06a000b */ 	sb	$t2,0xb($v1)
.L0f16eb44:
/*  f16eb44:	02e02825 */ 	or	$a1,$s7,$zero
/*  f16eb48:	8fa61e7c */ 	lw	$a2,0x1e7c($sp)
/*  f16eb4c:	8fa71e8c */ 	lw	$a3,0x1e8c($sp)
/*  f16eb50:	0fc5ca7e */ 	jal	func0f1729f8
/*  f16eb54:	afa2005c */ 	sw	$v0,0x5c($sp)
/*  f16eb58:	10000002 */ 	beqz	$zero,.L0f16eb64
/*  f16eb5c:	8fb6005c */ 	lw	$s6,0x5c($sp)
.L0f16eb60:
/*  f16eb60:	02d1b021 */ 	addu	$s6,$s6,$s1
.L0f16eb64:
/*  f16eb64:	8fab1e94 */ 	lw	$t3,0x1e94($sp)
.L0f16eb68:
/*  f16eb68:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f16eb6c:	564bff88 */ 	bnel	$s2,$t3,.L0f16e990
/*  f16eb70:	8faf1ea4 */ 	lw	$t7,0x1ea4($sp)
/*  f16eb74:	afb71e80 */ 	sw	$s7,0x1e80($sp)
/*  f16eb78:	8fa61e78 */ 	lw	$a2,0x1e78($sp)
.L0f16eb7c:
/*  f16eb7c:	12a00010 */ 	beqz	$s5,.L0f16ebc0
/*  f16eb80:	8fb71e80 */ 	lw	$s7,0x1e80($sp)
/*  f16eb84:	8fce000c */ 	lw	$t6,0xc($s8)
/*  f16eb88:	3c02800b */ 	lui	$v0,%hi(var800ab538)
/*  f16eb8c:	2442b538 */ 	addiu	$v0,$v0,%lo(var800ab538)
/*  f16eb90:	8c450000 */ 	lw	$a1,0x0($v0)
/*  f16eb94:	8dcc0000 */ 	lw	$t4,0x0($t6)
/*  f16eb98:	3c01800b */ 	lui	$at,0x800b
/*  f16eb9c:	0005c100 */ 	sll	$t8,$a1,0x4
/*  f16eba0:	00380821 */ 	addu	$at,$at,$t8
/*  f16eba4:	000c6d02 */ 	srl	$t5,$t4,0x14
/*  f16eba8:	a42dabd8 */ 	sh	$t5,-0x5428($at)
/*  f16ebac:	24af0001 */ 	addiu	$t7,$a1,0x1
/*  f16ebb0:	29e10096 */ 	slti	$at,$t7,0x96
/*  f16ebb4:	14200002 */ 	bnez	$at,.L0f16ebc0
/*  f16ebb8:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f16ebbc:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f16ebc0:
/*  f16ebc0:	8fa81ea8 */ 	lw	$t0,0x1ea8($sp)
/*  f16ebc4:	8fa21eac */ 	lw	$v0,0x1eac($sp)
/*  f16ebc8:	1500004c */ 	bnez	$t0,.L0f16ecfc
/*  f16ebcc:	28410002 */ 	slti	$at,$v0,0x2
/*  f16ebd0:	14200044 */ 	bnez	$at,.L0f16ece4
/*  f16ebd4:	afa61e78 */ 	sw	$a2,0x1e78($sp)
/*  f16ebd8:	8fb51ea4 */ 	lw	$s5,0x1ea4($sp)
/*  f16ebdc:	28410002 */ 	slti	$at,$v0,0x2
/*  f16ebe0:	02e09825 */ 	or	$s3,$s7,$zero
/*  f16ebe4:	8fb41e7c */ 	lw	$s4,0x1e7c($sp)
/*  f16ebe8:	24120001 */ 	addiu	$s2,$zero,0x1
/*  f16ebec:	14200036 */ 	bnez	$at,.L0f16ecc8
/*  f16ebf0:	02b68021 */ 	addu	$s0,$s5,$s6
/*  f16ebf4:	27b7146c */ 	addiu	$s7,$sp,0x146c
.L0f16ebf8:
/*  f16ebf8:	8faa1e8c */ 	lw	$t2,0x1e8c($sp)
/*  f16ebfc:	8fab1e78 */ 	lw	$t3,0x1e78($sp)
/*  f16ec00:	02a02025 */ 	or	$a0,$s5,$zero
/*  f16ec04:	02002825 */ 	or	$a1,$s0,$zero
/*  f16ec08:	02603025 */ 	or	$a2,$s3,$zero
/*  f16ec0c:	02803825 */ 	or	$a3,$s4,$zero
/*  f16ec10:	afb70014 */ 	sw	$s7,0x14($sp)
/*  f16ec14:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f16ec18:	0fc5bc3d */ 	jal	func0f16f0f4
/*  f16ec1c:	afab0018 */ 	sw	$t3,0x18($sp)
/*  f16ec20:	3c0e8009 */ 	lui	$t6,0x8009
/*  f16ec24:	91ce0af0 */ 	lbu	$t6,0xaf0($t6)
/*  f16ec28:	24010001 */ 	addiu	$at,$zero,0x1
/*  f16ec2c:	00408825 */ 	or	$s1,$v0,$zero
/*  f16ec30:	15c1000b */ 	bne	$t6,$at,.L0f16ec60
/*  f16ec34:	02c24821 */ 	addu	$t1,$s6,$v0
/*  f16ec38:	24010002 */ 	addiu	$at,$zero,0x2
/*  f16ec3c:	56410009 */ 	bnel	$s2,$at,.L0f16ec64
/*  f16ec40:	29210801 */ 	slti	$at,$t1,0x801
/*  f16ec44:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16ec48:	0012c140 */ 	sll	$t8,$s2,0x5
/*  f16ec4c:	906f000b */ 	lbu	$t7,0xb($v1)
/*  f16ec50:	31f9ff1f */ 	andi	$t9,$t7,0xff1f
/*  f16ec54:	03194025 */ 	or	$t0,$t8,$t9
/*  f16ec58:	1000001b */ 	beqz	$zero,.L0f16ecc8
/*  f16ec5c:	a068000b */ 	sb	$t0,0xb($v1)
.L0f16ec60:
/*  f16ec60:	29210801 */ 	slti	$at,$t1,0x801
.L0f16ec64:
/*  f16ec64:	14200008 */ 	bnez	$at,.L0f16ec88
/*  f16ec68:	02a02025 */ 	or	$a0,$s5,$zero
/*  f16ec6c:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16ec70:	00127140 */ 	sll	$t6,$s2,0x5
/*  f16ec74:	906c000b */ 	lbu	$t4,0xb($v1)
/*  f16ec78:	318dff1f */ 	andi	$t5,$t4,0xff1f
/*  f16ec7c:	01cd7825 */ 	or	$t7,$t6,$t5
/*  f16ec80:	10000011 */ 	beqz	$zero,.L0f16ecc8
/*  f16ec84:	a06f000b */ 	sb	$t7,0xb($v1)
.L0f16ec88:
/*  f16ec88:	02602825 */ 	or	$a1,$s3,$zero
/*  f16ec8c:	02803025 */ 	or	$a2,$s4,$zero
/*  f16ec90:	0fc5ca7e */ 	jal	func0f1729f8
/*  f16ec94:	8fa71e8c */ 	lw	$a3,0x1e8c($sp)
/*  f16ec98:	8fa81eac */ 	lw	$t0,0x1eac($sp)
/*  f16ec9c:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f16eca0:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f16eca4:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f16eca8:	0013c043 */ 	sra	$t8,$s3,0x1
/*  f16ecac:	0014c843 */ 	sra	$t9,$s4,0x1
/*  f16ecb0:	0200a825 */ 	or	$s5,$s0,$zero
/*  f16ecb4:	02d1b021 */ 	addu	$s6,$s6,$s1
/*  f16ecb8:	03009825 */ 	or	$s3,$t8,$zero
/*  f16ecbc:	0320a025 */ 	or	$s4,$t9,$zero
/*  f16ecc0:	1648ffcd */ 	bne	$s2,$t0,.L0f16ebf8
/*  f16ecc4:	02118021 */ 	addu	$s0,$s0,$s1
.L0f16ecc8:
/*  f16ecc8:	02a02025 */ 	or	$a0,$s5,$zero
/*  f16eccc:	02602825 */ 	or	$a1,$s3,$zero
/*  f16ecd0:	02803025 */ 	or	$a2,$s4,$zero
/*  f16ecd4:	0fc5ca7e */ 	jal	func0f1729f8
/*  f16ecd8:	8fa71e8c */ 	lw	$a3,0x1e8c($sp)
/*  f16ecdc:	10000007 */ 	beqz	$zero,.L0f16ecfc
/*  f16ece0:	8fa61e78 */ 	lw	$a2,0x1e78($sp)
.L0f16ece4:
/*  f16ece4:	8fa41ea4 */ 	lw	$a0,0x1ea4($sp)
/*  f16ece8:	02e02825 */ 	or	$a1,$s7,$zero
/*  f16ecec:	8fa61e7c */ 	lw	$a2,0x1e7c($sp)
/*  f16ecf0:	0fc5ca7e */ 	jal	func0f1729f8
/*  f16ecf4:	8fa71e8c */ 	lw	$a3,0x1e8c($sp)
/*  f16ecf8:	8fa61e78 */ 	lw	$a2,0x1e78($sp)
.L0f16ecfc:
/*  f16ecfc:	18c00010 */ 	blez	$a2,.L0f16ed40
/*  f16ed00:	30cd0001 */ 	andi	$t5,$a2,0x1
/*  f16ed04:	8fa91ea4 */ 	lw	$t1,0x1ea4($sp)
/*  f16ed08:	27a3146c */ 	addiu	$v1,$sp,0x146c
/*  f16ed0c:	8fa21e9c */ 	lw	$v0,0x1e9c($sp)
/*  f16ed10:	01368021 */ 	addu	$s0,$t1,$s6
.L0f16ed14:
/*  f16ed14:	946a0000 */ 	lhu	$t2,0x0($v1)
/*  f16ed18:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f16ed1c:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f16ed20:	000a5a03 */ 	sra	$t3,$t2,0x8
/*  f16ed24:	a20b0000 */ 	sb	$t3,0x0($s0)
/*  f16ed28:	946efffe */ 	lhu	$t6,-0x2($v1)
/*  f16ed2c:	26d60002 */ 	addiu	$s6,$s6,0x2
/*  f16ed30:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f16ed34:	1446fff7 */ 	bne	$v0,$a2,.L0f16ed14
/*  f16ed38:	a20effff */ 	sb	$t6,-0x1($s0)
/*  f16ed3c:	afa21e9c */ 	sw	$v0,0x1e9c($sp)
.L0f16ed40:
/*  f16ed40:	11a0000c */ 	beqz	$t5,.L0f16ed74
/*  f16ed44:	2401fff8 */ 	addiu	$at,$zero,-8
/*  f16ed48:	8faf1ea4 */ 	lw	$t7,0x1ea4($sp)
/*  f16ed4c:	02cf8021 */ 	addu	$s0,$s6,$t7
/*  f16ed50:	9218fffe */ 	lbu	$t8,-0x2($s0)
/*  f16ed54:	9219ffff */ 	lbu	$t9,-0x1($s0)
/*  f16ed58:	26d60002 */ 	addiu	$s6,$s6,0x2
/*  f16ed5c:	a2180000 */ 	sb	$t8,0x0($s0)
/*  f16ed60:	a2190001 */ 	sb	$t9,0x1($s0)
/*  f16ed64:	8fc3000c */ 	lw	$v1,0xc($s8)
/*  f16ed68:	9068000a */ 	lbu	$t0,0xa($v1)
/*  f16ed6c:	25090001 */ 	addiu	$t1,$t0,0x1
/*  f16ed70:	a069000a */ 	sb	$t1,0xa($v1)
.L0f16ed74:
/*  f16ed74:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f16ed78:	26d60007 */ 	addiu	$s6,$s6,0x7
/*  f16ed7c:	02c11024 */ 	and	$v0,$s6,$at
/*  f16ed80:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f16ed84:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f16ed88:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f16ed8c:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f16ed90:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f16ed94:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f16ed98:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f16ed9c:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f16eda0:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f16eda4:	03e00008 */ 	jr	$ra
/*  f16eda8:	27bd1ea0 */ 	addiu	$sp,$sp,0x1ea0
);

GLOBAL_ASM(
glabel func0f16edac
/*  f16edac:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f16edb0:	afb1000c */ 	sw	$s1,0xc($sp)
/*  f16edb4:	afb00008 */ 	sw	$s0,0x8($sp)
/*  f16edb8:	24010009 */ 	addiu	$at,$zero,0x9
/*  f16edbc:	00a08025 */ 	or	$s0,$a1,$zero
/*  f16edc0:	00808825 */ 	or	$s1,$a0,$zero
/*  f16edc4:	10e10003 */ 	beq	$a3,$at,.L0f16edd4
/*  f16edc8:	8fa30030 */ 	lw	$v1,0x30($sp)
/*  f16edcc:	2401000b */ 	addiu	$at,$zero,0xb
/*  f16edd0:	14e10003 */ 	bne	$a3,$at,.L0f16ede0
.L0f16edd4:
/*  f16edd4:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f16edd8:	10000008 */ 	beqz	$zero,.L0f16edfc
/*  f16eddc:	afa20010 */ 	sw	$v0,0x10($sp)
.L0f16ede0:
/*  f16ede0:	2401000a */ 	addiu	$at,$zero,0xa
/*  f16ede4:	10e10004 */ 	beq	$a3,$at,.L0f16edf8
/*  f16ede8:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f16edec:	2401000c */ 	addiu	$at,$zero,0xc
/*  f16edf0:	54e10003 */ 	bnel	$a3,$at,.L0f16ee00
/*  f16edf4:	8fa20010 */ 	lw	$v0,0x10($sp)
.L0f16edf8:
/*  f16edf8:	afa20010 */ 	sw	$v0,0x10($sp)
.L0f16edfc:
/*  f16edfc:	8fa20010 */ 	lw	$v0,0x10($sp)
.L0f16ee00:
/*  f16ee00:	18c0000f */ 	blez	$a2,.L0f16ee40
/*  f16ee04:	00002025 */ 	or	$a0,$zero,$zero
/*  f16ee08:	2407fff8 */ 	addiu	$a3,$zero,-8
.L0f16ee0c:
/*  f16ee0c:	1a000008 */ 	blez	$s0,.L0f16ee30
/*  f16ee10:	00002825 */ 	or	$a1,$zero,$zero
.L0f16ee14:
/*  f16ee14:	922e0000 */ 	lbu	$t6,0x0($s1)
/*  f16ee18:	00a22821 */ 	addu	$a1,$a1,$v0
/*  f16ee1c:	00b0082a */ 	slt	$at,$a1,$s0
/*  f16ee20:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f16ee24:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f16ee28:	1420fffa */ 	bnez	$at,.L0f16ee14
/*  f16ee2c:	a06effff */ 	sb	$t6,-0x1($v1)
.L0f16ee30:
/*  f16ee30:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f16ee34:	246f0007 */ 	addiu	$t7,$v1,0x7
/*  f16ee38:	1486fff4 */ 	bne	$a0,$a2,.L0f16ee0c
/*  f16ee3c:	01e71824 */ 	and	$v1,$t7,$a3
.L0f16ee40:
/*  f16ee40:	8fb80030 */ 	lw	$t8,0x30($sp)
/*  f16ee44:	8fb00008 */ 	lw	$s0,0x8($sp)
/*  f16ee48:	8fb1000c */ 	lw	$s1,0xc($sp)
/*  f16ee4c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f16ee50:	03e00008 */ 	jr	$ra
/*  f16ee54:	00781023 */ 	subu	$v0,$v1,$t8
);

GLOBAL_ASM(
glabel func0f16ee58
/*  f16ee58:	000462c3 */ 	sra	$t4,$a0,0xb
/*  f16ee5c:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16ee60:	000d70c0 */ 	sll	$t6,$t5,0x3
/*  f16ee64:	00047b43 */ 	sra	$t7,$a0,0xd
/*  f16ee68:	31f80007 */ 	andi	$t8,$t7,0x7
/*  f16ee6c:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f16ee70:	000562c3 */ 	sra	$t4,$a1,0xb
/*  f16ee74:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16ee78:	00057343 */ 	sra	$t6,$a1,0xd
/*  f16ee7c:	31d80007 */ 	andi	$t8,$t6,0x7
/*  f16ee80:	000d78c0 */ 	sll	$t7,$t5,0x3
/*  f16ee84:	01f86025 */ 	or	$t4,$t7,$t8
/*  f16ee88:	032c6821 */ 	addu	$t5,$t9,$t4
/*  f16ee8c:	000672c3 */ 	sra	$t6,$a2,0xb
/*  f16ee90:	31cf001f */ 	andi	$t7,$t6,0x1f
/*  f16ee94:	0006cb43 */ 	sra	$t9,$a2,0xd
/*  f16ee98:	332c0007 */ 	andi	$t4,$t9,0x7
/*  f16ee9c:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f16eea0:	030c7025 */ 	or	$t6,$t8,$t4
/*  f16eea4:	01ae7821 */ 	addu	$t7,$t5,$t6
/*  f16eea8:	0007cac3 */ 	sra	$t9,$a3,0xb
/*  f16eeac:	3338001f */ 	andi	$t8,$t9,0x1f
/*  f16eeb0:	00076b43 */ 	sra	$t5,$a3,0xd
/*  f16eeb4:	31ae0007 */ 	andi	$t6,$t5,0x7
/*  f16eeb8:	001860c0 */ 	sll	$t4,$t8,0x3
/*  f16eebc:	018ec825 */ 	or	$t9,$t4,$t6
/*  f16eec0:	01f95821 */ 	addu	$t3,$t7,$t9
/*  f16eec4:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f16eec8:	000b1883 */ 	sra	$v1,$t3,0x2
/*  f16eecc:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f16eed0:	afa50004 */ 	sw	$a1,0x4($sp)
/*  f16eed4:	afa60008 */ 	sw	$a2,0x8($sp)
/*  f16eed8:	04610002 */ 	bgez	$v1,.L0f16eee4
/*  f16eedc:	afa7000c */ 	sw	$a3,0xc($sp)
/*  f16eee0:	00001825 */ 	or	$v1,$zero,$zero
.L0f16eee4:
/*  f16eee4:	28610100 */ 	slti	$at,$v1,0x100
/*  f16eee8:	14200002 */ 	bnez	$at,.L0f16eef4
/*  f16eeec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16eef0:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f16eef4:
/*  f16eef4:	03e00008 */ 	jr	$ra
/*  f16eef8:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16eefc
/*  f16eefc:	00046183 */ 	sra	$t4,$a0,0x6
/*  f16ef00:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16ef04:	000d70c0 */ 	sll	$t6,$t5,0x3
/*  f16ef08:	00047a03 */ 	sra	$t7,$a0,0x8
/*  f16ef0c:	31f80007 */ 	andi	$t8,$t7,0x7
/*  f16ef10:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f16ef14:	00056183 */ 	sra	$t4,$a1,0x6
/*  f16ef18:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16ef1c:	00057203 */ 	sra	$t6,$a1,0x8
/*  f16ef20:	31d80007 */ 	andi	$t8,$t6,0x7
/*  f16ef24:	000d78c0 */ 	sll	$t7,$t5,0x3
/*  f16ef28:	01f86025 */ 	or	$t4,$t7,$t8
/*  f16ef2c:	032c6821 */ 	addu	$t5,$t9,$t4
/*  f16ef30:	00067183 */ 	sra	$t6,$a2,0x6
/*  f16ef34:	31cf001f */ 	andi	$t7,$t6,0x1f
/*  f16ef38:	0006ca03 */ 	sra	$t9,$a2,0x8
/*  f16ef3c:	332c0007 */ 	andi	$t4,$t9,0x7
/*  f16ef40:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f16ef44:	030c7025 */ 	or	$t6,$t8,$t4
/*  f16ef48:	01ae7821 */ 	addu	$t7,$t5,$t6
/*  f16ef4c:	0007c983 */ 	sra	$t9,$a3,0x6
/*  f16ef50:	3338001f */ 	andi	$t8,$t9,0x1f
/*  f16ef54:	00076a03 */ 	sra	$t5,$a3,0x8
/*  f16ef58:	31ae0007 */ 	andi	$t6,$t5,0x7
/*  f16ef5c:	001860c0 */ 	sll	$t4,$t8,0x3
/*  f16ef60:	018ec825 */ 	or	$t9,$t4,$t6
/*  f16ef64:	01f95821 */ 	addu	$t3,$t7,$t9
/*  f16ef68:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f16ef6c:	000b1883 */ 	sra	$v1,$t3,0x2
/*  f16ef70:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f16ef74:	afa50004 */ 	sw	$a1,0x4($sp)
/*  f16ef78:	afa60008 */ 	sw	$a2,0x8($sp)
/*  f16ef7c:	04610002 */ 	bgez	$v1,.L0f16ef88
/*  f16ef80:	afa7000c */ 	sw	$a3,0xc($sp)
/*  f16ef84:	00001825 */ 	or	$v1,$zero,$zero
.L0f16ef88:
/*  f16ef88:	28610100 */ 	slti	$at,$v1,0x100
/*  f16ef8c:	14200002 */ 	bnez	$at,.L0f16ef98
/*  f16ef90:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ef94:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f16ef98:
/*  f16ef98:	03e00008 */ 	jr	$ra
/*  f16ef9c:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16efa0
/*  f16efa0:	00046043 */ 	sra	$t4,$a0,0x1
/*  f16efa4:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16efa8:	000d70c0 */ 	sll	$t6,$t5,0x3
/*  f16efac:	000478c3 */ 	sra	$t7,$a0,0x3
/*  f16efb0:	31f80007 */ 	andi	$t8,$t7,0x7
/*  f16efb4:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f16efb8:	00056043 */ 	sra	$t4,$a1,0x1
/*  f16efbc:	318d001f */ 	andi	$t5,$t4,0x1f
/*  f16efc0:	000570c3 */ 	sra	$t6,$a1,0x3
/*  f16efc4:	31d80007 */ 	andi	$t8,$t6,0x7
/*  f16efc8:	000d78c0 */ 	sll	$t7,$t5,0x3
/*  f16efcc:	01f86025 */ 	or	$t4,$t7,$t8
/*  f16efd0:	032c6821 */ 	addu	$t5,$t9,$t4
/*  f16efd4:	00067043 */ 	sra	$t6,$a2,0x1
/*  f16efd8:	31cf001f */ 	andi	$t7,$t6,0x1f
/*  f16efdc:	0006c8c3 */ 	sra	$t9,$a2,0x3
/*  f16efe0:	332c0007 */ 	andi	$t4,$t9,0x7
/*  f16efe4:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f16efe8:	030c7025 */ 	or	$t6,$t8,$t4
/*  f16efec:	01ae7821 */ 	addu	$t7,$t5,$t6
/*  f16eff0:	0007c843 */ 	sra	$t9,$a3,0x1
/*  f16eff4:	3338001f */ 	andi	$t8,$t9,0x1f
/*  f16eff8:	000768c3 */ 	sra	$t5,$a3,0x3
/*  f16effc:	31ae0007 */ 	andi	$t6,$t5,0x7
/*  f16f000:	001860c0 */ 	sll	$t4,$t8,0x3
/*  f16f004:	018ec825 */ 	or	$t9,$t4,$t6
/*  f16f008:	01f95821 */ 	addu	$t3,$t7,$t9
/*  f16f00c:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f16f010:	000b1883 */ 	sra	$v1,$t3,0x2
/*  f16f014:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f16f018:	afa50004 */ 	sw	$a1,0x4($sp)
/*  f16f01c:	afa60008 */ 	sw	$a2,0x8($sp)
/*  f16f020:	04610002 */ 	bgez	$v1,.L0f16f02c
/*  f16f024:	afa7000c */ 	sw	$a3,0xc($sp)
/*  f16f028:	00001825 */ 	or	$v1,$zero,$zero
.L0f16f02c:
/*  f16f02c:	28610100 */ 	slti	$at,$v1,0x100
/*  f16f030:	14200002 */ 	bnez	$at,.L0f16f03c
/*  f16f034:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16f038:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f16f03c:
/*  f16f03c:	03e00008 */ 	jr	$ra
/*  f16f040:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16f044
/*  f16f044:	afa40000 */ 	sw	$a0,0x0($sp)
/*  f16f048:	308effff */ 	andi	$t6,$a0,0xffff
/*  f16f04c:	afa50004 */ 	sw	$a1,0x4($sp)
/*  f16f050:	30afffff */ 	andi	$t7,$a1,0xffff
/*  f16f054:	afa7000c */ 	sw	$a3,0xc($sp)
/*  f16f058:	30f9ffff */ 	andi	$t9,$a3,0xffff
/*  f16f05c:	30c80001 */ 	andi	$t0,$a2,0x1
/*  f16f060:	03203825 */ 	or	$a3,$t9,$zero
/*  f16f064:	01e02825 */ 	or	$a1,$t7,$zero
/*  f16f068:	01c02025 */ 	or	$a0,$t6,$zero
/*  f16f06c:	11000003 */ 	beqz	$t0,.L0f16f07c
/*  f16f070:	afa60008 */ 	sw	$a2,0x8($sp)
/*  f16f074:	10000002 */ 	beqz	$zero,.L0f16f080
/*  f16f078:	240200ff */ 	addiu	$v0,$zero,0xff
.L0f16f07c:
/*  f16f07c:	00001025 */ 	or	$v0,$zero,$zero
.L0f16f080:
/*  f16f080:	30a90001 */ 	andi	$t1,$a1,0x1
/*  f16f084:	11200003 */ 	beqz	$t1,.L0f16f094
/*  f16f088:	308a0001 */ 	andi	$t2,$a0,0x1
/*  f16f08c:	10000002 */ 	beqz	$zero,.L0f16f098
/*  f16f090:	240300ff */ 	addiu	$v1,$zero,0xff
.L0f16f094:
/*  f16f094:	00001825 */ 	or	$v1,$zero,$zero
.L0f16f098:
/*  f16f098:	11400003 */ 	beqz	$t2,.L0f16f0a8
/*  f16f09c:	30eb0001 */ 	andi	$t3,$a3,0x1
/*  f16f0a0:	10000002 */ 	beqz	$zero,.L0f16f0ac
/*  f16f0a4:	240400ff */ 	addiu	$a0,$zero,0xff
.L0f16f0a8:
/*  f16f0a8:	00002025 */ 	or	$a0,$zero,$zero
.L0f16f0ac:
/*  f16f0ac:	11600003 */ 	beqz	$t3,.L0f16f0bc
/*  f16f0b0:	00002825 */ 	or	$a1,$zero,$zero
/*  f16f0b4:	10000001 */ 	beqz	$zero,.L0f16f0bc
/*  f16f0b8:	240500ff */ 	addiu	$a1,$zero,0xff
.L0f16f0bc:
/*  f16f0bc:	00a46021 */ 	addu	$t4,$a1,$a0
/*  f16f0c0:	01836821 */ 	addu	$t5,$t4,$v1
/*  f16f0c4:	01a23821 */ 	addu	$a3,$t5,$v0
/*  f16f0c8:	24e70002 */ 	addiu	$a3,$a3,0x2
/*  f16f0cc:	00073083 */ 	sra	$a2,$a3,0x2
/*  f16f0d0:	04c30003 */ 	bgezl	$a2,.L0f16f0e0
/*  f16f0d4:	28c10100 */ 	slti	$at,$a2,0x100
/*  f16f0d8:	00003025 */ 	or	$a2,$zero,$zero
/*  f16f0dc:	28c10100 */ 	slti	$at,$a2,0x100
.L0f16f0e0:
/*  f16f0e0:	14200002 */ 	bnez	$at,.L0f16f0ec
/*  f16f0e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16f0e8:	240600ff */ 	addiu	$a2,$zero,0xff
.L0f16f0ec:
/*  f16f0ec:	03e00008 */ 	jr	$ra
/*  f16f0f0:	00c01025 */ 	or	$v0,$a2,$zero
);

GLOBAL_ASM(
glabel func0f16f0f4
/*  f16f0f4:	27bdfb50 */ 	addiu	$sp,$sp,-1200
/*  f16f0f8:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f16f0fc:	8fb004c0 */ 	lw	$s0,0x4c0($sp)
/*  f16f100:	24ef0001 */ 	addiu	$t7,$a3,0x1
/*  f16f104:	afb20028 */ 	sw	$s2,0x28($sp)
/*  f16f108:	afb10024 */ 	sw	$s1,0x24($sp)
/*  f16f10c:	24080009 */ 	addiu	$t0,$zero,0x9
/*  f16f110:	000fc043 */ 	sra	$t8,$t7,0x1
/*  f16f114:	00a08825 */ 	or	$s1,$a1,$zero
/*  f16f118:	00809025 */ 	or	$s2,$a0,$zero
/*  f16f11c:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f16f120:	afbe0040 */ 	sw	$s8,0x40($sp)
/*  f16f124:	afb7003c */ 	sw	$s7,0x3c($sp)
/*  f16f128:	afb60038 */ 	sw	$s6,0x38($sp)
/*  f16f12c:	afb50034 */ 	sw	$s5,0x34($sp)
/*  f16f130:	afb40030 */ 	sw	$s4,0x30($sp)
/*  f16f134:	afb3002c */ 	sw	$s3,0x2c($sp)
/*  f16f138:	afa604b8 */ 	sw	$a2,0x4b8($sp)
/*  f16f13c:	afa704bc */ 	sw	$a3,0x4bc($sp)
/*  f16f140:	afb80068 */ 	sw	$t8,0x68($sp)
/*  f16f144:	1208000a */ 	beq	$s0,$t0,.L0f16f170
/*  f16f148:	afb8049c */ 	sw	$t8,0x49c($sp)
/*  f16f14c:	2409000a */ 	addiu	$t1,$zero,0xa
/*  f16f150:	12090012 */ 	beq	$s0,$t1,.L0f16f19c
/*  f16f154:	2401000b */ 	addiu	$at,$zero,0xb
/*  f16f158:	12010006 */ 	beq	$s0,$at,.L0f16f174
/*  f16f15c:	2401000c */ 	addiu	$at,$zero,0xc
/*  f16f160:	5201000f */ 	beql	$s0,$at,.L0f16f1a0
/*  f16f164:	8fab04b8 */ 	lw	$t3,0x4b8($sp)
/*  f16f168:	10000015 */ 	beqz	$zero,.L0f16f1c0
/*  f16f16c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16f170:
/*  f16f170:	2409000a */ 	addiu	$t1,$zero,0xa
.L0f16f174:
/*  f16f174:	8fb904b8 */ 	lw	$t9,0x4b8($sp)
/*  f16f178:	272b0001 */ 	addiu	$t3,$t9,0x1
/*  f16f17c:	000b6043 */ 	sra	$t4,$t3,0x1
/*  f16f180:	258d0007 */ 	addiu	$t5,$t4,0x7
/*  f16f184:	272f0007 */ 	addiu	$t7,$t9,0x7
/*  f16f188:	31ae0ff8 */ 	andi	$t6,$t5,0xff8
/*  f16f18c:	31f80ff8 */ 	andi	$t8,$t7,0xff8
/*  f16f190:	afae04a0 */ 	sw	$t6,0x4a0($sp)
/*  f16f194:	1000000a */ 	beqz	$zero,.L0f16f1c0
/*  f16f198:	afb804a4 */ 	sw	$t8,0x4a4($sp)
.L0f16f19c:
/*  f16f19c:	8fab04b8 */ 	lw	$t3,0x4b8($sp)
.L0f16f1a0:
/*  f16f1a0:	256c0001 */ 	addiu	$t4,$t3,0x1
/*  f16f1a4:	000c6843 */ 	sra	$t5,$t4,0x1
/*  f16f1a8:	25ae000f */ 	addiu	$t6,$t5,0xf
/*  f16f1ac:	256f000f */ 	addiu	$t7,$t3,0xf
/*  f16f1b0:	31d90ff0 */ 	andi	$t9,$t6,0xff0
/*  f16f1b4:	31f80ff0 */ 	andi	$t8,$t7,0xff0
/*  f16f1b8:	afb904a0 */ 	sw	$t9,0x4a0($sp)
/*  f16f1bc:	afb804a4 */ 	sw	$t8,0x4a4($sp)
.L0f16f1c0:
/*  f16f1c0:	12080003 */ 	beq	$s0,$t0,.L0f16f1d0
/*  f16f1c4:	8fac04c8 */ 	lw	$t4,0x4c8($sp)
/*  f16f1c8:	56090024 */ 	bnel	$s0,$t1,.L0f16f25c
/*  f16f1cc:	afb10474 */ 	sw	$s1,0x474($sp)
.L0f16f1d0:
/*  f16f1d0:	19800021 */ 	blez	$t4,.L0f16f258
/*  f16f1d4:	00003025 */ 	or	$a2,$zero,$zero
/*  f16f1d8:	8fa404c4 */ 	lw	$a0,0x4c4($sp)
/*  f16f1dc:	27a30070 */ 	addiu	$v1,$sp,0x70
/*  f16f1e0:	240700ff */ 	addiu	$a3,$zero,0xff
.L0f16f1e4:
/*  f16f1e4:	94950000 */ 	lhu	$s5,0x0($a0)
/*  f16f1e8:	001572c3 */ 	sra	$t6,$s5,0xb
/*  f16f1ec:	00155b43 */ 	sra	$t3,$s5,0xd
/*  f16f1f0:	316f0007 */ 	andi	$t7,$t3,0x7
/*  f16f1f4:	000ec8c0 */ 	sll	$t9,$t6,0x3
/*  f16f1f8:	032fc025 */ 	or	$t8,$t9,$t7
/*  f16f1fc:	00155a03 */ 	sra	$t3,$s5,0x8
/*  f16f200:	00156983 */ 	sra	$t5,$s5,0x6
/*  f16f204:	000d70c0 */ 	sll	$t6,$t5,0x3
/*  f16f208:	31790007 */ 	andi	$t9,$t3,0x7
/*  f16f20c:	01d97825 */ 	or	$t7,$t6,$t9
/*  f16f210:	001558c3 */ 	sra	$t3,$s5,0x3
/*  f16f214:	00156043 */ 	sra	$t4,$s5,0x1
/*  f16f218:	a06f0001 */ 	sb	$t7,0x1($v1)
/*  f16f21c:	000c68c0 */ 	sll	$t5,$t4,0x3
/*  f16f220:	316e0007 */ 	andi	$t6,$t3,0x7
/*  f16f224:	01aec825 */ 	or	$t9,$t5,$t6
/*  f16f228:	32af0001 */ 	andi	$t7,$s5,0x1
/*  f16f22c:	a0780000 */ 	sb	$t8,0x0($v1)
/*  f16f230:	11e00003 */ 	beqz	$t7,.L0f16f240
/*  f16f234:	a0790002 */ 	sb	$t9,0x2($v1)
/*  f16f238:	10000002 */ 	beqz	$zero,.L0f16f244
/*  f16f23c:	a0670003 */ 	sb	$a3,0x3($v1)
.L0f16f240:
/*  f16f240:	a0600003 */ 	sb	$zero,0x3($v1)
.L0f16f244:
/*  f16f244:	8fb804c8 */ 	lw	$t8,0x4c8($sp)
/*  f16f248:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f16f24c:	24840002 */ 	addiu	$a0,$a0,0x2
/*  f16f250:	14d8ffe4 */ 	bne	$a2,$t8,.L0f16f1e4
/*  f16f254:	24630004 */ 	addiu	$v1,$v1,0x4
.L0f16f258:
/*  f16f258:	afb10474 */ 	sw	$s1,0x474($sp)
.L0f16f25c:
/*  f16f25c:	12080009 */ 	beq	$s0,$t0,.L0f16f284
/*  f16f260:	afb20470 */ 	sw	$s2,0x470($sp)
/*  f16f264:	120900e8 */ 	beq	$s0,$t1,.L0f16f608
/*  f16f268:	2401000b */ 	addiu	$at,$zero,0xb
/*  f16f26c:	12010077 */ 	beq	$s0,$at,.L0f16f44c
/*  f16f270:	2401000c */ 	addiu	$at,$zero,0xc
/*  f16f274:	120101b6 */ 	beq	$s0,$at,.L0f16f950
/*  f16f278:	00001025 */ 	or	$v0,$zero,$zero
/*  f16f27c:	10000277 */ 	beqz	$zero,.L0f16fc5c
/*  f16f280:	00000000 */ 	sll	$zero,$zero,0x0
.L0f16f284:
/*  f16f284:	8fac04bc */ 	lw	$t4,0x4bc($sp)
/*  f16f288:	8fab04a4 */ 	lw	$t3,0x4a4($sp)
/*  f16f28c:	afa004a8 */ 	sw	$zero,0x4a8($sp)
/*  f16f290:	19800068 */ 	blez	$t4,.L0f16f434
/*  f16f294:	000b6840 */ 	sll	$t5,$t3,0x1
/*  f16f298:	afad0058 */ 	sw	$t5,0x58($sp)
.L0f16f29c:
/*  f16f29c:	8fb904a8 */ 	lw	$t9,0x4a8($sp)
/*  f16f2a0:	8fae04bc */ 	lw	$t6,0x4bc($sp)
/*  f16f2a4:	0000b825 */ 	or	$s7,$zero,$zero
/*  f16f2a8:	272f0001 */ 	addiu	$t7,$t9,0x1
/*  f16f2ac:	01ee082a */ 	slt	$at,$t7,$t6
/*  f16f2b0:	10200003 */ 	beqz	$at,.L0f16f2c0
/*  f16f2b4:	8fb804a4 */ 	lw	$t8,0x4a4($sp)
/*  f16f2b8:	10000002 */ 	beqz	$zero,.L0f16f2c4
/*  f16f2bc:	afb80480 */ 	sw	$t8,0x480($sp)
.L0f16f2c0:
/*  f16f2c0:	afa00480 */ 	sw	$zero,0x480($sp)
.L0f16f2c4:
/*  f16f2c4:	8fac04a4 */ 	lw	$t4,0x4a4($sp)
/*  f16f2c8:	8fbe0470 */ 	lw	$s8,0x470($sp)
/*  f16f2cc:	8fad0480 */ 	lw	$t5,0x480($sp)
/*  f16f2d0:	1980004a */ 	blez	$t4,.L0f16f3fc
/*  f16f2d4:	01bec821 */ 	addu	$t9,$t5,$s8
/*  f16f2d8:	afb9005c */ 	sw	$t9,0x5c($sp)
.L0f16f2dc:
/*  f16f2dc:	8fae04b8 */ 	lw	$t6,0x4b8($sp)
/*  f16f2e0:	26e20001 */ 	addiu	$v0,$s7,0x1
/*  f16f2e4:	02e01825 */ 	or	$v1,$s7,$zero
/*  f16f2e8:	004e082a */ 	slt	$at,$v0,$t6
/*  f16f2ec:	10200003 */ 	beqz	$at,.L0f16f2fc
/*  f16f2f0:	8fab0470 */ 	lw	$t3,0x470($sp)
/*  f16f2f4:	10000001 */ 	beqz	$zero,.L0f16f2fc
/*  f16f2f8:	00401825 */ 	or	$v1,$v0,$zero
.L0f16f2fc:
/*  f16f2fc:	93d80000 */ 	lbu	$t8,0x0($s8)
/*  f16f300:	8faf04c4 */ 	lw	$t7,0x4c4($sp)
/*  f16f304:	0163c821 */ 	addu	$t9,$t3,$v1
/*  f16f308:	00186040 */ 	sll	$t4,$t8,0x1
/*  f16f30c:	932e0000 */ 	lbu	$t6,0x0($t9)
/*  f16f310:	01ec6821 */ 	addu	$t5,$t7,$t4
/*  f16f314:	95b50000 */ 	lhu	$s5,0x0($t5)
/*  f16f318:	8fad005c */ 	lw	$t5,0x5c($sp)
/*  f16f31c:	000ec040 */ 	sll	$t8,$t6,0x1
/*  f16f320:	01f86021 */ 	addu	$t4,$t7,$t8
/*  f16f324:	95910000 */ 	lhu	$s1,0x0($t4)
/*  f16f328:	91b90000 */ 	lbu	$t9,0x0($t5)
/*  f16f32c:	8fac0480 */ 	lw	$t4,0x480($sp)
/*  f16f330:	02a02025 */ 	or	$a0,$s5,$zero
/*  f16f334:	00197040 */ 	sll	$t6,$t9,0x1
/*  f16f338:	01836821 */ 	addu	$t5,$t4,$v1
/*  f16f33c:	01abc821 */ 	addu	$t9,$t5,$t3
/*  f16f340:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f16f344:	932e0000 */ 	lbu	$t6,0x0($t9)
/*  f16f348:	97120000 */ 	lhu	$s2,0x0($t8)
/*  f16f34c:	02202825 */ 	or	$a1,$s1,$zero
/*  f16f350:	000ec040 */ 	sll	$t8,$t6,0x1
/*  f16f354:	01f86021 */ 	addu	$t4,$t7,$t8
/*  f16f358:	95900000 */ 	lhu	$s0,0x0($t4)
/*  f16f35c:	02403025 */ 	or	$a2,$s2,$zero
/*  f16f360:	0fc5bb96 */ 	jal	func0f16ee58
/*  f16f364:	02003825 */ 	or	$a3,$s0,$zero
/*  f16f368:	0040b025 */ 	or	$s6,$v0,$zero
/*  f16f36c:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f370:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f374:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f378:	0fc5bbbf */ 	jal	func0f16eefc
/*  f16f37c:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f380:	00409825 */ 	or	$s3,$v0,$zero
/*  f16f384:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f388:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f38c:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f390:	0fc5bbe8 */ 	jal	func0f16efa0
/*  f16f394:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f398:	0040a025 */ 	or	$s4,$v0,$zero
/*  f16f39c:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f3a0:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f3a4:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f3a8:	0fc5bc11 */ 	jal	func0f16f044
/*  f16f3ac:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f3b0:	27a40070 */ 	addiu	$a0,$sp,0x70
/*  f16f3b4:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16f3b8:	02c03025 */ 	or	$a2,$s6,$zero
/*  f16f3bc:	02603825 */ 	or	$a3,$s3,$zero
/*  f16f3c0:	afb40010 */ 	sw	$s4,0x10($sp)
/*  f16f3c4:	0fc5bf23 */ 	jal	func0f16fc8c
/*  f16f3c8:	afa20014 */ 	sw	$v0,0x14($sp)
/*  f16f3cc:	8fad0474 */ 	lw	$t5,0x474($sp)
/*  f16f3d0:	00175843 */ 	sra	$t3,$s7,0x1
/*  f16f3d4:	26f70002 */ 	addiu	$s7,$s7,0x2
/*  f16f3d8:	01abc821 */ 	addu	$t9,$t5,$t3
/*  f16f3dc:	a3220000 */ 	sb	$v0,0x0($t9)
/*  f16f3e0:	8fb804a4 */ 	lw	$t8,0x4a4($sp)
/*  f16f3e4:	8fae005c */ 	lw	$t6,0x5c($sp)
/*  f16f3e8:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f16f3ec:	02f8082a */ 	slt	$at,$s7,$t8
/*  f16f3f0:	25cf0002 */ 	addiu	$t7,$t6,0x2
/*  f16f3f4:	1420ffb9 */ 	bnez	$at,.L0f16f2dc
/*  f16f3f8:	afaf005c */ 	sw	$t7,0x5c($sp)
.L0f16f3fc:
/*  f16f3fc:	8fac0474 */ 	lw	$t4,0x474($sp)
/*  f16f400:	8fad04a0 */ 	lw	$t5,0x4a0($sp)
/*  f16f404:	8fb804a8 */ 	lw	$t8,0x4a8($sp)
/*  f16f408:	8fb90470 */ 	lw	$t9,0x470($sp)
/*  f16f40c:	018d5821 */ 	addu	$t3,$t4,$t5
/*  f16f410:	8fad04bc */ 	lw	$t5,0x4bc($sp)
/*  f16f414:	8fae0058 */ 	lw	$t6,0x58($sp)
/*  f16f418:	270c0002 */ 	addiu	$t4,$t8,0x2
/*  f16f41c:	018d082a */ 	slt	$at,$t4,$t5
/*  f16f420:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f16f424:	afac04a8 */ 	sw	$t4,0x4a8($sp)
/*  f16f428:	afab0474 */ 	sw	$t3,0x474($sp)
/*  f16f42c:	1420ff9b */ 	bnez	$at,.L0f16f29c
/*  f16f430:	afaf0470 */ 	sw	$t7,0x470($sp)
.L0f16f434:
/*  f16f434:	8fab0068 */ 	lw	$t3,0x68($sp)
/*  f16f438:	8fb904a0 */ 	lw	$t9,0x4a0($sp)
/*  f16f43c:	01790019 */ 	multu	$t3,$t9
/*  f16f440:	00001012 */ 	mflo	$v0
/*  f16f444:	10000206 */ 	beqz	$zero,.L0f16fc60
/*  f16f448:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16f44c:
/*  f16f44c:	8fae04bc */ 	lw	$t6,0x4bc($sp)
/*  f16f450:	8faf04a4 */ 	lw	$t7,0x4a4($sp)
/*  f16f454:	afa004a8 */ 	sw	$zero,0x4a8($sp)
/*  f16f458:	19c00065 */ 	blez	$t6,.L0f16f5f0
/*  f16f45c:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f16f460:	afb80058 */ 	sw	$t8,0x58($sp)
.L0f16f464:
/*  f16f464:	8fad04a8 */ 	lw	$t5,0x4a8($sp)
/*  f16f468:	8fac04bc */ 	lw	$t4,0x4bc($sp)
/*  f16f46c:	0000b825 */ 	or	$s7,$zero,$zero
/*  f16f470:	25ab0001 */ 	addiu	$t3,$t5,0x1
/*  f16f474:	016c082a */ 	slt	$at,$t3,$t4
/*  f16f478:	10200003 */ 	beqz	$at,.L0f16f488
/*  f16f47c:	8fb904a4 */ 	lw	$t9,0x4a4($sp)
/*  f16f480:	10000002 */ 	beqz	$zero,.L0f16f48c
/*  f16f484:	afb90480 */ 	sw	$t9,0x480($sp)
.L0f16f488:
/*  f16f488:	afa00480 */ 	sw	$zero,0x480($sp)
.L0f16f48c:
/*  f16f48c:	8fae04a4 */ 	lw	$t6,0x4a4($sp)
/*  f16f490:	8fbe0470 */ 	lw	$s8,0x470($sp)
/*  f16f494:	8fb80480 */ 	lw	$t8,0x480($sp)
/*  f16f498:	19c00047 */ 	blez	$t6,.L0f16f5b8
/*  f16f49c:	031e6821 */ 	addu	$t5,$t8,$s8
/*  f16f4a0:	afad005c */ 	sw	$t5,0x5c($sp)
.L0f16f4a4:
/*  f16f4a4:	8fac04b8 */ 	lw	$t4,0x4b8($sp)
/*  f16f4a8:	26e20001 */ 	addiu	$v0,$s7,0x1
/*  f16f4ac:	8fab04c4 */ 	lw	$t3,0x4c4($sp)
/*  f16f4b0:	004c082a */ 	slt	$at,$v0,$t4
/*  f16f4b4:	10200003 */ 	beqz	$at,.L0f16f4c4
/*  f16f4b8:	8fa40470 */ 	lw	$a0,0x470($sp)
/*  f16f4bc:	10000002 */ 	beqz	$zero,.L0f16f4c8
/*  f16f4c0:	00401825 */ 	or	$v1,$v0,$zero
.L0f16f4c4:
/*  f16f4c4:	02e01825 */ 	or	$v1,$s7,$zero
.L0f16f4c8:
/*  f16f4c8:	93d90000 */ 	lbu	$t9,0x0($s8)
/*  f16f4cc:	00837821 */ 	addu	$t7,$a0,$v1
/*  f16f4d0:	91ed0000 */ 	lbu	$t5,0x0($t7)
/*  f16f4d4:	00197040 */ 	sll	$t6,$t9,0x1
/*  f16f4d8:	016ec021 */ 	addu	$t8,$t3,$t6
/*  f16f4dc:	8fae005c */ 	lw	$t6,0x5c($sp)
/*  f16f4e0:	000d6040 */ 	sll	$t4,$t5,0x1
/*  f16f4e4:	016cc821 */ 	addu	$t9,$t3,$t4
/*  f16f4e8:	97020000 */ 	lhu	$v0,0x0($t8)
/*  f16f4ec:	8fac0480 */ 	lw	$t4,0x480($sp)
/*  f16f4f0:	91d80000 */ 	lbu	$t8,0x0($t6)
/*  f16f4f4:	97310000 */ 	lhu	$s1,0x0($t9)
/*  f16f4f8:	0183c821 */ 	addu	$t9,$t4,$v1
/*  f16f4fc:	03247021 */ 	addu	$t6,$t9,$a0
/*  f16f500:	00187840 */ 	sll	$t7,$t8,0x1
/*  f16f504:	91d80000 */ 	lbu	$t8,0x0($t6)
/*  f16f508:	016f6821 */ 	addu	$t5,$t3,$t7
/*  f16f50c:	95a80000 */ 	lhu	$t0,0x0($t5)
/*  f16f510:	00187840 */ 	sll	$t7,$t8,0x1
/*  f16f514:	016f6821 */ 	addu	$t5,$t3,$t7
/*  f16f518:	95a90000 */ 	lhu	$t1,0x0($t5)
/*  f16f51c:	00026203 */ 	sra	$t4,$v0,0x8
/*  f16f520:	00117203 */ 	sra	$t6,$s1,0x8
/*  f16f524:	31d800ff */ 	andi	$t8,$t6,0xff
/*  f16f528:	319900ff */ 	andi	$t9,$t4,0xff
/*  f16f52c:	03387821 */ 	addu	$t7,$t9,$t8
/*  f16f530:	01602025 */ 	or	$a0,$t3,$zero
/*  f16f534:	00086a03 */ 	sra	$t5,$t0,0x8
/*  f16f538:	31ab00ff */ 	andi	$t3,$t5,0xff
/*  f16f53c:	00097203 */ 	sra	$t6,$t1,0x8
/*  f16f540:	31d900ff */ 	andi	$t9,$t6,0xff
/*  f16f544:	01eb6021 */ 	addu	$t4,$t7,$t3
/*  f16f548:	01993021 */ 	addu	$a2,$t4,$t9
/*  f16f54c:	0006c083 */ 	sra	$t8,$a2,0x2
/*  f16f550:	304f00ff */ 	andi	$t7,$v0,0xff
/*  f16f554:	322b00ff */ 	andi	$t3,$s1,0xff
/*  f16f558:	01eb7021 */ 	addu	$t6,$t7,$t3
/*  f16f55c:	330600ff */ 	andi	$a2,$t8,0xff
/*  f16f560:	310c00ff */ 	andi	$t4,$t0,0xff
/*  f16f564:	01ccc821 */ 	addu	$t9,$t6,$t4
/*  f16f568:	313800ff */ 	andi	$t8,$t1,0xff
/*  f16f56c:	03383821 */ 	addu	$a3,$t9,$t8
/*  f16f570:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16f574:	00076883 */ 	sra	$t5,$a3,0x2
/*  f16f578:	31a700ff */ 	andi	$a3,$t5,0xff
/*  f16f57c:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16f580:	0fc5bf54 */ 	jal	func0f16fd50
/*  f16f584:	02201825 */ 	or	$v1,$s1,$zero
/*  f16f588:	8fab0474 */ 	lw	$t3,0x474($sp)
/*  f16f58c:	00177043 */ 	sra	$t6,$s7,0x1
/*  f16f590:	26f70002 */ 	addiu	$s7,$s7,0x2
/*  f16f594:	016e6021 */ 	addu	$t4,$t3,$t6
/*  f16f598:	a1820000 */ 	sb	$v0,0x0($t4)
/*  f16f59c:	8fad04a4 */ 	lw	$t5,0x4a4($sp)
/*  f16f5a0:	8fb9005c */ 	lw	$t9,0x5c($sp)
/*  f16f5a4:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f16f5a8:	02ed082a */ 	slt	$at,$s7,$t5
/*  f16f5ac:	27380002 */ 	addiu	$t8,$t9,0x2
/*  f16f5b0:	1420ffbc */ 	bnez	$at,.L0f16f4a4
/*  f16f5b4:	afb8005c */ 	sw	$t8,0x5c($sp)
.L0f16f5b8:
/*  f16f5b8:	8faf0474 */ 	lw	$t7,0x474($sp)
/*  f16f5bc:	8fab04a0 */ 	lw	$t3,0x4a0($sp)
/*  f16f5c0:	8fad04a8 */ 	lw	$t5,0x4a8($sp)
/*  f16f5c4:	8fac0470 */ 	lw	$t4,0x470($sp)
/*  f16f5c8:	01eb7021 */ 	addu	$t6,$t7,$t3
/*  f16f5cc:	8fab04bc */ 	lw	$t3,0x4bc($sp)
/*  f16f5d0:	8fb90058 */ 	lw	$t9,0x58($sp)
/*  f16f5d4:	25af0002 */ 	addiu	$t7,$t5,0x2
/*  f16f5d8:	01eb082a */ 	slt	$at,$t7,$t3
/*  f16f5dc:	0199c021 */ 	addu	$t8,$t4,$t9
/*  f16f5e0:	afaf04a8 */ 	sw	$t7,0x4a8($sp)
/*  f16f5e4:	afae0474 */ 	sw	$t6,0x474($sp)
/*  f16f5e8:	1420ff9e */ 	bnez	$at,.L0f16f464
/*  f16f5ec:	afb80470 */ 	sw	$t8,0x470($sp)
.L0f16f5f0:
/*  f16f5f0:	8fae0068 */ 	lw	$t6,0x68($sp)
/*  f16f5f4:	8fac04a0 */ 	lw	$t4,0x4a0($sp)
/*  f16f5f8:	01cc0019 */ 	multu	$t6,$t4
/*  f16f5fc:	00001012 */ 	mflo	$v0
/*  f16f600:	10000197 */ 	beqz	$zero,.L0f16fc60
/*  f16f604:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16f608:
/*  f16f608:	8fb904bc */ 	lw	$t9,0x4bc($sp)
/*  f16f60c:	8fb804a0 */ 	lw	$t8,0x4a0($sp)
/*  f16f610:	afa004a8 */ 	sw	$zero,0x4a8($sp)
/*  f16f614:	1b2000c7 */ 	blez	$t9,.L0f16f934
/*  f16f618:	00186843 */ 	sra	$t5,$t8,0x1
/*  f16f61c:	afad0054 */ 	sw	$t5,0x54($sp)
.L0f16f620:
/*  f16f620:	8fab04a8 */ 	lw	$t3,0x4a8($sp)
/*  f16f624:	8faf04bc */ 	lw	$t7,0x4bc($sp)
/*  f16f628:	0000b825 */ 	or	$s7,$zero,$zero
/*  f16f62c:	256e0001 */ 	addiu	$t6,$t3,0x1
/*  f16f630:	01cf082a */ 	slt	$at,$t6,$t7
/*  f16f634:	10200004 */ 	beqz	$at,.L0f16f648
/*  f16f638:	8fac04a4 */ 	lw	$t4,0x4a4($sp)
/*  f16f63c:	000cc843 */ 	sra	$t9,$t4,0x1
/*  f16f640:	10000002 */ 	beqz	$zero,.L0f16f64c
/*  f16f644:	afb90480 */ 	sw	$t9,0x480($sp)
.L0f16f648:
/*  f16f648:	afa00480 */ 	sw	$zero,0x480($sp)
.L0f16f64c:
/*  f16f64c:	8fb804a4 */ 	lw	$t8,0x4a4($sp)
/*  f16f650:	8fad0470 */ 	lw	$t5,0x470($sp)
/*  f16f654:	8fab0480 */ 	lw	$t3,0x480($sp)
/*  f16f658:	1b0000a8 */ 	blez	$t8,.L0f16f8fc
/*  f16f65c:	01ab7821 */ 	addu	$t7,$t5,$t3
/*  f16f660:	afaf005c */ 	sw	$t7,0x5c($sp)
/*  f16f664:	8fae0470 */ 	lw	$t6,0x470($sp)
.L0f16f668:
/*  f16f668:	00174043 */ 	sra	$t0,$s7,0x1
/*  f16f66c:	8fa504c4 */ 	lw	$a1,0x4c4($sp)
/*  f16f670:	010e6021 */ 	addu	$t4,$t0,$t6
/*  f16f674:	91820000 */ 	lbu	$v0,0x0($t4)
/*  f16f678:	8faf04b8 */ 	lw	$t7,0x4b8($sp)
/*  f16f67c:	26ee0001 */ 	addiu	$t6,$s7,0x1
/*  f16f680:	0002c903 */ 	sra	$t9,$v0,0x4
/*  f16f684:	3338000f */ 	andi	$t8,$t9,0xf
/*  f16f688:	00186840 */ 	sll	$t5,$t8,0x1
/*  f16f68c:	00ad5821 */ 	addu	$t3,$a1,$t5
/*  f16f690:	01cf182a */ 	slt	$v1,$t6,$t7
/*  f16f694:	10600003 */ 	beqz	$v1,.L0f16f6a4
/*  f16f698:	95750000 */ 	lhu	$s5,0x0($t3)
/*  f16f69c:	10000002 */ 	beqz	$zero,.L0f16f6a8
/*  f16f6a0:	00005025 */ 	or	$t2,$zero,$zero
.L0f16f6a4:
/*  f16f6a4:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16f6a8:
/*  f16f6a8:	8fab0480 */ 	lw	$t3,0x480($sp)
/*  f16f6ac:	8fae0470 */ 	lw	$t6,0x470($sp)
/*  f16f6b0:	01426007 */ 	srav	$t4,$v0,$t2
/*  f16f6b4:	3199000f */ 	andi	$t9,$t4,0xf
/*  f16f6b8:	8fa904c4 */ 	lw	$t1,0x4c4($sp)
/*  f16f6bc:	010b7821 */ 	addu	$t7,$t0,$t3
/*  f16f6c0:	0019c040 */ 	sll	$t8,$t9,0x1
/*  f16f6c4:	01ee6021 */ 	addu	$t4,$t7,$t6
/*  f16f6c8:	91990000 */ 	lbu	$t9,0x0($t4)
/*  f16f6cc:	01386821 */ 	addu	$t5,$t1,$t8
/*  f16f6d0:	95b10000 */ 	lhu	$s1,0x0($t5)
/*  f16f6d4:	0019c103 */ 	sra	$t8,$t9,0x4
/*  f16f6d8:	330d000f */ 	andi	$t5,$t8,0xf
/*  f16f6dc:	000d5840 */ 	sll	$t3,$t5,0x1
/*  f16f6e0:	012b7821 */ 	addu	$t7,$t1,$t3
/*  f16f6e4:	10600003 */ 	beqz	$v1,.L0f16f6f4
/*  f16f6e8:	95f20000 */ 	lhu	$s2,0x0($t7)
/*  f16f6ec:	10000002 */ 	beqz	$zero,.L0f16f6f8
/*  f16f6f0:	00005025 */ 	or	$t2,$zero,$zero
.L0f16f6f4:
/*  f16f6f4:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16f6f8:
/*  f16f6f8:	8fae005c */ 	lw	$t6,0x5c($sp)
/*  f16f6fc:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f700:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f704:	01c86021 */ 	addu	$t4,$t6,$t0
/*  f16f708:	91990000 */ 	lbu	$t9,0x0($t4)
/*  f16f70c:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f710:	0159c007 */ 	srav	$t8,$t9,$t2
/*  f16f714:	330d000f */ 	andi	$t5,$t8,0xf
/*  f16f718:	000d5840 */ 	sll	$t3,$t5,0x1
/*  f16f71c:	012b7821 */ 	addu	$t7,$t1,$t3
/*  f16f720:	95f00000 */ 	lhu	$s0,0x0($t7)
/*  f16f724:	0fc5bb96 */ 	jal	func0f16ee58
/*  f16f728:	02003825 */ 	or	$a3,$s0,$zero
/*  f16f72c:	0040b025 */ 	or	$s6,$v0,$zero
/*  f16f730:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f734:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f738:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f73c:	0fc5bbbf */ 	jal	func0f16eefc
/*  f16f740:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f744:	00409825 */ 	or	$s3,$v0,$zero
/*  f16f748:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f74c:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f750:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f754:	0fc5bbe8 */ 	jal	func0f16efa0
/*  f16f758:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f75c:	0040a025 */ 	or	$s4,$v0,$zero
/*  f16f760:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f764:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f768:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f76c:	0fc5bc11 */ 	jal	func0f16f044
/*  f16f770:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f774:	27a40070 */ 	addiu	$a0,$sp,0x70
/*  f16f778:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16f77c:	02c03025 */ 	or	$a2,$s6,$zero
/*  f16f780:	02603825 */ 	or	$a3,$s3,$zero
/*  f16f784:	afb40010 */ 	sw	$s4,0x10($sp)
/*  f16f788:	0fc5bf23 */ 	jal	func0f16fc8c
/*  f16f78c:	afa20014 */ 	sw	$v0,0x14($sp)
/*  f16f790:	8fae0474 */ 	lw	$t6,0x474($sp)
/*  f16f794:	00176083 */ 	sra	$t4,$s7,0x2
/*  f16f798:	0002c900 */ 	sll	$t9,$v0,0x4
/*  f16f79c:	01ccf021 */ 	addu	$s8,$t6,$t4
/*  f16f7a0:	a3d90000 */ 	sb	$t9,0x0($s8)
/*  f16f7a4:	8fad0470 */ 	lw	$t5,0x470($sp)
/*  f16f7a8:	26e80002 */ 	addiu	$t0,$s7,0x2
/*  f16f7ac:	0008c043 */ 	sra	$t8,$t0,0x1
/*  f16f7b0:	030d5821 */ 	addu	$t3,$t8,$t5
/*  f16f7b4:	91630000 */ 	lbu	$v1,0x0($t3)
/*  f16f7b8:	8faf04c4 */ 	lw	$t7,0x4c4($sp)
/*  f16f7bc:	8fad04b8 */ 	lw	$t5,0x4b8($sp)
/*  f16f7c0:	00037103 */ 	sra	$t6,$v1,0x4
/*  f16f7c4:	31cc000f */ 	andi	$t4,$t6,0xf
/*  f16f7c8:	000cc840 */ 	sll	$t9,$t4,0x1
/*  f16f7cc:	03004025 */ 	or	$t0,$t8,$zero
/*  f16f7d0:	26eb0003 */ 	addiu	$t3,$s7,0x3
/*  f16f7d4:	01f9c021 */ 	addu	$t8,$t7,$t9
/*  f16f7d8:	016d202a */ 	slt	$a0,$t3,$t5
/*  f16f7dc:	10800003 */ 	beqz	$a0,.L0f16f7ec
/*  f16f7e0:	97150000 */ 	lhu	$s5,0x0($t8)
/*  f16f7e4:	10000002 */ 	beqz	$zero,.L0f16f7f0
/*  f16f7e8:	00005025 */ 	or	$t2,$zero,$zero
.L0f16f7ec:
/*  f16f7ec:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16f7f0:
/*  f16f7f0:	01436007 */ 	srav	$t4,$v1,$t2
/*  f16f7f4:	8fad0480 */ 	lw	$t5,0x480($sp)
/*  f16f7f8:	318f000f */ 	andi	$t7,$t4,0xf
/*  f16f7fc:	8fae04c4 */ 	lw	$t6,0x4c4($sp)
/*  f16f800:	8fac0470 */ 	lw	$t4,0x470($sp)
/*  f16f804:	000fc840 */ 	sll	$t9,$t7,0x1
/*  f16f808:	010d5821 */ 	addu	$t3,$t0,$t5
/*  f16f80c:	01d9c021 */ 	addu	$t8,$t6,$t9
/*  f16f810:	016c7821 */ 	addu	$t7,$t3,$t4
/*  f16f814:	91f90000 */ 	lbu	$t9,0x0($t7)
/*  f16f818:	97110000 */ 	lhu	$s1,0x0($t8)
/*  f16f81c:	240a0004 */ 	addiu	$t2,$zero,0x4
/*  f16f820:	0019c103 */ 	sra	$t8,$t9,0x4
/*  f16f824:	330d000f */ 	andi	$t5,$t8,0xf
/*  f16f828:	000d5840 */ 	sll	$t3,$t5,0x1
/*  f16f82c:	01cb6021 */ 	addu	$t4,$t6,$t3
/*  f16f830:	95920000 */ 	lhu	$s2,0x0($t4)
/*  f16f834:	10800003 */ 	beqz	$a0,.L0f16f844
/*  f16f838:	8fb9005c */ 	lw	$t9,0x5c($sp)
/*  f16f83c:	10000001 */ 	beqz	$zero,.L0f16f844
/*  f16f840:	00005025 */ 	or	$t2,$zero,$zero
.L0f16f844:
/*  f16f844:	0328c021 */ 	addu	$t8,$t9,$t0
/*  f16f848:	930d0000 */ 	lbu	$t5,0x0($t8)
/*  f16f84c:	8faf04c4 */ 	lw	$t7,0x4c4($sp)
/*  f16f850:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f854:	014d7007 */ 	srav	$t6,$t5,$t2
/*  f16f858:	31cb000f */ 	andi	$t3,$t6,0xf
/*  f16f85c:	000b6040 */ 	sll	$t4,$t3,0x1
/*  f16f860:	01ecc821 */ 	addu	$t9,$t7,$t4
/*  f16f864:	97300000 */ 	lhu	$s0,0x0($t9)
/*  f16f868:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f86c:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f870:	0fc5bb96 */ 	jal	func0f16ee58
/*  f16f874:	02003825 */ 	or	$a3,$s0,$zero
/*  f16f878:	0040b025 */ 	or	$s6,$v0,$zero
/*  f16f87c:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f880:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f884:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f888:	0fc5bbbf */ 	jal	func0f16eefc
/*  f16f88c:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f890:	00409825 */ 	or	$s3,$v0,$zero
/*  f16f894:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f898:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f89c:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f8a0:	0fc5bbe8 */ 	jal	func0f16efa0
/*  f16f8a4:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f8a8:	0040a025 */ 	or	$s4,$v0,$zero
/*  f16f8ac:	32a4ffff */ 	andi	$a0,$s5,0xffff
/*  f16f8b0:	3225ffff */ 	andi	$a1,$s1,0xffff
/*  f16f8b4:	3246ffff */ 	andi	$a2,$s2,0xffff
/*  f16f8b8:	0fc5bc11 */ 	jal	func0f16f044
/*  f16f8bc:	3207ffff */ 	andi	$a3,$s0,0xffff
/*  f16f8c0:	27a40070 */ 	addiu	$a0,$sp,0x70
/*  f16f8c4:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16f8c8:	02c03025 */ 	or	$a2,$s6,$zero
/*  f16f8cc:	02603825 */ 	or	$a3,$s3,$zero
/*  f16f8d0:	afb40010 */ 	sw	$s4,0x10($sp)
/*  f16f8d4:	0fc5bf23 */ 	jal	func0f16fc8c
/*  f16f8d8:	afa20014 */ 	sw	$v0,0x14($sp)
/*  f16f8dc:	93d80000 */ 	lbu	$t8,0x0($s8)
/*  f16f8e0:	26f70004 */ 	addiu	$s7,$s7,0x4
/*  f16f8e4:	03027025 */ 	or	$t6,$t8,$v0
/*  f16f8e8:	a3ce0000 */ 	sb	$t6,0x0($s8)
/*  f16f8ec:	8fab04a4 */ 	lw	$t3,0x4a4($sp)
/*  f16f8f0:	02eb082a */ 	slt	$at,$s7,$t3
/*  f16f8f4:	5420ff5c */ 	bnezl	$at,.L0f16f668
/*  f16f8f8:	8fae0470 */ 	lw	$t6,0x470($sp)
.L0f16f8fc:
/*  f16f8fc:	8faf0474 */ 	lw	$t7,0x474($sp)
/*  f16f900:	8fac0054 */ 	lw	$t4,0x54($sp)
/*  f16f904:	8fab04a8 */ 	lw	$t3,0x4a8($sp)
/*  f16f908:	8fb80470 */ 	lw	$t8,0x470($sp)
/*  f16f90c:	01ecc821 */ 	addu	$t9,$t7,$t4
/*  f16f910:	8fac04bc */ 	lw	$t4,0x4bc($sp)
/*  f16f914:	8fad04a4 */ 	lw	$t5,0x4a4($sp)
/*  f16f918:	256f0002 */ 	addiu	$t7,$t3,0x2
/*  f16f91c:	01ec082a */ 	slt	$at,$t7,$t4
/*  f16f920:	030d7021 */ 	addu	$t6,$t8,$t5
/*  f16f924:	afaf04a8 */ 	sw	$t7,0x4a8($sp)
/*  f16f928:	afb90474 */ 	sw	$t9,0x474($sp)
/*  f16f92c:	1420ff3c */ 	bnez	$at,.L0f16f620
/*  f16f930:	afae0470 */ 	sw	$t6,0x470($sp)
.L0f16f934:
/*  f16f934:	8fb904a0 */ 	lw	$t9,0x4a0($sp)
/*  f16f938:	8fad049c */ 	lw	$t5,0x49c($sp)
/*  f16f93c:	0019c043 */ 	sra	$t8,$t9,0x1
/*  f16f940:	030d0019 */ 	multu	$t8,$t5
/*  f16f944:	00001012 */ 	mflo	$v0
/*  f16f948:	100000c5 */ 	beqz	$zero,.L0f16fc60
/*  f16f94c:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16f950:
/*  f16f950:	8fae04bc */ 	lw	$t6,0x4bc($sp)
/*  f16f954:	8fab04a0 */ 	lw	$t3,0x4a0($sp)
/*  f16f958:	afa004a8 */ 	sw	$zero,0x4a8($sp)
/*  f16f95c:	19c000b8 */ 	blez	$t6,.L0f16fc40
/*  f16f960:	000b7843 */ 	sra	$t7,$t3,0x1
/*  f16f964:	afaf0054 */ 	sw	$t7,0x54($sp)
.L0f16f968:
/*  f16f968:	8fb904a8 */ 	lw	$t9,0x4a8($sp)
/*  f16f96c:	8fac04bc */ 	lw	$t4,0x4bc($sp)
/*  f16f970:	0000b825 */ 	or	$s7,$zero,$zero
/*  f16f974:	27380001 */ 	addiu	$t8,$t9,0x1
/*  f16f978:	030c082a */ 	slt	$at,$t8,$t4
/*  f16f97c:	10200004 */ 	beqz	$at,.L0f16f990
/*  f16f980:	8fad04a4 */ 	lw	$t5,0x4a4($sp)
/*  f16f984:	000d7043 */ 	sra	$t6,$t5,0x1
/*  f16f988:	10000002 */ 	beqz	$zero,.L0f16f994
/*  f16f98c:	afae0480 */ 	sw	$t6,0x480($sp)
.L0f16f990:
/*  f16f990:	afa00480 */ 	sw	$zero,0x480($sp)
.L0f16f994:
/*  f16f994:	8fab04a4 */ 	lw	$t3,0x4a4($sp)
/*  f16f998:	5960009c */ 	blezl	$t3,.L0f16fc0c
/*  f16f99c:	8fae0474 */ 	lw	$t6,0x474($sp)
/*  f16f9a0:	8faf0470 */ 	lw	$t7,0x470($sp)
.L0f16f9a4:
/*  f16f9a4:	00174043 */ 	sra	$t0,$s7,0x1
/*  f16f9a8:	8fab04b8 */ 	lw	$t3,0x4b8($sp)
/*  f16f9ac:	010fc821 */ 	addu	$t9,$t0,$t7
/*  f16f9b0:	93220000 */ 	lbu	$v0,0x0($t9)
/*  f16f9b4:	8fa504c4 */ 	lw	$a1,0x4c4($sp)
/*  f16f9b8:	26ef0001 */ 	addiu	$t7,$s7,0x1
/*  f16f9bc:	00026103 */ 	sra	$t4,$v0,0x4
/*  f16f9c0:	3198000f */ 	andi	$t8,$t4,0xf
/*  f16f9c4:	00186840 */ 	sll	$t5,$t8,0x1
/*  f16f9c8:	01eb182a */ 	slt	$v1,$t7,$t3
/*  f16f9cc:	0062c807 */ 	srav	$t9,$v0,$v1
/*  f16f9d0:	00ad7021 */ 	addu	$t6,$a1,$t5
/*  f16f9d4:	13200003 */ 	beqz	$t9,.L0f16f9e4
/*  f16f9d8:	95d50000 */ 	lhu	$s5,0x0($t6)
/*  f16f9dc:	10000002 */ 	beqz	$zero,.L0f16f9e8
/*  f16f9e0:	00005025 */ 	or	$t2,$zero,$zero
.L0f16f9e4:
/*  f16f9e4:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16f9e8:
/*  f16f9e8:	8fae0480 */ 	lw	$t6,0x480($sp)
/*  f16f9ec:	8faf0470 */ 	lw	$t7,0x470($sp)
/*  f16f9f0:	8fa404c4 */ 	lw	$a0,0x4c4($sp)
/*  f16f9f4:	010e5821 */ 	addu	$t3,$t0,$t6
/*  f16f9f8:	016fc821 */ 	addu	$t9,$t3,$t7
/*  f16f9fc:	93220000 */ 	lbu	$v0,0x0($t9)
/*  f16fa00:	314c000f */ 	andi	$t4,$t2,0xf
/*  f16fa04:	000cc040 */ 	sll	$t8,$t4,0x1
/*  f16fa08:	00986821 */ 	addu	$t5,$a0,$t8
/*  f16fa0c:	00026103 */ 	sra	$t4,$v0,0x4
/*  f16fa10:	95b10000 */ 	lhu	$s1,0x0($t5)
/*  f16fa14:	3198000f */ 	andi	$t8,$t4,0xf
/*  f16fa18:	00186840 */ 	sll	$t5,$t8,0x1
/*  f16fa1c:	008d7021 */ 	addu	$t6,$a0,$t5
/*  f16fa20:	00625807 */ 	srav	$t3,$v0,$v1
/*  f16fa24:	11600003 */ 	beqz	$t3,.L0f16fa34
/*  f16fa28:	95d20000 */ 	lhu	$s2,0x0($t6)
/*  f16fa2c:	10000002 */ 	beqz	$zero,.L0f16fa38
/*  f16fa30:	00005025 */ 	or	$t2,$zero,$zero
.L0f16fa34:
/*  f16fa34:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16fa38:
/*  f16fa38:	314f000f */ 	andi	$t7,$t2,0xf
/*  f16fa3c:	000fc840 */ 	sll	$t9,$t7,0x1
/*  f16fa40:	00996021 */ 	addu	$t4,$a0,$t9
/*  f16fa44:	95890000 */ 	lhu	$t1,0x0($t4)
/*  f16fa48:	0015c203 */ 	sra	$t8,$s5,0x8
/*  f16fa4c:	00117203 */ 	sra	$t6,$s1,0x8
/*  f16fa50:	31cb00ff */ 	andi	$t3,$t6,0xff
/*  f16fa54:	330d00ff */ 	andi	$t5,$t8,0xff
/*  f16fa58:	01ab7821 */ 	addu	$t7,$t5,$t3
/*  f16fa5c:	0012ca03 */ 	sra	$t9,$s2,0x8
/*  f16fa60:	332c00ff */ 	andi	$t4,$t9,0xff
/*  f16fa64:	00097203 */ 	sra	$t6,$t1,0x8
/*  f16fa68:	31cd00ff */ 	andi	$t5,$t6,0xff
/*  f16fa6c:	01ecc021 */ 	addu	$t8,$t7,$t4
/*  f16fa70:	030d3021 */ 	addu	$a2,$t8,$t5
/*  f16fa74:	00065883 */ 	sra	$t3,$a2,0x2
/*  f16fa78:	322c00ff */ 	andi	$t4,$s1,0xff
/*  f16fa7c:	32af00ff */ 	andi	$t7,$s5,0xff
/*  f16fa80:	01ec7021 */ 	addu	$t6,$t7,$t4
/*  f16fa84:	316600ff */ 	andi	$a2,$t3,0xff
/*  f16fa88:	325800ff */ 	andi	$t8,$s2,0xff
/*  f16fa8c:	01d86821 */ 	addu	$t5,$t6,$t8
/*  f16fa90:	312b00ff */ 	andi	$t3,$t1,0xff
/*  f16fa94:	01ab3821 */ 	addu	$a3,$t5,$t3
/*  f16fa98:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16fa9c:	0007c883 */ 	sra	$t9,$a3,0x2
/*  f16faa0:	332700ff */ 	andi	$a3,$t9,0xff
/*  f16faa4:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16faa8:	02a01025 */ 	or	$v0,$s5,$zero
/*  f16faac:	02201825 */ 	or	$v1,$s1,$zero
/*  f16fab0:	0fc5bf54 */ 	jal	func0f16fd50
/*  f16fab4:	02404025 */ 	or	$t0,$s2,$zero
/*  f16fab8:	8fac0474 */ 	lw	$t4,0x474($sp)
/*  f16fabc:	8fa60470 */ 	lw	$a2,0x470($sp)
/*  f16fac0:	00177083 */ 	sra	$t6,$s7,0x2
/*  f16fac4:	26e80002 */ 	addiu	$t0,$s7,0x2
/*  f16fac8:	8fa504c4 */ 	lw	$a1,0x4c4($sp)
/*  f16facc:	0002c100 */ 	sll	$t8,$v0,0x4
/*  f16fad0:	00086843 */ 	sra	$t5,$t0,0x1
/*  f16fad4:	018ef021 */ 	addu	$s8,$t4,$t6
/*  f16fad8:	a3d80000 */ 	sb	$t8,0x0($s8)
/*  f16fadc:	01a65821 */ 	addu	$t3,$t5,$a2
/*  f16fae0:	91630000 */ 	lbu	$v1,0x0($t3)
/*  f16fae4:	8fb804b8 */ 	lw	$t8,0x4b8($sp)
/*  f16fae8:	01a04025 */ 	or	$t0,$t5,$zero
/*  f16faec:	0003c903 */ 	sra	$t9,$v1,0x4
/*  f16faf0:	332f000f */ 	andi	$t7,$t9,0xf
/*  f16faf4:	26ed0003 */ 	addiu	$t5,$s7,0x3
/*  f16faf8:	000f6040 */ 	sll	$t4,$t7,0x1
/*  f16fafc:	01b8202a */ 	slt	$a0,$t5,$t8
/*  f16fb00:	00ac7021 */ 	addu	$t6,$a1,$t4
/*  f16fb04:	00835807 */ 	srav	$t3,$v1,$a0
/*  f16fb08:	11600003 */ 	beqz	$t3,.L0f16fb18
/*  f16fb0c:	95d50000 */ 	lhu	$s5,0x0($t6)
/*  f16fb10:	10000002 */ 	beqz	$zero,.L0f16fb1c
/*  f16fb14:	00005025 */ 	or	$t2,$zero,$zero
.L0f16fb18:
/*  f16fb18:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16fb1c:
/*  f16fb1c:	8fae0480 */ 	lw	$t6,0x480($sp)
/*  f16fb20:	3159000f */ 	andi	$t9,$t2,0xf
/*  f16fb24:	00197840 */ 	sll	$t7,$t9,0x1
/*  f16fb28:	010ec021 */ 	addu	$t8,$t0,$t6
/*  f16fb2c:	03066821 */ 	addu	$t5,$t8,$a2
/*  f16fb30:	91a20000 */ 	lbu	$v0,0x0($t5)
/*  f16fb34:	00af6021 */ 	addu	$t4,$a1,$t7
/*  f16fb38:	95910000 */ 	lhu	$s1,0x0($t4)
/*  f16fb3c:	00025903 */ 	sra	$t3,$v0,0x4
/*  f16fb40:	3179000f */ 	andi	$t9,$t3,0xf
/*  f16fb44:	00197840 */ 	sll	$t7,$t9,0x1
/*  f16fb48:	00af6021 */ 	addu	$t4,$a1,$t7
/*  f16fb4c:	00827007 */ 	srav	$t6,$v0,$a0
/*  f16fb50:	11c00003 */ 	beqz	$t6,.L0f16fb60
/*  f16fb54:	95920000 */ 	lhu	$s2,0x0($t4)
/*  f16fb58:	10000002 */ 	beqz	$zero,.L0f16fb64
/*  f16fb5c:	00005025 */ 	or	$t2,$zero,$zero
.L0f16fb60:
/*  f16fb60:	240a0004 */ 	addiu	$t2,$zero,0x4
.L0f16fb64:
/*  f16fb64:	8fa404c4 */ 	lw	$a0,0x4c4($sp)
/*  f16fb68:	3158000f */ 	andi	$t8,$t2,0xf
/*  f16fb6c:	00186840 */ 	sll	$t5,$t8,0x1
/*  f16fb70:	008d5821 */ 	addu	$t3,$a0,$t5
/*  f16fb74:	95690000 */ 	lhu	$t1,0x0($t3)
/*  f16fb78:	0015ca03 */ 	sra	$t9,$s5,0x8
/*  f16fb7c:	00116203 */ 	sra	$t4,$s1,0x8
/*  f16fb80:	318e00ff */ 	andi	$t6,$t4,0xff
/*  f16fb84:	332f00ff */ 	andi	$t7,$t9,0xff
/*  f16fb88:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f16fb8c:	00126a03 */ 	sra	$t5,$s2,0x8
/*  f16fb90:	31ab00ff */ 	andi	$t3,$t5,0xff
/*  f16fb94:	00096203 */ 	sra	$t4,$t1,0x8
/*  f16fb98:	318f00ff */ 	andi	$t7,$t4,0xff
/*  f16fb9c:	030bc821 */ 	addu	$t9,$t8,$t3
/*  f16fba0:	032f3021 */ 	addu	$a2,$t9,$t7
/*  f16fba4:	00067083 */ 	sra	$t6,$a2,0x2
/*  f16fba8:	322b00ff */ 	andi	$t3,$s1,0xff
/*  f16fbac:	32b800ff */ 	andi	$t8,$s5,0xff
/*  f16fbb0:	030b6021 */ 	addu	$t4,$t8,$t3
/*  f16fbb4:	31c600ff */ 	andi	$a2,$t6,0xff
/*  f16fbb8:	325900ff */ 	andi	$t9,$s2,0xff
/*  f16fbbc:	01997821 */ 	addu	$t7,$t4,$t9
/*  f16fbc0:	312e00ff */ 	andi	$t6,$t1,0xff
/*  f16fbc4:	01ee3821 */ 	addu	$a3,$t7,$t6
/*  f16fbc8:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f16fbcc:	00076883 */ 	sra	$t5,$a3,0x2
/*  f16fbd0:	31a700ff */ 	andi	$a3,$t5,0xff
/*  f16fbd4:	8fa504c8 */ 	lw	$a1,0x4c8($sp)
/*  f16fbd8:	02a01025 */ 	or	$v0,$s5,$zero
/*  f16fbdc:	02201825 */ 	or	$v1,$s1,$zero
/*  f16fbe0:	0fc5bf54 */ 	jal	func0f16fd50
/*  f16fbe4:	02404025 */ 	or	$t0,$s2,$zero
/*  f16fbe8:	93cb0000 */ 	lbu	$t3,0x0($s8)
/*  f16fbec:	26f70004 */ 	addiu	$s7,$s7,0x4
/*  f16fbf0:	0162c825 */ 	or	$t9,$t3,$v0
/*  f16fbf4:	a3d90000 */ 	sb	$t9,0x0($s8)
/*  f16fbf8:	8faf04a4 */ 	lw	$t7,0x4a4($sp)
/*  f16fbfc:	02ef082a */ 	slt	$at,$s7,$t7
/*  f16fc00:	5420ff68 */ 	bnezl	$at,.L0f16f9a4
/*  f16fc04:	8faf0470 */ 	lw	$t7,0x470($sp)
/*  f16fc08:	8fae0474 */ 	lw	$t6,0x474($sp)
.L0f16fc0c:
/*  f16fc0c:	8fad0054 */ 	lw	$t5,0x54($sp)
/*  f16fc10:	8faf04a8 */ 	lw	$t7,0x4a8($sp)
/*  f16fc14:	8fab0470 */ 	lw	$t3,0x470($sp)
/*  f16fc18:	01cdc021 */ 	addu	$t8,$t6,$t5
/*  f16fc1c:	8fad04bc */ 	lw	$t5,0x4bc($sp)
/*  f16fc20:	8fac04a4 */ 	lw	$t4,0x4a4($sp)
/*  f16fc24:	25ee0002 */ 	addiu	$t6,$t7,0x2
/*  f16fc28:	01cd082a */ 	slt	$at,$t6,$t5
/*  f16fc2c:	016cc821 */ 	addu	$t9,$t3,$t4
/*  f16fc30:	afae04a8 */ 	sw	$t6,0x4a8($sp)
/*  f16fc34:	afb80474 */ 	sw	$t8,0x474($sp)
/*  f16fc38:	1420ff4b */ 	bnez	$at,.L0f16f968
/*  f16fc3c:	afb90470 */ 	sw	$t9,0x470($sp)
.L0f16fc40:
/*  f16fc40:	8fb804a0 */ 	lw	$t8,0x4a0($sp)
/*  f16fc44:	8fac049c */ 	lw	$t4,0x49c($sp)
/*  f16fc48:	00185843 */ 	sra	$t3,$t8,0x1
/*  f16fc4c:	016c0019 */ 	multu	$t3,$t4
/*  f16fc50:	00001012 */ 	mflo	$v0
/*  f16fc54:	10000002 */ 	beqz	$zero,.L0f16fc60
/*  f16fc58:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16fc5c:
/*  f16fc5c:	8fbf0044 */ 	lw	$ra,0x44($sp)
.L0f16fc60:
/*  f16fc60:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f16fc64:	8fb10024 */ 	lw	$s1,0x24($sp)
/*  f16fc68:	8fb20028 */ 	lw	$s2,0x28($sp)
/*  f16fc6c:	8fb3002c */ 	lw	$s3,0x2c($sp)
/*  f16fc70:	8fb40030 */ 	lw	$s4,0x30($sp)
/*  f16fc74:	8fb50034 */ 	lw	$s5,0x34($sp)
/*  f16fc78:	8fb60038 */ 	lw	$s6,0x38($sp)
/*  f16fc7c:	8fb7003c */ 	lw	$s7,0x3c($sp)
/*  f16fc80:	8fbe0040 */ 	lw	$s8,0x40($sp)
/*  f16fc84:	03e00008 */ 	jr	$ra
/*  f16fc88:	27bd04b0 */ 	addiu	$sp,$sp,0x4b0
);

GLOBAL_ASM(
glabel func0f16fc8c
/*  f16fc8c:	27bdfff0 */ 	addiu	$sp,$sp,-16
/*  f16fc90:	afb1000c */ 	sw	$s1,0xc($sp)
/*  f16fc94:	afb00008 */ 	sw	$s0,0x8($sp)
/*  f16fc98:	3c0205f5 */ 	lui	$v0,0x5f5
/*  f16fc9c:	00c08025 */ 	or	$s0,$a2,$zero
/*  f16fca0:	00e08825 */ 	or	$s1,$a3,$zero
/*  f16fca4:	00001825 */ 	or	$v1,$zero,$zero
/*  f16fca8:	3442e0ff */ 	ori	$v0,$v0,0xe0ff
/*  f16fcac:	18a00023 */ 	blez	$a1,.L0f16fd3c
/*  f16fcb0:	00004025 */ 	or	$t0,$zero,$zero
/*  f16fcb4:	00803025 */ 	or	$a2,$a0,$zero
/*  f16fcb8:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f16fcbc:	8fa90020 */ 	lw	$t1,0x20($sp)
.L0f16fcc0:
/*  f16fcc0:	90ce0000 */ 	lbu	$t6,0x0($a2)
/*  f16fcc4:	90cf0001 */ 	lbu	$t7,0x1($a2)
/*  f16fcc8:	90d90002 */ 	lbu	$t9,0x2($a2)
/*  f16fccc:	01d02023 */ 	subu	$a0,$t6,$s0
/*  f16fcd0:	00840019 */ 	multu	$a0,$a0
/*  f16fcd4:	01f12023 */ 	subu	$a0,$t7,$s1
/*  f16fcd8:	90cc0003 */ 	lbu	$t4,0x3($a2)
/*  f16fcdc:	00003812 */ 	mflo	$a3
/*  f16fce0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fce4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fce8:	00840019 */ 	multu	$a0,$a0
/*  f16fcec:	03292023 */ 	subu	$a0,$t9,$t1
/*  f16fcf0:	0000c012 */ 	mflo	$t8
/*  f16fcf4:	00f83821 */ 	addu	$a3,$a3,$t8
/*  f16fcf8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fcfc:	00840019 */ 	multu	$a0,$a0
/*  f16fd00:	018a2023 */ 	subu	$a0,$t4,$t2
/*  f16fd04:	00005812 */ 	mflo	$t3
/*  f16fd08:	00eb3821 */ 	addu	$a3,$a3,$t3
/*  f16fd0c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fd10:	00840019 */ 	multu	$a0,$a0
/*  f16fd14:	00006812 */ 	mflo	$t5
/*  f16fd18:	00ed3821 */ 	addu	$a3,$a3,$t5
/*  f16fd1c:	00e2082a */ 	slt	$at,$a3,$v0
/*  f16fd20:	50200004 */ 	beqzl	$at,.L0f16fd34
/*  f16fd24:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f16fd28:	01001825 */ 	or	$v1,$t0,$zero
/*  f16fd2c:	00e01025 */ 	or	$v0,$a3,$zero
/*  f16fd30:	25080001 */ 	addiu	$t0,$t0,0x1
.L0f16fd34:
/*  f16fd34:	1505ffe2 */ 	bne	$t0,$a1,.L0f16fcc0
/*  f16fd38:	24c60004 */ 	addiu	$a2,$a2,0x4
.L0f16fd3c:
/*  f16fd3c:	8fb00008 */ 	lw	$s0,0x8($sp)
/*  f16fd40:	8fb1000c */ 	lw	$s1,0xc($sp)
/*  f16fd44:	27bd0010 */ 	addiu	$sp,$sp,0x10
/*  f16fd48:	03e00008 */ 	jr	$ra
/*  f16fd4c:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16fd50
/*  f16fd50:	27bdfff0 */ 	addiu	$sp,$sp,-16
/*  f16fd54:	afb1000c */ 	sw	$s1,0xc($sp)
/*  f16fd58:	afb00008 */ 	sw	$s0,0x8($sp)
/*  f16fd5c:	3c0205f5 */ 	lui	$v0,0x5f5
/*  f16fd60:	00c08025 */ 	or	$s0,$a2,$zero
/*  f16fd64:	00e08825 */ 	or	$s1,$a3,$zero
/*  f16fd68:	00001825 */ 	or	$v1,$zero,$zero
/*  f16fd6c:	3442e0ff */ 	ori	$v0,$v0,0xe0ff
/*  f16fd70:	18a00017 */ 	blez	$a1,.L0f16fdd0
/*  f16fd74:	00004025 */ 	or	$t0,$zero,$zero
/*  f16fd78:	00803025 */ 	or	$a2,$a0,$zero
.L0f16fd7c:
/*  f16fd7c:	94c40000 */ 	lhu	$a0,0x0($a2)
/*  f16fd80:	00047203 */ 	sra	$t6,$a0,0x8
/*  f16fd84:	31cf00ff */ 	andi	$t7,$t6,0xff
/*  f16fd88:	01f03823 */ 	subu	$a3,$t7,$s0
/*  f16fd8c:	00e70019 */ 	multu	$a3,$a3
/*  f16fd90:	309800ff */ 	andi	$t8,$a0,0xff
/*  f16fd94:	03114823 */ 	subu	$t1,$t8,$s1
/*  f16fd98:	0000c812 */ 	mflo	$t9
/*  f16fd9c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fda0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fda4:	01290019 */ 	multu	$t1,$t1
/*  f16fda8:	00005812 */ 	mflo	$t3
/*  f16fdac:	032b5021 */ 	addu	$t2,$t9,$t3
/*  f16fdb0:	0142082a */ 	slt	$at,$t2,$v0
/*  f16fdb4:	50200004 */ 	beqzl	$at,.L0f16fdc8
/*  f16fdb8:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f16fdbc:	01001825 */ 	or	$v1,$t0,$zero
/*  f16fdc0:	01401025 */ 	or	$v0,$t2,$zero
/*  f16fdc4:	25080001 */ 	addiu	$t0,$t0,0x1
.L0f16fdc8:
/*  f16fdc8:	1505ffec */ 	bne	$t0,$a1,.L0f16fd7c
/*  f16fdcc:	24c60002 */ 	addiu	$a2,$a2,0x2
.L0f16fdd0:
/*  f16fdd0:	8fb00008 */ 	lw	$s0,0x8($sp)
/*  f16fdd4:	8fb1000c */ 	lw	$s1,0xc($sp)
/*  f16fdd8:	27bd0010 */ 	addiu	$sp,$sp,0x10
/*  f16fddc:	03e00008 */ 	jr	$ra
/*  f16fde0:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f16fde4
/*  f16fde4:	27bdcf58 */ 	addiu	$sp,$sp,-12456
/*  f16fde8:	afbf004c */ 	sw	$ra,0x4c($sp)
/*  f16fdec:	afbe0048 */ 	sw	$s8,0x48($sp)
/*  f16fdf0:	afb70044 */ 	sw	$s7,0x44($sp)
/*  f16fdf4:	afb60040 */ 	sw	$s6,0x40($sp)
/*  f16fdf8:	afb5003c */ 	sw	$s5,0x3c($sp)
/*  f16fdfc:	afb40038 */ 	sw	$s4,0x38($sp)
/*  f16fe00:	afb30034 */ 	sw	$s3,0x34($sp)
/*  f16fe04:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f16fe08:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f16fe0c:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f16fe10:	afa530ac */ 	sw	$a1,0x30ac($sp)
/*  f16fe14:	afa630b0 */ 	sw	$a2,0x30b0($sp)
/*  f16fe18:	afa730b4 */ 	sw	$a3,0x30b4($sp)
/*  f16fe1c:	afa00088 */ 	sw	$zero,0x88($sp)
/*  f16fe20:	0fc5cd48 */ 	jal	func0f173520
/*  f16fe24:	afa00070 */ 	sw	$zero,0x70($sp)
/*  f16fe28:	8fa930b0 */ 	lw	$t1,0x30b0($sp)
/*  f16fe2c:	8faa30b4 */ 	lw	$t2,0x30b4($sp)
/*  f16fe30:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f16fe34:	11200005 */ 	beqz	$t1,.L0f16fe4c
/*  f16fe38:	3c08800b */ 	lui	$t0,%hi(var800ab538)
/*  f16fe3c:	51400004 */ 	beqzl	$t2,.L0f16fe50
/*  f16fe40:	8faa30b4 */ 	lw	$t2,0x30b4($sp)
/*  f16fe44:	10000003 */ 	beqz	$zero,.L0f16fe54
/*  f16fe48:	afaa009c */ 	sw	$t2,0x9c($sp)
.L0f16fe4c:
/*  f16fe4c:	8faa30b4 */ 	lw	$t2,0x30b4($sp)
.L0f16fe50:
/*  f16fe50:	afae009c */ 	sw	$t6,0x9c($sp)
.L0f16fe54:
/*  f16fe54:	8fa730b8 */ 	lw	$a3,0x30b8($sp)
/*  f16fe58:	000ac940 */ 	sll	$t9,$t2,0x5
/*  f16fe5c:	00097940 */ 	sll	$t7,$t1,0x5
/*  f16fe60:	8ce3000c */ 	lw	$v1,0xc($a3)
/*  f16fe64:	31f80020 */ 	andi	$t8,$t7,0x20
/*  f16fe68:	2508b538 */ 	addiu	$t0,$t0,%lo(var800ab538)
/*  f16fe6c:	906b000b */ 	lbu	$t3,0xb($v1)
/*  f16fe70:	316cff1f */ 	andi	$t4,$t3,0xff1f
/*  f16fe74:	032c6825 */ 	or	$t5,$t9,$t4
/*  f16fe78:	a06d000b */ 	sb	$t5,0xb($v1)
/*  f16fe7c:	8ce3000c */ 	lw	$v1,0xc($a3)
/*  f16fe80:	906b000c */ 	lbu	$t3,0xc($v1)
/*  f16fe84:	3179ffdf */ 	andi	$t9,$t3,0xffdf
/*  f16fe88:	03196025 */ 	or	$t4,$t8,$t9
/*  f16fe8c:	11200017 */ 	beqz	$t1,.L0f16feec
/*  f16fe90:	a06c000c */ 	sb	$t4,0xc($v1)
/*  f16fe94:	8d050000 */ 	lw	$a1,0x0($t0)
/*  f16fe98:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f16fe9c:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f16fea0:	58a00013 */ 	blezl	$a1,.L0f16fef0
/*  f16fea4:	8fb9009c */ 	lw	$t9,0x9c($sp)
/*  f16fea8:	8ced000c */ 	lw	$t5,0xc($a3)
/*  f16feac:	3c0f800b */ 	lui	$t7,0x800b
/*  f16feb0:	25e2abd8 */ 	addiu	$v0,$t7,-21544
/*  f16feb4:	8da30000 */ 	lw	$v1,0x0($t5)
/*  f16feb8:	00055900 */ 	sll	$t3,$a1,0x4
/*  f16febc:	01622021 */ 	addu	$a0,$t3,$v0
/*  f16fec0:	00037502 */ 	srl	$t6,$v1,0x14
/*  f16fec4:	01c01825 */ 	or	$v1,$t6,$zero
/*  f16fec8:	84580000 */ 	lh	$t8,0x0($v0)
.L0f16fecc:
/*  f16fecc:	24420010 */ 	addiu	$v0,$v0,0x10
/*  f16fed0:	0044082b */ 	sltu	$at,$v0,$a0
/*  f16fed4:	14780002 */ 	bne	$v1,$t8,.L0f16fee0
/*  f16fed8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16fedc:	00003025 */ 	or	$a2,$zero,$zero
.L0f16fee0:
/*  f16fee0:	5420fffa */ 	bnezl	$at,.L0f16fecc
/*  f16fee4:	84580000 */ 	lh	$t8,0x0($v0)
/*  f16fee8:	afa60070 */ 	sw	$a2,0x70($sp)
.L0f16feec:
/*  f16feec:	8fb9009c */ 	lw	$t9,0x9c($sp)
.L0f16fef0:
/*  f16fef0:	3c08800b */ 	lui	$t0,%hi(var800ab538)
/*  f16fef4:	2508b538 */ 	addiu	$t0,$t0,%lo(var800ab538)
/*  f16fef8:	8fa60070 */ 	lw	$a2,0x70($sp)
/*  f16fefc:	1b2001a9 */ 	blez	$t9,.L0f1705a4
/*  f16ff00:	afa000a0 */ 	sw	$zero,0xa0($sp)
/*  f16ff04:	afa60070 */ 	sw	$a2,0x70($sp)
/*  f16ff08:	27be10a8 */ 	addiu	$s8,$sp,0x10a8
/*  f16ff0c:	8fb10084 */ 	lw	$s1,0x84($sp)
.L0f16ff10:
/*  f16ff10:	0fc5cd4f */ 	jal	func0f17353c
/*  f16ff14:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16ff18:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f16ff1c:	0fc5cd4f */ 	jal	func0f17353c
/*  f16ff20:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16ff24:	0040b025 */ 	or	$s6,$v0,$zero
/*  f16ff28:	0fc5cd4f */ 	jal	func0f17353c
/*  f16ff2c:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f16ff30:	0040b825 */ 	or	$s7,$v0,$zero
/*  f16ff34:	0fc5cd4f */ 	jal	func0f17353c
/*  f16ff38:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f16ff3c:	8fac00a0 */ 	lw	$t4,0xa0($sp)
/*  f16ff40:	8fa430b8 */ 	lw	$a0,0x30b8($sp)
/*  f16ff44:	8faf0070 */ 	lw	$t7,0x70($sp)
/*  f16ff48:	15800026 */ 	bnez	$t4,.L0f16ffe4
/*  f16ff4c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f16ff50:	8c8d000c */ 	lw	$t5,0xc($a0)
/*  f16ff54:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16ff58:	a1b60008 */ 	sb	$s6,0x8($t5)
/*  f16ff5c:	8c8e000c */ 	lw	$t6,0xc($a0)
/*  f16ff60:	a1d70009 */ 	sb	$s7,0x9($t6)
/*  f16ff64:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f16ff68:	8c83000c */ 	lw	$v1,0xc($a0)
/*  f16ff6c:	00145880 */ 	sll	$t3,$s4,0x2
/*  f16ff70:	01eb7821 */ 	addu	$t7,$t7,$t3
/*  f16ff74:	8df84288 */ 	lw	$t8,0x4288($t7)
/*  f16ff78:	906d000b */ 	lbu	$t5,0xb($v1)
/*  f16ff7c:	0160a025 */ 	or	$s4,$t3,$zero
/*  f16ff80:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f16ff84:	332c001c */ 	andi	$t4,$t9,0x1c
/*  f16ff88:	31aeffe3 */ 	andi	$t6,$t5,0xffe3
/*  f16ff8c:	018e5825 */ 	or	$t3,$t4,$t6
/*  f16ff90:	a06b000b */ 	sb	$t3,0xb($v1)
/*  f16ff94:	8c83000c */ 	lw	$v1,0xc($a0)
/*  f16ff98:	3c0f8008 */ 	lui	$t7,0x8008
/*  f16ff9c:	01f47821 */ 	addu	$t7,$t7,$s4
/*  f16ffa0:	8df842bc */ 	lw	$t8,0x42bc($t7)
/*  f16ffa4:	906d000b */ 	lbu	$t5,0xb($v1)
/*  f16ffa8:	3c0b8008 */ 	lui	$t3,0x8008
/*  f16ffac:	33190003 */ 	andi	$t9,$t8,0x3
/*  f16ffb0:	31acfffc */ 	andi	$t4,$t5,0xfffc
/*  f16ffb4:	032c7025 */ 	or	$t6,$t9,$t4
/*  f16ffb8:	a06e000b */ 	sb	$t6,0xb($v1)
/*  f16ffbc:	8c83000c */ 	lw	$v1,0xc($a0)
/*  f16ffc0:	01745821 */ 	addu	$t3,$t3,$s4
/*  f16ffc4:	8d6b42f0 */ 	lw	$t3,0x42f0($t3)
/*  f16ffc8:	906c000c */ 	lbu	$t4,0xc($v1)
/*  f16ffcc:	000bc383 */ 	sra	$t8,$t3,0xe
/*  f16ffd0:	0018c980 */ 	sll	$t9,$t8,0x6
/*  f16ffd4:	318eff3f */ 	andi	$t6,$t4,0xff3f
/*  f16ffd8:	032e5825 */ 	or	$t3,$t9,$t6
/*  f16ffdc:	1000000c */ 	beqz	$zero,.L0f170010
/*  f16ffe0:	a06b000c */ 	sb	$t3,0xc($v1)
.L0f16ffe4:
/*  f16ffe4:	11e0000a */ 	beqz	$t7,.L0f170010
/*  f16ffe8:	3c18800b */ 	lui	$t8,0x800b
/*  f16ffec:	8f18b538 */ 	lw	$t8,-0x4ac8($t8)
/*  f16fff0:	8fac00a0 */ 	lw	$t4,0xa0($sp)
/*  f16fff4:	3c0e800b */ 	lui	$t6,%hi(var800aabd8)
/*  f16fff8:	00186900 */ 	sll	$t5,$t8,0x4
/*  f16fffc:	25ceabd8 */ 	addiu	$t6,$t6,%lo(var800aabd8)
/*  f170000:	01acc821 */ 	addu	$t9,$t5,$t4
/*  f170004:	032e1821 */ 	addu	$v1,$t9,$t6
/*  f170008:	a0760001 */ 	sb	$s6,0x1($v1)
/*  f17000c:	a0770008 */ 	sb	$s7,0x8($v1)
.L0f170010:
/*  f170010:	02d70019 */ 	multu	$s6,$s7
/*  f170014:	00025880 */ 	sll	$t3,$v0,0x2
/*  f170018:	0000a812 */ 	mflo	$s5
/*  f17001c:	2aa12001 */ 	slti	$at,$s5,0x2001
/*  f170020:	54200004 */ 	bnezl	$at,.L0f170034
/*  f170024:	2c41000a */ 	sltiu	$at,$v0,0xa
/*  f170028:	100001a4 */ 	beqz	$zero,.L0f1706bc
/*  f17002c:	00001025 */ 	or	$v0,$zero,$zero
/*  f170030:	2c41000a */ 	sltiu	$at,$v0,0xa
.L0f170034:
/*  f170034:	10200131 */ 	beqz	$at,.L0f1704fc
/*  f170038:	3c017f1b */ 	lui	$at,%hi(var7f1b7a50)
/*  f17003c:	002b0821 */ 	addu	$at,$at,$t3
/*  f170040:	8c2b7a50 */ 	lw	$t3,%lo(var7f1b7a50)($at)
/*  f170044:	01600008 */ 	jr	$t3
/*  f170048:	00000000 */ 	sll	$zero,$zero,0x0
/*  f17004c:	8faf30ac */ 	lw	$t7,0x30ac($sp)
/*  f170050:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f170054:	02c02825 */ 	or	$a1,$s6,$zero
/*  f170058:	02e03025 */ 	or	$a2,$s7,$zero
/*  f17005c:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f170060:	0fc5c628 */ 	jal	func0f1718a0
/*  f170064:	01f82021 */ 	addu	$a0,$t7,$t8
/*  f170068:	10000124 */ 	beqz	$zero,.L0f1704fc
/*  f17006c:	00408825 */ 	or	$s1,$v0,$zero
/*  f170070:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f170074:	3c0c8008 */ 	lui	$t4,0x8008
/*  f170078:	3c068008 */ 	lui	$a2,0x8008
/*  f17007c:	00146880 */ 	sll	$t5,$s4,0x2
/*  f170080:	018d6021 */ 	addu	$t4,$t4,$t5
/*  f170084:	8d8c41b8 */ 	lw	$t4,0x41b8($t4)
/*  f170088:	00cd3021 */ 	addu	$a2,$a2,$t5
/*  f17008c:	8cc64220 */ 	lw	$a2,0x4220($a2)
/*  f170090:	01960019 */ 	multu	$t4,$s6
/*  f170094:	01a0a025 */ 	or	$s4,$t5,$zero
/*  f170098:	03c02025 */ 	or	$a0,$s8,$zero
/*  f17009c:	0000c812 */ 	mflo	$t9
/*  f1700a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1700a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1700a8:	03370019 */ 	multu	$t9,$s7
/*  f1700ac:	00002812 */ 	mflo	$a1
/*  f1700b0:	0fc5c46d */ 	jal	func0f1711b4
/*  f1700b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1700b8:	3c0e8008 */ 	lui	$t6,0x8008
/*  f1700bc:	01d47021 */ 	addu	$t6,$t6,$s4
/*  f1700c0:	8dce41ec */ 	lw	$t6,0x41ec($t6)
/*  f1700c4:	00155880 */ 	sll	$t3,$s5,0x2
/*  f1700c8:	01755823 */ 	subu	$t3,$t3,$s5
/*  f1700cc:	11c00003 */ 	beqz	$t6,.L0f1700dc
/*  f1700d0:	03cb2021 */ 	addu	$a0,$s8,$t3
/*  f1700d4:	0fc5c613 */ 	jal	func0f17184c
/*  f1700d8:	02a02825 */ 	or	$a1,$s5,$zero
.L0f1700dc:
/*  f1700dc:	8faf30ac */ 	lw	$t7,0x30ac($sp)
/*  f1700e0:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f1700e4:	8fad0080 */ 	lw	$t5,0x80($sp)
/*  f1700e8:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1700ec:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1700f0:	02e03025 */ 	or	$a2,$s7,$zero
/*  f1700f4:	01f83821 */ 	addu	$a3,$t7,$t8
/*  f1700f8:	0fc5c6ea */ 	jal	func0f171ba8
/*  f1700fc:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f170100:	100000fe */ 	beqz	$zero,.L0f1704fc
/*  f170104:	00408825 */ 	or	$s1,$v0,$zero
/*  f170108:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f17010c:	3c198008 */ 	lui	$t9,%hi(var800841b8)
/*  f170110:	273941b8 */ 	addiu	$t9,$t9,%lo(var800841b8)
/*  f170114:	00146080 */ 	sll	$t4,$s4,0x2
/*  f170118:	01999821 */ 	addu	$s3,$t4,$t9
/*  f17011c:	8e6e0000 */ 	lw	$t6,0x0($s3)
/*  f170120:	0180a025 */ 	or	$s4,$t4,$zero
/*  f170124:	00008025 */ 	or	$s0,$zero,$zero
/*  f170128:	19c00010 */ 	blez	$t6,.L0f17016c
/*  f17012c:	3c0b8008 */ 	lui	$t3,%hi(var80084220)
/*  f170130:	256b4220 */ 	addiu	$t3,$t3,%lo(var80084220)
/*  f170134:	018b9021 */ 	addu	$s2,$t4,$t3
/*  f170138:	03c08825 */ 	or	$s1,$s8,$zero
/*  f17013c:	02202025 */ 	or	$a0,$s1,$zero
.L0f170140:
/*  f170140:	02a02825 */ 	or	$a1,$s5,$zero
/*  f170144:	0fc5c46d */ 	jal	func0f1711b4
/*  f170148:	8e460000 */ 	lw	$a2,0x0($s2)
/*  f17014c:	02d70019 */ 	multu	$s6,$s7
/*  f170150:	8e780000 */ 	lw	$t8,0x0($s3)
/*  f170154:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f170158:	0218082a */ 	slt	$at,$s0,$t8
/*  f17015c:	00007812 */ 	mflo	$t7
/*  f170160:	022f8821 */ 	addu	$s1,$s1,$t7
/*  f170164:	5420fff6 */ 	bnezl	$at,.L0f170140
/*  f170168:	02202025 */ 	or	$a0,$s1,$zero
.L0f17016c:
/*  f17016c:	3c0d8008 */ 	lui	$t5,0x8008
/*  f170170:	01b46821 */ 	addu	$t5,$t5,$s4
/*  f170174:	8dad41ec */ 	lw	$t5,0x41ec($t5)
/*  f170178:	00156080 */ 	sll	$t4,$s5,0x2
/*  f17017c:	01956023 */ 	subu	$t4,$t4,$s5
/*  f170180:	11a00003 */ 	beqz	$t5,.L0f170190
/*  f170184:	03cc2021 */ 	addu	$a0,$s8,$t4
/*  f170188:	0fc5c613 */ 	jal	func0f17184c
/*  f17018c:	02a02825 */ 	or	$a1,$s5,$zero
.L0f170190:
/*  f170190:	8fb930ac */ 	lw	$t9,0x30ac($sp)
/*  f170194:	8fae0088 */ 	lw	$t6,0x88($sp)
/*  f170198:	8fab0080 */ 	lw	$t3,0x80($sp)
/*  f17019c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1701a0:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1701a4:	02e03025 */ 	or	$a2,$s7,$zero
/*  f1701a8:	032e3821 */ 	addu	$a3,$t9,$t6
/*  f1701ac:	0fc5c6ea */ 	jal	func0f171ba8
/*  f1701b0:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f1701b4:	100000d1 */ 	beqz	$zero,.L0f1704fc
/*  f1701b8:	00408825 */ 	or	$s1,$v0,$zero
/*  f1701bc:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f1701c0:	3c188008 */ 	lui	$t8,0x8008
/*  f1701c4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1701c8:	00147880 */ 	sll	$t7,$s4,0x2
/*  f1701cc:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f1701d0:	8f1841b8 */ 	lw	$t8,0x41b8($t8)
/*  f1701d4:	01e0a025 */ 	or	$s4,$t7,$zero
/*  f1701d8:	03160019 */ 	multu	$t8,$s6
/*  f1701dc:	00006812 */ 	mflo	$t5
/*  f1701e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1701e4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1701e8:	01b70019 */ 	multu	$t5,$s7
/*  f1701ec:	00002812 */ 	mflo	$a1
/*  f1701f0:	0fc5c556 */ 	jal	func0f171558
/*  f1701f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1701f8:	3c0c8008 */ 	lui	$t4,0x8008
/*  f1701fc:	01946021 */ 	addu	$t4,$t4,$s4
/*  f170200:	8d8c41ec */ 	lw	$t4,0x41ec($t4)
/*  f170204:	0015c880 */ 	sll	$t9,$s5,0x2
/*  f170208:	0335c823 */ 	subu	$t9,$t9,$s5
/*  f17020c:	11800003 */ 	beqz	$t4,.L0f17021c
/*  f170210:	03d92021 */ 	addu	$a0,$s8,$t9
/*  f170214:	0fc5c613 */ 	jal	func0f17184c
/*  f170218:	02a02825 */ 	or	$a1,$s5,$zero
.L0f17021c:
/*  f17021c:	8fae30ac */ 	lw	$t6,0x30ac($sp)
/*  f170220:	8fab0088 */ 	lw	$t3,0x88($sp)
/*  f170224:	8faf0080 */ 	lw	$t7,0x80($sp)
/*  f170228:	03c02025 */ 	or	$a0,$s8,$zero
/*  f17022c:	02c02825 */ 	or	$a1,$s6,$zero
/*  f170230:	02e03025 */ 	or	$a2,$s7,$zero
/*  f170234:	01cb3821 */ 	addu	$a3,$t6,$t3
/*  f170238:	0fc5c6ea */ 	jal	func0f171ba8
/*  f17023c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f170240:	100000ae */ 	beqz	$zero,.L0f1704fc
/*  f170244:	00408825 */ 	or	$s1,$v0,$zero
/*  f170248:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f17024c:	3c058008 */ 	lui	$a1,0x8008
/*  f170250:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f170254:	00186880 */ 	sll	$t5,$t8,0x2
/*  f170258:	00ad2821 */ 	addu	$a1,$a1,$t5
/*  f17025c:	0fc5c5c9 */ 	jal	func0f171724
/*  f170260:	8ca54254 */ 	lw	$a1,0x4254($a1)
/*  f170264:	8fac30ac */ 	lw	$t4,0x30ac($sp)
/*  f170268:	8fb90088 */ 	lw	$t9,0x88($sp)
/*  f17026c:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f170270:	02c02025 */ 	or	$a0,$s6,$zero
/*  f170274:	02e02825 */ 	or	$a1,$s7,$zero
/*  f170278:	27a700a8 */ 	addiu	$a3,$sp,0xa8
/*  f17027c:	afa20010 */ 	sw	$v0,0x10($sp)
/*  f170280:	01993021 */ 	addu	$a2,$t4,$t9
/*  f170284:	0fc5c863 */ 	jal	func0f17218c
/*  f170288:	afae0014 */ 	sw	$t6,0x14($sp)
/*  f17028c:	1000009b */ 	beqz	$zero,.L0f1704fc
/*  f170290:	00408825 */ 	or	$s1,$v0,$zero
/*  f170294:	8fab0080 */ 	lw	$t3,0x80($sp)
/*  f170298:	3c058008 */ 	lui	$a1,0x8008
/*  f17029c:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f1702a0:	000b7880 */ 	sll	$t7,$t3,0x2
/*  f1702a4:	00af2821 */ 	addu	$a1,$a1,$t7
/*  f1702a8:	0fc5c5c9 */ 	jal	func0f171724
/*  f1702ac:	8ca54254 */ 	lw	$a1,0x4254($a1)
/*  f1702b0:	00408025 */ 	or	$s0,$v0,$zero
/*  f1702b4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1702b8:	02a02825 */ 	or	$a1,$s5,$zero
/*  f1702bc:	0fc5c46d */ 	jal	func0f1711b4
/*  f1702c0:	00403025 */ 	or	$a2,$v0,$zero
/*  f1702c4:	8fb830ac */ 	lw	$t8,0x30ac($sp)
/*  f1702c8:	8fad0088 */ 	lw	$t5,0x88($sp)
/*  f1702cc:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f1702d0:	27ac00a8 */ 	addiu	$t4,$sp,0xa8
/*  f1702d4:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f1702d8:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1702dc:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1702e0:	02e03025 */ 	or	$a2,$s7,$zero
/*  f1702e4:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f1702e8:	030d3821 */ 	addu	$a3,$t8,$t5
/*  f1702ec:	0fc5c955 */ 	jal	func0f172554
/*  f1702f0:	afb90018 */ 	sw	$t9,0x18($sp)
/*  f1702f4:	10000081 */ 	beqz	$zero,.L0f1704fc
/*  f1702f8:	00408825 */ 	or	$s1,$v0,$zero
/*  f1702fc:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f170300:	3c058008 */ 	lui	$a1,0x8008
/*  f170304:	27a400a8 */ 	addiu	$a0,$sp,0xa8
/*  f170308:	000e5880 */ 	sll	$t3,$t6,0x2
/*  f17030c:	00ab2821 */ 	addu	$a1,$a1,$t3
/*  f170310:	0fc5c5c9 */ 	jal	func0f171724
/*  f170314:	8ca54254 */ 	lw	$a1,0x4254($a1)
/*  f170318:	00408025 */ 	or	$s0,$v0,$zero
/*  f17031c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f170320:	0fc5c556 */ 	jal	func0f171558
/*  f170324:	02a02825 */ 	or	$a1,$s5,$zero
/*  f170328:	8faf30ac */ 	lw	$t7,0x30ac($sp)
/*  f17032c:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f170330:	8fac0080 */ 	lw	$t4,0x80($sp)
/*  f170334:	27ad00a8 */ 	addiu	$t5,$sp,0xa8
/*  f170338:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f17033c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f170340:	02c02825 */ 	or	$a1,$s6,$zero
/*  f170344:	02e03025 */ 	or	$a2,$s7,$zero
/*  f170348:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f17034c:	01f83821 */ 	addu	$a3,$t7,$t8
/*  f170350:	0fc5c955 */ 	jal	func0f172554
/*  f170354:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f170358:	10000068 */ 	beqz	$zero,.L0f1704fc
/*  f17035c:	00408825 */ 	or	$s1,$v0,$zero
/*  f170360:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f170364:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f170368:	0014c880 */ 	sll	$t9,$s4,0x2
/*  f17036c:	0fc5cd4f */ 	jal	func0f17353c
/*  f170370:	0320a025 */ 	or	$s4,$t9,$zero
/*  f170374:	3c0e8008 */ 	lui	$t6,%hi(var800841b8)
/*  f170378:	25ce41b8 */ 	addiu	$t6,$t6,%lo(var800841b8)
/*  f17037c:	028e9821 */ 	addu	$s3,$s4,$t6
/*  f170380:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f170384:	3c188008 */ 	lui	$t8,%hi(var80084220)
/*  f170388:	27184220 */ 	addiu	$t8,$t8,%lo(var80084220)
/*  f17038c:	01760019 */ 	multu	$t3,$s6
/*  f170390:	02989021 */ 	addu	$s2,$s4,$t8
/*  f170394:	00408025 */ 	or	$s0,$v0,$zero
/*  f170398:	8e460000 */ 	lw	$a2,0x0($s2)
/*  f17039c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1703a0:	00007812 */ 	mflo	$t7
/*  f1703a4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1703a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1703ac:	01f70019 */ 	multu	$t7,$s7
/*  f1703b0:	00002812 */ 	mflo	$a1
/*  f1703b4:	0fc5c46d */ 	jal	func0f1711b4
/*  f1703b8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1703bc:	8e6d0000 */ 	lw	$t5,0x0($s3)
/*  f1703c0:	8e4c0000 */ 	lw	$t4,0x0($s2)
/*  f1703c4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1703c8:	01b70019 */ 	multu	$t5,$s7
/*  f1703cc:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1703d0:	02003825 */ 	or	$a3,$s0,$zero
/*  f1703d4:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f1703d8:	00003012 */ 	mflo	$a2
/*  f1703dc:	0fc5cad7 */ 	jal	func0f172b5c
/*  f1703e0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1703e4:	3c198008 */ 	lui	$t9,0x8008
/*  f1703e8:	0334c821 */ 	addu	$t9,$t9,$s4
/*  f1703ec:	8f3941ec */ 	lw	$t9,0x41ec($t9)
/*  f1703f0:	00157080 */ 	sll	$t6,$s5,0x2
/*  f1703f4:	01d57023 */ 	subu	$t6,$t6,$s5
/*  f1703f8:	13200003 */ 	beqz	$t9,.L0f170408
/*  f1703fc:	03ce2021 */ 	addu	$a0,$s8,$t6
/*  f170400:	0fc5c613 */ 	jal	func0f17184c
/*  f170404:	02a02825 */ 	or	$a1,$s5,$zero
.L0f170408:
/*  f170408:	8fab30ac */ 	lw	$t3,0x30ac($sp)
/*  f17040c:	8faf0088 */ 	lw	$t7,0x88($sp)
/*  f170410:	8fb80080 */ 	lw	$t8,0x80($sp)
/*  f170414:	03c02025 */ 	or	$a0,$s8,$zero
/*  f170418:	02c02825 */ 	or	$a1,$s6,$zero
/*  f17041c:	02e03025 */ 	or	$a2,$s7,$zero
/*  f170420:	016f3821 */ 	addu	$a3,$t3,$t7
/*  f170424:	0fc5c6ea */ 	jal	func0f171ba8
/*  f170428:	afb80010 */ 	sw	$t8,0x10($sp)
/*  f17042c:	10000033 */ 	beqz	$zero,.L0f1704fc
/*  f170430:	00408825 */ 	or	$s1,$v0,$zero
/*  f170434:	8fb40080 */ 	lw	$s4,0x80($sp)
/*  f170438:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f17043c:	00146880 */ 	sll	$t5,$s4,0x2
/*  f170440:	0fc5cd4f */ 	jal	func0f17353c
/*  f170444:	01a0a025 */ 	or	$s4,$t5,$zero
/*  f170448:	3c0c8008 */ 	lui	$t4,%hi(var800841b8)
/*  f17044c:	258c41b8 */ 	addiu	$t4,$t4,%lo(var800841b8)
/*  f170450:	028c9821 */ 	addu	$s3,$s4,$t4
/*  f170454:	8e790000 */ 	lw	$t9,0x0($s3)
/*  f170458:	00408025 */ 	or	$s0,$v0,$zero
/*  f17045c:	03c02025 */ 	or	$a0,$s8,$zero
/*  f170460:	03360019 */ 	multu	$t9,$s6
/*  f170464:	00007012 */ 	mflo	$t6
/*  f170468:	00000000 */ 	sll	$zero,$zero,0x0
/*  f17046c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f170470:	01d70019 */ 	multu	$t6,$s7
/*  f170474:	00002812 */ 	mflo	$a1
/*  f170478:	0fc5c556 */ 	jal	func0f171558
/*  f17047c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f170480:	8e6b0000 */ 	lw	$t3,0x0($s3)
/*  f170484:	3c0f8008 */ 	lui	$t7,0x8008
/*  f170488:	01f47821 */ 	addu	$t7,$t7,$s4
/*  f17048c:	01770019 */ 	multu	$t3,$s7
/*  f170490:	8def4220 */ 	lw	$t7,0x4220($t7)
/*  f170494:	03c02025 */ 	or	$a0,$s8,$zero
/*  f170498:	02c02825 */ 	or	$a1,$s6,$zero
/*  f17049c:	02003825 */ 	or	$a3,$s0,$zero
/*  f1704a0:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f1704a4:	00003012 */ 	mflo	$a2
/*  f1704a8:	0fc5cad7 */ 	jal	func0f172b5c
/*  f1704ac:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1704b0:	3c188008 */ 	lui	$t8,0x8008
/*  f1704b4:	0314c021 */ 	addu	$t8,$t8,$s4
/*  f1704b8:	8f1841ec */ 	lw	$t8,0x41ec($t8)
/*  f1704bc:	00156880 */ 	sll	$t5,$s5,0x2
/*  f1704c0:	01b56823 */ 	subu	$t5,$t5,$s5
/*  f1704c4:	13000003 */ 	beqz	$t8,.L0f1704d4
/*  f1704c8:	03cd2021 */ 	addu	$a0,$s8,$t5
/*  f1704cc:	0fc5c613 */ 	jal	func0f17184c
/*  f1704d0:	02a02825 */ 	or	$a1,$s5,$zero
.L0f1704d4:
/*  f1704d4:	8fac30ac */ 	lw	$t4,0x30ac($sp)
/*  f1704d8:	8fb90088 */ 	lw	$t9,0x88($sp)
/*  f1704dc:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f1704e0:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1704e4:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1704e8:	02e03025 */ 	or	$a2,$s7,$zero
/*  f1704ec:	01993821 */ 	addu	$a3,$t4,$t9
/*  f1704f0:	0fc5c6ea */ 	jal	func0f171ba8
/*  f1704f4:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f1704f8:	00408825 */ 	or	$s1,$v0,$zero
.L0f1704fc:
/*  f1704fc:	8fab30b0 */ 	lw	$t3,0x30b0($sp)
/*  f170500:	24010001 */ 	addiu	$at,$zero,0x1
/*  f170504:	8faf30ac */ 	lw	$t7,0x30ac($sp)
/*  f170508:	15610006 */ 	bne	$t3,$at,.L0f170524
/*  f17050c:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f170510:	01f82021 */ 	addu	$a0,$t7,$t8
/*  f170514:	02c02825 */ 	or	$a1,$s6,$zero
/*  f170518:	02e03025 */ 	or	$a2,$s7,$zero
/*  f17051c:	0fc5ca7e */ 	jal	func0f1729f8
/*  f170520:	8fa70080 */ 	lw	$a3,0x80($sp)
.L0f170524:
/*  f170524:	3c02800b */ 	lui	$v0,%hi(var800ab548)
/*  f170528:	8fac0088 */ 	lw	$t4,0x88($sp)
/*  f17052c:	2442b548 */ 	addiu	$v0,$v0,%lo(var800ab548)
/*  f170530:	8c4e0000 */ 	lw	$t6,0x0($v0)
/*  f170534:	26310007 */ 	addiu	$s1,$s1,0x7
/*  f170538:	2401fff8 */ 	addiu	$at,$zero,-8
/*  f17053c:	02216824 */ 	and	$t5,$s1,$at
/*  f170540:	018dc821 */ 	addu	$t9,$t4,$t5
/*  f170544:	01a08825 */ 	or	$s1,$t5,$zero
/*  f170548:	15c00007 */ 	bnez	$t6,.L0f170568
/*  f17054c:	afb90088 */ 	sw	$t9,0x88($sp)
/*  f170550:	3c0b800b */ 	lui	$t3,0x800b
/*  f170554:	8d6bb540 */ 	lw	$t3,-0x4ac0($t3)
/*  f170558:	3c01800b */ 	lui	$at,0x800b
/*  f17055c:	256f0001 */ 	addiu	$t7,$t3,0x1
/*  f170560:	10000002 */ 	beqz	$zero,.L0f17056c
/*  f170564:	ac2fb540 */ 	sw	$t7,-0x4ac0($at)
.L0f170568:
/*  f170568:	ac400000 */ 	sw	$zero,0x0($v0)
.L0f17056c:
/*  f17056c:	8fb800a0 */ 	lw	$t8,0xa0($sp)
/*  f170570:	8fac009c */ 	lw	$t4,0x9c($sp)
/*  f170574:	270d0001 */ 	addiu	$t5,$t8,0x1
/*  f170578:	15acfe65 */ 	bne	$t5,$t4,.L0f16ff10
/*  f17057c:	afad00a0 */ 	sw	$t5,0xa0($sp)
/*  f170580:	3c08800b */ 	lui	$t0,%hi(var800ab538)
/*  f170584:	2508b538 */ 	addiu	$t0,$t0,%lo(var800ab538)
/*  f170588:	afb10084 */ 	sw	$s1,0x84($sp)
/*  f17058c:	afb60098 */ 	sw	$s6,0x98($sp)
/*  f170590:	afb70094 */ 	sw	$s7,0x94($sp)
/*  f170594:	8faa30b4 */ 	lw	$t2,0x30b4($sp)
/*  f170598:	8fa930b0 */ 	lw	$t1,0x30b0($sp)
/*  f17059c:	8fa730b8 */ 	lw	$a3,0x30b8($sp)
/*  f1705a0:	8fa60070 */ 	lw	$a2,0x70($sp)
.L0f1705a4:
/*  f1705a4:	8fb60098 */ 	lw	$s6,0x98($sp)
/*  f1705a8:	10c0000e */ 	beqz	$a2,.L0f1705e4
/*  f1705ac:	8fb70094 */ 	lw	$s7,0x94($sp)
/*  f1705b0:	8cf9000c */ 	lw	$t9,0xc($a3)
/*  f1705b4:	8d050000 */ 	lw	$a1,0x0($t0)
/*  f1705b8:	3c01800b */ 	lui	$at,0x800b
/*  f1705bc:	8f2e0000 */ 	lw	$t6,0x0($t9)
/*  f1705c0:	00057900 */ 	sll	$t7,$a1,0x4
/*  f1705c4:	002f0821 */ 	addu	$at,$at,$t7
/*  f1705c8:	000e5d02 */ 	srl	$t3,$t6,0x14
/*  f1705cc:	a42babd8 */ 	sh	$t3,-0x5428($at)
/*  f1705d0:	24b80001 */ 	addiu	$t8,$a1,0x1
/*  f1705d4:	2b010096 */ 	slti	$at,$t8,0x96
/*  f1705d8:	14200002 */ 	bnez	$at,.L0f1705e4
/*  f1705dc:	ad180000 */ 	sw	$t8,0x0($t0)
/*  f1705e0:	ad000000 */ 	sw	$zero,0x0($t0)
.L0f1705e4:
/*  f1705e4:	15200034 */ 	bnez	$t1,.L0f1706b8
/*  f1705e8:	29410002 */ 	slti	$at,$t2,0x2
/*  f1705ec:	1420002e */ 	bnez	$at,.L0f1706a8
/*  f1705f0:	8fa430ac */ 	lw	$a0,0x30ac($sp)
/*  f1705f4:	8fb430ac */ 	lw	$s4,0x30ac($sp)
/*  f1705f8:	8fac0088 */ 	lw	$t4,0x88($sp)
/*  f1705fc:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f170600:	29410002 */ 	slti	$at,$t2,0x2
/*  f170604:	02c09025 */ 	or	$s2,$s6,$zero
/*  f170608:	02e09825 */ 	or	$s3,$s7,$zero
/*  f17060c:	afb900a0 */ 	sw	$t9,0xa0($sp)
/*  f170610:	1420001e */ 	bnez	$at,.L0f17068c
/*  f170614:	028c8021 */ 	addu	$s0,$s4,$t4
.L0f170618:
/*  f170618:	8fae0080 */ 	lw	$t6,0x80($sp)
/*  f17061c:	02802025 */ 	or	$a0,$s4,$zero
/*  f170620:	02002825 */ 	or	$a1,$s0,$zero
/*  f170624:	02403025 */ 	or	$a2,$s2,$zero
/*  f170628:	02603825 */ 	or	$a3,$s3,$zero
/*  f17062c:	0fc5c1bb */ 	jal	func0f1706ec
/*  f170630:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f170634:	00408825 */ 	or	$s1,$v0,$zero
/*  f170638:	02802025 */ 	or	$a0,$s4,$zero
/*  f17063c:	02402825 */ 	or	$a1,$s2,$zero
/*  f170640:	02603025 */ 	or	$a2,$s3,$zero
/*  f170644:	0fc5ca7e */ 	jal	func0f1729f8
/*  f170648:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f17064c:	8fac00a0 */ 	lw	$t4,0xa0($sp)
/*  f170650:	8fab0088 */ 	lw	$t3,0x88($sp)
/*  f170654:	8fae30b4 */ 	lw	$t6,0x30b4($sp)
/*  f170658:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f17065c:	26730001 */ 	addiu	$s3,$s3,0x1
/*  f170660:	0012c043 */ 	sra	$t8,$s2,0x1
/*  f170664:	00136843 */ 	sra	$t5,$s3,0x1
/*  f170668:	0200a025 */ 	or	$s4,$s0,$zero
/*  f17066c:	25990001 */ 	addiu	$t9,$t4,0x1
/*  f170670:	01717821 */ 	addu	$t7,$t3,$s1
/*  f170674:	afb900a0 */ 	sw	$t9,0xa0($sp)
/*  f170678:	afaf0088 */ 	sw	$t7,0x88($sp)
/*  f17067c:	03009025 */ 	or	$s2,$t8,$zero
/*  f170680:	01a09825 */ 	or	$s3,$t5,$zero
/*  f170684:	172effe4 */ 	bne	$t9,$t6,.L0f170618
/*  f170688:	02118021 */ 	addu	$s0,$s0,$s1
.L0f17068c:
/*  f17068c:	02802025 */ 	or	$a0,$s4,$zero
/*  f170690:	02402825 */ 	or	$a1,$s2,$zero
/*  f170694:	02603025 */ 	or	$a2,$s3,$zero
/*  f170698:	0fc5ca7e */ 	jal	func0f1729f8
/*  f17069c:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f1706a0:	10000006 */ 	beqz	$zero,.L0f1706bc
/*  f1706a4:	8fa20088 */ 	lw	$v0,0x88($sp)
.L0f1706a8:
/*  f1706a8:	02c02825 */ 	or	$a1,$s6,$zero
/*  f1706ac:	02e03025 */ 	or	$a2,$s7,$zero
/*  f1706b0:	0fc5ca7e */ 	jal	func0f1729f8
/*  f1706b4:	8fa70080 */ 	lw	$a3,0x80($sp)
.L0f1706b8:
/*  f1706b8:	8fa20088 */ 	lw	$v0,0x88($sp)
.L0f1706bc:
/*  f1706bc:	8fbf004c */ 	lw	$ra,0x4c($sp)
/*  f1706c0:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f1706c4:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f1706c8:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f1706cc:	8fb30034 */ 	lw	$s3,0x34($sp)
/*  f1706d0:	8fb40038 */ 	lw	$s4,0x38($sp)
/*  f1706d4:	8fb5003c */ 	lw	$s5,0x3c($sp)
/*  f1706d8:	8fb60040 */ 	lw	$s6,0x40($sp)
/*  f1706dc:	8fb70044 */ 	lw	$s7,0x44($sp)
/*  f1706e0:	8fbe0048 */ 	lw	$s8,0x48($sp)
/*  f1706e4:	03e00008 */ 	jr	$ra
/*  f1706e8:	27bd30a8 */ 	addiu	$sp,$sp,0x30a8
);

GLOBAL_ASM(
glabel func0f1706ec
/*  f1706ec:	27bdff58 */ 	addiu	$sp,$sp,-168
/*  f1706f0:	8fa200b8 */ 	lw	$v0,0xb8($sp)
/*  f1706f4:	afb00004 */ 	sw	$s0,0x4($sp)
/*  f1706f8:	24ee0001 */ 	addiu	$t6,$a3,0x1
/*  f1706fc:	afb70020 */ 	sw	$s7,0x20($sp)
/*  f170700:	afb6001c */ 	sw	$s6,0x1c($sp)
/*  f170704:	afb50018 */ 	sw	$s5,0x18($sp)
/*  f170708:	afb2000c */ 	sw	$s2,0xc($sp)
/*  f17070c:	000e8043 */ 	sra	$s0,$t6,0x1
/*  f170710:	2c410009 */ 	sltiu	$at,$v0,0x9
/*  f170714:	00c0b025 */ 	or	$s6,$a2,$zero
/*  f170718:	00e0b825 */ 	or	$s7,$a3,$zero
/*  f17071c:	afbe0024 */ 	sw	$s8,0x24($sp)
/*  f170720:	afb40014 */ 	sw	$s4,0x14($sp)
/*  f170724:	afb30010 */ 	sw	$s3,0x10($sp)
/*  f170728:	afb10008 */ 	sw	$s1,0x8($sp)
/*  f17072c:	00a04025 */ 	or	$t0,$a1,$zero
/*  f170730:	00a06825 */ 	or	$t5,$a1,$zero
/*  f170734:	00a0a825 */ 	or	$s5,$a1,$zero
/*  f170738:	00801825 */ 	or	$v1,$a0,$zero
/*  f17073c:	00806025 */ 	or	$t4,$a0,$zero
/*  f170740:	00809025 */ 	or	$s2,$a0,$zero
/*  f170744:	1020002a */ 	beqz	$at,.L0f1707f0
/*  f170748:	afb0003c */ 	sw	$s0,0x3c($sp)
/*  f17074c:	0002c880 */ 	sll	$t9,$v0,0x2
/*  f170750:	3c017f1b */ 	lui	$at,%hi(var7f1b7a78)
/*  f170754:	00390821 */ 	addu	$at,$at,$t9
/*  f170758:	8c397a78 */ 	lw	$t9,%lo(var7f1b7a78)($at)
/*  f17075c:	03200008 */ 	jr	$t9
/*  f170760:	00000000 */ 	sll	$zero,$zero,0x0
/*  f170764:	26d80001 */ 	addiu	$t8,$s6,0x1
/*  f170768:	00187043 */ 	sra	$t6,$t8,0x1
/*  f17076c:	25cf0003 */ 	addiu	$t7,$t6,0x3
/*  f170770:	26d30003 */ 	addiu	$s3,$s6,0x3
/*  f170774:	31f90ffc */ 	andi	$t9,$t7,0xffc
/*  f170778:	32780ffc */ 	andi	$t8,$s3,0xffc
/*  f17077c:	afb90098 */ 	sw	$t9,0x98($sp)
/*  f170780:	1000001b */ 	beqz	$zero,.L0f1707f0
/*  f170784:	afb8009c */ 	sw	$t8,0x9c($sp)
/*  f170788:	26ce0001 */ 	addiu	$t6,$s6,0x1
/*  f17078c:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f170790:	25f90003 */ 	addiu	$t9,$t7,0x3
/*  f170794:	26d30003 */ 	addiu	$s3,$s6,0x3
/*  f170798:	33380ffc */ 	andi	$t8,$t9,0xffc
/*  f17079c:	326e0ffc */ 	andi	$t6,$s3,0xffc
/*  f1707a0:	afb80098 */ 	sw	$t8,0x98($sp)
/*  f1707a4:	10000012 */ 	beqz	$zero,.L0f1707f0
/*  f1707a8:	afae009c */ 	sw	$t6,0x9c($sp)
/*  f1707ac:	26cf0001 */ 	addiu	$t7,$s6,0x1
/*  f1707b0:	000fc843 */ 	sra	$t9,$t7,0x1
/*  f1707b4:	27380007 */ 	addiu	$t8,$t9,0x7
/*  f1707b8:	26d30007 */ 	addiu	$s3,$s6,0x7
/*  f1707bc:	330e0ff8 */ 	andi	$t6,$t8,0xff8
/*  f1707c0:	326f0ff8 */ 	andi	$t7,$s3,0xff8
/*  f1707c4:	afae0098 */ 	sw	$t6,0x98($sp)
/*  f1707c8:	10000009 */ 	beqz	$zero,.L0f1707f0
/*  f1707cc:	afaf009c */ 	sw	$t7,0x9c($sp)
/*  f1707d0:	26d90001 */ 	addiu	$t9,$s6,0x1
/*  f1707d4:	0019c043 */ 	sra	$t8,$t9,0x1
/*  f1707d8:	270e000f */ 	addiu	$t6,$t8,0xf
/*  f1707dc:	26d3000f */ 	addiu	$s3,$s6,0xf
/*  f1707e0:	31cf0ff0 */ 	andi	$t7,$t6,0xff0
/*  f1707e4:	32790ff0 */ 	andi	$t9,$s3,0xff0
/*  f1707e8:	afaf0098 */ 	sw	$t7,0x98($sp)
/*  f1707ec:	afb9009c */ 	sw	$t9,0x9c($sp)
.L0f1707f0:
/*  f1707f0:	2c410009 */ 	sltiu	$at,$v0,0x9
/*  f1707f4:	10200263 */ 	beqz	$at,.L0f171184
/*  f1707f8:	8fb3009c */ 	lw	$s3,0x9c($sp)
/*  f1707fc:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f170800:	3c017f1b */ 	lui	$at,%hi(var7f1b7a9c)
/*  f170804:	00380821 */ 	addu	$at,$at,$t8
/*  f170808:	8c387a9c */ 	lw	$t8,%lo(var7f1b7a9c)($at)
/*  f17080c:	03000008 */ 	jr	$t8
/*  f170810:	00000000 */ 	sll	$zero,$zero,0x0
/*  f170814:	1ae00064 */ 	blez	$s7,.L0f1709a8
/*  f170818:	0000f025 */ 	or	$s8,$zero,$zero
/*  f17081c:	8fb00098 */ 	lw	$s0,0x98($sp)
/*  f170820:	02608825 */ 	or	$s1,$s3,$zero
/*  f170824:	001178c0 */ 	sll	$t7,$s1,0x3
/*  f170828:	00107080 */ 	sll	$t6,$s0,0x2
/*  f17082c:	01c08025 */ 	or	$s0,$t6,$zero
/*  f170830:	01e08825 */ 	or	$s1,$t7,$zero
.L0f170834:
/*  f170834:	27d90001 */ 	addiu	$t9,$s8,0x1
/*  f170838:	0337082a */ 	slt	$at,$t9,$s7
/*  f17083c:	10200003 */ 	beqz	$at,.L0f17084c
/*  f170840:	00005825 */ 	or	$t3,$zero,$zero
/*  f170844:	10000002 */ 	beqz	$zero,.L0f170850
/*  f170848:	0260a025 */ 	or	$s4,$s3,$zero
.L0f17084c:
/*  f17084c:	0000a025 */ 	or	$s4,$zero,$zero
.L0f170850:
/*  f170850:	1a600051 */ 	blez	$s3,.L0f170998
/*  f170854:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f170858:	0014c080 */ 	sll	$t8,$s4,0x2
/*  f17085c:	00785021 */ 	addu	$t2,$v1,$t8
/*  f170860:	01406025 */ 	or	$t4,$t2,$zero
/*  f170864:	00602025 */ 	or	$a0,$v1,$zero
.L0f170868:
/*  f170868:	25620001 */ 	addiu	$v0,$t3,0x1
/*  f17086c:	0056082a */ 	slt	$at,$v0,$s6
/*  f170870:	10200003 */ 	beqz	$at,.L0f170880
/*  f170874:	01602825 */ 	or	$a1,$t3,$zero
/*  f170878:	10000001 */ 	beqz	$zero,.L0f170880
/*  f17087c:	00402825 */ 	or	$a1,$v0,$zero
.L0f170880:
/*  f170880:	00053880 */ 	sll	$a3,$a1,0x2
/*  f170884:	00677021 */ 	addu	$t6,$v1,$a3
/*  f170888:	8dc60000 */ 	lw	$a2,0x0($t6)
/*  f17088c:	8c820000 */ 	lw	$v0,0x0($a0)
/*  f170890:	01477821 */ 	addu	$t7,$t2,$a3
/*  f170894:	8d890000 */ 	lw	$t1,0x0($t4)
/*  f170898:	8ded0000 */ 	lw	$t5,0x0($t7)
/*  f17089c:	00067602 */ 	srl	$t6,$a2,0x18
/*  f1708a0:	31cf00ff */ 	andi	$t7,$t6,0xff
/*  f1708a4:	0002ce02 */ 	srl	$t9,$v0,0x18
/*  f1708a8:	333800ff */ 	andi	$t8,$t9,0xff
/*  f1708ac:	030fc821 */ 	addu	$t9,$t8,$t7
/*  f1708b0:	00097602 */ 	srl	$t6,$t1,0x18
/*  f1708b4:	31d800ff */ 	andi	$t8,$t6,0xff
/*  f1708b8:	03387821 */ 	addu	$t7,$t9,$t8
/*  f1708bc:	000d7602 */ 	srl	$t6,$t5,0x18
/*  f1708c0:	31d900ff */ 	andi	$t9,$t6,0xff
/*  f1708c4:	01f9c021 */ 	addu	$t8,$t7,$t9
/*  f1708c8:	00187882 */ 	srl	$t7,$t8,0x2
/*  f1708cc:	000fce00 */ 	sll	$t9,$t7,0x18
/*  f1708d0:	0002c402 */ 	srl	$t8,$v0,0x10
/*  f1708d4:	330e00ff */ 	andi	$t6,$t8,0xff
/*  f1708d8:	00067c02 */ 	srl	$t7,$a2,0x10
/*  f1708dc:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f1708e0:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f1708e4:	00097402 */ 	srl	$t6,$t1,0x10
/*  f1708e8:	31d800ff */ 	andi	$t8,$t6,0xff
/*  f1708ec:	01f87021 */ 	addu	$t6,$t7,$t8
/*  f1708f0:	000d7c02 */ 	srl	$t7,$t5,0x10
/*  f1708f4:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f1708f8:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f1708fc:	000f7082 */ 	srl	$t6,$t7,0x2
/*  f170900:	31d800ff */ 	andi	$t8,$t6,0xff
/*  f170904:	00187c00 */ 	sll	$t7,$t8,0x10
/*  f170908:	032f7025 */ 	or	$t6,$t9,$t7
/*  f17090c:	0002c202 */ 	srl	$t8,$v0,0x8
/*  f170910:	331900ff */ 	andi	$t9,$t8,0xff
/*  f170914:	00067a02 */ 	srl	$t7,$a2,0x8
/*  f170918:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f17091c:	03387821 */ 	addu	$t7,$t9,$t8
/*  f170920:	0009ca02 */ 	srl	$t9,$t1,0x8
/*  f170924:	333800ff */ 	andi	$t8,$t9,0xff
/*  f170928:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f17092c:	000d7a02 */ 	srl	$t7,$t5,0x8
/*  f170930:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f170934:	03387821 */ 	addu	$t7,$t9,$t8
/*  f170938:	000fc882 */ 	srl	$t9,$t7,0x2
/*  f17093c:	333800ff */ 	andi	$t8,$t9,0xff
/*  f170940:	00187a00 */ 	sll	$t7,$t8,0x8
/*  f170944:	01cfc825 */ 	or	$t9,$t6,$t7
/*  f170948:	30ce00ff */ 	andi	$t6,$a2,0xff
/*  f17094c:	305800ff */ 	andi	$t8,$v0,0xff
/*  f170950:	030e7821 */ 	addu	$t7,$t8,$t6
/*  f170954:	313800ff */ 	andi	$t8,$t1,0xff
/*  f170958:	01f87021 */ 	addu	$t6,$t7,$t8
/*  f17095c:	31af00ff */ 	andi	$t7,$t5,0xff
/*  f170960:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f170964:	270e0001 */ 	addiu	$t6,$t8,0x1
/*  f170968:	000e7882 */ 	srl	$t7,$t6,0x2
/*  f17096c:	31f800ff */ 	andi	$t8,$t7,0xff
/*  f170970:	000b7843 */ 	sra	$t7,$t3,0x1
/*  f170974:	03387025 */ 	or	$t6,$t9,$t8
/*  f170978:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f17097c:	000fc880 */ 	sll	$t9,$t7,0x2
/*  f170980:	0173082a */ 	slt	$at,$t3,$s3
/*  f170984:	0119c021 */ 	addu	$t8,$t0,$t9
/*  f170988:	24840008 */ 	addiu	$a0,$a0,0x8
/*  f17098c:	258c0008 */ 	addiu	$t4,$t4,0x8
/*  f170990:	1420ffb5 */ 	bnez	$at,.L0f170868
/*  f170994:	af0e0000 */ 	sw	$t6,0x0($t8)
.L0f170998:
/*  f170998:	03d7082a */ 	slt	$at,$s8,$s7
/*  f17099c:	01104021 */ 	addu	$t0,$t0,$s0
/*  f1709a0:	1420ffa4 */ 	bnez	$at,.L0f170834
/*  f1709a4:	00711821 */ 	addu	$v1,$v1,$s1
.L0f1709a8:
/*  f1709a8:	8faf003c */ 	lw	$t7,0x3c($sp)
/*  f1709ac:	8fb90098 */ 	lw	$t9,0x98($sp)
/*  f1709b0:	01f90019 */ 	multu	$t7,$t9
/*  f1709b4:	00001012 */ 	mflo	$v0
/*  f1709b8:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1709bc:	100001f2 */ 	beqz	$zero,.L0f171188
/*  f1709c0:	01c01025 */ 	or	$v0,$t6,$zero
/*  f1709c4:	1ae00064 */ 	blez	$s7,.L0f170b58
/*  f1709c8:	0000f025 */ 	or	$s8,$zero,$zero
/*  f1709cc:	8fb00098 */ 	lw	$s0,0x98($sp)
/*  f1709d0:	02608825 */ 	or	$s1,$s3,$zero
/*  f1709d4:	00117880 */ 	sll	$t7,$s1,0x2
/*  f1709d8:	0010c040 */ 	sll	$t8,$s0,0x1
/*  f1709dc:	03008025 */ 	or	$s0,$t8,$zero
/*  f1709e0:	01e08825 */ 	or	$s1,$t7,$zero
.L0f1709e4:
/*  f1709e4:	27d90001 */ 	addiu	$t9,$s8,0x1
/*  f1709e8:	0337082a */ 	slt	$at,$t9,$s7
/*  f1709ec:	10200003 */ 	beqz	$at,.L0f1709fc
/*  f1709f0:	00005825 */ 	or	$t3,$zero,$zero
/*  f1709f4:	10000002 */ 	beqz	$zero,.L0f170a00
/*  f1709f8:	0260a025 */ 	or	$s4,$s3,$zero
.L0f1709fc:
/*  f1709fc:	0000a025 */ 	or	$s4,$zero,$zero
.L0f170a00:
/*  f170a00:	1a600051 */ 	blez	$s3,.L0f170b48
/*  f170a04:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f170a08:	00147040 */ 	sll	$t6,$s4,0x1
/*  f170a0c:	018e5021 */ 	addu	$t2,$t4,$t6
/*  f170a10:	01404825 */ 	or	$t1,$t2,$zero
/*  f170a14:	01804025 */ 	or	$t0,$t4,$zero
.L0f170a18:
/*  f170a18:	25620001 */ 	addiu	$v0,$t3,0x1
/*  f170a1c:	0056082a */ 	slt	$at,$v0,$s6
/*  f170a20:	10200003 */ 	beqz	$at,.L0f170a30
/*  f170a24:	01602825 */ 	or	$a1,$t3,$zero
/*  f170a28:	10000001 */ 	beqz	$zero,.L0f170a30
/*  f170a2c:	00402825 */ 	or	$a1,$v0,$zero
.L0f170a30:
/*  f170a30:	00059040 */ 	sll	$s2,$a1,0x1
/*  f170a34:	0192c021 */ 	addu	$t8,$t4,$s2
/*  f170a38:	97030000 */ 	lhu	$v1,0x0($t8)
/*  f170a3c:	95020000 */ 	lhu	$v0,0x0($t0)
/*  f170a40:	01527821 */ 	addu	$t7,$t2,$s2
/*  f170a44:	95240000 */ 	lhu	$a0,0x0($t1)
/*  f170a48:	95e60000 */ 	lhu	$a2,0x0($t7)
/*  f170a4c:	0003c2c3 */ 	sra	$t8,$v1,0xb
/*  f170a50:	330f001f */ 	andi	$t7,$t8,0x1f
/*  f170a54:	0002cac3 */ 	sra	$t9,$v0,0xb
/*  f170a58:	332e001f */ 	andi	$t6,$t9,0x1f
/*  f170a5c:	01cfc821 */ 	addu	$t9,$t6,$t7
/*  f170a60:	0004c2c3 */ 	sra	$t8,$a0,0xb
/*  f170a64:	330e001f */ 	andi	$t6,$t8,0x1f
/*  f170a68:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f170a6c:	0006c2c3 */ 	sra	$t8,$a2,0xb
/*  f170a70:	3319001f */ 	andi	$t9,$t8,0x1f
/*  f170a74:	01f97021 */ 	addu	$t6,$t7,$t9
/*  f170a78:	000e7883 */ 	sra	$t7,$t6,0x2
/*  f170a7c:	000fcac0 */ 	sll	$t9,$t7,0xb
/*  f170a80:	00027183 */ 	sra	$t6,$v0,0x6
/*  f170a84:	31d8001f */ 	andi	$t8,$t6,0x1f
/*  f170a88:	00037983 */ 	sra	$t7,$v1,0x6
/*  f170a8c:	31ee001f */ 	andi	$t6,$t7,0x1f
/*  f170a90:	030e7821 */ 	addu	$t7,$t8,$t6
/*  f170a94:	0004c183 */ 	sra	$t8,$a0,0x6
/*  f170a98:	330e001f */ 	andi	$t6,$t8,0x1f
/*  f170a9c:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f170aa0:	00067983 */ 	sra	$t7,$a2,0x6
/*  f170aa4:	31ee001f */ 	andi	$t6,$t7,0x1f
/*  f170aa8:	030e7821 */ 	addu	$t7,$t8,$t6
/*  f170aac:	000fc083 */ 	sra	$t8,$t7,0x2
/*  f170ab0:	330e001f */ 	andi	$t6,$t8,0x1f
/*  f170ab4:	000e7980 */ 	sll	$t7,$t6,0x6
/*  f170ab8:	032fc025 */ 	or	$t8,$t9,$t7
/*  f170abc:	00027043 */ 	sra	$t6,$v0,0x1
/*  f170ac0:	31d9001f */ 	andi	$t9,$t6,0x1f
/*  f170ac4:	00037843 */ 	sra	$t7,$v1,0x1
/*  f170ac8:	31ee001f */ 	andi	$t6,$t7,0x1f
/*  f170acc:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f170ad0:	0004c843 */ 	sra	$t9,$a0,0x1
/*  f170ad4:	332e001f */ 	andi	$t6,$t9,0x1f
/*  f170ad8:	01eec821 */ 	addu	$t9,$t7,$t6
/*  f170adc:	00067843 */ 	sra	$t7,$a2,0x1
/*  f170ae0:	31ee001f */ 	andi	$t6,$t7,0x1f
/*  f170ae4:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f170ae8:	000fc883 */ 	sra	$t9,$t7,0x2
/*  f170aec:	332e001f */ 	andi	$t6,$t9,0x1f
/*  f170af0:	000e7840 */ 	sll	$t7,$t6,0x1
/*  f170af4:	030fc825 */ 	or	$t9,$t8,$t7
/*  f170af8:	30780001 */ 	andi	$t8,$v1,0x1
/*  f170afc:	304e0001 */ 	andi	$t6,$v0,0x1
/*  f170b00:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f170b04:	308e0001 */ 	andi	$t6,$a0,0x1
/*  f170b08:	01eec021 */ 	addu	$t8,$t7,$t6
/*  f170b0c:	30cf0001 */ 	andi	$t7,$a2,0x1
/*  f170b10:	030f7021 */ 	addu	$t6,$t8,$t7
/*  f170b14:	25d80002 */ 	addiu	$t8,$t6,0x2
/*  f170b18:	00187883 */ 	sra	$t7,$t8,0x2
/*  f170b1c:	31ee0001 */ 	andi	$t6,$t7,0x1
/*  f170b20:	000b7843 */ 	sra	$t7,$t3,0x1
/*  f170b24:	032ec025 */ 	or	$t8,$t9,$t6
/*  f170b28:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f170b2c:	000fc840 */ 	sll	$t9,$t7,0x1
/*  f170b30:	0173082a */ 	slt	$at,$t3,$s3
/*  f170b34:	01b97021 */ 	addu	$t6,$t5,$t9
/*  f170b38:	25080004 */ 	addiu	$t0,$t0,0x4
/*  f170b3c:	25290004 */ 	addiu	$t1,$t1,0x4
/*  f170b40:	1420ffb5 */ 	bnez	$at,.L0f170a18
/*  f170b44:	a5d80000 */ 	sh	$t8,0x0($t6)
.L0f170b48:
/*  f170b48:	03d7082a */ 	slt	$at,$s8,$s7
/*  f170b4c:	01b06821 */ 	addu	$t5,$t5,$s0
/*  f170b50:	1420ffa4 */ 	bnez	$at,.L0f1709e4
/*  f170b54:	01916021 */ 	addu	$t4,$t4,$s1
.L0f170b58:
/*  f170b58:	8faf003c */ 	lw	$t7,0x3c($sp)
/*  f170b5c:	8fb90098 */ 	lw	$t9,0x98($sp)
/*  f170b60:	01f90019 */ 	multu	$t7,$t9
/*  f170b64:	00001012 */ 	mflo	$v0
/*  f170b68:	0002c040 */ 	sll	$t8,$v0,0x1
/*  f170b6c:	10000186 */ 	beqz	$zero,.L0f171188
/*  f170b70:	03001025 */ 	or	$v0,$t8,$zero
/*  f170b74:	1ae00048 */ 	blez	$s7,.L0f170c98
/*  f170b78:	0000f025 */ 	or	$s8,$zero,$zero
/*  f170b7c:	8fb00098 */ 	lw	$s0,0x98($sp)
/*  f170b80:	02608825 */ 	or	$s1,$s3,$zero
/*  f170b84:	00117880 */ 	sll	$t7,$s1,0x2
/*  f170b88:	00107040 */ 	sll	$t6,$s0,0x1
/*  f170b8c:	01c08025 */ 	or	$s0,$t6,$zero
/*  f170b90:	01e08825 */ 	or	$s1,$t7,$zero
.L0f170b94:
/*  f170b94:	27d90001 */ 	addiu	$t9,$s8,0x1
/*  f170b98:	0337082a */ 	slt	$at,$t9,$s7
/*  f170b9c:	10200003 */ 	beqz	$at,.L0f170bac
/*  f170ba0:	00005825 */ 	or	$t3,$zero,$zero
/*  f170ba4:	10000002 */ 	beqz	$zero,.L0f170bb0
/*  f170ba8:	0260a025 */ 	or	$s4,$s3,$zero
.L0f170bac:
/*  f170bac:	0000a025 */ 	or	$s4,$zero,$zero
.L0f170bb0:
/*  f170bb0:	1a600035 */ 	blez	$s3,.L0f170c88
/*  f170bb4:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f170bb8:	0014c040 */ 	sll	$t8,$s4,0x1
/*  f170bbc:	01985021 */ 	addu	$t2,$t4,$t8
/*  f170bc0:	01404825 */ 	or	$t1,$t2,$zero
/*  f170bc4:	01804025 */ 	or	$t0,$t4,$zero
.L0f170bc8:
/*  f170bc8:	25620001 */ 	addiu	$v0,$t3,0x1
/*  f170bcc:	0056082a */ 	slt	$at,$v0,$s6
/*  f170bd0:	10200003 */ 	beqz	$at,.L0f170be0
/*  f170bd4:	01602825 */ 	or	$a1,$t3,$zero
/*  f170bd8:	10000001 */ 	beqz	$zero,.L0f170be0
/*  f170bdc:	00402825 */ 	or	$a1,$v0,$zero
.L0f170be0:
/*  f170be0:	00059040 */ 	sll	$s2,$a1,0x1
/*  f170be4:	01927021 */ 	addu	$t6,$t4,$s2
/*  f170be8:	95c30000 */ 	lhu	$v1,0x0($t6)
/*  f170bec:	95020000 */ 	lhu	$v0,0x0($t0)
/*  f170bf0:	01527821 */ 	addu	$t7,$t2,$s2
/*  f170bf4:	95240000 */ 	lhu	$a0,0x0($t1)
/*  f170bf8:	95e60000 */ 	lhu	$a2,0x0($t7)
/*  f170bfc:	00037203 */ 	sra	$t6,$v1,0x8
/*  f170c00:	31cf00ff */ 	andi	$t7,$t6,0xff
/*  f170c04:	0002ca03 */ 	sra	$t9,$v0,0x8
/*  f170c08:	333800ff */ 	andi	$t8,$t9,0xff
/*  f170c0c:	030fc821 */ 	addu	$t9,$t8,$t7
/*  f170c10:	00047203 */ 	sra	$t6,$a0,0x8
/*  f170c14:	31d800ff */ 	andi	$t8,$t6,0xff
/*  f170c18:	03387821 */ 	addu	$t7,$t9,$t8
/*  f170c1c:	00067203 */ 	sra	$t6,$a2,0x8
/*  f170c20:	31d900ff */ 	andi	$t9,$t6,0xff
/*  f170c24:	01f9a021 */ 	addu	$s4,$t7,$t9
/*  f170c28:	26940002 */ 	addiu	$s4,$s4,0x2
/*  f170c2c:	00143883 */ 	sra	$a3,$s4,0x2
/*  f170c30:	04e10002 */ 	bgez	$a3,.L0f170c3c
/*  f170c34:	000bc843 */ 	sra	$t9,$t3,0x1
/*  f170c38:	00003825 */ 	or	$a3,$zero,$zero
.L0f170c3c:
/*  f170c3c:	28e10100 */ 	slti	$at,$a3,0x100
/*  f170c40:	14200002 */ 	bnez	$at,.L0f170c4c
/*  f170c44:	0019c040 */ 	sll	$t8,$t9,0x1
/*  f170c48:	240700ff */ 	addiu	$a3,$zero,0xff
.L0f170c4c:
/*  f170c4c:	00072883 */ 	sra	$a1,$a3,0x2
/*  f170c50:	04a10002 */ 	bgez	$a1,.L0f170c5c
/*  f170c54:	00077200 */ 	sll	$t6,$a3,0x8
/*  f170c58:	00002825 */ 	or	$a1,$zero,$zero
.L0f170c5c:
/*  f170c5c:	28a10100 */ 	slti	$at,$a1,0x100
/*  f170c60:	14200002 */ 	bnez	$at,.L0f170c6c
/*  f170c64:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f170c68:	240500ff */ 	addiu	$a1,$zero,0xff
.L0f170c6c:
/*  f170c6c:	01c57825 */ 	or	$t7,$t6,$a1
/*  f170c70:	0173082a */ 	slt	$at,$t3,$s3
/*  f170c74:	01b87021 */ 	addu	$t6,$t5,$t8
/*  f170c78:	25080004 */ 	addiu	$t0,$t0,0x4
/*  f170c7c:	25290004 */ 	addiu	$t1,$t1,0x4
/*  f170c80:	1420ffd1 */ 	bnez	$at,.L0f170bc8
/*  f170c84:	a5cf0000 */ 	sh	$t7,0x0($t6)
.L0f170c88:
/*  f170c88:	03d7082a */ 	slt	$at,$s8,$s7
/*  f170c8c:	01b06821 */ 	addu	$t5,$t5,$s0
/*  f170c90:	1420ffc0 */ 	bnez	$at,.L0f170b94
/*  f170c94:	01916021 */ 	addu	$t4,$t4,$s1
.L0f170c98:
/*  f170c98:	8fb9003c */ 	lw	$t9,0x3c($sp)
/*  f170c9c:	8fb80098 */ 	lw	$t8,0x98($sp)
/*  f170ca0:	03380019 */ 	multu	$t9,$t8
/*  f170ca4:	00001012 */ 	mflo	$v0
/*  f170ca8:	00027840 */ 	sll	$t7,$v0,0x1
/*  f170cac:	10000136 */ 	beqz	$zero,.L0f171188
/*  f170cb0:	01e01025 */ 	or	$v0,$t7,$zero
/*  f170cb4:	1ae0004c */ 	blez	$s7,.L0f170de8
/*  f170cb8:	0000f025 */ 	or	$s8,$zero,$zero
/*  f170cbc:	00137040 */ 	sll	$t6,$s3,0x1
/*  f170cc0:	afae0034 */ 	sw	$t6,0x34($sp)
.L0f170cc4:
/*  f170cc4:	27d90001 */ 	addiu	$t9,$s8,0x1
/*  f170cc8:	0337082a */ 	slt	$at,$t9,$s7
/*  f170ccc:	10200003 */ 	beqz	$at,.L0f170cdc
/*  f170cd0:	00005825 */ 	or	$t3,$zero,$zero
/*  f170cd4:	10000002 */ 	beqz	$zero,.L0f170ce0
/*  f170cd8:	0260a025 */ 	or	$s4,$s3,$zero
.L0f170cdc:
/*  f170cdc:	0000a025 */ 	or	$s4,$zero,$zero
.L0f170ce0:
/*  f170ce0:	1a60003b */ 	blez	$s3,.L0f170dd0
/*  f170ce4:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f170ce8:	02408025 */ 	or	$s0,$s2,$zero
/*  f170cec:	02928821 */ 	addu	$s1,$s4,$s2
.L0f170cf0:
/*  f170cf0:	25620001 */ 	addiu	$v0,$t3,0x1
/*  f170cf4:	0056082a */ 	slt	$at,$v0,$s6
/*  f170cf8:	10200003 */ 	beqz	$at,.L0f170d08
/*  f170cfc:	01602825 */ 	or	$a1,$t3,$zero
/*  f170d00:	10000001 */ 	beqz	$zero,.L0f170d08
/*  f170d04:	00402825 */ 	or	$a1,$v0,$zero
.L0f170d08:
/*  f170d08:	0245c021 */ 	addu	$t8,$s2,$a1
/*  f170d0c:	93030000 */ 	lbu	$v1,0x0($t8)
/*  f170d10:	02857821 */ 	addu	$t7,$s4,$a1
/*  f170d14:	92020000 */ 	lbu	$v0,0x0($s0)
/*  f170d18:	01f27021 */ 	addu	$t6,$t7,$s2
/*  f170d1c:	92240000 */ 	lbu	$a0,0x0($s1)
/*  f170d20:	91c80000 */ 	lbu	$t0,0x0($t6)
/*  f170d24:	00037903 */ 	sra	$t7,$v1,0x4
/*  f170d28:	31ee000f */ 	andi	$t6,$t7,0xf
/*  f170d2c:	0002c903 */ 	sra	$t9,$v0,0x4
/*  f170d30:	3338000f */ 	andi	$t8,$t9,0xf
/*  f170d34:	030ec821 */ 	addu	$t9,$t8,$t6
/*  f170d38:	00047903 */ 	sra	$t7,$a0,0x4
/*  f170d3c:	31f8000f */ 	andi	$t8,$t7,0xf
/*  f170d40:	03387021 */ 	addu	$t6,$t9,$t8
/*  f170d44:	00087903 */ 	sra	$t7,$t0,0x4
/*  f170d48:	31f9000f */ 	andi	$t9,$t7,0xf
/*  f170d4c:	01d93021 */ 	addu	$a2,$t6,$t9
/*  f170d50:	24c60002 */ 	addiu	$a2,$a2,0x2
/*  f170d54:	00063883 */ 	sra	$a3,$a2,0x2
/*  f170d58:	04e10002 */ 	bgez	$a3,.L0f170d64
/*  f170d5c:	304e000f */ 	andi	$t6,$v0,0xf
/*  f170d60:	00003825 */ 	or	$a3,$zero,$zero
.L0f170d64:
/*  f170d64:	28e10010 */ 	slti	$at,$a3,0x10
/*  f170d68:	14200002 */ 	bnez	$at,.L0f170d74
/*  f170d6c:	3079000f */ 	andi	$t9,$v1,0xf
/*  f170d70:	2407000f */ 	addiu	$a3,$zero,0xf
.L0f170d74:
/*  f170d74:	00077900 */ 	sll	$t7,$a3,0x4
/*  f170d78:	01e03825 */ 	or	$a3,$t7,$zero
/*  f170d7c:	01d9c021 */ 	addu	$t8,$t6,$t9
/*  f170d80:	308f000f */ 	andi	$t7,$a0,0xf
/*  f170d84:	030f7021 */ 	addu	$t6,$t8,$t7
/*  f170d88:	3119000f */ 	andi	$t9,$t0,0xf
/*  f170d8c:	01d93021 */ 	addu	$a2,$t6,$t9
/*  f170d90:	24c60002 */ 	addiu	$a2,$a2,0x2
/*  f170d94:	00062883 */ 	sra	$a1,$a2,0x2
/*  f170d98:	04a10002 */ 	bgez	$a1,.L0f170da4
/*  f170d9c:	000b7043 */ 	sra	$t6,$t3,0x1
/*  f170da0:	00002825 */ 	or	$a1,$zero,$zero
.L0f170da4:
/*  f170da4:	28a10010 */ 	slti	$at,$a1,0x10
/*  f170da8:	14200002 */ 	bnez	$at,.L0f170db4
/*  f170dac:	02aec821 */ 	addu	$t9,$s5,$t6
/*  f170db0:	2405000f */ 	addiu	$a1,$zero,0xf
.L0f170db4:
/*  f170db4:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f170db8:	0173082a */ 	slt	$at,$t3,$s3
/*  f170dbc:	00e57825 */ 	or	$t7,$a3,$a1
/*  f170dc0:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f170dc4:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f170dc8:	1420ffc9 */ 	bnez	$at,.L0f170cf0
/*  f170dcc:	a32f0000 */ 	sb	$t7,0x0($t9)
.L0f170dd0:
/*  f170dd0:	8fb80098 */ 	lw	$t8,0x98($sp)
/*  f170dd4:	8fae0034 */ 	lw	$t6,0x34($sp)
/*  f170dd8:	03d7082a */ 	slt	$at,$s8,$s7
/*  f170ddc:	02b8a821 */ 	addu	$s5,$s5,$t8
/*  f170de0:	1420ffb8 */ 	bnez	$at,.L0f170cc4
/*  f170de4:	024e9021 */ 	addu	$s2,$s2,$t6
.L0f170de8:
/*  f170de8:	8faf003c */ 	lw	$t7,0x3c($sp)
/*  f170dec:	8fb90098 */ 	lw	$t9,0x98($sp)
/*  f170df0:	01f90019 */ 	multu	$t7,$t9
/*  f170df4:	00001012 */ 	mflo	$v0
/*  f170df8:	100000e4 */ 	beqz	$zero,.L0f17118c
/*  f170dfc:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f170e00:	1ae00032 */ 	blez	$s7,.L0f170ecc
/*  f170e04:	0000f025 */ 	or	$s8,$zero,$zero
/*  f170e08:	0013c040 */ 	sll	$t8,$s3,0x1
/*  f170e0c:	afb80034 */ 	sw	$t8,0x34($sp)
/*  f170e10:	93ad004c */ 	lbu	$t5,0x4c($sp)
.L0f170e14:
/*  f170e14:	27ce0001 */ 	addiu	$t6,$s8,0x1
/*  f170e18:	01d7082a */ 	slt	$at,$t6,$s7
/*  f170e1c:	10200003 */ 	beqz	$at,.L0f170e2c
/*  f170e20:	00005825 */ 	or	$t3,$zero,$zero
/*  f170e24:	10000002 */ 	beqz	$zero,.L0f170e30
/*  f170e28:	0260a025 */ 	or	$s4,$s3,$zero
.L0f170e2c:
/*  f170e2c:	0000a025 */ 	or	$s4,$zero,$zero
.L0f170e30:
/*  f170e30:	1a600020 */ 	blez	$s3,.L0f170eb4
/*  f170e34:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f170e38:	02408025 */ 	or	$s0,$s2,$zero
/*  f170e3c:	01a04025 */ 	or	$t0,$t5,$zero
.L0f170e40:
/*  f170e40:	25620001 */ 	addiu	$v0,$t3,0x1
/*  f170e44:	0056082a */ 	slt	$at,$v0,$s6
/*  f170e48:	10200003 */ 	beqz	$at,.L0f170e58
/*  f170e4c:	01602825 */ 	or	$a1,$t3,$zero
/*  f170e50:	10000001 */ 	beqz	$zero,.L0f170e58
/*  f170e54:	00402825 */ 	or	$a1,$v0,$zero
.L0f170e58:
/*  f170e58:	02457821 */ 	addu	$t7,$s2,$a1
/*  f170e5c:	0285c821 */ 	addu	$t9,$s4,$a1
/*  f170e60:	920c0000 */ 	lbu	$t4,0x0($s0)
/*  f170e64:	91e90000 */ 	lbu	$t1,0x0($t7)
/*  f170e68:	0332c021 */ 	addu	$t8,$t9,$s2
/*  f170e6c:	930a0000 */ 	lbu	$t2,0x0($t8)
/*  f170e70:	01897021 */ 	addu	$t6,$t4,$t1
/*  f170e74:	000bc043 */ 	sra	$t8,$t3,0x1
/*  f170e78:	01ca7821 */ 	addu	$t7,$t6,$t2
/*  f170e7c:	01e81021 */ 	addu	$v0,$t7,$t0
/*  f170e80:	24420002 */ 	addiu	$v0,$v0,0x2
/*  f170e84:	00023883 */ 	sra	$a3,$v0,0x2
/*  f170e88:	04e10002 */ 	bgez	$a3,.L0f170e94
/*  f170e8c:	02b87021 */ 	addu	$t6,$s5,$t8
/*  f170e90:	00003825 */ 	or	$a3,$zero,$zero
.L0f170e94:
/*  f170e94:	28e10100 */ 	slti	$at,$a3,0x100
/*  f170e98:	14200002 */ 	bnez	$at,.L0f170ea4
/*  f170e9c:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f170ea0:	240700ff */ 	addiu	$a3,$zero,0xff
.L0f170ea4:
/*  f170ea4:	0173082a */ 	slt	$at,$t3,$s3
/*  f170ea8:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f170eac:	1420ffe4 */ 	bnez	$at,.L0f170e40
/*  f170eb0:	a1c70000 */ 	sb	$a3,0x0($t6)
.L0f170eb4:
/*  f170eb4:	8faf0098 */ 	lw	$t7,0x98($sp)
/*  f170eb8:	8fb90034 */ 	lw	$t9,0x34($sp)
/*  f170ebc:	03d7082a */ 	slt	$at,$s8,$s7
/*  f170ec0:	02afa821 */ 	addu	$s5,$s5,$t7
/*  f170ec4:	1420ffd3 */ 	bnez	$at,.L0f170e14
/*  f170ec8:	02599021 */ 	addu	$s2,$s2,$t9
.L0f170ecc:
/*  f170ecc:	8fb8003c */ 	lw	$t8,0x3c($sp)
/*  f170ed0:	8fae0098 */ 	lw	$t6,0x98($sp)
/*  f170ed4:	030e0019 */ 	multu	$t8,$t6
/*  f170ed8:	00001012 */ 	mflo	$v0
/*  f170edc:	100000ab */ 	beqz	$zero,.L0f17118c
/*  f170ee0:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f170ee4:	1ae0005d */ 	blez	$s7,.L0f17105c
/*  f170ee8:	0000f025 */ 	or	$s8,$zero,$zero
/*  f170eec:	8fb10098 */ 	lw	$s1,0x98($sp)
/*  f170ef0:	00117843 */ 	sra	$t7,$s1,0x1
/*  f170ef4:	01e08825 */ 	or	$s1,$t7,$zero
.L0f170ef8:
/*  f170ef8:	1a600053 */ 	blez	$s3,.L0f171048
/*  f170efc:	00005825 */ 	or	$t3,$zero,$zero
/*  f170f00:	27c50001 */ 	addiu	$a1,$s8,0x1
.L0f170f04:
/*  f170f04:	000b3043 */ 	sra	$a2,$t3,0x1
/*  f170f08:	00d21021 */ 	addu	$v0,$a2,$s2
/*  f170f0c:	00b7082a */ 	slt	$at,$a1,$s7
/*  f170f10:	10200003 */ 	beqz	$at,.L0f170f20
/*  f170f14:	904c0000 */ 	lbu	$t4,0x0($v0)
/*  f170f18:	10000002 */ 	beqz	$zero,.L0f170f24
/*  f170f1c:	00133843 */ 	sra	$a3,$s3,0x1
.L0f170f20:
/*  f170f20:	00003825 */ 	or	$a3,$zero,$zero
.L0f170f24:
/*  f170f24:	00e6c821 */ 	addu	$t9,$a3,$a2
/*  f170f28:	0332c021 */ 	addu	$t8,$t9,$s2
/*  f170f2c:	00b7082a */ 	slt	$at,$a1,$s7
/*  f170f30:	93090000 */ 	lbu	$t1,0x0($t8)
/*  f170f34:	10200003 */ 	beqz	$at,.L0f170f44
/*  f170f38:	904a0001 */ 	lbu	$t2,0x1($v0)
/*  f170f3c:	10000002 */ 	beqz	$zero,.L0f170f48
/*  f170f40:	00133843 */ 	sra	$a3,$s3,0x1
.L0f170f44:
/*  f170f44:	00003825 */ 	or	$a3,$zero,$zero
.L0f170f48:
/*  f170f48:	00e67021 */ 	addu	$t6,$a3,$a2
/*  f170f4c:	01d27821 */ 	addu	$t7,$t6,$s2
/*  f170f50:	91ed0001 */ 	lbu	$t5,0x1($t7)
/*  f170f54:	000c7043 */ 	sra	$t6,$t4,0x1
/*  f170f58:	31cf0007 */ 	andi	$t7,$t6,0x7
/*  f170f5c:	000cc943 */ 	sra	$t9,$t4,0x5
/*  f170f60:	33380007 */ 	andi	$t8,$t9,0x7
/*  f170f64:	030fc821 */ 	addu	$t9,$t8,$t7
/*  f170f68:	00097143 */ 	sra	$t6,$t1,0x5
/*  f170f6c:	31d80007 */ 	andi	$t8,$t6,0x7
/*  f170f70:	03387821 */ 	addu	$t7,$t9,$t8
/*  f170f74:	00097043 */ 	sra	$t6,$t1,0x1
/*  f170f78:	31d90007 */ 	andi	$t9,$t6,0x7
/*  f170f7c:	01f9c021 */ 	addu	$t8,$t7,$t9
/*  f170f80:	001870c0 */ 	sll	$t6,$t8,0x3
/*  f170f84:	31cf00e0 */ 	andi	$t7,$t6,0xe0
/*  f170f88:	000ac943 */ 	sra	$t9,$t2,0x5
/*  f170f8c:	33380007 */ 	andi	$t8,$t9,0x7
/*  f170f90:	000a7043 */ 	sra	$t6,$t2,0x1
/*  f170f94:	31d90007 */ 	andi	$t9,$t6,0x7
/*  f170f98:	03197021 */ 	addu	$t6,$t8,$t9
/*  f170f9c:	000dc143 */ 	sra	$t8,$t5,0x5
/*  f170fa0:	33190007 */ 	andi	$t9,$t8,0x7
/*  f170fa4:	01d9c021 */ 	addu	$t8,$t6,$t9
/*  f170fa8:	000d7043 */ 	sra	$t6,$t5,0x1
/*  f170fac:	31d90007 */ 	andi	$t9,$t6,0x7
/*  f170fb0:	03197021 */ 	addu	$t6,$t8,$t9
/*  f170fb4:	000ec043 */ 	sra	$t8,$t6,0x1
/*  f170fb8:	3319000e */ 	andi	$t9,$t8,0xe
/*  f170fbc:	01f97025 */ 	or	$t6,$t7,$t9
/*  f170fc0:	000cc103 */ 	sra	$t8,$t4,0x4
/*  f170fc4:	330f0001 */ 	andi	$t7,$t8,0x1
/*  f170fc8:	31990001 */ 	andi	$t9,$t4,0x1
/*  f170fcc:	01f9c021 */ 	addu	$t8,$t7,$t9
/*  f170fd0:	00097903 */ 	sra	$t7,$t1,0x4
/*  f170fd4:	31f90001 */ 	andi	$t9,$t7,0x1
/*  f170fd8:	03197821 */ 	addu	$t7,$t8,$t9
/*  f170fdc:	31380001 */ 	andi	$t8,$t1,0x1
/*  f170fe0:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f170fe4:	272f0001 */ 	addiu	$t7,$t9,0x1
/*  f170fe8:	000fc080 */ 	sll	$t8,$t7,0x2
/*  f170fec:	33190010 */ 	andi	$t9,$t8,0x10
/*  f170ff0:	000a7903 */ 	sra	$t7,$t2,0x4
/*  f170ff4:	31f80001 */ 	andi	$t8,$t7,0x1
/*  f170ff8:	314f0001 */ 	andi	$t7,$t2,0x1
/*  f170ffc:	030fc021 */ 	addu	$t8,$t8,$t7
/*  f171000:	afae0028 */ 	sw	$t6,0x28($sp)
/*  f171004:	000d7903 */ 	sra	$t7,$t5,0x4
/*  f171008:	31ee0001 */ 	andi	$t6,$t7,0x1
/*  f17100c:	030e7021 */ 	addu	$t6,$t8,$t6
/*  f171010:	31b80001 */ 	andi	$t8,$t5,0x1
/*  f171014:	01d87821 */ 	addu	$t7,$t6,$t8
/*  f171018:	25ee0001 */ 	addiu	$t6,$t7,0x1
/*  f17101c:	000ec083 */ 	sra	$t8,$t6,0x2
/*  f171020:	330f0001 */ 	andi	$t7,$t8,0x1
/*  f171024:	8fb80028 */ 	lw	$t8,0x28($sp)
/*  f171028:	032f7025 */ 	or	$t6,$t9,$t7
/*  f17102c:	000b7883 */ 	sra	$t7,$t3,0x2
/*  f171030:	256b0004 */ 	addiu	$t3,$t3,0x4
/*  f171034:	030ec825 */ 	or	$t9,$t8,$t6
/*  f171038:	0173082a */ 	slt	$at,$t3,$s3
/*  f17103c:	02afc021 */ 	addu	$t8,$s5,$t7
/*  f171040:	1420ffb0 */ 	bnez	$at,.L0f170f04
/*  f171044:	a3190000 */ 	sb	$t9,0x0($t8)
.L0f171048:
/*  f171048:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f17104c:	03d7082a */ 	slt	$at,$s8,$s7
/*  f171050:	02b1a821 */ 	addu	$s5,$s5,$s1
/*  f171054:	1420ffa8 */ 	bnez	$at,.L0f170ef8
/*  f171058:	02539021 */ 	addu	$s2,$s2,$s3
.L0f17105c:
/*  f17105c:	8fae0098 */ 	lw	$t6,0x98($sp)
/*  f171060:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f171064:	01f00019 */ 	multu	$t7,$s0
/*  f171068:	00001012 */ 	mflo	$v0
/*  f17106c:	10000047 */ 	beqz	$zero,.L0f17118c
/*  f171070:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f171074:	1ae0003d */ 	blez	$s7,.L0f17116c
/*  f171078:	0000f025 */ 	or	$s8,$zero,$zero
/*  f17107c:	8fb10098 */ 	lw	$s1,0x98($sp)
/*  f171080:	0011c843 */ 	sra	$t9,$s1,0x1
/*  f171084:	03208825 */ 	or	$s1,$t9,$zero
.L0f171088:
/*  f171088:	1a600033 */ 	blez	$s3,.L0f171158
/*  f17108c:	00005825 */ 	or	$t3,$zero,$zero
/*  f171090:	27c50001 */ 	addiu	$a1,$s8,0x1
.L0f171094:
/*  f171094:	000b3043 */ 	sra	$a2,$t3,0x1
/*  f171098:	00d21021 */ 	addu	$v0,$a2,$s2
/*  f17109c:	00b7082a */ 	slt	$at,$a1,$s7
/*  f1710a0:	10200003 */ 	beqz	$at,.L0f1710b0
/*  f1710a4:	904c0000 */ 	lbu	$t4,0x0($v0)
/*  f1710a8:	10000002 */ 	beqz	$zero,.L0f1710b4
/*  f1710ac:	00133843 */ 	sra	$a3,$s3,0x1
.L0f1710b0:
/*  f1710b0:	00003825 */ 	or	$a3,$zero,$zero
.L0f1710b4:
/*  f1710b4:	00e6c021 */ 	addu	$t8,$a3,$a2
/*  f1710b8:	03127021 */ 	addu	$t6,$t8,$s2
/*  f1710bc:	00b7082a */ 	slt	$at,$a1,$s7
/*  f1710c0:	91c90000 */ 	lbu	$t1,0x0($t6)
/*  f1710c4:	10200003 */ 	beqz	$at,.L0f1710d4
/*  f1710c8:	904a0001 */ 	lbu	$t2,0x1($v0)
/*  f1710cc:	10000002 */ 	beqz	$zero,.L0f1710d8
/*  f1710d0:	00133843 */ 	sra	$a3,$s3,0x1
.L0f1710d4:
/*  f1710d4:	00003825 */ 	or	$a3,$zero,$zero
.L0f1710d8:
/*  f1710d8:	00e67821 */ 	addu	$t7,$a3,$a2
/*  f1710dc:	01f2c821 */ 	addu	$t9,$t7,$s2
/*  f1710e0:	000cc103 */ 	sra	$t8,$t4,0x4
/*  f1710e4:	330e000f */ 	andi	$t6,$t8,0xf
/*  f1710e8:	932d0001 */ 	lbu	$t5,0x1($t9)
/*  f1710ec:	318f000f */ 	andi	$t7,$t4,0xf
/*  f1710f0:	01cfc821 */ 	addu	$t9,$t6,$t7
/*  f1710f4:	0009c103 */ 	sra	$t8,$t1,0x4
/*  f1710f8:	330e000f */ 	andi	$t6,$t8,0xf
/*  f1710fc:	032e7821 */ 	addu	$t7,$t9,$t6
/*  f171100:	3138000f */ 	andi	$t8,$t1,0xf
/*  f171104:	01f8c821 */ 	addu	$t9,$t7,$t8
/*  f171108:	00197080 */ 	sll	$t6,$t9,0x2
/*  f17110c:	31cf00f0 */ 	andi	$t7,$t6,0xf0
/*  f171110:	000ac103 */ 	sra	$t8,$t2,0x4
/*  f171114:	3319000f */ 	andi	$t9,$t8,0xf
/*  f171118:	314e000f */ 	andi	$t6,$t2,0xf
/*  f17111c:	032ec021 */ 	addu	$t8,$t9,$t6
/*  f171120:	000dc903 */ 	sra	$t9,$t5,0x4
/*  f171124:	332e000f */ 	andi	$t6,$t9,0xf
/*  f171128:	030ec821 */ 	addu	$t9,$t8,$t6
/*  f17112c:	31b8000f */ 	andi	$t8,$t5,0xf
/*  f171130:	03387021 */ 	addu	$t6,$t9,$t8
/*  f171134:	000ec883 */ 	sra	$t9,$t6,0x2
/*  f171138:	3338000f */ 	andi	$t8,$t9,0xf
/*  f17113c:	000bc883 */ 	sra	$t9,$t3,0x2
/*  f171140:	256b0004 */ 	addiu	$t3,$t3,0x4
/*  f171144:	01f87025 */ 	or	$t6,$t7,$t8
/*  f171148:	0173082a */ 	slt	$at,$t3,$s3
/*  f17114c:	02b97821 */ 	addu	$t7,$s5,$t9
/*  f171150:	1420ffd0 */ 	bnez	$at,.L0f171094
/*  f171154:	a1ee0000 */ 	sb	$t6,0x0($t7)
.L0f171158:
/*  f171158:	27de0002 */ 	addiu	$s8,$s8,0x2
/*  f17115c:	03d7082a */ 	slt	$at,$s8,$s7
/*  f171160:	02b1a821 */ 	addu	$s5,$s5,$s1
/*  f171164:	1420ffc8 */ 	bnez	$at,.L0f171088
/*  f171168:	02539021 */ 	addu	$s2,$s2,$s3
.L0f17116c:
/*  f17116c:	8fb80098 */ 	lw	$t8,0x98($sp)
/*  f171170:	0018c843 */ 	sra	$t9,$t8,0x1
/*  f171174:	03300019 */ 	multu	$t9,$s0
/*  f171178:	00001012 */ 	mflo	$v0
/*  f17117c:	10000003 */ 	beqz	$zero,.L0f17118c
/*  f171180:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f171184:
/*  f171184:	00001025 */ 	or	$v0,$zero,$zero
.L0f171188:
/*  f171188:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f17118c:
/*  f17118c:	8fb10008 */ 	lw	$s1,0x8($sp)
/*  f171190:	8fb2000c */ 	lw	$s2,0xc($sp)
/*  f171194:	8fb30010 */ 	lw	$s3,0x10($sp)
/*  f171198:	8fb40014 */ 	lw	$s4,0x14($sp)
/*  f17119c:	8fb50018 */ 	lw	$s5,0x18($sp)
/*  f1711a0:	8fb6001c */ 	lw	$s6,0x1c($sp)
/*  f1711a4:	8fb70020 */ 	lw	$s7,0x20($sp)
/*  f1711a8:	8fbe0024 */ 	lw	$s8,0x24($sp)
/*  f1711ac:	03e00008 */ 	jr	$ra
/*  f1711b0:	27bd00a8 */ 	addiu	$sp,$sp,0xa8
);

GLOBAL_ASM(
glabel func0f1711b4
/*  f1711b4:	27bdcf90 */ 	addiu	$sp,$sp,-12400
/*  f1711b8:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f1711bc:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f1711c0:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f1711c4:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f1711c8:	00c0a025 */ 	or	$s4,$a2,$zero
/*  f1711cc:	0080a825 */ 	or	$s5,$a0,$zero
/*  f1711d0:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f1711d4:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f1711d8:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f1711dc:	afa53074 */ 	sw	$a1,0x3074($sp)
/*  f1711e0:	0000f825 */ 	or	$ra,$zero,$zero
/*  f1711e4:	18c0000a */ 	blez	$a2,.L0f171210
/*  f1711e8:	00008825 */ 	or	$s1,$zero,$zero
/*  f1711ec:	27b02070 */ 	addiu	$s0,$sp,0x2070
.L0f1711f0:
/*  f1711f0:	afbf0054 */ 	sw	$ra,0x54($sp)
/*  f1711f4:	0fc5cd4f */ 	jal	func0f17353c
/*  f1711f8:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f1711fc:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171200:	8fbf0054 */ 	lw	$ra,0x54($sp)
/*  f171204:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f171208:	1634fff9 */ 	bne	$s1,$s4,.L0f1711f0
/*  f17120c:	a602fffe */ 	sh	$v0,-0x2($s0)
.L0f171210:
/*  f171210:	27a20070 */ 	addiu	$v0,$sp,0x70
/*  f171214:	27a42070 */ 	addiu	$a0,$sp,0x2070
/*  f171218:	2403ffff */ 	addiu	$v1,$zero,-1
.L0f17121c:
/*  f17121c:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f171220:	0044082b */ 	sltu	$at,$v0,$a0
/*  f171224:	a443fffc */ 	sh	$v1,-0x4($v0)
/*  f171228:	1420fffc */ 	bnez	$at,.L0f17121c
/*  f17122c:	a443fffe */ 	sh	$v1,-0x2($v0)
/*  f171230:	2408270f */ 	addiu	$t0,$zero,0x270f
/*  f171234:	2406270f */ 	addiu	$a2,$zero,0x270f
/*  f171238:	1a80001e */ 	blez	$s4,.L0f1712b4
/*  f17123c:	00008825 */ 	or	$s1,$zero,$zero
/*  f171240:	27b02070 */ 	addiu	$s0,$sp,0x2070
/*  f171244:	8fa9005c */ 	lw	$t1,0x5c($sp)
/*  f171248:	8fa70058 */ 	lw	$a3,0x58($sp)
.L0f17124c:
/*  f17124c:	96040000 */ 	lhu	$a0,0x0($s0)
/*  f171250:	01001825 */ 	or	$v1,$t0,$zero
/*  f171254:	00c02825 */ 	or	$a1,$a2,$zero
/*  f171258:	0088082a */ 	slt	$at,$a0,$t0
/*  f17125c:	1020000a */ 	beqz	$at,.L0f171288
/*  f171260:	00801025 */ 	or	$v0,$a0,$zero
/*  f171264:	00a3082a */ 	slt	$at,$a1,$v1
/*  f171268:	50200005 */ 	beqzl	$at,.L0f171280
/*  f17126c:	3086ffff */ 	andi	$a2,$a0,0xffff
/*  f171270:	3088ffff */ 	andi	$t0,$a0,0xffff
/*  f171274:	10000009 */ 	beqz	$zero,.L0f17129c
/*  f171278:	02204825 */ 	or	$t1,$s1,$zero
/*  f17127c:	3086ffff */ 	andi	$a2,$a0,0xffff
.L0f171280:
/*  f171280:	10000006 */ 	beqz	$zero,.L0f17129c
/*  f171284:	02203825 */ 	or	$a3,$s1,$zero
.L0f171288:
/*  f171288:	0045082a */ 	slt	$at,$v0,$a1
/*  f17128c:	50200004 */ 	beqzl	$at,.L0f1712a0
/*  f171290:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171294:	3086ffff */ 	andi	$a2,$a0,0xffff
/*  f171298:	02203825 */ 	or	$a3,$s1,$zero
.L0f17129c:
/*  f17129c:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f1712a0:
/*  f1712a0:	1634ffea */ 	bne	$s1,$s4,.L0f17124c
/*  f1712a4:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f1712a8:	00008825 */ 	or	$s1,$zero,$zero
/*  f1712ac:	afa70058 */ 	sw	$a3,0x58($sp)
/*  f1712b0:	afa9005c */ 	sw	$t1,0x5c($sp)
.L0f1712b4:
/*  f1712b4:	8fa70058 */ 	lw	$a3,0x58($sp)
/*  f1712b8:	8fa9005c */ 	lw	$t1,0x5c($sp)
/*  f1712bc:	27b30070 */ 	addiu	$s3,$sp,0x70
/*  f1712c0:	240d270f */ 	addiu	$t5,$zero,0x270f
/*  f1712c4:	240c270f */ 	addiu	$t4,$zero,0x270f
/*  f1712c8:	27ab2070 */ 	addiu	$t3,$sp,0x2070
/*  f1712cc:	00077040 */ 	sll	$t6,$a3,0x1
.L0f1712d0:
/*  f1712d0:	00097840 */ 	sll	$t7,$t1,0x1
/*  f1712d4:	016f1021 */ 	addu	$v0,$t3,$t7
/*  f1712d8:	016e2821 */ 	addu	$a1,$t3,$t6
/*  f1712dc:	94b80000 */ 	lhu	$t8,0x0($a1)
/*  f1712e0:	94590000 */ 	lhu	$t9,0x0($v0)
/*  f1712e4:	00097080 */ 	sll	$t6,$t1,0x2
/*  f1712e8:	00077880 */ 	sll	$t7,$a3,0x2
/*  f1712ec:	03195021 */ 	addu	$t2,$t8,$t9
/*  f1712f0:	026f2021 */ 	addu	$a0,$s3,$t7
/*  f1712f4:	026e1821 */ 	addu	$v1,$s3,$t6
/*  f1712f8:	2408270f */ 	addiu	$t0,$zero,0x270f
/*  f1712fc:	15400002 */ 	bnez	$t2,.L0f171308
/*  f171300:	2406270f */ 	addiu	$a2,$zero,0x270f
/*  f171304:	240a0001 */ 	addiu	$t2,$zero,0x1
.L0f171308:
/*  f171308:	84780000 */ 	lh	$t8,0x0($v1)
/*  f17130c:	a44c0000 */ 	sh	$t4,0x0($v0)
/*  f171310:	a4ac0000 */ 	sh	$t4,0x0($a1)
/*  f171314:	07010013 */ 	bgez	$t8,.L0f171364
/*  f171318:	27b02070 */ 	addiu	$s0,$sp,0x2070
/*  f17131c:	84790002 */ 	lh	$t9,0x2($v1)
/*  f171320:	252e2710 */ 	addiu	$t6,$t1,0x2710
/*  f171324:	07230010 */ 	bgezl	$t9,.L0f171368
/*  f171328:	848e0000 */ 	lh	$t6,0x0($a0)
/*  f17132c:	a46e0000 */ 	sh	$t6,0x0($v1)
/*  f171330:	848f0000 */ 	lh	$t7,0x0($a0)
/*  f171334:	01209025 */ 	or	$s2,$t1,$zero
/*  f171338:	a44a0000 */ 	sh	$t2,0x0($v0)
/*  f17133c:	05e10007 */ 	bgez	$t7,.L0f17135c
/*  f171340:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171344:	84980002 */ 	lh	$t8,0x2($a0)
/*  f171348:	24f92710 */ 	addiu	$t9,$a3,0x2710
/*  f17134c:	07010003 */ 	bgez	$t8,.L0f17135c
/*  f171350:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171354:	10000037 */ 	beqz	$zero,.L0f171434
/*  f171358:	a4790002 */ 	sh	$t9,0x2($v1)
.L0f17135c:
/*  f17135c:	10000035 */ 	beqz	$zero,.L0f171434
/*  f171360:	a4670002 */ 	sh	$a3,0x2($v1)
.L0f171364:
/*  f171364:	848e0000 */ 	lh	$t6,0x0($a0)
.L0f171368:
/*  f171368:	87b80070 */ 	lh	$t8,0x70($sp)
/*  f17136c:	05c10013 */ 	bgez	$t6,.L0f1713bc
/*  f171370:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171374:	848f0002 */ 	lh	$t7,0x2($a0)
/*  f171378:	05e10010 */ 	bgez	$t7,.L0f1713bc
/*  f17137c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171380:	24f82710 */ 	addiu	$t8,$a3,0x2710
/*  f171384:	a4980000 */ 	sh	$t8,0x0($a0)
/*  f171388:	84790000 */ 	lh	$t9,0x0($v1)
/*  f17138c:	00e09025 */ 	or	$s2,$a3,$zero
/*  f171390:	a4aa0000 */ 	sh	$t2,0x0($a1)
/*  f171394:	07210007 */ 	bgez	$t9,.L0f1713b4
/*  f171398:	00000000 */ 	sll	$zero,$zero,0x0
/*  f17139c:	846e0002 */ 	lh	$t6,0x2($v1)
/*  f1713a0:	252f2710 */ 	addiu	$t7,$t1,0x2710
/*  f1713a4:	05c10003 */ 	bgez	$t6,.L0f1713b4
/*  f1713a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1713ac:	10000021 */ 	beqz	$zero,.L0f171434
/*  f1713b0:	a48f0002 */ 	sh	$t7,0x2($a0)
.L0f1713b4:
/*  f1713b4:	1000001f */ 	beqz	$zero,.L0f171434
/*  f1713b8:	a4890002 */ 	sh	$t1,0x2($a0)
.L0f1713bc:
/*  f1713bc:	07010009 */ 	bgez	$t8,.L0f1713e4
/*  f1713c0:	00009025 */ 	or	$s2,$zero,$zero
/*  f1713c4:	0000c880 */ 	sll	$t9,$zero,0x2
/*  f1713c8:	02791021 */ 	addu	$v0,$s3,$t9
/*  f1713cc:	844e0002 */ 	lh	$t6,0x2($v0)
/*  f1713d0:	97af2070 */ 	lhu	$t7,0x2070($sp)
/*  f1713d4:	05c10003 */ 	bgez	$t6,.L0f1713e4
/*  f1713d8:	29e1270f */ 	slti	$at,$t7,0x270f
/*  f1713dc:	50200011 */ 	beqzl	$at,.L0f171424
/*  f1713e0:	00127040 */ 	sll	$t6,$s2,0x1
.L0f1713e4:
/*  f1713e4:	26520001 */ 	addiu	$s2,$s2,0x1
.L0f1713e8:
/*  f1713e8:	0012c080 */ 	sll	$t8,$s2,0x2
/*  f1713ec:	02781021 */ 	addu	$v0,$s3,$t8
/*  f1713f0:	84590000 */ 	lh	$t9,0x0($v0)
/*  f1713f4:	0723fffc */ 	bgezl	$t9,.L0f1713e8
/*  f1713f8:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f1713fc:	844e0002 */ 	lh	$t6,0x2($v0)
/*  f171400:	05c3fff9 */ 	bgezl	$t6,.L0f1713e8
/*  f171404:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f171408:	00127840 */ 	sll	$t7,$s2,0x1
/*  f17140c:	016fc021 */ 	addu	$t8,$t3,$t7
/*  f171410:	97190000 */ 	lhu	$t9,0x0($t8)
/*  f171414:	2b21270f */ 	slti	$at,$t9,0x270f
/*  f171418:	5420fff3 */ 	bnezl	$at,.L0f1713e8
/*  f17141c:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f171420:	00127040 */ 	sll	$t6,$s2,0x1
.L0f171424:
/*  f171424:	016e7821 */ 	addu	$t7,$t3,$t6
/*  f171428:	a5ea0000 */ 	sh	$t2,0x0($t7)
/*  f17142c:	a4490000 */ 	sh	$t1,0x0($v0)
/*  f171430:	a4470002 */ 	sh	$a3,0x2($v0)
.L0f171434:
/*  f171434:	1a800019 */ 	blez	$s4,.L0f17149c
/*  f171438:	00000000 */ 	sll	$zero,$zero,0x0
.L0f17143c:
/*  f17143c:	96040000 */ 	lhu	$a0,0x0($s0)
/*  f171440:	01001825 */ 	or	$v1,$t0,$zero
/*  f171444:	00c02825 */ 	or	$a1,$a2,$zero
/*  f171448:	0088082a */ 	slt	$at,$a0,$t0
/*  f17144c:	1020000a */ 	beqz	$at,.L0f171478
/*  f171450:	00801025 */ 	or	$v0,$a0,$zero
/*  f171454:	00a3082a */ 	slt	$at,$a1,$v1
/*  f171458:	50200005 */ 	beqzl	$at,.L0f171470
/*  f17145c:	3086ffff */ 	andi	$a2,$a0,0xffff
/*  f171460:	3088ffff */ 	andi	$t0,$a0,0xffff
/*  f171464:	10000009 */ 	beqz	$zero,.L0f17148c
/*  f171468:	02204825 */ 	or	$t1,$s1,$zero
/*  f17146c:	3086ffff */ 	andi	$a2,$a0,0xffff
.L0f171470:
/*  f171470:	10000006 */ 	beqz	$zero,.L0f17148c
/*  f171474:	02203825 */ 	or	$a3,$s1,$zero
.L0f171478:
/*  f171478:	0045082a */ 	slt	$at,$v0,$a1
/*  f17147c:	50200004 */ 	beqzl	$at,.L0f171490
/*  f171480:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171484:	3086ffff */ 	andi	$a2,$a0,0xffff
/*  f171488:	02203825 */ 	or	$a3,$s1,$zero
.L0f17148c:
/*  f17148c:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f171490:
/*  f171490:	1634ffea */ 	bne	$s1,$s4,.L0f17143c
/*  f171494:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f171498:	00008825 */ 	or	$s1,$zero,$zero
.L0f17149c:
/*  f17149c:	51a80004 */ 	beql	$t5,$t0,.L0f1714b0
/*  f1714a0:	241f0001 */ 	addiu	$ra,$zero,0x1
/*  f1714a4:	15a60002 */ 	bne	$t5,$a2,.L0f1714b0
/*  f1714a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1714ac:	241f0001 */ 	addiu	$ra,$zero,0x1
.L0f1714b0:
/*  f1714b0:	53e0ff87 */ 	beqzl	$ra,.L0f1712d0
/*  f1714b4:	00077040 */ 	sll	$t6,$a3,0x1
/*  f1714b8:	8fb83074 */ 	lw	$t8,0x3074($sp)
/*  f1714bc:	afb20068 */ 	sw	$s2,0x68($sp)
/*  f1714c0:	27b30070 */ 	addiu	$s3,$sp,0x70
/*  f1714c4:	1b00001b */ 	blez	$t8,.L0f171534
/*  f1714c8:	2a412710 */ 	slti	$at,$s2,0x2710
.L0f1714cc:
/*  f1714cc:	1020000b */ 	beqz	$at,.L0f1714fc
/*  f1714d0:	02408025 */ 	or	$s0,$s2,$zero
.L0f1714d4:
/*  f1714d4:	0fc5cd4f */ 	jal	func0f17353c
/*  f1714d8:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f1714dc:	0010c880 */ 	sll	$t9,$s0,0x2
/*  f1714e0:	02797021 */ 	addu	$t6,$s3,$t9
/*  f1714e4:	00027840 */ 	sll	$t7,$v0,0x1
/*  f1714e8:	01cfc021 */ 	addu	$t8,$t6,$t7
/*  f1714ec:	87100000 */ 	lh	$s0,0x0($t8)
/*  f1714f0:	2a012710 */ 	slti	$at,$s0,0x2710
/*  f1714f4:	1420fff7 */ 	bnez	$at,.L0f1714d4
/*  f1714f8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1714fc:
/*  f1714fc:	2a810101 */ 	slti	$at,$s4,0x101
/*  f171500:	10200005 */ 	beqz	$at,.L0f171518
/*  f171504:	260fd8f0 */ 	addiu	$t7,$s0,-10000
/*  f171508:	2619d8f0 */ 	addiu	$t9,$s0,-10000
/*  f17150c:	02b17021 */ 	addu	$t6,$s5,$s1
/*  f171510:	10000004 */ 	beqz	$zero,.L0f171524
/*  f171514:	a1d90000 */ 	sb	$t9,0x0($t6)
.L0f171518:
/*  f171518:	0011c040 */ 	sll	$t8,$s1,0x1
/*  f17151c:	02b8c821 */ 	addu	$t9,$s5,$t8
/*  f171520:	a72f0000 */ 	sh	$t7,0x0($t9)
.L0f171524:
/*  f171524:	8fae3074 */ 	lw	$t6,0x3074($sp)
/*  f171528:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f17152c:	562effe7 */ 	bnel	$s1,$t6,.L0f1714cc
/*  f171530:	2a412710 */ 	slti	$at,$s2,0x2710
.L0f171534:
/*  f171534:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f171538:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f17153c:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f171540:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f171544:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f171548:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f17154c:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f171550:	03e00008 */ 	jr	$ra
/*  f171554:	27bd3070 */ 	addiu	$sp,$sp,0x3070
);

GLOBAL_ASM(
glabel func0f171558
/*  f171558:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f17155c:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f171560:	00809025 */ 	or	$s2,$a0,$zero
/*  f171564:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f171568:	afbe0038 */ 	sw	$s8,0x38($sp)
/*  f17156c:	00a0f025 */ 	or	$s8,$a1,$zero
/*  f171570:	afb70034 */ 	sw	$s7,0x34($sp)
/*  f171574:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f171578:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f17157c:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f171580:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f171584:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f171588:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f17158c:	0fc5cd4f */ 	jal	func0f17353c
/*  f171590:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f171594:	0040b025 */ 	or	$s6,$v0,$zero
/*  f171598:	0fc5cd4f */ 	jal	func0f17353c
/*  f17159c:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f1715a0:	0040b825 */ 	or	$s7,$v0,$zero
/*  f1715a4:	0fc5cd4f */ 	jal	func0f17353c
/*  f1715a8:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f1715ac:	02d77021 */ 	addu	$t6,$s6,$s7
/*  f1715b0:	01c22021 */ 	addu	$a0,$t6,$v0
/*  f1715b4:	24830001 */ 	addiu	$v1,$a0,0x1
/*  f1715b8:	0040a025 */ 	or	$s4,$v0,$zero
/*  f1715bc:	18600005 */ 	blez	$v1,.L0f1715d4
/*  f1715c0:	0000a825 */ 	or	$s5,$zero,$zero
.L0f1715c4:
/*  f1715c4:	00621823 */ 	subu	$v1,$v1,$v0
/*  f1715c8:	2463ffff */ 	addiu	$v1,$v1,-1
/*  f1715cc:	1c60fffd */ 	bgtz	$v1,.L0f1715c4
/*  f1715d0:	26b50001 */ 	addiu	$s5,$s5,0x1
.L0f1715d4:
/*  f1715d4:	1bc00047 */ 	blez	$s8,.L0f1716f4
/*  f1715d8:	00008825 */ 	or	$s1,$zero,$zero
.L0f1715dc:
/*  f1715dc:	0fc5cd4f */ 	jal	func0f17353c
/*  f1715e0:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f1715e4:	1440000f */ 	bnez	$v0,.L0f171624
/*  f1715e8:	2a810009 */ 	slti	$at,$s4,0x9
/*  f1715ec:	10200007 */ 	beqz	$at,.L0f17160c
/*  f1715f0:	02802025 */ 	or	$a0,$s4,$zero
/*  f1715f4:	02802025 */ 	or	$a0,$s4,$zero
/*  f1715f8:	0fc5cd4f */ 	jal	func0f17353c
/*  f1715fc:	02518021 */ 	addu	$s0,$s2,$s1
/*  f171600:	a2020000 */ 	sb	$v0,0x0($s0)
/*  f171604:	10000038 */ 	beqz	$zero,.L0f1716e8
/*  f171608:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f17160c:
/*  f17160c:	00117840 */ 	sll	$t7,$s1,0x1
/*  f171610:	0fc5cd4f */ 	jal	func0f17353c
/*  f171614:	024f8021 */ 	addu	$s0,$s2,$t7
/*  f171618:	a6020000 */ 	sh	$v0,0x0($s0)
/*  f17161c:	10000032 */ 	beqz	$zero,.L0f1716e8
/*  f171620:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f171624:
/*  f171624:	0fc5cd4f */ 	jal	func0f17353c
/*  f171628:	02c02025 */ 	or	$a0,$s6,$zero
/*  f17162c:	02229823 */ 	subu	$s3,$s1,$v0
/*  f171630:	2673ffff */ 	addiu	$s3,$s3,-1
/*  f171634:	0fc5cd4f */ 	jal	func0f17353c
/*  f171638:	02e02025 */ 	or	$a0,$s7,$zero
/*  f17163c:	00551821 */ 	addu	$v1,$v0,$s5
/*  f171640:	2a810009 */ 	slti	$at,$s4,0x9
/*  f171644:	10200014 */ 	beqz	$at,.L0f171698
/*  f171648:	00602825 */ 	or	$a1,$v1,$zero
/*  f17164c:	0263c021 */ 	addu	$t8,$s3,$v1
/*  f171650:	0278082a */ 	slt	$at,$s3,$t8
/*  f171654:	02601025 */ 	or	$v0,$s3,$zero
/*  f171658:	1020000a */ 	beqz	$at,.L0f171684
/*  f17165c:	02518021 */ 	addu	$s0,$s2,$s1
/*  f171660:	02652021 */ 	addu	$a0,$s3,$a1
/*  f171664:	02531821 */ 	addu	$v1,$s2,$s3
.L0f171668:
/*  f171668:	90790000 */ 	lbu	$t9,0x0($v1)
/*  f17166c:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171670:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171674:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171678:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f17167c:	1444fffa */ 	bne	$v0,$a0,.L0f171668
/*  f171680:	a219ffff */ 	sb	$t9,-0x1($s0)
.L0f171684:
/*  f171684:	0fc5cd4f */ 	jal	func0f17353c
/*  f171688:	02802025 */ 	or	$a0,$s4,$zero
/*  f17168c:	a2020000 */ 	sb	$v0,0x0($s0)
/*  f171690:	10000015 */ 	beqz	$zero,.L0f1716e8
/*  f171694:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f171698:
/*  f171698:	02634821 */ 	addu	$t1,$s3,$v1
/*  f17169c:	0269082a */ 	slt	$at,$s3,$t1
/*  f1716a0:	00114040 */ 	sll	$t0,$s1,0x1
/*  f1716a4:	02488021 */ 	addu	$s0,$s2,$t0
/*  f1716a8:	1020000b */ 	beqz	$at,.L0f1716d8
/*  f1716ac:	02601025 */ 	or	$v0,$s3,$zero
/*  f1716b0:	00135040 */ 	sll	$t2,$s3,0x1
/*  f1716b4:	024a1821 */ 	addu	$v1,$s2,$t2
/*  f1716b8:	02652021 */ 	addu	$a0,$s3,$a1
.L0f1716bc:
/*  f1716bc:	946b0000 */ 	lhu	$t3,0x0($v1)
/*  f1716c0:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f1716c4:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f1716c8:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f1716cc:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f1716d0:	1444fffa */ 	bne	$v0,$a0,.L0f1716bc
/*  f1716d4:	a60bfffe */ 	sh	$t3,-0x2($s0)
.L0f1716d8:
/*  f1716d8:	0fc5cd4f */ 	jal	func0f17353c
/*  f1716dc:	02802025 */ 	or	$a0,$s4,$zero
/*  f1716e0:	a6020000 */ 	sh	$v0,0x0($s0)
/*  f1716e4:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f1716e8:
/*  f1716e8:	023e082a */ 	slt	$at,$s1,$s8
/*  f1716ec:	1420ffbb */ 	bnez	$at,.L0f1715dc
/*  f1716f0:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1716f4:
/*  f1716f4:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f1716f8:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1716fc:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f171700:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f171704:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f171708:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f17170c:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f171710:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f171714:	8fb70034 */ 	lw	$s7,0x34($sp)
/*  f171718:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*  f17171c:	03e00008 */ 	jr	$ra
/*  f171720:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f171724
/*  f171724:	27bdffd0 */ 	addiu	$sp,$sp,-48
/*  f171728:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f17172c:	00809825 */ 	or	$s3,$a0,$zero
/*  f171730:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f171734:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f171738:	00a09025 */ 	or	$s2,$a1,$zero
/*  f17173c:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f171740:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f171744:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f171748:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f17174c:	0fc5cd4f */ 	jal	func0f17353c
/*  f171750:	2404000b */ 	addiu	$a0,$zero,0xb
/*  f171754:	2a410011 */ 	slti	$at,$s2,0x11
/*  f171758:	1020000c */ 	beqz	$at,.L0f17178c
/*  f17175c:	0040a825 */ 	or	$s5,$v0,$zero
/*  f171760:	18400027 */ 	blez	$v0,.L0f171800
/*  f171764:	00008025 */ 	or	$s0,$zero,$zero
/*  f171768:	02608825 */ 	or	$s1,$s3,$zero
.L0f17176c:
/*  f17176c:	0fc5cd4f */ 	jal	func0f17353c
/*  f171770:	02402025 */ 	or	$a0,$s2,$zero
/*  f171774:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f171778:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f17177c:	1615fffb */ 	bne	$s0,$s5,.L0f17176c
/*  f171780:	a622fffe */ 	sh	$v0,-0x2($s1)
/*  f171784:	1000001f */ 	beqz	$zero,.L0f171804
/*  f171788:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f17178c:
/*  f17178c:	2a410019 */ 	slti	$at,$s2,0x19
/*  f171790:	1020000c */ 	beqz	$at,.L0f1717c4
/*  f171794:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171798:	18400019 */ 	blez	$v0,.L0f171800
/*  f17179c:	00008025 */ 	or	$s0,$zero,$zero
/*  f1717a0:	02608825 */ 	or	$s1,$s3,$zero
.L0f1717a4:
/*  f1717a4:	0fc5cd4f */ 	jal	func0f17353c
/*  f1717a8:	02402025 */ 	or	$a0,$s2,$zero
/*  f1717ac:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1717b0:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f1717b4:	1615fffb */ 	bne	$s0,$s5,.L0f1717a4
/*  f1717b8:	ae22fffc */ 	sw	$v0,-0x4($s1)
/*  f1717bc:	10000011 */ 	beqz	$zero,.L0f171804
/*  f1717c0:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f1717c4:
/*  f1717c4:	1840000e */ 	blez	$v0,.L0f171800
/*  f1717c8:	00008025 */ 	or	$s0,$zero,$zero
/*  f1717cc:	2654ffe8 */ 	addiu	$s4,$s2,-24
/*  f1717d0:	02608825 */ 	or	$s1,$s3,$zero
.L0f1717d4:
/*  f1717d4:	0fc5cd4f */ 	jal	func0f17353c
/*  f1717d8:	24040018 */ 	addiu	$a0,$zero,0x18
/*  f1717dc:	00409025 */ 	or	$s2,$v0,$zero
/*  f1717e0:	0fc5cd4f */ 	jal	func0f17353c
/*  f1717e4:	02802025 */ 	or	$a0,$s4,$zero
/*  f1717e8:	00127200 */ 	sll	$t6,$s2,0x8
/*  f1717ec:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1717f0:	004e7825 */ 	or	$t7,$v0,$t6
/*  f1717f4:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f1717f8:	1615fff6 */ 	bne	$s0,$s5,.L0f1717d4
/*  f1717fc:	ae2ffffc */ 	sw	$t7,-0x4($s1)
.L0f171800:
/*  f171800:	8fbf002c */ 	lw	$ra,0x2c($sp)
.L0f171804:
/*  f171804:	02a01025 */ 	or	$v0,$s5,$zero
/*  f171808:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f17180c:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f171810:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f171814:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f171818:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f17181c:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f171820:	03e00008 */ 	jr	$ra
/*  f171824:	27bd0030 */ 	addiu	$sp,$sp,0x30
);

GLOBAL_ASM(
glabel func0f171828
/*  f171828:	2484ffff */ 	addiu	$a0,$a0,-1
/*  f17182c:	18800005 */ 	blez	$a0,.L0f171844
/*  f171830:	00001825 */ 	or	$v1,$zero,$zero
.L0f171834:
/*  f171834:	00047043 */ 	sra	$t6,$a0,0x1
/*  f171838:	01c02025 */ 	or	$a0,$t6,$zero
/*  f17183c:	1dc0fffd */ 	bgtz	$t6,.L0f171834
/*  f171840:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f171844:
/*  f171844:	03e00008 */ 	jr	$ra
/*  f171848:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f17184c
/*  f17184c:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f171850:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f171854:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f171858:	00a09025 */ 	or	$s2,$a1,$zero
/*  f17185c:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f171860:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f171864:	18a00008 */ 	blez	$a1,.L0f171888
/*  f171868:	00008025 */ 	or	$s0,$zero,$zero
/*  f17186c:	00808825 */ 	or	$s1,$a0,$zero
.L0f171870:
/*  f171870:	0fc5cd4f */ 	jal	func0f17353c
/*  f171874:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f171878:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f17187c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171880:	1612fffb */ 	bne	$s0,$s2,.L0f171870
/*  f171884:	a222ffff */ 	sb	$v0,-0x1($s1)
.L0f171888:
/*  f171888:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f17188c:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f171890:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f171894:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f171898:	03e00008 */ 	jr	$ra
/*  f17189c:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

GLOBAL_ASM(
glabel func0f1718a0
/*  f1718a0:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f1718a4:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f1718a8:	2495000f */ 	addiu	$s5,$a0,0xf
/*  f1718ac:	2401fff0 */ 	addiu	$at,$zero,-16
/*  f1718b0:	02a17024 */ 	and	$t6,$s5,$at
/*  f1718b4:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f1718b8:	2401fff8 */ 	addiu	$at,$zero,-8
/*  f1718bc:	24820007 */ 	addiu	$v0,$a0,0x7
/*  f1718c0:	00419824 */ 	and	$s3,$v0,$at
/*  f1718c4:	afb70030 */ 	sw	$s7,0x30($sp)
/*  f1718c8:	afb6002c */ 	sw	$s6,0x2c($sp)
/*  f1718cc:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f1718d0:	2ce10009 */ 	sltiu	$at,$a3,0x9
/*  f1718d4:	00a09025 */ 	or	$s2,$a1,$zero
/*  f1718d8:	00c0b825 */ 	or	$s7,$a2,$zero
/*  f1718dc:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f1718e0:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f1718e4:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f1718e8:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f1718ec:	01c0a825 */ 	or	$s5,$t6,$zero
/*  f1718f0:	102000a1 */ 	beqz	$at,.L0f171b78
/*  f1718f4:	0260b025 */ 	or	$s6,$s3,$zero
/*  f1718f8:	0007c080 */ 	sll	$t8,$a3,0x2
/*  f1718fc:	3c017f1b */ 	lui	$at,%hi(var7f1b7ac0)
/*  f171900:	00380821 */ 	addu	$at,$at,$t8
/*  f171904:	8c387ac0 */ 	lw	$t8,%lo(var7f1b7ac0)($at)
/*  f171908:	03000008 */ 	jr	$t8
/*  f17190c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171910:	1ae00016 */ 	blez	$s7,.L0f17196c
/*  f171914:	0000a025 */ 	or	$s4,$zero,$zero
/*  f171918:	26530003 */ 	addiu	$s3,$s2,0x3
/*  f17191c:	32790ffc */ 	andi	$t9,$s3,0xffc
/*  f171920:	00199880 */ 	sll	$s3,$t9,0x2
.L0f171924:
/*  f171924:	1a40000e */ 	blez	$s2,.L0f171960
/*  f171928:	00008025 */ 	or	$s0,$zero,$zero
/*  f17192c:	02a08825 */ 	or	$s1,$s5,$zero
.L0f171930:
/*  f171930:	0fc5cd4f */ 	jal	func0f17353c
/*  f171934:	24040010 */ 	addiu	$a0,$zero,0x10
/*  f171938:	00024c00 */ 	sll	$t1,$v0,0x10
/*  f17193c:	ae290000 */ 	sw	$t1,0x0($s1)
/*  f171940:	0fc5cd4f */ 	jal	func0f17353c
/*  f171944:	24040010 */ 	addiu	$a0,$zero,0x10
/*  f171948:	8e2a0000 */ 	lw	$t2,0x0($s1)
/*  f17194c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f171950:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f171954:	01425825 */ 	or	$t3,$t2,$v0
/*  f171958:	1612fff5 */ 	bne	$s0,$s2,.L0f171930
/*  f17195c:	ae2bfffc */ 	sw	$t3,-0x4($s1)
.L0f171960:
/*  f171960:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f171964:	1697ffef */ 	bne	$s4,$s7,.L0f171924
/*  f171968:	02b3a821 */ 	addu	$s5,$s5,$s3
.L0f17196c:
/*  f17196c:	264c0003 */ 	addiu	$t4,$s2,0x3
/*  f171970:	318d0ffc */ 	andi	$t5,$t4,0xffc
/*  f171974:	01b70019 */ 	multu	$t5,$s7
/*  f171978:	00001012 */ 	mflo	$v0
/*  f17197c:	00027080 */ 	sll	$t6,$v0,0x2
/*  f171980:	1000007e */ 	beqz	$zero,.L0f171b7c
/*  f171984:	01c01025 */ 	or	$v0,$t6,$zero
/*  f171988:	1ae00012 */ 	blez	$s7,.L0f1719d4
/*  f17198c:	0000a025 */ 	or	$s4,$zero,$zero
/*  f171990:	26530003 */ 	addiu	$s3,$s2,0x3
/*  f171994:	326f0ffc */ 	andi	$t7,$s3,0xffc
/*  f171998:	000f9880 */ 	sll	$s3,$t7,0x2
.L0f17199c:
/*  f17199c:	1a40000a */ 	blez	$s2,.L0f1719c8
/*  f1719a0:	00008025 */ 	or	$s0,$zero,$zero
/*  f1719a4:	02a08825 */ 	or	$s1,$s5,$zero
.L0f1719a8:
/*  f1719a8:	0fc5cd4f */ 	jal	func0f17353c
/*  f1719ac:	24040018 */ 	addiu	$a0,$zero,0x18
/*  f1719b0:	0002ca00 */ 	sll	$t9,$v0,0x8
/*  f1719b4:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1719b8:	372800ff */ 	ori	$t0,$t9,0xff
/*  f1719bc:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f1719c0:	1612fff9 */ 	bne	$s0,$s2,.L0f1719a8
/*  f1719c4:	ae28fffc */ 	sw	$t0,-0x4($s1)
.L0f1719c8:
/*  f1719c8:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f1719cc:	1697fff3 */ 	bne	$s4,$s7,.L0f17199c
/*  f1719d0:	02b3a821 */ 	addu	$s5,$s5,$s3
.L0f1719d4:
/*  f1719d4:	26490003 */ 	addiu	$t1,$s2,0x3
/*  f1719d8:	312a0ffc */ 	andi	$t2,$t1,0xffc
/*  f1719dc:	01570019 */ 	multu	$t2,$s7
/*  f1719e0:	00001012 */ 	mflo	$v0
/*  f1719e4:	00025880 */ 	sll	$t3,$v0,0x2
/*  f1719e8:	10000064 */ 	beqz	$zero,.L0f171b7c
/*  f1719ec:	01601025 */ 	or	$v0,$t3,$zero
/*  f1719f0:	1ae00010 */ 	blez	$s7,.L0f171a34
/*  f1719f4:	0000a025 */ 	or	$s4,$zero,$zero
/*  f1719f8:	26530003 */ 	addiu	$s3,$s2,0x3
/*  f1719fc:	326c0ffc */ 	andi	$t4,$s3,0xffc
/*  f171a00:	000c9840 */ 	sll	$s3,$t4,0x1
.L0f171a04:
/*  f171a04:	1a400008 */ 	blez	$s2,.L0f171a28
/*  f171a08:	00008025 */ 	or	$s0,$zero,$zero
/*  f171a0c:	02c08825 */ 	or	$s1,$s6,$zero
.L0f171a10:
/*  f171a10:	0fc5cd4f */ 	jal	func0f17353c
/*  f171a14:	24040010 */ 	addiu	$a0,$zero,0x10
/*  f171a18:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f171a1c:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f171a20:	1612fffb */ 	bne	$s0,$s2,.L0f171a10
/*  f171a24:	a622fffe */ 	sh	$v0,-0x2($s1)
.L0f171a28:
/*  f171a28:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f171a2c:	1697fff5 */ 	bne	$s4,$s7,.L0f171a04
/*  f171a30:	02d3b021 */ 	addu	$s6,$s6,$s3
.L0f171a34:
/*  f171a34:	264e0003 */ 	addiu	$t6,$s2,0x3
/*  f171a38:	31cf0ffc */ 	andi	$t7,$t6,0xffc
/*  f171a3c:	01f70019 */ 	multu	$t7,$s7
/*  f171a40:	00001012 */ 	mflo	$v0
/*  f171a44:	0002c040 */ 	sll	$t8,$v0,0x1
/*  f171a48:	1000004c */ 	beqz	$zero,.L0f171b7c
/*  f171a4c:	03001025 */ 	or	$v0,$t8,$zero
/*  f171a50:	1ae00012 */ 	blez	$s7,.L0f171a9c
/*  f171a54:	0000a025 */ 	or	$s4,$zero,$zero
/*  f171a58:	26530003 */ 	addiu	$s3,$s2,0x3
/*  f171a5c:	32790ffc */ 	andi	$t9,$s3,0xffc
/*  f171a60:	00199840 */ 	sll	$s3,$t9,0x1
.L0f171a64:
/*  f171a64:	1a40000a */ 	blez	$s2,.L0f171a90
/*  f171a68:	00008025 */ 	or	$s0,$zero,$zero
/*  f171a6c:	02c08825 */ 	or	$s1,$s6,$zero
.L0f171a70:
/*  f171a70:	0fc5cd4f */ 	jal	func0f17353c
/*  f171a74:	2404000f */ 	addiu	$a0,$zero,0xf
/*  f171a78:	00024840 */ 	sll	$t1,$v0,0x1
/*  f171a7c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f171a80:	352a0001 */ 	ori	$t2,$t1,0x1
/*  f171a84:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f171a88:	1612fff9 */ 	bne	$s0,$s2,.L0f171a70
/*  f171a8c:	a62afffe */ 	sh	$t2,-0x2($s1)
.L0f171a90:
/*  f171a90:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f171a94:	1697fff3 */ 	bne	$s4,$s7,.L0f171a64
/*  f171a98:	02d3b021 */ 	addu	$s6,$s6,$s3
.L0f171a9c:
/*  f171a9c:	264b0003 */ 	addiu	$t3,$s2,0x3
/*  f171aa0:	316c0ffc */ 	andi	$t4,$t3,0xffc
/*  f171aa4:	01970019 */ 	multu	$t4,$s7
/*  f171aa8:	00001012 */ 	mflo	$v0
/*  f171aac:	00026840 */ 	sll	$t5,$v0,0x1
/*  f171ab0:	10000032 */ 	beqz	$zero,.L0f171b7c
/*  f171ab4:	01a01025 */ 	or	$v0,$t5,$zero
/*  f171ab8:	1ae00010 */ 	blez	$s7,.L0f171afc
/*  f171abc:	0000a025 */ 	or	$s4,$zero,$zero
/*  f171ac0:	26550007 */ 	addiu	$s5,$s2,0x7
/*  f171ac4:	32ae0ff8 */ 	andi	$t6,$s5,0xff8
/*  f171ac8:	01c0a825 */ 	or	$s5,$t6,$zero
.L0f171acc:
/*  f171acc:	1a400008 */ 	blez	$s2,.L0f171af0
/*  f171ad0:	00008025 */ 	or	$s0,$zero,$zero
/*  f171ad4:	02608825 */ 	or	$s1,$s3,$zero
.L0f171ad8:
/*  f171ad8:	0fc5cd4f */ 	jal	func0f17353c
/*  f171adc:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f171ae0:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f171ae4:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171ae8:	1612fffb */ 	bne	$s0,$s2,.L0f171ad8
/*  f171aec:	a222ffff */ 	sb	$v0,-0x1($s1)
.L0f171af0:
/*  f171af0:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f171af4:	1697fff5 */ 	bne	$s4,$s7,.L0f171acc
/*  f171af8:	02759821 */ 	addu	$s3,$s3,$s5
.L0f171afc:
/*  f171afc:	264f0007 */ 	addiu	$t7,$s2,0x7
/*  f171b00:	31f80ff8 */ 	andi	$t8,$t7,0xff8
/*  f171b04:	03170019 */ 	multu	$t8,$s7
/*  f171b08:	00001012 */ 	mflo	$v0
/*  f171b0c:	1000001c */ 	beqz	$zero,.L0f171b80
/*  f171b10:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f171b14:	1ae00011 */ 	blez	$s7,.L0f171b5c
/*  f171b18:	0000a025 */ 	or	$s4,$zero,$zero
/*  f171b1c:	2651000f */ 	addiu	$s1,$s2,0xf
/*  f171b20:	32390ff0 */ 	andi	$t9,$s1,0xff0
/*  f171b24:	00198843 */ 	sra	$s1,$t9,0x1
.L0f171b28:
/*  f171b28:	1a400009 */ 	blez	$s2,.L0f171b50
/*  f171b2c:	00008025 */ 	or	$s0,$zero,$zero
.L0f171b30:
/*  f171b30:	0fc5cd4f */ 	jal	func0f17353c
/*  f171b34:	24040008 */ 	addiu	$a0,$zero,0x8
/*  f171b38:	00104843 */ 	sra	$t1,$s0,0x1
/*  f171b3c:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f171b40:	0212082a */ 	slt	$at,$s0,$s2
/*  f171b44:	02695021 */ 	addu	$t2,$s3,$t1
/*  f171b48:	1420fff9 */ 	bnez	$at,.L0f171b30
/*  f171b4c:	a1420000 */ 	sb	$v0,0x0($t2)
.L0f171b50:
/*  f171b50:	26940001 */ 	addiu	$s4,$s4,0x1
/*  f171b54:	1697fff4 */ 	bne	$s4,$s7,.L0f171b28
/*  f171b58:	02719821 */ 	addu	$s3,$s3,$s1
.L0f171b5c:
/*  f171b5c:	264b000f */ 	addiu	$t3,$s2,0xf
/*  f171b60:	316c0ff0 */ 	andi	$t4,$t3,0xff0
/*  f171b64:	000c6843 */ 	sra	$t5,$t4,0x1
/*  f171b68:	01b70019 */ 	multu	$t5,$s7
/*  f171b6c:	00001012 */ 	mflo	$v0
/*  f171b70:	10000003 */ 	beqz	$zero,.L0f171b80
/*  f171b74:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f171b78:
/*  f171b78:	00001025 */ 	or	$v0,$zero,$zero
.L0f171b7c:
/*  f171b7c:	8fbf0034 */ 	lw	$ra,0x34($sp)
.L0f171b80:
/*  f171b80:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f171b84:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f171b88:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f171b8c:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f171b90:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f171b94:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f171b98:	8fb6002c */ 	lw	$s6,0x2c($sp)
/*  f171b9c:	8fb70030 */ 	lw	$s7,0x30($sp)
/*  f171ba0:	03e00008 */ 	jr	$ra
/*  f171ba4:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f171ba8
/*  f171ba8:	27bdfff0 */ 	addiu	$sp,$sp,-16
/*  f171bac:	8fae0020 */ 	lw	$t6,0x20($sp)
/*  f171bb0:	afb00004 */ 	sw	$s0,0x4($sp)
/*  f171bb4:	00808025 */ 	or	$s0,$a0,$zero
/*  f171bb8:	2dc10009 */ 	sltiu	$at,$t6,0x9
/*  f171bbc:	afb2000c */ 	sw	$s2,0xc($sp)
/*  f171bc0:	afb10008 */ 	sw	$s1,0x8($sp)
/*  f171bc4:	00e04825 */ 	or	$t1,$a3,$zero
/*  f171bc8:	00e05025 */ 	or	$t2,$a3,$zero
/*  f171bcc:	00e05825 */ 	or	$t3,$a3,$zero
/*  f171bd0:	10200168 */ 	beqz	$at,.L0f172174
/*  f171bd4:	00004025 */ 	or	$t0,$zero,$zero
/*  f171bd8:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f171bdc:	3c017f1b */ 	lui	$at,%hi(var7f1b7ae4)
/*  f171be0:	002e0821 */ 	addu	$at,$at,$t6
/*  f171be4:	8c2e7ae4 */ 	lw	$t6,%lo(var7f1b7ae4)($at)
/*  f171be8:	01c00008 */ 	jr	$t6
/*  f171bec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f171bf0:	18c00028 */ 	blez	$a2,.L0f171c94
/*  f171bf4:	00002025 */ 	or	$a0,$zero,$zero
/*  f171bf8:	24ac0003 */ 	addiu	$t4,$a1,0x3
/*  f171bfc:	318f0ffc */ 	andi	$t7,$t4,0xffc
/*  f171c00:	000f6080 */ 	sll	$t4,$t7,0x2
.L0f171c04:
/*  f171c04:	18a00020 */ 	blez	$a1,.L0f171c88
/*  f171c08:	00001825 */ 	or	$v1,$zero,$zero
/*  f171c0c:	00a60019 */ 	multu	$a1,$a2
/*  f171c10:	02085821 */ 	addu	$t3,$s0,$t0
/*  f171c14:	01205025 */ 	or	$t2,$t1,$zero
/*  f171c18:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171c1c:	00003812 */ 	mflo	$a3
/*  f171c20:	0007c880 */ 	sll	$t9,$a3,0x2
/*  f171c24:	0327c823 */ 	subu	$t9,$t9,$a3
/*  f171c28:	03287021 */ 	addu	$t6,$t9,$t0
/*  f171c2c:	00077840 */ 	sll	$t7,$a3,0x1
/*  f171c30:	016f9021 */ 	addu	$s2,$t3,$t7
/*  f171c34:	01d06821 */ 	addu	$t5,$t6,$s0
/*  f171c38:	01678821 */ 	addu	$s1,$t3,$a3
.L0f171c3c:
/*  f171c3c:	90590000 */ 	lbu	$t9,0x0($v0)
/*  f171c40:	91b80000 */ 	lbu	$t8,0x0($t5)
/*  f171c44:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171c48:	00197600 */ 	sll	$t6,$t9,0x18
/*  f171c4c:	92390000 */ 	lbu	$t9,0x0($s1)
/*  f171c50:	030e7825 */ 	or	$t7,$t8,$t6
/*  f171c54:	254a0004 */ 	addiu	$t2,$t2,0x4
/*  f171c58:	0019c400 */ 	sll	$t8,$t9,0x10
/*  f171c5c:	92590000 */ 	lbu	$t9,0x0($s2)
/*  f171c60:	01f87025 */ 	or	$t6,$t7,$t8
/*  f171c64:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171c68:	00197a00 */ 	sll	$t7,$t9,0x8
/*  f171c6c:	01cfc025 */ 	or	$t8,$t6,$t7
/*  f171c70:	ad58fffc */ 	sw	$t8,-0x4($t2)
/*  f171c74:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171c78:	25ad0001 */ 	addiu	$t5,$t5,0x1
/*  f171c7c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171c80:	1465ffee */ 	bne	$v1,$a1,.L0f171c3c
/*  f171c84:	26520001 */ 	addiu	$s2,$s2,0x1
.L0f171c88:
/*  f171c88:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171c8c:	1486ffdd */ 	bne	$a0,$a2,.L0f171c04
/*  f171c90:	012c4821 */ 	addu	$t1,$t1,$t4
.L0f171c94:
/*  f171c94:	24b90003 */ 	addiu	$t9,$a1,0x3
/*  f171c98:	332e0ffc */ 	andi	$t6,$t9,0xffc
/*  f171c9c:	01c60019 */ 	multu	$t6,$a2
/*  f171ca0:	00001012 */ 	mflo	$v0
/*  f171ca4:	00027880 */ 	sll	$t7,$v0,0x2
/*  f171ca8:	10000133 */ 	beqz	$zero,.L0f172178
/*  f171cac:	01e01025 */ 	or	$v0,$t7,$zero
/*  f171cb0:	18c00023 */ 	blez	$a2,.L0f171d40
/*  f171cb4:	00002025 */ 	or	$a0,$zero,$zero
/*  f171cb8:	24ac0003 */ 	addiu	$t4,$a1,0x3
/*  f171cbc:	31980ffc */ 	andi	$t8,$t4,0xffc
/*  f171cc0:	00186080 */ 	sll	$t4,$t8,0x2
.L0f171cc4:
/*  f171cc4:	18a0001b */ 	blez	$a1,.L0f171d34
/*  f171cc8:	00001825 */ 	or	$v1,$zero,$zero
/*  f171ccc:	00a60019 */ 	multu	$a1,$a2
/*  f171cd0:	02087021 */ 	addu	$t6,$s0,$t0
/*  f171cd4:	01205025 */ 	or	$t2,$t1,$zero
/*  f171cd8:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171cdc:	00003812 */ 	mflo	$a3
/*  f171ce0:	00077840 */ 	sll	$t7,$a3,0x1
/*  f171ce4:	01e8c021 */ 	addu	$t8,$t7,$t0
/*  f171ce8:	03105821 */ 	addu	$t3,$t8,$s0
/*  f171cec:	01c78821 */ 	addu	$s1,$t6,$a3
.L0f171cf0:
/*  f171cf0:	904f0000 */ 	lbu	$t7,0x0($v0)
/*  f171cf4:	91790000 */ 	lbu	$t9,0x0($t3)
/*  f171cf8:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171cfc:	000fc600 */ 	sll	$t8,$t7,0x18
/*  f171d00:	922f0000 */ 	lbu	$t7,0x0($s1)
/*  f171d04:	00197200 */ 	sll	$t6,$t9,0x8
/*  f171d08:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f171d0c:	000f7400 */ 	sll	$t6,$t7,0x10
/*  f171d10:	032ec025 */ 	or	$t8,$t9,$t6
/*  f171d14:	370f00ff */ 	ori	$t7,$t8,0xff
/*  f171d18:	254a0004 */ 	addiu	$t2,$t2,0x4
/*  f171d1c:	ad4ffffc */ 	sw	$t7,-0x4($t2)
/*  f171d20:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171d24:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171d28:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171d2c:	1465fff0 */ 	bne	$v1,$a1,.L0f171cf0
/*  f171d30:	256b0001 */ 	addiu	$t3,$t3,0x1
.L0f171d34:
/*  f171d34:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171d38:	1486ffe2 */ 	bne	$a0,$a2,.L0f171cc4
/*  f171d3c:	012c4821 */ 	addu	$t1,$t1,$t4
.L0f171d40:
/*  f171d40:	24b90003 */ 	addiu	$t9,$a1,0x3
/*  f171d44:	332e0ffc */ 	andi	$t6,$t9,0xffc
/*  f171d48:	01c60019 */ 	multu	$t6,$a2
/*  f171d4c:	00001012 */ 	mflo	$v0
/*  f171d50:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f171d54:	10000108 */ 	beqz	$zero,.L0f172178
/*  f171d58:	03001025 */ 	or	$v0,$t8,$zero
/*  f171d5c:	18c00028 */ 	blez	$a2,.L0f171e00
/*  f171d60:	00002025 */ 	or	$a0,$zero,$zero
/*  f171d64:	24ac0003 */ 	addiu	$t4,$a1,0x3
/*  f171d68:	318f0ffc */ 	andi	$t7,$t4,0xffc
/*  f171d6c:	000f6040 */ 	sll	$t4,$t7,0x1
.L0f171d70:
/*  f171d70:	18a00020 */ 	blez	$a1,.L0f171df4
/*  f171d74:	00001825 */ 	or	$v1,$zero,$zero
/*  f171d78:	00a60019 */ 	multu	$a1,$a2
/*  f171d7c:	02085821 */ 	addu	$t3,$s0,$t0
/*  f171d80:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171d84:	01404825 */ 	or	$t1,$t2,$zero
/*  f171d88:	00003812 */ 	mflo	$a3
/*  f171d8c:	00077080 */ 	sll	$t6,$a3,0x2
/*  f171d90:	01c77023 */ 	subu	$t6,$t6,$a3
/*  f171d94:	01c8c021 */ 	addu	$t8,$t6,$t0
/*  f171d98:	00077840 */ 	sll	$t7,$a3,0x1
/*  f171d9c:	016f9021 */ 	addu	$s2,$t3,$t7
/*  f171da0:	03106821 */ 	addu	$t5,$t8,$s0
/*  f171da4:	01678821 */ 	addu	$s1,$t3,$a3
.L0f171da8:
/*  f171da8:	904e0000 */ 	lbu	$t6,0x0($v0)
/*  f171dac:	91b90000 */ 	lbu	$t9,0x0($t5)
/*  f171db0:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171db4:	000ec2c0 */ 	sll	$t8,$t6,0xb
/*  f171db8:	922e0000 */ 	lbu	$t6,0x0($s1)
/*  f171dbc:	03387825 */ 	or	$t7,$t9,$t8
/*  f171dc0:	25290002 */ 	addiu	$t1,$t1,0x2
/*  f171dc4:	000ec980 */ 	sll	$t9,$t6,0x6
/*  f171dc8:	924e0000 */ 	lbu	$t6,0x0($s2)
/*  f171dcc:	01f9c025 */ 	or	$t8,$t7,$t9
/*  f171dd0:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171dd4:	000e7840 */ 	sll	$t7,$t6,0x1
/*  f171dd8:	030fc825 */ 	or	$t9,$t8,$t7
/*  f171ddc:	a539fffe */ 	sh	$t9,-0x2($t1)
/*  f171de0:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171de4:	25ad0001 */ 	addiu	$t5,$t5,0x1
/*  f171de8:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171dec:	1465ffee */ 	bne	$v1,$a1,.L0f171da8
/*  f171df0:	26520001 */ 	addiu	$s2,$s2,0x1
.L0f171df4:
/*  f171df4:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171df8:	1486ffdd */ 	bne	$a0,$a2,.L0f171d70
/*  f171dfc:	014c5021 */ 	addu	$t2,$t2,$t4
.L0f171e00:
/*  f171e00:	24ae0003 */ 	addiu	$t6,$a1,0x3
/*  f171e04:	31d80ffc */ 	andi	$t8,$t6,0xffc
/*  f171e08:	03060019 */ 	multu	$t8,$a2
/*  f171e0c:	00001012 */ 	mflo	$v0
/*  f171e10:	00027840 */ 	sll	$t7,$v0,0x1
/*  f171e14:	100000d8 */ 	beqz	$zero,.L0f172178
/*  f171e18:	01e01025 */ 	or	$v0,$t7,$zero
/*  f171e1c:	18c0001a */ 	blez	$a2,.L0f171e88
/*  f171e20:	00002025 */ 	or	$a0,$zero,$zero
/*  f171e24:	24ac0003 */ 	addiu	$t4,$a1,0x3
/*  f171e28:	31990ffc */ 	andi	$t9,$t4,0xffc
/*  f171e2c:	00196040 */ 	sll	$t4,$t9,0x1
.L0f171e30:
/*  f171e30:	18a00012 */ 	blez	$a1,.L0f171e7c
/*  f171e34:	00001825 */ 	or	$v1,$zero,$zero
/*  f171e38:	00a60019 */ 	multu	$a1,$a2
/*  f171e3c:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171e40:	01404825 */ 	or	$t1,$t2,$zero
/*  f171e44:	0000c012 */ 	mflo	$t8
/*  f171e48:	01187821 */ 	addu	$t7,$t0,$t8
/*  f171e4c:	01f06821 */ 	addu	$t5,$t7,$s0
.L0f171e50:
/*  f171e50:	904e0000 */ 	lbu	$t6,0x0($v0)
/*  f171e54:	91b90000 */ 	lbu	$t9,0x0($t5)
/*  f171e58:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171e5c:	000ec200 */ 	sll	$t8,$t6,0x8
/*  f171e60:	03387825 */ 	or	$t7,$t9,$t8
/*  f171e64:	25290002 */ 	addiu	$t1,$t1,0x2
/*  f171e68:	a52ffffe */ 	sh	$t7,-0x2($t1)
/*  f171e6c:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171e70:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171e74:	1465fff6 */ 	bne	$v1,$a1,.L0f171e50
/*  f171e78:	25ad0001 */ 	addiu	$t5,$t5,0x1
.L0f171e7c:
/*  f171e7c:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171e80:	1486ffeb */ 	bne	$a0,$a2,.L0f171e30
/*  f171e84:	014c5021 */ 	addu	$t2,$t2,$t4
.L0f171e88:
/*  f171e88:	24ae0003 */ 	addiu	$t6,$a1,0x3
/*  f171e8c:	31d90ffc */ 	andi	$t9,$t6,0xffc
/*  f171e90:	03260019 */ 	multu	$t9,$a2
/*  f171e94:	00001012 */ 	mflo	$v0
/*  f171e98:	0002c040 */ 	sll	$t8,$v0,0x1
/*  f171e9c:	100000b6 */ 	beqz	$zero,.L0f172178
/*  f171ea0:	03001025 */ 	or	$v0,$t8,$zero
/*  f171ea4:	18c00023 */ 	blez	$a2,.L0f171f34
/*  f171ea8:	00002025 */ 	or	$a0,$zero,$zero
/*  f171eac:	24ac0003 */ 	addiu	$t4,$a1,0x3
/*  f171eb0:	318f0ffc */ 	andi	$t7,$t4,0xffc
/*  f171eb4:	000f6040 */ 	sll	$t4,$t7,0x1
.L0f171eb8:
/*  f171eb8:	18a0001b */ 	blez	$a1,.L0f171f28
/*  f171ebc:	00001825 */ 	or	$v1,$zero,$zero
/*  f171ec0:	00a60019 */ 	multu	$a1,$a2
/*  f171ec4:	0208c821 */ 	addu	$t9,$s0,$t0
/*  f171ec8:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171ecc:	01404825 */ 	or	$t1,$t2,$zero
/*  f171ed0:	00003812 */ 	mflo	$a3
/*  f171ed4:	0007c040 */ 	sll	$t8,$a3,0x1
/*  f171ed8:	03087821 */ 	addu	$t7,$t8,$t0
/*  f171edc:	01f05821 */ 	addu	$t3,$t7,$s0
/*  f171ee0:	03278821 */ 	addu	$s1,$t9,$a3
.L0f171ee4:
/*  f171ee4:	90580000 */ 	lbu	$t8,0x0($v0)
/*  f171ee8:	916e0000 */ 	lbu	$t6,0x0($t3)
/*  f171eec:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171ef0:	00187ac0 */ 	sll	$t7,$t8,0xb
/*  f171ef4:	92380000 */ 	lbu	$t8,0x0($s1)
/*  f171ef8:	000ec840 */ 	sll	$t9,$t6,0x1
/*  f171efc:	032f7025 */ 	or	$t6,$t9,$t7
/*  f171f00:	0018c980 */ 	sll	$t9,$t8,0x6
/*  f171f04:	01d97825 */ 	or	$t7,$t6,$t9
/*  f171f08:	35f80001 */ 	ori	$t8,$t7,0x1
/*  f171f0c:	25290002 */ 	addiu	$t1,$t1,0x2
/*  f171f10:	a538fffe */ 	sh	$t8,-0x2($t1)
/*  f171f14:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171f18:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171f1c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f171f20:	1465fff0 */ 	bne	$v1,$a1,.L0f171ee4
/*  f171f24:	256b0001 */ 	addiu	$t3,$t3,0x1
.L0f171f28:
/*  f171f28:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171f2c:	1486ffe2 */ 	bne	$a0,$a2,.L0f171eb8
/*  f171f30:	014c5021 */ 	addu	$t2,$t2,$t4
.L0f171f34:
/*  f171f34:	24ae0003 */ 	addiu	$t6,$a1,0x3
/*  f171f38:	31d90ffc */ 	andi	$t9,$t6,0xffc
/*  f171f3c:	03260019 */ 	multu	$t9,$a2
/*  f171f40:	00001012 */ 	mflo	$v0
/*  f171f44:	00027840 */ 	sll	$t7,$v0,0x1
/*  f171f48:	1000008b */ 	beqz	$zero,.L0f172178
/*  f171f4c:	01e01025 */ 	or	$v0,$t7,$zero
/*  f171f50:	18c0001a */ 	blez	$a2,.L0f171fbc
/*  f171f54:	00002025 */ 	or	$a0,$zero,$zero
/*  f171f58:	24a70007 */ 	addiu	$a3,$a1,0x7
/*  f171f5c:	30f80ff8 */ 	andi	$t8,$a3,0xff8
/*  f171f60:	03003825 */ 	or	$a3,$t8,$zero
.L0f171f64:
/*  f171f64:	18a00012 */ 	blez	$a1,.L0f171fb0
/*  f171f68:	00001825 */ 	or	$v1,$zero,$zero
/*  f171f6c:	00a60019 */ 	multu	$a1,$a2
/*  f171f70:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171f74:	01604825 */ 	or	$t1,$t3,$zero
/*  f171f78:	00007012 */ 	mflo	$t6
/*  f171f7c:	010ec821 */ 	addu	$t9,$t0,$t6
/*  f171f80:	03306821 */ 	addu	$t5,$t9,$s0
.L0f171f84:
/*  f171f84:	90580000 */ 	lbu	$t8,0x0($v0)
/*  f171f88:	91af0000 */ 	lbu	$t7,0x0($t5)
/*  f171f8c:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f171f90:	00187100 */ 	sll	$t6,$t8,0x4
/*  f171f94:	01eec825 */ 	or	$t9,$t7,$t6
/*  f171f98:	25290001 */ 	addiu	$t1,$t1,0x1
/*  f171f9c:	a139ffff */ 	sb	$t9,-0x1($t1)
/*  f171fa0:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f171fa4:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f171fa8:	1465fff6 */ 	bne	$v1,$a1,.L0f171f84
/*  f171fac:	25ad0001 */ 	addiu	$t5,$t5,0x1
.L0f171fb0:
/*  f171fb0:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f171fb4:	1486ffeb */ 	bne	$a0,$a2,.L0f171f64
/*  f171fb8:	01675821 */ 	addu	$t3,$t3,$a3
.L0f171fbc:
/*  f171fbc:	24b80007 */ 	addiu	$t8,$a1,0x7
/*  f171fc0:	330f0ff8 */ 	andi	$t7,$t8,0xff8
/*  f171fc4:	01e60019 */ 	multu	$t7,$a2
/*  f171fc8:	00001012 */ 	mflo	$v0
/*  f171fcc:	1000006b */ 	beqz	$zero,.L0f17217c
/*  f171fd0:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f171fd4:	18c00012 */ 	blez	$a2,.L0f172020
/*  f171fd8:	00002025 */ 	or	$a0,$zero,$zero
/*  f171fdc:	24a70007 */ 	addiu	$a3,$a1,0x7
/*  f171fe0:	30ee0ff8 */ 	andi	$t6,$a3,0xff8
/*  f171fe4:	01c03825 */ 	or	$a3,$t6,$zero
.L0f171fe8:
/*  f171fe8:	18a0000a */ 	blez	$a1,.L0f172014
/*  f171fec:	00001825 */ 	or	$v1,$zero,$zero
/*  f171ff0:	02081021 */ 	addu	$v0,$s0,$t0
/*  f171ff4:	01604825 */ 	or	$t1,$t3,$zero
.L0f171ff8:
/*  f171ff8:	90590000 */ 	lbu	$t9,0x0($v0)
/*  f171ffc:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172000:	25290001 */ 	addiu	$t1,$t1,0x1
/*  f172004:	25080001 */ 	addiu	$t0,$t0,0x1
/*  f172008:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f17200c:	1465fffa */ 	bne	$v1,$a1,.L0f171ff8
/*  f172010:	a139ffff */ 	sb	$t9,-0x1($t1)
.L0f172014:
/*  f172014:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f172018:	1486fff3 */ 	bne	$a0,$a2,.L0f171fe8
/*  f17201c:	01675821 */ 	addu	$t3,$t3,$a3
.L0f172020:
/*  f172020:	24b80007 */ 	addiu	$t8,$a1,0x7
/*  f172024:	330f0ff8 */ 	andi	$t7,$t8,0xff8
/*  f172028:	01e60019 */ 	multu	$t7,$a2
/*  f17202c:	00001012 */ 	mflo	$v0
/*  f172030:	10000052 */ 	beqz	$zero,.L0f17217c
/*  f172034:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f172038:	18c00026 */ 	blez	$a2,.L0f1720d4
/*  f17203c:	00002025 */ 	or	$a0,$zero,$zero
/*  f172040:	24a7000f */ 	addiu	$a3,$a1,0xf
/*  f172044:	30ee0ff0 */ 	andi	$t6,$a3,0xff0
/*  f172048:	01c03825 */ 	or	$a3,$t6,$zero
/*  f17204c:	30a90001 */ 	andi	$t1,$a1,0x1
.L0f172050:
/*  f172050:	18a0001b */ 	blez	$a1,.L0f1720c0
/*  f172054:	00001825 */ 	or	$v1,$zero,$zero
/*  f172058:	00a60019 */ 	multu	$a1,$a2
/*  f17205c:	02081021 */ 	addu	$v0,$s0,$t0
/*  f172060:	0000c812 */ 	mflo	$t9
/*  f172064:	0019c080 */ 	sll	$t8,$t9,0x2
/*  f172068:	0319c023 */ 	subu	$t8,$t8,$t9
/*  f17206c:	03087821 */ 	addu	$t7,$t8,$t0
/*  f172070:	01f06821 */ 	addu	$t5,$t7,$s0
.L0f172074:
/*  f172074:	90590000 */ 	lbu	$t9,0x0($v0)
/*  f172078:	91ae0001 */ 	lbu	$t6,0x1($t5)
/*  f17207c:	25080002 */ 	addiu	$t0,$t0,0x2
/*  f172080:	0019c140 */ 	sll	$t8,$t9,0x5
/*  f172084:	91b90000 */ 	lbu	$t9,0x0($t5)
/*  f172088:	01d87825 */ 	or	$t7,$t6,$t8
/*  f17208c:	24420002 */ 	addiu	$v0,$v0,0x2
/*  f172090:	00197100 */ 	sll	$t6,$t9,0x4
/*  f172094:	9059ffff */ 	lbu	$t9,-0x1($v0)
/*  f172098:	01eec025 */ 	or	$t8,$t7,$t6
/*  f17209c:	25ad0002 */ 	addiu	$t5,$t5,0x2
/*  f1720a0:	00197840 */ 	sll	$t7,$t9,0x1
/*  f1720a4:	0003c843 */ 	sra	$t9,$v1,0x1
/*  f1720a8:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f1720ac:	030f7025 */ 	or	$t6,$t8,$t7
/*  f1720b0:	0065082a */ 	slt	$at,$v1,$a1
/*  f1720b4:	0179c021 */ 	addu	$t8,$t3,$t9
/*  f1720b8:	1420ffee */ 	bnez	$at,.L0f172074
/*  f1720bc:	a30e0000 */ 	sb	$t6,0x0($t8)
.L0f1720c0:
/*  f1720c0:	11200002 */ 	beqz	$t1,.L0f1720cc
/*  f1720c4:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f1720c8:	2508ffff */ 	addiu	$t0,$t0,-1
.L0f1720cc:
/*  f1720cc:	1486ffe0 */ 	bne	$a0,$a2,.L0f172050
/*  f1720d0:	01675821 */ 	addu	$t3,$t3,$a3
.L0f1720d4:
/*  f1720d4:	24af000f */ 	addiu	$t7,$a1,0xf
/*  f1720d8:	31f90ff0 */ 	andi	$t9,$t7,0xff0
/*  f1720dc:	00197043 */ 	sra	$t6,$t9,0x1
/*  f1720e0:	01c60019 */ 	multu	$t6,$a2
/*  f1720e4:	00001012 */ 	mflo	$v0
/*  f1720e8:	10000024 */ 	beqz	$zero,.L0f17217c
/*  f1720ec:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f1720f0:	18c00019 */ 	blez	$a2,.L0f172158
/*  f1720f4:	00002025 */ 	or	$a0,$zero,$zero
/*  f1720f8:	24a7000f */ 	addiu	$a3,$a1,0xf
/*  f1720fc:	30f80ff0 */ 	andi	$t8,$a3,0xff0
/*  f172100:	00183843 */ 	sra	$a3,$t8,0x1
/*  f172104:	30a90001 */ 	andi	$t1,$a1,0x1
.L0f172108:
/*  f172108:	18a0000e */ 	blez	$a1,.L0f172144
/*  f17210c:	00001825 */ 	or	$v1,$zero,$zero
/*  f172110:	02081021 */ 	addu	$v0,$s0,$t0
.L0f172114:
/*  f172114:	904e0000 */ 	lbu	$t6,0x0($v0)
/*  f172118:	90590001 */ 	lbu	$t9,0x1($v0)
/*  f17211c:	25080002 */ 	addiu	$t0,$t0,0x2
/*  f172120:	000ec100 */ 	sll	$t8,$t6,0x4
/*  f172124:	00037043 */ 	sra	$t6,$v1,0x1
/*  f172128:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f17212c:	03387825 */ 	or	$t7,$t9,$t8
/*  f172130:	0065082a */ 	slt	$at,$v1,$a1
/*  f172134:	016ec821 */ 	addu	$t9,$t3,$t6
/*  f172138:	a32f0000 */ 	sb	$t7,0x0($t9)
/*  f17213c:	1420fff5 */ 	bnez	$at,.L0f172114
/*  f172140:	24420002 */ 	addiu	$v0,$v0,0x2
.L0f172144:
/*  f172144:	11200002 */ 	beqz	$t1,.L0f172150
/*  f172148:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f17214c:	2508ffff */ 	addiu	$t0,$t0,-1
.L0f172150:
/*  f172150:	1486ffed */ 	bne	$a0,$a2,.L0f172108
/*  f172154:	01675821 */ 	addu	$t3,$t3,$a3
.L0f172158:
/*  f172158:	24b8000f */ 	addiu	$t8,$a1,0xf
/*  f17215c:	330e0ff0 */ 	andi	$t6,$t8,0xff0
/*  f172160:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f172164:	01e60019 */ 	multu	$t7,$a2
/*  f172168:	00001012 */ 	mflo	$v0
/*  f17216c:	10000003 */ 	beqz	$zero,.L0f17217c
/*  f172170:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f172174:
/*  f172174:	00001025 */ 	or	$v0,$zero,$zero
.L0f172178:
/*  f172178:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f17217c:
/*  f17217c:	8fb10008 */ 	lw	$s1,0x8($sp)
/*  f172180:	8fb2000c */ 	lw	$s2,0xc($sp)
/*  f172184:	03e00008 */ 	jr	$ra
/*  f172188:	27bd0010 */ 	addiu	$sp,$sp,0x10
);

GLOBAL_ASM(
glabel func0f17218c
/*  f17218c:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f172190:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f172194:	0080a025 */ 	or	$s4,$a0,$zero
/*  f172198:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f17219c:	afbe0038 */ 	sw	$s8,0x38($sp)
/*  f1721a0:	afb70034 */ 	sw	$s7,0x34($sp)
/*  f1721a4:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f1721a8:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f1721ac:	00e09825 */ 	or	$s3,$a3,$zero
/*  f1721b0:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f1721b4:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f1721b8:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f1721bc:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f1721c0:	afa50044 */ 	sw	$a1,0x44($sp)
/*  f1721c4:	00c0b825 */ 	or	$s7,$a2,$zero
/*  f1721c8:	00c0f025 */ 	or	$s8,$a2,$zero
/*  f1721cc:	00c0a825 */ 	or	$s5,$a2,$zero
/*  f1721d0:	0fc5c60a */ 	jal	func0f171828
/*  f1721d4:	8fa40050 */ 	lw	$a0,0x50($sp)
/*  f1721d8:	8fae0054 */ 	lw	$t6,0x54($sp)
/*  f1721dc:	00409025 */ 	or	$s2,$v0,$zero
/*  f1721e0:	00001025 */ 	or	$v0,$zero,$zero
/*  f1721e4:	2dc10009 */ 	sltiu	$at,$t6,0x9
/*  f1721e8:	102000ce */ 	beqz	$at,.L0f172524
/*  f1721ec:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f1721f0:	3c017f1b */ 	lui	$at,%hi(var7f1b7b08)
/*  f1721f4:	002e0821 */ 	addu	$at,$at,$t6
/*  f1721f8:	8c2e7b08 */ 	lw	$t6,%lo(var7f1b7b08)($at)
/*  f1721fc:	01c00008 */ 	jr	$t6
/*  f172200:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172204:	8fa30044 */ 	lw	$v1,0x44($sp)
/*  f172208:	26950003 */ 	addiu	$s5,$s4,0x3
/*  f17220c:	32af0ffc */ 	andi	$t7,$s5,0xffc
/*  f172210:	18600012 */ 	blez	$v1,.L0f17225c
/*  f172214:	0000b025 */ 	or	$s6,$zero,$zero
/*  f172218:	000fa880 */ 	sll	$s5,$t7,0x2
.L0f17221c:
/*  f17221c:	1a80000c */ 	blez	$s4,.L0f172250
/*  f172220:	00008025 */ 	or	$s0,$zero,$zero
/*  f172224:	02e08825 */ 	or	$s1,$s7,$zero
.L0f172228:
/*  f172228:	0fc5cd4f */ 	jal	func0f17353c
/*  f17222c:	02402025 */ 	or	$a0,$s2,$zero
/*  f172230:	0002c880 */ 	sll	$t9,$v0,0x2
/*  f172234:	02794021 */ 	addu	$t0,$s3,$t9
/*  f172238:	8d090000 */ 	lw	$t1,0x0($t0)
/*  f17223c:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f172240:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f172244:	1614fff8 */ 	bne	$s0,$s4,.L0f172228
/*  f172248:	ae29fffc */ 	sw	$t1,-0x4($s1)
/*  f17224c:	8fa30044 */ 	lw	$v1,0x44($sp)
.L0f172250:
/*  f172250:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f172254:	16c3fff1 */ 	bne	$s6,$v1,.L0f17221c
/*  f172258:	02f5b821 */ 	addu	$s7,$s7,$s5
.L0f17225c:
/*  f17225c:	268a0003 */ 	addiu	$t2,$s4,0x3
/*  f172260:	314b0ffc */ 	andi	$t3,$t2,0xffc
/*  f172264:	01630019 */ 	multu	$t3,$v1
/*  f172268:	00001012 */ 	mflo	$v0
/*  f17226c:	00026080 */ 	sll	$t4,$v0,0x2
/*  f172270:	100000ac */ 	beqz	$zero,.L0f172524
/*  f172274:	01801025 */ 	or	$v0,$t4,$zero
/*  f172278:	8fad0044 */ 	lw	$t5,0x44($sp)
/*  f17227c:	26950003 */ 	addiu	$s5,$s4,0x3
/*  f172280:	32ae0ffc */ 	andi	$t6,$s5,0xffc
/*  f172284:	19a00014 */ 	blez	$t5,.L0f1722d8
/*  f172288:	0000b025 */ 	or	$s6,$zero,$zero
/*  f17228c:	000ea880 */ 	sll	$s5,$t6,0x2
.L0f172290:
/*  f172290:	1a80000c */ 	blez	$s4,.L0f1722c4
/*  f172294:	00008025 */ 	or	$s0,$zero,$zero
/*  f172298:	02e08825 */ 	or	$s1,$s7,$zero
.L0f17229c:
/*  f17229c:	0fc5cd4f */ 	jal	func0f17353c
/*  f1722a0:	02402025 */ 	or	$a0,$s2,$zero
/*  f1722a4:	0002c080 */ 	sll	$t8,$v0,0x2
/*  f1722a8:	0278c821 */ 	addu	$t9,$s3,$t8
/*  f1722ac:	8f280000 */ 	lw	$t0,0x0($t9)
/*  f1722b0:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1722b4:	26310004 */ 	addiu	$s1,$s1,0x4
/*  f1722b8:	00084a00 */ 	sll	$t1,$t0,0x8
/*  f1722bc:	1614fff7 */ 	bne	$s0,$s4,.L0f17229c
/*  f1722c0:	ae29fffc */ 	sw	$t1,-0x4($s1)
.L0f1722c4:
/*  f1722c4:	8faa0044 */ 	lw	$t2,0x44($sp)
/*  f1722c8:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f1722cc:	02f5b821 */ 	addu	$s7,$s7,$s5
/*  f1722d0:	16caffef */ 	bne	$s6,$t2,.L0f172290
/*  f1722d4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1722d8:
/*  f1722d8:	8fad0044 */ 	lw	$t5,0x44($sp)
/*  f1722dc:	268b0003 */ 	addiu	$t3,$s4,0x3
/*  f1722e0:	316c0ffc */ 	andi	$t4,$t3,0xffc
/*  f1722e4:	018d0019 */ 	multu	$t4,$t5
/*  f1722e8:	00001012 */ 	mflo	$v0
/*  f1722ec:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1722f0:	1000008c */ 	beqz	$zero,.L0f172524
/*  f1722f4:	01c01025 */ 	or	$v0,$t6,$zero
/*  f1722f8:	8faf0044 */ 	lw	$t7,0x44($sp)
/*  f1722fc:	26950003 */ 	addiu	$s5,$s4,0x3
/*  f172300:	32b80ffc */ 	andi	$t8,$s5,0xffc
/*  f172304:	19e00013 */ 	blez	$t7,.L0f172354
/*  f172308:	0000b025 */ 	or	$s6,$zero,$zero
/*  f17230c:	0018a840 */ 	sll	$s5,$t8,0x1
.L0f172310:
/*  f172310:	1a80000b */ 	blez	$s4,.L0f172340
/*  f172314:	00008025 */ 	or	$s0,$zero,$zero
/*  f172318:	03c08825 */ 	or	$s1,$s8,$zero
.L0f17231c:
/*  f17231c:	0fc5cd4f */ 	jal	func0f17353c
/*  f172320:	02402025 */ 	or	$a0,$s2,$zero
/*  f172324:	00024040 */ 	sll	$t0,$v0,0x1
/*  f172328:	02684821 */ 	addu	$t1,$s3,$t0
/*  f17232c:	952a0000 */ 	lhu	$t2,0x0($t1)
/*  f172330:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f172334:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f172338:	1614fff8 */ 	bne	$s0,$s4,.L0f17231c
/*  f17233c:	a62afffe */ 	sh	$t2,-0x2($s1)
.L0f172340:
/*  f172340:	8fab0044 */ 	lw	$t3,0x44($sp)
/*  f172344:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f172348:	03d5f021 */ 	addu	$s8,$s8,$s5
/*  f17234c:	16cbfff0 */ 	bne	$s6,$t3,.L0f172310
/*  f172350:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172354:
/*  f172354:	8fae0044 */ 	lw	$t6,0x44($sp)
/*  f172358:	268c0003 */ 	addiu	$t4,$s4,0x3
/*  f17235c:	318d0ffc */ 	andi	$t5,$t4,0xffc
/*  f172360:	01ae0019 */ 	multu	$t5,$t6
/*  f172364:	00001012 */ 	mflo	$v0
/*  f172368:	00027840 */ 	sll	$t7,$v0,0x1
/*  f17236c:	1000006d */ 	beqz	$zero,.L0f172524
/*  f172370:	01e01025 */ 	or	$v0,$t7,$zero
/*  f172374:	8fb80044 */ 	lw	$t8,0x44($sp)
/*  f172378:	26950003 */ 	addiu	$s5,$s4,0x3
/*  f17237c:	32b90ffc */ 	andi	$t9,$s5,0xffc
/*  f172380:	1b000015 */ 	blez	$t8,.L0f1723d8
/*  f172384:	0000b025 */ 	or	$s6,$zero,$zero
/*  f172388:	0019a840 */ 	sll	$s5,$t9,0x1
.L0f17238c:
/*  f17238c:	1a80000d */ 	blez	$s4,.L0f1723c4
/*  f172390:	00008025 */ 	or	$s0,$zero,$zero
/*  f172394:	03c08825 */ 	or	$s1,$s8,$zero
.L0f172398:
/*  f172398:	0fc5cd4f */ 	jal	func0f17353c
/*  f17239c:	02402025 */ 	or	$a0,$s2,$zero
/*  f1723a0:	00024840 */ 	sll	$t1,$v0,0x1
/*  f1723a4:	02695021 */ 	addu	$t2,$s3,$t1
/*  f1723a8:	954b0000 */ 	lhu	$t3,0x0($t2)
/*  f1723ac:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f1723b0:	26310002 */ 	addiu	$s1,$s1,0x2
/*  f1723b4:	000b6040 */ 	sll	$t4,$t3,0x1
/*  f1723b8:	358d0001 */ 	ori	$t5,$t4,0x1
/*  f1723bc:	1614fff6 */ 	bne	$s0,$s4,.L0f172398
/*  f1723c0:	a62dfffe */ 	sh	$t5,-0x2($s1)
.L0f1723c4:
/*  f1723c4:	8fae0044 */ 	lw	$t6,0x44($sp)
/*  f1723c8:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f1723cc:	03d5f021 */ 	addu	$s8,$s8,$s5
/*  f1723d0:	16ceffee */ 	bne	$s6,$t6,.L0f17238c
/*  f1723d4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1723d8:
/*  f1723d8:	8fb90044 */ 	lw	$t9,0x44($sp)
/*  f1723dc:	268f0003 */ 	addiu	$t7,$s4,0x3
/*  f1723e0:	31f80ffc */ 	andi	$t8,$t7,0xffc
/*  f1723e4:	03190019 */ 	multu	$t8,$t9
/*  f1723e8:	00001012 */ 	mflo	$v0
/*  f1723ec:	00024040 */ 	sll	$t0,$v0,0x1
/*  f1723f0:	1000004c */ 	beqz	$zero,.L0f172524
/*  f1723f4:	01001025 */ 	or	$v0,$t0,$zero
/*  f1723f8:	8fa90044 */ 	lw	$t1,0x44($sp)
/*  f1723fc:	26970007 */ 	addiu	$s7,$s4,0x7
/*  f172400:	32ea0ff8 */ 	andi	$t2,$s7,0xff8
/*  f172404:	19200013 */ 	blez	$t1,.L0f172454
/*  f172408:	0000b025 */ 	or	$s6,$zero,$zero
/*  f17240c:	0140b825 */ 	or	$s7,$t2,$zero
.L0f172410:
/*  f172410:	1a80000b */ 	blez	$s4,.L0f172440
/*  f172414:	00008025 */ 	or	$s0,$zero,$zero
/*  f172418:	02a08825 */ 	or	$s1,$s5,$zero
.L0f17241c:
/*  f17241c:	0fc5cd4f */ 	jal	func0f17353c
/*  f172420:	02402025 */ 	or	$a0,$s2,$zero
/*  f172424:	00025840 */ 	sll	$t3,$v0,0x1
/*  f172428:	026b6021 */ 	addu	$t4,$s3,$t3
/*  f17242c:	958d0000 */ 	lhu	$t5,0x0($t4)
/*  f172430:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f172434:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f172438:	1614fff8 */ 	bne	$s0,$s4,.L0f17241c
/*  f17243c:	a22dffff */ 	sb	$t5,-0x1($s1)
.L0f172440:
/*  f172440:	8fae0044 */ 	lw	$t6,0x44($sp)
/*  f172444:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f172448:	02b7a821 */ 	addu	$s5,$s5,$s7
/*  f17244c:	16cefff0 */ 	bne	$s6,$t6,.L0f172410
/*  f172450:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172454:
/*  f172454:	8fb90044 */ 	lw	$t9,0x44($sp)
/*  f172458:	268f0007 */ 	addiu	$t7,$s4,0x7
/*  f17245c:	31f80ff8 */ 	andi	$t8,$t7,0xff8
/*  f172460:	03190019 */ 	multu	$t8,$t9
/*  f172464:	00001012 */ 	mflo	$v0
/*  f172468:	1000002f */ 	beqz	$zero,.L0f172528
/*  f17246c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f172470:	8fa80044 */ 	lw	$t0,0x44($sp)
/*  f172474:	2697000f */ 	addiu	$s7,$s4,0xf
/*  f172478:	32e90ff0 */ 	andi	$t1,$s7,0xff0
/*  f17247c:	19000021 */ 	blez	$t0,.L0f172504
/*  f172480:	0000b025 */ 	or	$s6,$zero,$zero
/*  f172484:	0009b843 */ 	sra	$s7,$t1,0x1
.L0f172488:
/*  f172488:	1a800019 */ 	blez	$s4,.L0f1724f0
/*  f17248c:	00008025 */ 	or	$s0,$zero,$zero
.L0f172490:
/*  f172490:	0fc5cd4f */ 	jal	func0f17353c
/*  f172494:	02402025 */ 	or	$a0,$s2,$zero
/*  f172498:	00026040 */ 	sll	$t4,$v0,0x1
/*  f17249c:	026c6821 */ 	addu	$t5,$s3,$t4
/*  f1724a0:	95ae0000 */ 	lhu	$t6,0x0($t5)
/*  f1724a4:	00105843 */ 	sra	$t3,$s0,0x1
/*  f1724a8:	26180001 */ 	addiu	$t8,$s0,0x1
/*  f1724ac:	02ab8821 */ 	addu	$s1,$s5,$t3
/*  f1724b0:	0314082a */ 	slt	$at,$t8,$s4
/*  f1724b4:	000e7900 */ 	sll	$t7,$t6,0x4
/*  f1724b8:	10200009 */ 	beqz	$at,.L0f1724e0
/*  f1724bc:	a22f0000 */ 	sb	$t7,0x0($s1)
/*  f1724c0:	0fc5cd4f */ 	jal	func0f17353c
/*  f1724c4:	02402025 */ 	or	$a0,$s2,$zero
/*  f1724c8:	00024040 */ 	sll	$t0,$v0,0x1
/*  f1724cc:	02684821 */ 	addu	$t1,$s3,$t0
/*  f1724d0:	912a0001 */ 	lbu	$t2,0x1($t1)
/*  f1724d4:	92390000 */ 	lbu	$t9,0x0($s1)
/*  f1724d8:	032a5825 */ 	or	$t3,$t9,$t2
/*  f1724dc:	a22b0000 */ 	sb	$t3,0x0($s1)
.L0f1724e0:
/*  f1724e0:	26100002 */ 	addiu	$s0,$s0,0x2
/*  f1724e4:	0214082a */ 	slt	$at,$s0,$s4
/*  f1724e8:	1420ffe9 */ 	bnez	$at,.L0f172490
/*  f1724ec:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1724f0:
/*  f1724f0:	8fac0044 */ 	lw	$t4,0x44($sp)
/*  f1724f4:	26d60001 */ 	addiu	$s6,$s6,0x1
/*  f1724f8:	02b7a821 */ 	addu	$s5,$s5,$s7
/*  f1724fc:	16ccffe2 */ 	bne	$s6,$t4,.L0f172488
/*  f172500:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172504:
/*  f172504:	8fb80044 */ 	lw	$t8,0x44($sp)
/*  f172508:	268d000f */ 	addiu	$t5,$s4,0xf
/*  f17250c:	31ae0ff0 */ 	andi	$t6,$t5,0xff0
/*  f172510:	000e7843 */ 	sra	$t7,$t6,0x1
/*  f172514:	01f80019 */ 	multu	$t7,$t8
/*  f172518:	00001012 */ 	mflo	$v0
/*  f17251c:	10000002 */ 	beqz	$zero,.L0f172528
/*  f172520:	8fbf003c */ 	lw	$ra,0x3c($sp)
.L0f172524:
/*  f172524:	8fbf003c */ 	lw	$ra,0x3c($sp)
.L0f172528:
/*  f172528:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f17252c:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f172530:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f172534:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f172538:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f17253c:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f172540:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f172544:	8fb70034 */ 	lw	$s7,0x34($sp)
/*  f172548:	8fbe0038 */ 	lw	$s8,0x38($sp)
/*  f17254c:	03e00008 */ 	jr	$ra
/*  f172550:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f172554
/*  f172554:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f172558:	afb00004 */ 	sw	$s0,0x4($sp)
/*  f17255c:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f172560:	00e04025 */ 	or	$t0,$a3,$zero
/*  f172564:	00e04825 */ 	or	$t1,$a3,$zero
/*  f172568:	2a010101 */ 	slti	$at,$s0,0x101
/*  f17256c:	10200004 */ 	beqz	$at,.L0f172580
/*  f172570:	00e05025 */ 	or	$t2,$a3,$zero
/*  f172574:	00801025 */ 	or	$v0,$a0,$zero
/*  f172578:	10000003 */ 	beqz	$zero,.L0f172588
/*  f17257c:	8fa30008 */ 	lw	$v1,0x8($sp)
.L0f172580:
/*  f172580:	00801825 */ 	or	$v1,$a0,$zero
/*  f172584:	8fa2000c */ 	lw	$v0,0xc($sp)
.L0f172588:
/*  f172588:	8fae0038 */ 	lw	$t6,0x38($sp)
/*  f17258c:	2dc10009 */ 	sltiu	$at,$t6,0x9
/*  f172590:	10200115 */ 	beqz	$at,.L0f1729e8
/*  f172594:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f172598:	3c017f1b */ 	lui	$at,%hi(var7f1b7b2c)
/*  f17259c:	002e0821 */ 	addu	$at,$at,$t6
/*  f1725a0:	8c2e7b2c */ 	lw	$t6,%lo(var7f1b7b2c)($at)
/*  f1725a4:	01c00008 */ 	jr	$t6
/*  f1725a8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1725ac:	18c00021 */ 	blez	$a2,.L0f172634
/*  f1725b0:	00003825 */ 	or	$a3,$zero,$zero
/*  f1725b4:	24aa0003 */ 	addiu	$t2,$a1,0x3
/*  f1725b8:	314f0ffc */ 	andi	$t7,$t2,0xffc
/*  f1725bc:	000f5080 */ 	sll	$t2,$t7,0x2
/*  f1725c0:	00056040 */ 	sll	$t4,$a1,0x1
/*  f1725c4:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f1725c8:
/*  f1725c8:	18a00015 */ 	blez	$a1,.L0f172620
/*  f1725cc:	00005825 */ 	or	$t3,$zero,$zero
/*  f1725d0:	01004825 */ 	or	$t1,$t0,$zero
.L0f1725d4:
/*  f1725d4:	2a010101 */ 	slti	$at,$s0,0x101
/*  f1725d8:	10200008 */ 	beqz	$at,.L0f1725fc
/*  f1725dc:	000b7040 */ 	sll	$t6,$t3,0x1
/*  f1725e0:	004bc821 */ 	addu	$t9,$v0,$t3
/*  f1725e4:	932e0000 */ 	lbu	$t6,0x0($t9)
/*  f1725e8:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f1725ec:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f1725f0:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f1725f4:	10000007 */ 	beqz	$zero,.L0f172614
/*  f1725f8:	ad390000 */ 	sw	$t9,0x0($t1)
.L0f1725fc:
/*  f1725fc:	006e7821 */ 	addu	$t7,$v1,$t6
/*  f172600:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f172604:	0018c880 */ 	sll	$t9,$t8,0x2
/*  f172608:	00997021 */ 	addu	$t6,$a0,$t9
/*  f17260c:	8dcf0000 */ 	lw	$t7,0x0($t6)
/*  f172610:	ad2f0000 */ 	sw	$t7,0x0($t1)
.L0f172614:
/*  f172614:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f172618:	1565ffee */ 	bne	$t3,$a1,.L0f1725d4
/*  f17261c:	25290004 */ 	addiu	$t1,$t1,0x4
.L0f172620:
/*  f172620:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f172624:	010a4021 */ 	addu	$t0,$t0,$t2
/*  f172628:	00451021 */ 	addu	$v0,$v0,$a1
/*  f17262c:	14e6ffe6 */ 	bne	$a3,$a2,.L0f1725c8
/*  f172630:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f172634:
/*  f172634:	24b80003 */ 	addiu	$t8,$a1,0x3
/*  f172638:	33190ffc */ 	andi	$t9,$t8,0xffc
/*  f17263c:	03260019 */ 	multu	$t9,$a2
/*  f172640:	00001012 */ 	mflo	$v0
/*  f172644:	00027080 */ 	sll	$t6,$v0,0x2
/*  f172648:	100000e8 */ 	beqz	$zero,.L0f1729ec
/*  f17264c:	01c01025 */ 	or	$v0,$t6,$zero
/*  f172650:	18c00025 */ 	blez	$a2,.L0f1726e8
/*  f172654:	00003825 */ 	or	$a3,$zero,$zero
/*  f172658:	24aa0003 */ 	addiu	$t2,$a1,0x3
/*  f17265c:	314f0ffc */ 	andi	$t7,$t2,0xffc
/*  f172660:	000f5080 */ 	sll	$t2,$t7,0x2
/*  f172664:	00056040 */ 	sll	$t4,$a1,0x1
/*  f172668:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f17266c:
/*  f17266c:	18a00019 */ 	blez	$a1,.L0f1726d4
/*  f172670:	00005825 */ 	or	$t3,$zero,$zero
/*  f172674:	01004825 */ 	or	$t1,$t0,$zero
.L0f172678:
/*  f172678:	2a010101 */ 	slti	$at,$s0,0x101
/*  f17267c:	1020000a */ 	beqz	$at,.L0f1726a8
/*  f172680:	000bc040 */ 	sll	$t8,$t3,0x1
/*  f172684:	004bc821 */ 	addu	$t9,$v0,$t3
/*  f172688:	932e0000 */ 	lbu	$t6,0x0($t9)
/*  f17268c:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f172690:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f172694:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f172698:	00197200 */ 	sll	$t6,$t9,0x8
/*  f17269c:	35cf00ff */ 	ori	$t7,$t6,0xff
/*  f1726a0:	10000009 */ 	beqz	$zero,.L0f1726c8
/*  f1726a4:	ad2f0000 */ 	sw	$t7,0x0($t1)
.L0f1726a8:
/*  f1726a8:	0078c821 */ 	addu	$t9,$v1,$t8
/*  f1726ac:	972e0000 */ 	lhu	$t6,0x0($t9)
/*  f1726b0:	000e7880 */ 	sll	$t7,$t6,0x2
/*  f1726b4:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f1726b8:	8f190000 */ 	lw	$t9,0x0($t8)
/*  f1726bc:	00197200 */ 	sll	$t6,$t9,0x8
/*  f1726c0:	35cf00ff */ 	ori	$t7,$t6,0xff
/*  f1726c4:	ad2f0000 */ 	sw	$t7,0x0($t1)
.L0f1726c8:
/*  f1726c8:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f1726cc:	1565ffea */ 	bne	$t3,$a1,.L0f172678
/*  f1726d0:	25290004 */ 	addiu	$t1,$t1,0x4
.L0f1726d4:
/*  f1726d4:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f1726d8:	010a4021 */ 	addu	$t0,$t0,$t2
/*  f1726dc:	00451021 */ 	addu	$v0,$v0,$a1
/*  f1726e0:	14e6ffe2 */ 	bne	$a3,$a2,.L0f17266c
/*  f1726e4:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f1726e8:
/*  f1726e8:	24b80003 */ 	addiu	$t8,$a1,0x3
/*  f1726ec:	33190ffc */ 	andi	$t9,$t8,0xffc
/*  f1726f0:	03260019 */ 	multu	$t9,$a2
/*  f1726f4:	00001012 */ 	mflo	$v0
/*  f1726f8:	00027080 */ 	sll	$t6,$v0,0x2
/*  f1726fc:	100000bb */ 	beqz	$zero,.L0f1729ec
/*  f172700:	01c01025 */ 	or	$v0,$t6,$zero
/*  f172704:	18c00022 */ 	blez	$a2,.L0f172790
/*  f172708:	00003825 */ 	or	$a3,$zero,$zero
/*  f17270c:	24ad0003 */ 	addiu	$t5,$a1,0x3
/*  f172710:	31af0ffc */ 	andi	$t7,$t5,0xffc
/*  f172714:	000f6840 */ 	sll	$t5,$t7,0x1
/*  f172718:	00056040 */ 	sll	$t4,$a1,0x1
/*  f17271c:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f172720:
/*  f172720:	18a00016 */ 	blez	$a1,.L0f17277c
/*  f172724:	00005825 */ 	or	$t3,$zero,$zero
/*  f172728:	00004025 */ 	or	$t0,$zero,$zero
/*  f17272c:	01205025 */ 	or	$t2,$t1,$zero
.L0f172730:
/*  f172730:	2a010101 */ 	slti	$at,$s0,0x101
/*  f172734:	10200008 */ 	beqz	$at,.L0f172758
/*  f172738:	00687021 */ 	addu	$t6,$v1,$t0
/*  f17273c:	004bc821 */ 	addu	$t9,$v0,$t3
/*  f172740:	932e0000 */ 	lbu	$t6,0x0($t9)
/*  f172744:	000e7840 */ 	sll	$t7,$t6,0x1
/*  f172748:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f17274c:	97190000 */ 	lhu	$t9,0x0($t8)
/*  f172750:	10000006 */ 	beqz	$zero,.L0f17276c
/*  f172754:	a5590000 */ 	sh	$t9,0x0($t2)
.L0f172758:
/*  f172758:	95cf0000 */ 	lhu	$t7,0x0($t6)
/*  f17275c:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f172760:	0098c821 */ 	addu	$t9,$a0,$t8
/*  f172764:	972e0000 */ 	lhu	$t6,0x0($t9)
/*  f172768:	a54e0000 */ 	sh	$t6,0x0($t2)
.L0f17276c:
/*  f17276c:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f172770:	25080002 */ 	addiu	$t0,$t0,0x2
/*  f172774:	1565ffee */ 	bne	$t3,$a1,.L0f172730
/*  f172778:	254a0002 */ 	addiu	$t2,$t2,0x2
.L0f17277c:
/*  f17277c:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f172780:	012d4821 */ 	addu	$t1,$t1,$t5
/*  f172784:	00451021 */ 	addu	$v0,$v0,$a1
/*  f172788:	14e6ffe5 */ 	bne	$a3,$a2,.L0f172720
/*  f17278c:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f172790:
/*  f172790:	24af0003 */ 	addiu	$t7,$a1,0x3
/*  f172794:	31f80ffc */ 	andi	$t8,$t7,0xffc
/*  f172798:	03060019 */ 	multu	$t8,$a2
/*  f17279c:	00001012 */ 	mflo	$v0
/*  f1727a0:	0002c840 */ 	sll	$t9,$v0,0x1
/*  f1727a4:	10000091 */ 	beqz	$zero,.L0f1729ec
/*  f1727a8:	03201025 */ 	or	$v0,$t9,$zero
/*  f1727ac:	18c00026 */ 	blez	$a2,.L0f172848
/*  f1727b0:	00003825 */ 	or	$a3,$zero,$zero
/*  f1727b4:	24ad0003 */ 	addiu	$t5,$a1,0x3
/*  f1727b8:	31ae0ffc */ 	andi	$t6,$t5,0xffc
/*  f1727bc:	000e6840 */ 	sll	$t5,$t6,0x1
/*  f1727c0:	00056040 */ 	sll	$t4,$a1,0x1
/*  f1727c4:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f1727c8:
/*  f1727c8:	18a0001a */ 	blez	$a1,.L0f172834
/*  f1727cc:	00005825 */ 	or	$t3,$zero,$zero
/*  f1727d0:	00004025 */ 	or	$t0,$zero,$zero
/*  f1727d4:	01205025 */ 	or	$t2,$t1,$zero
.L0f1727d8:
/*  f1727d8:	2a010101 */ 	slti	$at,$s0,0x101
/*  f1727dc:	1020000a */ 	beqz	$at,.L0f172808
/*  f1727e0:	00687821 */ 	addu	$t7,$v1,$t0
/*  f1727e4:	004bc021 */ 	addu	$t8,$v0,$t3
/*  f1727e8:	93190000 */ 	lbu	$t9,0x0($t8)
/*  f1727ec:	00197040 */ 	sll	$t6,$t9,0x1
/*  f1727f0:	008e7821 */ 	addu	$t7,$a0,$t6
/*  f1727f4:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f1727f8:	0018c840 */ 	sll	$t9,$t8,0x1
/*  f1727fc:	372e0001 */ 	ori	$t6,$t9,0x1
/*  f172800:	10000008 */ 	beqz	$zero,.L0f172824
/*  f172804:	a54e0000 */ 	sh	$t6,0x0($t2)
.L0f172808:
/*  f172808:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f17280c:	0018c840 */ 	sll	$t9,$t8,0x1
/*  f172810:	00997021 */ 	addu	$t6,$a0,$t9
/*  f172814:	95cf0000 */ 	lhu	$t7,0x0($t6)
/*  f172818:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f17281c:	37190001 */ 	ori	$t9,$t8,0x1
/*  f172820:	a5590000 */ 	sh	$t9,0x0($t2)
.L0f172824:
/*  f172824:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f172828:	25080002 */ 	addiu	$t0,$t0,0x2
/*  f17282c:	1565ffea */ 	bne	$t3,$a1,.L0f1727d8
/*  f172830:	254a0002 */ 	addiu	$t2,$t2,0x2
.L0f172834:
/*  f172834:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f172838:	012d4821 */ 	addu	$t1,$t1,$t5
/*  f17283c:	00451021 */ 	addu	$v0,$v0,$a1
/*  f172840:	14e6ffe1 */ 	bne	$a3,$a2,.L0f1727c8
/*  f172844:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f172848:
/*  f172848:	24ae0003 */ 	addiu	$t6,$a1,0x3
/*  f17284c:	31cf0ffc */ 	andi	$t7,$t6,0xffc
/*  f172850:	01e60019 */ 	multu	$t7,$a2
/*  f172854:	00001012 */ 	mflo	$v0
/*  f172858:	0002c040 */ 	sll	$t8,$v0,0x1
/*  f17285c:	10000063 */ 	beqz	$zero,.L0f1729ec
/*  f172860:	03001025 */ 	or	$v0,$t8,$zero
/*  f172864:	18c00021 */ 	blez	$a2,.L0f1728ec
/*  f172868:	00003825 */ 	or	$a3,$zero,$zero
/*  f17286c:	24a80007 */ 	addiu	$t0,$a1,0x7
/*  f172870:	31190ff8 */ 	andi	$t9,$t0,0xff8
/*  f172874:	03204025 */ 	or	$t0,$t9,$zero
/*  f172878:	00056040 */ 	sll	$t4,$a1,0x1
/*  f17287c:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f172880:
/*  f172880:	18a00015 */ 	blez	$a1,.L0f1728d8
/*  f172884:	00005825 */ 	or	$t3,$zero,$zero
/*  f172888:	01404825 */ 	or	$t1,$t2,$zero
.L0f17288c:
/*  f17288c:	2a010101 */ 	slti	$at,$s0,0x101
/*  f172890:	10200008 */ 	beqz	$at,.L0f1728b4
/*  f172894:	000b7840 */ 	sll	$t7,$t3,0x1
/*  f172898:	004b7021 */ 	addu	$t6,$v0,$t3
/*  f17289c:	91cf0000 */ 	lbu	$t7,0x0($t6)
/*  f1728a0:	000fc040 */ 	sll	$t8,$t7,0x1
/*  f1728a4:	0098c821 */ 	addu	$t9,$a0,$t8
/*  f1728a8:	972e0000 */ 	lhu	$t6,0x0($t9)
/*  f1728ac:	10000007 */ 	beqz	$zero,.L0f1728cc
/*  f1728b0:	a12e0000 */ 	sb	$t6,0x0($t1)
.L0f1728b4:
/*  f1728b4:	006fc021 */ 	addu	$t8,$v1,$t7
/*  f1728b8:	97190000 */ 	lhu	$t9,0x0($t8)
/*  f1728bc:	00197040 */ 	sll	$t6,$t9,0x1
/*  f1728c0:	008e7821 */ 	addu	$t7,$a0,$t6
/*  f1728c4:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f1728c8:	a1380000 */ 	sb	$t8,0x0($t1)
.L0f1728cc:
/*  f1728cc:	256b0001 */ 	addiu	$t3,$t3,0x1
/*  f1728d0:	1565ffee */ 	bne	$t3,$a1,.L0f17288c
/*  f1728d4:	25290001 */ 	addiu	$t1,$t1,0x1
.L0f1728d8:
/*  f1728d8:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f1728dc:	01485021 */ 	addu	$t2,$t2,$t0
/*  f1728e0:	00451021 */ 	addu	$v0,$v0,$a1
/*  f1728e4:	14e6ffe6 */ 	bne	$a3,$a2,.L0f172880
/*  f1728e8:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f1728ec:
/*  f1728ec:	24b90007 */ 	addiu	$t9,$a1,0x7
/*  f1728f0:	332e0ff8 */ 	andi	$t6,$t9,0xff8
/*  f1728f4:	01c60019 */ 	multu	$t6,$a2
/*  f1728f8:	00001012 */ 	mflo	$v0
/*  f1728fc:	1000003c */ 	beqz	$zero,.L0f1729f0
/*  f172900:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f172904:	18c00031 */ 	blez	$a2,.L0f1729cc
/*  f172908:	00003825 */ 	or	$a3,$zero,$zero
/*  f17290c:	24a9000f */ 	addiu	$t1,$a1,0xf
/*  f172910:	312f0ff0 */ 	andi	$t7,$t1,0xff0
/*  f172914:	000f4843 */ 	sra	$t1,$t7,0x1
/*  f172918:	00056040 */ 	sll	$t4,$a1,0x1
/*  f17291c:	8fa40030 */ 	lw	$a0,0x30($sp)
.L0f172920:
/*  f172920:	18a00025 */ 	blez	$a1,.L0f1729b8
/*  f172924:	00005825 */ 	or	$t3,$zero,$zero
/*  f172928:	2a010101 */ 	slti	$at,$s0,0x101
.L0f17292c:
/*  f17292c:	10200010 */ 	beqz	$at,.L0f172970
/*  f172930:	000b7040 */ 	sll	$t6,$t3,0x1
/*  f172934:	01624021 */ 	addu	$t0,$t3,$v0
/*  f172938:	91190001 */ 	lbu	$t9,0x1($t0)
/*  f17293c:	00197040 */ 	sll	$t6,$t9,0x1
/*  f172940:	91190000 */ 	lbu	$t9,0x0($t0)
/*  f172944:	008e7821 */ 	addu	$t7,$a0,$t6
/*  f172948:	95f80000 */ 	lhu	$t8,0x0($t7)
/*  f17294c:	00197040 */ 	sll	$t6,$t9,0x1
/*  f172950:	008e7821 */ 	addu	$t7,$a0,$t6
/*  f172954:	95f90000 */ 	lhu	$t9,0x0($t7)
/*  f172958:	00197100 */ 	sll	$t6,$t9,0x4
/*  f17295c:	000bc843 */ 	sra	$t9,$t3,0x1
/*  f172960:	030e7825 */ 	or	$t7,$t8,$t6
/*  f172964:	0159c021 */ 	addu	$t8,$t2,$t9
/*  f172968:	1000000f */ 	beqz	$zero,.L0f1729a8
/*  f17296c:	a30f0000 */ 	sb	$t7,0x0($t8)
.L0f172970:
/*  f172970:	006e4021 */ 	addu	$t0,$v1,$t6
/*  f172974:	95190002 */ 	lhu	$t9,0x2($t0)
/*  f172978:	00197840 */ 	sll	$t7,$t9,0x1
/*  f17297c:	95190000 */ 	lhu	$t9,0x0($t0)
/*  f172980:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f172984:	970e0000 */ 	lhu	$t6,0x0($t8)
/*  f172988:	00197840 */ 	sll	$t7,$t9,0x1
/*  f17298c:	008fc021 */ 	addu	$t8,$a0,$t7
/*  f172990:	97190000 */ 	lhu	$t9,0x0($t8)
/*  f172994:	00197900 */ 	sll	$t7,$t9,0x4
/*  f172998:	000bc843 */ 	sra	$t9,$t3,0x1
/*  f17299c:	01cfc025 */ 	or	$t8,$t6,$t7
/*  f1729a0:	01597021 */ 	addu	$t6,$t2,$t9
/*  f1729a4:	a1d80000 */ 	sb	$t8,0x0($t6)
.L0f1729a8:
/*  f1729a8:	256b0002 */ 	addiu	$t3,$t3,0x2
/*  f1729ac:	0165082a */ 	slt	$at,$t3,$a1
/*  f1729b0:	5420ffde */ 	bnezl	$at,.L0f17292c
/*  f1729b4:	2a010101 */ 	slti	$at,$s0,0x101
.L0f1729b8:
/*  f1729b8:	24e70001 */ 	addiu	$a3,$a3,0x1
/*  f1729bc:	01495021 */ 	addu	$t2,$t2,$t1
/*  f1729c0:	00451021 */ 	addu	$v0,$v0,$a1
/*  f1729c4:	14e6ffd6 */ 	bne	$a3,$a2,.L0f172920
/*  f1729c8:	006c1821 */ 	addu	$v1,$v1,$t4
.L0f1729cc:
/*  f1729cc:	24af000f */ 	addiu	$t7,$a1,0xf
/*  f1729d0:	31f90ff0 */ 	andi	$t9,$t7,0xff0
/*  f1729d4:	0019c043 */ 	sra	$t8,$t9,0x1
/*  f1729d8:	03060019 */ 	multu	$t8,$a2
/*  f1729dc:	00001012 */ 	mflo	$v0
/*  f1729e0:	10000003 */ 	beqz	$zero,.L0f1729f0
/*  f1729e4:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f1729e8:
/*  f1729e8:	00001025 */ 	or	$v0,$zero,$zero
.L0f1729ec:
/*  f1729ec:	8fb00004 */ 	lw	$s0,0x4($sp)
.L0f1729f0:
/*  f1729f0:	03e00008 */ 	jr	$ra
/*  f1729f4:	27bd0020 */ 	addiu	$sp,$sp,0x20
);

GLOBAL_ASM(
glabel func0f1729f8
/*  f1729f8:	27bdfff0 */ 	addiu	$sp,$sp,-16
/*  f1729fc:	2ce1000d */ 	sltiu	$at,$a3,0xd
/*  f172a00:	afa50014 */ 	sw	$a1,0x14($sp)
/*  f172a04:	1020001d */ 	beqz	$at,.L0f172a7c
/*  f172a08:	00e01825 */ 	or	$v1,$a3,$zero
/*  f172a0c:	00077080 */ 	sll	$t6,$a3,0x2
/*  f172a10:	3c017f1b */ 	lui	$at,%hi(var7f1b7b50)
/*  f172a14:	002e0821 */ 	addu	$at,$at,$t6
/*  f172a18:	8c2e7b50 */ 	lw	$t6,%lo(var7f1b7b50)($at)
/*  f172a1c:	01c00008 */ 	jr	$t6
/*  f172a20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172a24:	8fa50014 */ 	lw	$a1,0x14($sp)
/*  f172a28:	24a50003 */ 	addiu	$a1,$a1,0x3
/*  f172a2c:	30af0ffc */ 	andi	$t7,$a1,0xffc
/*  f172a30:	10000012 */ 	beqz	$zero,.L0f172a7c
/*  f172a34:	afaf0004 */ 	sw	$t7,0x4($sp)
/*  f172a38:	8fa50014 */ 	lw	$a1,0x14($sp)
/*  f172a3c:	24a50003 */ 	addiu	$a1,$a1,0x3
/*  f172a40:	30b80ffc */ 	andi	$t8,$a1,0xffc
/*  f172a44:	0018c843 */ 	sra	$t9,$t8,0x1
/*  f172a48:	1000000c */ 	beqz	$zero,.L0f172a7c
/*  f172a4c:	afb90004 */ 	sw	$t9,0x4($sp)
/*  f172a50:	8fa50014 */ 	lw	$a1,0x14($sp)
/*  f172a54:	24a50007 */ 	addiu	$a1,$a1,0x7
/*  f172a58:	30aa0ff8 */ 	andi	$t2,$a1,0xff8
/*  f172a5c:	000a5883 */ 	sra	$t3,$t2,0x2
/*  f172a60:	10000006 */ 	beqz	$zero,.L0f172a7c
/*  f172a64:	afab0004 */ 	sw	$t3,0x4($sp)
/*  f172a68:	8fa50014 */ 	lw	$a1,0x14($sp)
/*  f172a6c:	24a5000f */ 	addiu	$a1,$a1,0xf
/*  f172a70:	30ac0ff0 */ 	andi	$t4,$a1,0xff0
/*  f172a74:	000c68c3 */ 	sra	$t5,$t4,0x3
/*  f172a78:	afad0004 */ 	sw	$t5,0x4($sp)
.L0f172a7c:
/*  f172a7c:	8fa50004 */ 	lw	$a1,0x4($sp)
/*  f172a80:	24010002 */ 	addiu	$at,$zero,0x2
/*  f172a84:	00057080 */ 	sll	$t6,$a1,0x2
/*  f172a88:	10600002 */ 	beqz	$v1,.L0f172a94
/*  f172a8c:	008e1021 */ 	addu	$v0,$a0,$t6
/*  f172a90:	1461001b */ 	bne	$v1,$at,.L0f172b00
.L0f172a94:
/*  f172a94:	28c10002 */ 	slti	$at,$a2,0x2
/*  f172a98:	1420002e */ 	bnez	$at,.L0f172b54
/*  f172a9c:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f172aa0:	00a04825 */ 	or	$t1,$a1,$zero
/*  f172aa4:	000978c0 */ 	sll	$t7,$t1,0x3
/*  f172aa8:	01e04825 */ 	or	$t1,$t7,$zero
.L0f172aac:
/*  f172aac:	18a0000e */ 	blez	$a1,.L0f172ae8
/*  f172ab0:	00002025 */ 	or	$a0,$zero,$zero
/*  f172ab4:	00404025 */ 	or	$t0,$v0,$zero
.L0f172ab8:
/*  f172ab8:	8d070000 */ 	lw	$a3,0x0($t0)
/*  f172abc:	8d180008 */ 	lw	$t8,0x8($t0)
/*  f172ac0:	8d19000c */ 	lw	$t9,0xc($t0)
/*  f172ac4:	ad070008 */ 	sw	$a3,0x8($t0)
/*  f172ac8:	8d070004 */ 	lw	$a3,0x4($t0)
/*  f172acc:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f172ad0:	0085082a */ 	slt	$at,$a0,$a1
/*  f172ad4:	25080010 */ 	addiu	$t0,$t0,0x10
/*  f172ad8:	ad18fff0 */ 	sw	$t8,-0x10($t0)
/*  f172adc:	ad19fff4 */ 	sw	$t9,-0xc($t0)
/*  f172ae0:	1420fff5 */ 	bnez	$at,.L0f172ab8
/*  f172ae4:	ad07fffc */ 	sw	$a3,-0x4($t0)
.L0f172ae8:
/*  f172ae8:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f172aec:	0066082a */ 	slt	$at,$v1,$a2
/*  f172af0:	1420ffee */ 	bnez	$at,.L0f172aac
/*  f172af4:	00491021 */ 	addu	$v0,$v0,$t1
/*  f172af8:	10000016 */ 	beqz	$zero,.L0f172b54
/*  f172afc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172b00:
/*  f172b00:	28c10002 */ 	slti	$at,$a2,0x2
/*  f172b04:	14200013 */ 	bnez	$at,.L0f172b54
/*  f172b08:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f172b0c:	00a04825 */ 	or	$t1,$a1,$zero
/*  f172b10:	000950c0 */ 	sll	$t2,$t1,0x3
/*  f172b14:	01404825 */ 	or	$t1,$t2,$zero
.L0f172b18:
/*  f172b18:	18a0000a */ 	blez	$a1,.L0f172b44
/*  f172b1c:	00002025 */ 	or	$a0,$zero,$zero
/*  f172b20:	00404025 */ 	or	$t0,$v0,$zero
.L0f172b24:
/*  f172b24:	8d070000 */ 	lw	$a3,0x0($t0)
/*  f172b28:	8d0b0004 */ 	lw	$t3,0x4($t0)
/*  f172b2c:	24840002 */ 	addiu	$a0,$a0,0x2
/*  f172b30:	0085082a */ 	slt	$at,$a0,$a1
/*  f172b34:	25080008 */ 	addiu	$t0,$t0,0x8
/*  f172b38:	ad07fffc */ 	sw	$a3,-0x4($t0)
/*  f172b3c:	1420fff9 */ 	bnez	$at,.L0f172b24
/*  f172b40:	ad0bfff8 */ 	sw	$t3,-0x8($t0)
.L0f172b44:
/*  f172b44:	24630002 */ 	addiu	$v1,$v1,0x2
/*  f172b48:	0066082a */ 	slt	$at,$v1,$a2
/*  f172b4c:	1420fff2 */ 	bnez	$at,.L0f172b18
/*  f172b50:	00491021 */ 	addu	$v0,$v0,$t1
.L0f172b54:
/*  f172b54:	03e00008 */ 	jr	$ra
/*  f172b58:	27bd0010 */ 	addiu	$sp,$sp,0x10
);

GLOBAL_ASM(
glabel func0f172b5c
/*  f172b5c:	27bdfff0 */ 	addiu	$sp,$sp,-16
/*  f172b60:	afb10008 */ 	sw	$s1,0x8($sp)
/*  f172b64:	afb00004 */ 	sw	$s0,0x4($sp)
/*  f172b68:	00808025 */ 	or	$s0,$a0,$zero
/*  f172b6c:	00e08825 */ 	or	$s1,$a3,$zero
/*  f172b70:	afb2000c */ 	sw	$s2,0xc($sp)
/*  f172b74:	18c000b9 */ 	blez	$a2,.L0f172e5c
/*  f172b78:	00001025 */ 	or	$v0,$zero,$zero
/*  f172b7c:	8fa90020 */ 	lw	$t1,0x20($sp)
.L0f172b80:
/*  f172b80:	18a000b3 */ 	blez	$a1,.L0f172e50
/*  f172b84:	00001825 */ 	or	$v1,$zero,$zero
/*  f172b88:	00450019 */ 	multu	$v0,$a1
/*  f172b8c:	00095040 */ 	sll	$t2,$t1,0x1
/*  f172b90:	02209025 */ 	or	$s2,$s1,$zero
/*  f172b94:	00003812 */ 	mflo	$a3
/*  f172b98:	00f04021 */ 	addu	$t0,$a3,$s0
/*  f172b9c:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172ba0:
/*  f172ba0:	910e0000 */ 	lbu	$t6,0x0($t0)
/*  f172ba4:	2e410007 */ 	sltiu	$at,$s2,0x7
/*  f172ba8:	18600003 */ 	blez	$v1,.L0f172bb8
/*  f172bac:	01ca2021 */ 	addu	$a0,$t6,$t2
/*  f172bb0:	10000002 */ 	beqz	$zero,.L0f172bbc
/*  f172bb4:	910bffff */ 	lbu	$t3,-0x1($t0)
.L0f172bb8:
/*  f172bb8:	00005825 */ 	or	$t3,$zero,$zero
.L0f172bbc:
/*  f172bbc:	18400008 */ 	blez	$v0,.L0f172be0
/*  f172bc0:	00006025 */ 	or	$t4,$zero,$zero
/*  f172bc4:	244fffff */ 	addiu	$t7,$v0,-1
/*  f172bc8:	01e50019 */ 	multu	$t7,$a1
/*  f172bcc:	0000c012 */ 	mflo	$t8
/*  f172bd0:	0303c821 */ 	addu	$t9,$t8,$v1
/*  f172bd4:	03307021 */ 	addu	$t6,$t9,$s0
/*  f172bd8:	10000001 */ 	beqz	$zero,.L0f172be0
/*  f172bdc:	91cc0000 */ 	lbu	$t4,0x0($t6)
.L0f172be0:
/*  f172be0:	18600009 */ 	blez	$v1,.L0f172c08
/*  f172be4:	00006825 */ 	or	$t5,$zero,$zero
/*  f172be8:	18400007 */ 	blez	$v0,.L0f172c08
/*  f172bec:	244fffff */ 	addiu	$t7,$v0,-1
/*  f172bf0:	01e50019 */ 	multu	$t7,$a1
/*  f172bf4:	0000c012 */ 	mflo	$t8
/*  f172bf8:	0303c821 */ 	addu	$t9,$t8,$v1
/*  f172bfc:	03307021 */ 	addu	$t6,$t9,$s0
/*  f172c00:	10000001 */ 	beqz	$zero,.L0f172c08
/*  f172c04:	91cdffff */ 	lbu	$t5,-0x1($t6)
.L0f172c08:
/*  f172c08:	1020008e */ 	beqz	$at,.L0f172e44
/*  f172c0c:	00127880 */ 	sll	$t7,$s2,0x2
/*  f172c10:	3c017f1b */ 	lui	$at,%hi(var7f1b7b84)
/*  f172c14:	002f0821 */ 	addu	$at,$at,$t7
/*  f172c18:	8c2f7b84 */ 	lw	$t7,%lo(var7f1b7b84)($at)
/*  f172c1c:	01e00008 */ 	jr	$t7
/*  f172c20:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172c24:	008bc021 */ 	addu	$t8,$a0,$t3
/*  f172c28:	0309001a */ 	div	$zero,$t8,$t1
/*  f172c2c:	02077021 */ 	addu	$t6,$s0,$a3
/*  f172c30:	01c37821 */ 	addu	$t7,$t6,$v1
/*  f172c34:	0000c810 */ 	mfhi	$t9
/*  f172c38:	a1f90000 */ 	sb	$t9,0x0($t7)
/*  f172c3c:	15200002 */ 	bnez	$t1,.L0f172c48
/*  f172c40:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172c44:	0007000d */ 	break	0x7
.L0f172c48:
/*  f172c48:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172c4c:	15210004 */ 	bne	$t1,$at,.L0f172c60
/*  f172c50:	3c018000 */ 	lui	$at,0x8000
/*  f172c54:	17010002 */ 	bne	$t8,$at,.L0f172c60
/*  f172c58:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172c5c:	0006000d */ 	break	0x6
.L0f172c60:
/*  f172c60:	10000079 */ 	beqz	$zero,.L0f172e48
/*  f172c64:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172c68:	008cc021 */ 	addu	$t8,$a0,$t4
/*  f172c6c:	0309001a */ 	div	$zero,$t8,$t1
/*  f172c70:	0207c821 */ 	addu	$t9,$s0,$a3
/*  f172c74:	03237821 */ 	addu	$t7,$t9,$v1
/*  f172c78:	00007010 */ 	mfhi	$t6
/*  f172c7c:	a1ee0000 */ 	sb	$t6,0x0($t7)
/*  f172c80:	15200002 */ 	bnez	$t1,.L0f172c8c
/*  f172c84:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172c88:	0007000d */ 	break	0x7
.L0f172c8c:
/*  f172c8c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172c90:	15210004 */ 	bne	$t1,$at,.L0f172ca4
/*  f172c94:	3c018000 */ 	lui	$at,0x8000
/*  f172c98:	17010002 */ 	bne	$t8,$at,.L0f172ca4
/*  f172c9c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172ca0:	0006000d */ 	break	0x6
.L0f172ca4:
/*  f172ca4:	10000068 */ 	beqz	$zero,.L0f172e48
/*  f172ca8:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172cac:	008dc021 */ 	addu	$t8,$a0,$t5
/*  f172cb0:	0309001a */ 	div	$zero,$t8,$t1
/*  f172cb4:	02077021 */ 	addu	$t6,$s0,$a3
/*  f172cb8:	01c37821 */ 	addu	$t7,$t6,$v1
/*  f172cbc:	0000c810 */ 	mfhi	$t9
/*  f172cc0:	a1f90000 */ 	sb	$t9,0x0($t7)
/*  f172cc4:	15200002 */ 	bnez	$t1,.L0f172cd0
/*  f172cc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172ccc:	0007000d */ 	break	0x7
.L0f172cd0:
/*  f172cd0:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172cd4:	15210004 */ 	bne	$t1,$at,.L0f172ce8
/*  f172cd8:	3c018000 */ 	lui	$at,0x8000
/*  f172cdc:	17010002 */ 	bne	$t8,$at,.L0f172ce8
/*  f172ce0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172ce4:	0006000d */ 	break	0x6
.L0f172ce8:
/*  f172ce8:	10000057 */ 	beqz	$zero,.L0f172e48
/*  f172cec:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172cf0:	016cc021 */ 	addu	$t8,$t3,$t4
/*  f172cf4:	030d7023 */ 	subu	$t6,$t8,$t5
/*  f172cf8:	01c4c821 */ 	addu	$t9,$t6,$a0
/*  f172cfc:	0329001a */ 	div	$zero,$t9,$t1
/*  f172d00:	0207c021 */ 	addu	$t8,$s0,$a3
/*  f172d04:	03037021 */ 	addu	$t6,$t8,$v1
/*  f172d08:	00007810 */ 	mfhi	$t7
/*  f172d0c:	a1cf0000 */ 	sb	$t7,0x0($t6)
/*  f172d10:	15200002 */ 	bnez	$t1,.L0f172d1c
/*  f172d14:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172d18:	0007000d */ 	break	0x7
.L0f172d1c:
/*  f172d1c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172d20:	15210004 */ 	bne	$t1,$at,.L0f172d34
/*  f172d24:	3c018000 */ 	lui	$at,0x8000
/*  f172d28:	17210002 */ 	bne	$t9,$at,.L0f172d34
/*  f172d2c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172d30:	0006000d */ 	break	0x6
.L0f172d34:
/*  f172d34:	10000044 */ 	beqz	$zero,.L0f172e48
/*  f172d38:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172d3c:	018dc823 */ 	subu	$t9,$t4,$t5
/*  f172d40:	07210003 */ 	bgez	$t9,.L0f172d50
/*  f172d44:	0019c043 */ 	sra	$t8,$t9,0x1
/*  f172d48:	27210001 */ 	addiu	$at,$t9,0x1
/*  f172d4c:	0001c043 */ 	sra	$t8,$at,0x1
.L0f172d50:
/*  f172d50:	030b7821 */ 	addu	$t7,$t8,$t3
/*  f172d54:	01e47021 */ 	addu	$t6,$t7,$a0
/*  f172d58:	01c9001a */ 	div	$zero,$t6,$t1
/*  f172d5c:	0207c021 */ 	addu	$t8,$s0,$a3
/*  f172d60:	03037821 */ 	addu	$t7,$t8,$v1
/*  f172d64:	0000c810 */ 	mfhi	$t9
/*  f172d68:	a1f90000 */ 	sb	$t9,0x0($t7)
/*  f172d6c:	15200002 */ 	bnez	$t1,.L0f172d78
/*  f172d70:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172d74:	0007000d */ 	break	0x7
.L0f172d78:
/*  f172d78:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172d7c:	15210004 */ 	bne	$t1,$at,.L0f172d90
/*  f172d80:	3c018000 */ 	lui	$at,0x8000
/*  f172d84:	15c10002 */ 	bne	$t6,$at,.L0f172d90
/*  f172d88:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172d8c:	0006000d */ 	break	0x6
.L0f172d90:
/*  f172d90:	1000002d */ 	beqz	$zero,.L0f172e48
/*  f172d94:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172d98:	016d7023 */ 	subu	$t6,$t3,$t5
/*  f172d9c:	05c10003 */ 	bgez	$t6,.L0f172dac
/*  f172da0:	000ec043 */ 	sra	$t8,$t6,0x1
/*  f172da4:	25c10001 */ 	addiu	$at,$t6,0x1
/*  f172da8:	0001c043 */ 	sra	$t8,$at,0x1
.L0f172dac:
/*  f172dac:	030cc821 */ 	addu	$t9,$t8,$t4
/*  f172db0:	03247821 */ 	addu	$t7,$t9,$a0
/*  f172db4:	01e9001a */ 	div	$zero,$t7,$t1
/*  f172db8:	0207c021 */ 	addu	$t8,$s0,$a3
/*  f172dbc:	0303c821 */ 	addu	$t9,$t8,$v1
/*  f172dc0:	00007010 */ 	mfhi	$t6
/*  f172dc4:	a32e0000 */ 	sb	$t6,0x0($t9)
/*  f172dc8:	15200002 */ 	bnez	$t1,.L0f172dd4
/*  f172dcc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172dd0:	0007000d */ 	break	0x7
.L0f172dd4:
/*  f172dd4:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172dd8:	15210004 */ 	bne	$t1,$at,.L0f172dec
/*  f172ddc:	3c018000 */ 	lui	$at,0x8000
/*  f172de0:	15e10002 */ 	bne	$t7,$at,.L0f172dec
/*  f172de4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172de8:	0006000d */ 	break	0x6
.L0f172dec:
/*  f172dec:	10000016 */ 	beqz	$zero,.L0f172e48
/*  f172df0:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f172df4:	016c7821 */ 	addu	$t7,$t3,$t4
/*  f172df8:	05e10003 */ 	bgez	$t7,.L0f172e08
/*  f172dfc:	000fc043 */ 	sra	$t8,$t7,0x1
/*  f172e00:	25e10001 */ 	addiu	$at,$t7,0x1
/*  f172e04:	0001c043 */ 	sra	$t8,$at,0x1
.L0f172e08:
/*  f172e08:	03047021 */ 	addu	$t6,$t8,$a0
/*  f172e0c:	01c9001a */ 	div	$zero,$t6,$t1
/*  f172e10:	0000c810 */ 	mfhi	$t9
/*  f172e14:	02077821 */ 	addu	$t7,$s0,$a3
/*  f172e18:	01e3c021 */ 	addu	$t8,$t7,$v1
/*  f172e1c:	a3190000 */ 	sb	$t9,0x0($t8)
/*  f172e20:	15200002 */ 	bnez	$t1,.L0f172e2c
/*  f172e24:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172e28:	0007000d */ 	break	0x7
.L0f172e2c:
/*  f172e2c:	2401ffff */ 	addiu	$at,$zero,-1
/*  f172e30:	15210004 */ 	bne	$t1,$at,.L0f172e44
/*  f172e34:	3c018000 */ 	lui	$at,0x8000
/*  f172e38:	15c10002 */ 	bne	$t6,$at,.L0f172e44
/*  f172e3c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172e40:	0006000d */ 	break	0x6
.L0f172e44:
/*  f172e44:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f172e48:
/*  f172e48:	1465ff55 */ 	bne	$v1,$a1,.L0f172ba0
/*  f172e4c:	25080001 */ 	addiu	$t0,$t0,0x1
.L0f172e50:
/*  f172e50:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f172e54:	1446ff4a */ 	bne	$v0,$a2,.L0f172b80
/*  f172e58:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172e5c:
/*  f172e5c:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f172e60:	8fb10008 */ 	lw	$s1,0x8($sp)
/*  f172e64:	8fb2000c */ 	lw	$s2,0xc($sp)
/*  f172e68:	03e00008 */ 	jr	$ra
/*  f172e6c:	27bd0010 */ 	addiu	$sp,$sp,0x10
);

GLOBAL_ASM(
glabel func0f172e70
/*  f172e70:	00a67021 */ 	addu	$t6,$a1,$a2
/*  f172e74:	00a67821 */ 	addu	$t7,$a1,$a2
/*  f172e78:	ac850000 */ 	sw	$a1,0x0($a0)
/*  f172e7c:	ac8e0004 */ 	sw	$t6,0x4($a0)
/*  f172e80:	ac850008 */ 	sw	$a1,0x8($a0)
/*  f172e84:	03e00008 */ 	jr	$ra
/*  f172e88:	ac8f000c */ 	sw	$t7,0xc($a0)
);

GLOBAL_ASM(
glabel func0f172e8c
/*  f172e8c:	14a00003 */ 	bnez	$a1,.L0f172e9c
/*  f172e90:	3c0e800b */ 	lui	$t6,%hi(var800aabc8)
/*  f172e94:	3c05800b */ 	lui	$a1,%hi(var800aabc8)
/*  f172e98:	24a5abc8 */ 	addiu	$a1,$a1,%lo(var800aabc8)
.L0f172e9c:
/*  f172e9c:	25ceabc8 */ 	addiu	$t6,$t6,%lo(var800aabc8)
/*  f172ea0:	54ae0017 */ 	bnel	$a1,$t6,.L0f172f00
/*  f172ea4:	8ca20004 */ 	lw	$v0,0x4($a1)
/*  f172ea8:	8ca30004 */ 	lw	$v1,0x4($a1)
/*  f172eac:	3c058000 */ 	lui	$a1,0x8000
/*  f172eb0:	10600010 */ 	beqz	$v1,.L0f172ef4
/*  f172eb4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f172eb8:	8c6f0000 */ 	lw	$t7,0x0($v1)
.L0f172ebc:
/*  f172ebc:	000fc502 */ 	srl	$t8,$t7,0x14
/*  f172ec0:	54980004 */ 	bnel	$a0,$t8,.L0f172ed4
/*  f172ec4:	8c62000c */ 	lw	$v0,0xc($v1)
/*  f172ec8:	03e00008 */ 	jr	$ra
/*  f172ecc:	00601025 */ 	or	$v0,$v1,$zero
/*  f172ed0:	8c62000c */ 	lw	$v0,0xc($v1)
.L0f172ed4:
/*  f172ed4:	0002c900 */ 	sll	$t9,$v0,0x4
/*  f172ed8:	00191202 */ 	srl	$v0,$t9,0x8
/*  f172edc:	14400003 */ 	bnez	$v0,.L0f172eec
/*  f172ee0:	00451825 */ 	or	$v1,$v0,$a1
/*  f172ee4:	03e00008 */ 	jr	$ra
/*  f172ee8:	00001025 */ 	or	$v0,$zero,$zero
.L0f172eec:
/*  f172eec:	5460fff3 */ 	bnezl	$v1,.L0f172ebc
/*  f172ef0:	8c6f0000 */ 	lw	$t7,0x0($v1)
.L0f172ef4:
/*  f172ef4:	03e00008 */ 	jr	$ra
/*  f172ef8:	00001025 */ 	or	$v0,$zero,$zero
/*  f172efc:	8ca20004 */ 	lw	$v0,0x4($a1)
.L0f172f00:
/*  f172f00:	8ca3000c */ 	lw	$v1,0xc($a1)
/*  f172f04:	0062082b */ 	sltu	$at,$v1,$v0
/*  f172f08:	5020000c */ 	beqzl	$at,.L0f172f3c
/*  f172f0c:	00001025 */ 	or	$v0,$zero,$zero
/*  f172f10:	8c690000 */ 	lw	$t1,0x0($v1)
.L0f172f14:
/*  f172f14:	00095502 */ 	srl	$t2,$t1,0x14
/*  f172f18:	548a0004 */ 	bnel	$a0,$t2,.L0f172f2c
/*  f172f1c:	24630010 */ 	addiu	$v1,$v1,0x10
/*  f172f20:	03e00008 */ 	jr	$ra
/*  f172f24:	00601025 */ 	or	$v0,$v1,$zero
/*  f172f28:	24630010 */ 	addiu	$v1,$v1,0x10
.L0f172f2c:
/*  f172f2c:	0062082b */ 	sltu	$at,$v1,$v0
/*  f172f30:	5420fff8 */ 	bnezl	$at,.L0f172f14
/*  f172f34:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f172f38:	00001025 */ 	or	$v0,$zero,$zero
.L0f172f3c:
/*  f172f3c:	03e00008 */ 	jr	$ra
/*  f172f40:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f172f44
/*  f172f44:	8c8e000c */ 	lw	$t6,0xc($a0)
/*  f172f48:	8c8f0008 */ 	lw	$t7,0x8($a0)
/*  f172f4c:	03e00008 */ 	jr	$ra
/*  f172f50:	01cf1023 */ 	subu	$v0,$t6,$t7
);

GLOBAL_ASM(
glabel func0f172f54
/*  f172f54:	03e00008 */ 	jr	$ra
/*  f172f58:	8c820008 */ 	lw	$v0,0x8($a0)
);

GLOBAL_ASM(
glabel func0f172f5c
/*  f172f5c:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f172f60:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f172f64:	afb60030 */ 	sw	$s6,0x30($sp)
/*  f172f68:	afb5002c */ 	sw	$s5,0x2c($sp)
/*  f172f6c:	afb40028 */ 	sw	$s4,0x28($sp)
/*  f172f70:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f172f74:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f172f78:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f172f7c:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f172f80:	908e0000 */ 	lbu	$t6,0x0($a0)
/*  f172f84:	241300b8 */ 	addiu	$s3,$zero,0xb8
/*  f172f88:	00a08825 */ 	or	$s1,$a1,$zero
/*  f172f8c:	00c09025 */ 	or	$s2,$a2,$zero
/*  f172f90:	126e0015 */ 	beq	$s3,$t6,.L0f172fe8
/*  f172f94:	00808025 */ 	or	$s0,$a0,$zero
/*  f172f98:	31c200ff */ 	andi	$v0,$t6,0xff
/*  f172f9c:	241600cd */ 	addiu	$s6,$zero,0xcd
/*  f172fa0:	241500ab */ 	addiu	$s5,$zero,0xab
/*  f172fa4:	241400fd */ 	addiu	$s4,$zero,0xfd
.L0f172fa8:
/*  f172fa8:	5682000c */ 	bnel	$s4,$v0,.L0f172fdc
/*  f172fac:	92020008 */ 	lbu	$v0,0x8($s0)
/*  f172fb0:	920f0004 */ 	lbu	$t7,0x4($s0)
/*  f172fb4:	56af0009 */ 	bnel	$s5,$t7,.L0f172fdc
/*  f172fb8:	92020008 */ 	lbu	$v0,0x8($s0)
/*  f172fbc:	92180005 */ 	lbu	$t8,0x5($s0)
/*  f172fc0:	26040004 */ 	addiu	$a0,$s0,0x4
/*  f172fc4:	02202825 */ 	or	$a1,$s1,$zero
/*  f172fc8:	56d80004 */ 	bnel	$s6,$t8,.L0f172fdc
/*  f172fcc:	92020008 */ 	lbu	$v0,0x8($s0)
/*  f172fd0:	0fc5cc04 */ 	jal	func0f173010
/*  f172fd4:	02403025 */ 	or	$a2,$s2,$zero
/*  f172fd8:	92020008 */ 	lbu	$v0,0x8($s0)
.L0f172fdc:
/*  f172fdc:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f172fe0:	1662fff1 */ 	bne	$s3,$v0,.L0f172fa8
/*  f172fe4:	00000000 */ 	sll	$zero,$zero,0x0
.L0f172fe8:
/*  f172fe8:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f172fec:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f172ff0:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f172ff4:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f172ff8:	8fb30024 */ 	lw	$s3,0x24($sp)
/*  f172ffc:	8fb40028 */ 	lw	$s4,0x28($sp)
/*  f173000:	8fb5002c */ 	lw	$s5,0x2c($sp)
/*  f173004:	8fb60030 */ 	lw	$s6,0x30($sp)
/*  f173008:	03e00008 */ 	jr	$ra
/*  f17300c:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f173010
/*  f173010:	27bddb10 */ 	addiu	$sp,$sp,-9456
/*  f173014:	afb00020 */ 	sw	$s0,0x20($sp)
/*  f173018:	00a08025 */ 	or	$s0,$a1,$zero
/*  f17301c:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f173020:	afa424f0 */ 	sw	$a0,0x24f0($sp)
/*  f173024:	afa624f8 */ 	sw	$a2,0x24f8($sp)
/*  f173028:	14a00003 */ 	bnez	$a1,.L0f173038
/*  f17302c:	00003825 */ 	or	$a3,$zero,$zero
/*  f173030:	3c10800b */ 	lui	$s0,%hi(var800aabc8)
/*  f173034:	2610abc8 */ 	addiu	$s0,$s0,%lo(var800aabc8)
.L0f173038:
/*  f173038:	3c0e800b */ 	lui	$t6,%hi(var800aabc8)
/*  f17303c:	25ceabc8 */ 	addiu	$t6,$t6,%lo(var800aabc8)
/*  f173040:	160e0002 */ 	bne	$s0,$t6,.L0f17304c
/*  f173044:	8faf24f0 */ 	lw	$t7,0x24f0($sp)
/*  f173048:	24070001 */ 	addiu	$a3,$zero,0x1
.L0f17304c:
/*  f17304c:	8de20000 */ 	lw	$v0,0x0($t7)
/*  f173050:	3c01ffff */ 	lui	$at,0xffff
/*  f173054:	02002825 */ 	or	$a1,$s0,$zero
/*  f173058:	00411824 */ 	and	$v1,$v0,$at
/*  f17305c:	10600002 */ 	beqz	$v1,.L0f173068
/*  f173060:	3c01abcd */ 	lui	$at,0xabcd
/*  f173064:	146100ee */ 	bne	$v1,$at,.L0f173420
.L0f173068:
/*  f173068:	3c03800b */ 	lui	$v1,%hi(var800ab53c)
/*  f17306c:	2463b53c */ 	addiu	$v1,$v1,%lo(var800ab53c)
/*  f173070:	3044ffff */ 	andi	$a0,$v0,0xffff
/*  f173074:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f173078:	0fc5cba3 */ 	jal	func0f172e8c
/*  f17307c:	a3a7148b */ 	sb	$a3,0x148b($sp)
/*  f173080:	144000e2 */ 	bnez	$v0,.L0f17340c
/*  f173084:	afa2149c */ 	sw	$v0,0x149c($sp)
/*  f173088:	3c19800b */ 	lui	$t9,0x800b
/*  f17308c:	8f39b53c */ 	lw	$t9,-0x4ac4($t9)
/*  f173090:	27a314bf */ 	addiu	$v1,$sp,0x14bf
/*  f173094:	00035102 */ 	srl	$t2,$v1,0x4
/*  f173098:	2b210daf */ 	slti	$at,$t9,0xdaf
/*  f17309c:	102000e0 */ 	beqz	$at,.L0f173420
/*  f1730a0:	000a5900 */ 	sll	$t3,$t2,0x4
/*  f1730a4:	0c012048 */ 	jal	func00048120
/*  f1730a8:	afab002c */ 	sw	$t3,0x2c($sp)
/*  f1730ac:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f1730b0:	0c013920 */ 	jal	func0004e480
/*  f1730b4:	24052000 */ 	addiu	$a1,$zero,0x2000
/*  f1730b8:	3c0d800b */ 	lui	$t5,0x800b
/*  f1730bc:	8dadb53c */ 	lw	$t5,-0x4ac4($t5)
/*  f1730c0:	3c0c800b */ 	lui	$t4,0x800b
/*  f1730c4:	8d8cabc0 */ 	lw	$t4,-0x5440($t4)
/*  f1730c8:	000d70c0 */ 	sll	$t6,$t5,0x3
/*  f1730cc:	3c0100ff */ 	lui	$at,0xff
/*  f1730d0:	018e1021 */ 	addu	$v0,$t4,$t6
/*  f1730d4:	8c430000 */ 	lw	$v1,0x0($v0)
/*  f1730d8:	8c470008 */ 	lw	$a3,0x8($v0)
/*  f1730dc:	3421ffff */ 	ori	$at,$at,0xffff
/*  f1730e0:	00617824 */ 	and	$t7,$v1,$at
/*  f1730e4:	00e1c024 */ 	and	$t8,$a3,$at
/*  f1730e8:	11f800cd */ 	beq	$t7,$t8,.L0f173420
/*  f1730ec:	8fa4002c */ 	lw	$a0,0x2c($sp)
/*  f1730f0:	030f3023 */ 	subu	$a2,$t8,$t7
/*  f1730f4:	24c6001f */ 	addiu	$a2,$a2,0x1f
/*  f1730f8:	2401fff8 */ 	addiu	$at,$zero,-8
/*  f1730fc:	3c0a01d6 */ 	lui	$t2,0x1d6
/*  f173100:	254a5f40 */ 	addiu	$t2,$t2,0x5f40
/*  f173104:	01e1c824 */ 	and	$t9,$t7,$at
/*  f173108:	00065902 */ 	srl	$t3,$a2,0x4
/*  f17310c:	000b3100 */ 	sll	$a2,$t3,0x4
/*  f173110:	032a2821 */ 	addu	$a1,$t9,$t2
/*  f173114:	0c003504 */ 	jal	func0000d410
/*  f173118:	afaf0044 */ 	sw	$t7,0x44($sp)
/*  f17311c:	8fa30044 */ 	lw	$v1,0x44($sp)
/*  f173120:	8fac002c */ 	lw	$t4,0x2c($sp)
/*  f173124:	93aa148b */ 	lbu	$t2,0x148b($sp)
/*  f173128:	306e0007 */ 	andi	$t6,$v1,0x7
/*  f17312c:	018e3021 */ 	addu	$a2,$t4,$t6
/*  f173130:	90c20000 */ 	lbu	$v0,0x0($a2)
/*  f173134:	00002825 */ 	or	$a1,$zero,$zero
/*  f173138:	02002025 */ 	or	$a0,$s0,$zero
/*  f17313c:	304f0080 */ 	andi	$t7,$v0,0x80
/*  f173140:	30490040 */ 	andi	$t1,$v0,0x40
/*  f173144:	3047003f */ 	andi	$a3,$v0,0x3f
/*  f173148:	000fc1c3 */ 	sra	$t8,$t7,0x7
/*  f17314c:	0009c983 */ 	sra	$t9,$t1,0x6
/*  f173150:	28e10006 */ 	slti	$at,$a3,0x6
/*  f173154:	afb814a8 */ 	sw	$t8,0x14a8($sp)
/*  f173158:	14200002 */ 	bnez	$at,.L0f173164
/*  f17315c:	03204825 */ 	or	$t1,$t9,$zero
/*  f173160:	24070005 */ 	addiu	$a3,$zero,0x5
.L0f173164:
/*  f173164:	1140000f */ 	beqz	$t2,.L0f1731a4
/*  f173168:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f17316c:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f173170:	afa614ac */ 	sw	$a2,0x14ac($sp)
/*  f173174:	afa714a0 */ 	sw	$a3,0x14a0($sp)
/*  f173178:	0c004935 */ 	jal	func000124d4
/*  f17317c:	afa914a4 */ 	sw	$t1,0x14a4($sp)
/*  f173180:	afa20030 */ 	sw	$v0,0x30($sp)
/*  f173184:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f173188:	0c004935 */ 	jal	func000124d4
/*  f17318c:	24050001 */ 	addiu	$a1,$zero,0x1
/*  f173190:	8fab0030 */ 	lw	$t3,0x30($sp)
/*  f173194:	8fa714a0 */ 	lw	$a3,0x14a0($sp)
/*  f173198:	8fa914a4 */ 	lw	$t1,0x14a4($sp)
/*  f17319c:	10000008 */ 	beqz	$zero,.L0f1731c0
/*  f1731a0:	004b1821 */ 	addu	$v1,$v0,$t3
.L0f1731a4:
/*  f1731a4:	afa614ac */ 	sw	$a2,0x14ac($sp)
/*  f1731a8:	afa714a0 */ 	sw	$a3,0x14a0($sp)
/*  f1731ac:	0fc5cbd1 */ 	jal	func0f172f44
/*  f1731b0:	afa914a4 */ 	sw	$t1,0x14a4($sp)
/*  f1731b4:	8fa714a0 */ 	lw	$a3,0x14a0($sp)
/*  f1731b8:	8fa914a4 */ 	lw	$t1,0x14a4($sp)
/*  f1731bc:	00401825 */ 	or	$v1,$v0,$zero
.L0f1731c0:
/*  f1731c0:	15200003 */ 	bnez	$t1,.L0f1731d0
/*  f1731c4:	2c6110cc */ 	sltiu	$at,$v1,0x10cc
/*  f1731c8:	14200005 */ 	bnez	$at,.L0f1731e0
/*  f1731cc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1731d0:
/*  f1731d0:	11200008 */ 	beqz	$t1,.L0f1731f4
/*  f1731d4:	2c610a28 */ 	sltiu	$at,$v1,0xa28
/*  f1731d8:	50200007 */ 	beqzl	$at,.L0f1731f8
/*  f1731dc:	93ac148b */ 	lbu	$t4,0x148b($sp)
.L0f1731e0:
/*  f1731e0:	0c012d20 */ 	jal	func0004b480
/*  f1731e4:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f1731e8:	8fad24f0 */ 	lw	$t5,0x24f0($sp)
/*  f1731ec:	1000008c */ 	beqz	$zero,.L0f173420
/*  f1731f0:	ada20000 */ 	sw	$v0,0x0($t5)
.L0f1731f4:
/*  f1731f4:	93ac148b */ 	lbu	$t4,0x148b($sp)
.L0f1731f8:
/*  f1731f8:	27a20057 */ 	addiu	$v0,$sp,0x57
/*  f1731fc:	00027102 */ 	srl	$t6,$v0,0x4
/*  f173200:	11800015 */ 	beqz	$t4,.L0f173258
/*  f173204:	3c0b800b */ 	lui	$t3,0x800b
/*  f173208:	8e03000c */ 	lw	$v1,0xc($s0)
/*  f17320c:	000e7900 */ 	sll	$t7,$t6,0x4
/*  f173210:	25e20010 */ 	addiu	$v0,$t7,0x10
/*  f173214:	24580010 */ 	addiu	$t8,$v0,0x10
/*  f173218:	ae02000c */ 	sw	$v0,0xc($s0)
/*  f17321c:	ae180008 */ 	sw	$t8,0x8($s0)
/*  f173220:	1060000d */ 	beqz	$v1,.L0f173258
/*  f173224:	afa31490 */ 	sw	$v1,0x1490($sp)
/*  f173228:	3c048000 */ 	lui	$a0,0x8000
/*  f17322c:	8c62000c */ 	lw	$v0,0xc($v1)
.L0f173230:
/*  f173230:	0002c900 */ 	sll	$t9,$v0,0x4
/*  f173234:	00191202 */ 	srl	$v0,$t9,0x8
/*  f173238:	54400004 */ 	bnezl	$v0,.L0f17324c
/*  f17323c:	00441825 */ 	or	$v1,$v0,$a0
/*  f173240:	10000005 */ 	beqz	$zero,.L0f173258
/*  f173244:	afa31490 */ 	sw	$v1,0x1490($sp)
/*  f173248:	00441825 */ 	or	$v1,$v0,$a0
.L0f17324c:
/*  f17324c:	5460fff8 */ 	bnezl	$v1,.L0f173230
/*  f173250:	8c62000c */ 	lw	$v0,0xc($v1)
/*  f173254:	afa31490 */ 	sw	$v1,0x1490($sp)
.L0f173258:
/*  f173258:	8e020008 */ 	lw	$v0,0x8($s0)
/*  f17325c:	8d6bb53c */ 	lw	$t3,-0x4ac4($t3)
/*  f173260:	8fa31490 */ 	lw	$v1,0x1490($sp)
/*  f173264:	3c18800b */ 	lui	$t8,0x800b
/*  f173268:	a44b0000 */ 	sh	$t3,0x0($v0)
/*  f17326c:	8e0d0008 */ 	lw	$t5,0x8($s0)
/*  f173270:	8e0e000c */ 	lw	$t6,0xc($s0)
/*  f173274:	25ac0008 */ 	addiu	$t4,$t5,0x8
/*  f173278:	25c8fff0 */ 	addiu	$t0,$t6,-16
/*  f17327c:	ae0c0008 */ 	sw	$t4,0x8($s0)
/*  f173280:	ae08000c */ 	sw	$t0,0xc($s0)
/*  f173284:	950d0000 */ 	lhu	$t5,0x0($t0)
/*  f173288:	8f19b53c */ 	lw	$t9,-0x4ac4($t8)
/*  f17328c:	9118000c */ 	lbu	$t8,0xc($t0)
/*  f173290:	31ac000f */ 	andi	$t4,$t5,0xf
/*  f173294:	00195900 */ 	sll	$t3,$t9,0x4
/*  f173298:	016c7025 */ 	or	$t6,$t3,$t4
/*  f17329c:	a50e0000 */ 	sh	$t6,0x0($t0)
/*  f1732a0:	8e0f0008 */ 	lw	$t7,0x8($s0)
/*  f1732a4:	3319ffef */ 	andi	$t9,$t8,0xffef
/*  f1732a8:	a119000c */ 	sb	$t9,0xc($t0)
/*  f1732ac:	1120000d */ 	beqz	$t1,.L0f1732e4
/*  f1732b0:	ad0f0004 */ 	sw	$t7,0x4($t0)
/*  f1732b4:	8e050008 */ 	lw	$a1,0x8($s0)
/*  f1732b8:	8faa24f8 */ 	lw	$t2,0x24f8($sp)
/*  f1732bc:	afa8149c */ 	sw	$t0,0x149c($sp)
/*  f1732c0:	afa31490 */ 	sw	$v1,0x1490($sp)
/*  f1732c4:	afb00010 */ 	sw	$s0,0x10($sp)
/*  f1732c8:	8fa414ac */ 	lw	$a0,0x14ac($sp)
/*  f1732cc:	8fa614a8 */ 	lw	$a2,0x14a8($sp)
/*  f1732d0:	0fc5ba06 */ 	jal	func0f16e818
/*  f1732d4:	afaa0014 */ 	sw	$t2,0x14($sp)
/*  f1732d8:	8fa31490 */ 	lw	$v1,0x1490($sp)
/*  f1732dc:	1000000c */ 	beqz	$zero,.L0f173310
/*  f1732e0:	afa20038 */ 	sw	$v0,0x38($sp)
.L0f1732e4:
/*  f1732e4:	8e050008 */ 	lw	$a1,0x8($s0)
/*  f1732e8:	8fad24f8 */ 	lw	$t5,0x24f8($sp)
/*  f1732ec:	afa8149c */ 	sw	$t0,0x149c($sp)
/*  f1732f0:	afa31490 */ 	sw	$v1,0x1490($sp)
/*  f1732f4:	afb00010 */ 	sw	$s0,0x10($sp)
/*  f1732f8:	8fa414ac */ 	lw	$a0,0x14ac($sp)
/*  f1732fc:	8fa614a8 */ 	lw	$a2,0x14a8($sp)
/*  f173300:	0fc5bf79 */ 	jal	func0f16fde4
/*  f173304:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f173308:	8fa31490 */ 	lw	$v1,0x1490($sp)
/*  f17330c:	afa20038 */ 	sw	$v0,0x38($sp)
.L0f173310:
/*  f173310:	93ab148b */ 	lbu	$t3,0x148b($sp)
/*  f173314:	8fa40038 */ 	lw	$a0,0x38($sp)
/*  f173318:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f17331c:	11600032 */ 	beqz	$t3,.L0f1733e8
/*  f173320:	2484002f */ 	addiu	$a0,$a0,0x2f
/*  f173324:	348c000f */ 	ori	$t4,$a0,0xf
/*  f173328:	3984000f */ 	xori	$a0,$t4,0xf
/*  f17332c:	0c004991 */ 	jal	func00012644
/*  f173330:	afa31490 */ 	sw	$v1,0x1490($sp)
/*  f173334:	ae02000c */ 	sw	$v0,0xc($s0)
/*  f173338:	afa20034 */ 	sw	$v0,0x34($sp)
/*  f17333c:	8fa4149c */ 	lw	$a0,0x149c($sp)
/*  f173340:	00402825 */ 	or	$a1,$v0,$zero
/*  f173344:	0c012c5c */ 	jal	func0004b170
/*  f173348:	24060010 */ 	addiu	$a2,$zero,0x10
/*  f17334c:	8fa70034 */ 	lw	$a3,0x34($sp)
/*  f173350:	8fa60038 */ 	lw	$a2,0x38($sp)
/*  f173354:	afa7149c */ 	sw	$a3,0x149c($sp)
/*  f173358:	8e040008 */ 	lw	$a0,0x8($s0)
/*  f17335c:	24e50010 */ 	addiu	$a1,$a3,0x10
/*  f173360:	afa50034 */ 	sw	$a1,0x34($sp)
/*  f173364:	24c60008 */ 	addiu	$a2,$a2,0x8
/*  f173368:	0c012c5c */ 	jal	func0004b170
/*  f17336c:	2484fff8 */ 	addiu	$a0,$a0,-8
/*  f173370:	8fa70034 */ 	lw	$a3,0x34($sp)
/*  f173374:	8e18000c */ 	lw	$t8,0xc($s0)
/*  f173378:	8fa31490 */ 	lw	$v1,0x1490($sp)
/*  f17337c:	24ef0008 */ 	addiu	$t7,$a3,0x8
/*  f173380:	af0f0004 */ 	sw	$t7,0x4($t8)
/*  f173384:	8e02000c */ 	lw	$v0,0xc($s0)
/*  f173388:	3c0100ff */ 	lui	$at,0xff
/*  f17338c:	8c44000c */ 	lw	$a0,0xc($v0)
/*  f173390:	0004c902 */ 	srl	$t9,$a0,0x4
/*  f173394:	00195200 */ 	sll	$t2,$t9,0x8
/*  f173398:	000a6902 */ 	srl	$t5,$t2,0x4
/*  f17339c:	01a45826 */ 	xor	$t3,$t5,$a0
/*  f1733a0:	1060000e */ 	beqz	$v1,.L0f1733dc
/*  f1733a4:	ac4b000c */ 	sw	$t3,0xc($v0)
/*  f1733a8:	8e0c000c */ 	lw	$t4,0xc($s0)
/*  f1733ac:	8c64000c */ 	lw	$a0,0xc($v1)
/*  f1733b0:	3421ffff */ 	ori	$at,$at,0xffff
/*  f1733b4:	01817024 */ 	and	$t6,$t4,$at
/*  f1733b8:	01c17824 */ 	and	$t7,$t6,$at
/*  f1733bc:	0004c102 */ 	srl	$t8,$a0,0x4
/*  f1733c0:	01f8c826 */ 	xor	$t9,$t7,$t8
/*  f1733c4:	00195200 */ 	sll	$t2,$t9,0x8
/*  f1733c8:	000a6902 */ 	srl	$t5,$t2,0x4
/*  f1733cc:	01a45826 */ 	xor	$t3,$t5,$a0
/*  f1733d0:	ac6b000c */ 	sw	$t3,0xc($v1)
/*  f1733d4:	10000003 */ 	beqz	$zero,.L0f1733e4
/*  f1733d8:	8e02000c */ 	lw	$v0,0xc($s0)
.L0f1733dc:
/*  f1733dc:	8e02000c */ 	lw	$v0,0xc($s0)
/*  f1733e0:	ae020004 */ 	sw	$v0,0x4($s0)
.L0f1733e4:
/*  f1733e4:	ae020000 */ 	sw	$v0,0x0($s0)
.L0f1733e8:
/*  f1733e8:	8e0c0008 */ 	lw	$t4,0x8($s0)
/*  f1733ec:	8fae0038 */ 	lw	$t6,0x38($sp)
/*  f1733f0:	018e7821 */ 	addu	$t7,$t4,$t6
/*  f1733f4:	ae0f0008 */ 	sw	$t7,0x8($s0)
/*  f1733f8:	93b8148b */ 	lbu	$t8,0x148b($sp)
/*  f1733fc:	57000004 */ 	bnezl	$t8,.L0f173410
/*  f173400:	8fb9149c */ 	lw	$t9,0x149c($sp)
/*  f173404:	0fc5cbd1 */ 	jal	func0f172f44
/*  f173408:	02002025 */ 	or	$a0,$s0,$zero
.L0f17340c:
/*  f17340c:	8fb9149c */ 	lw	$t9,0x149c($sp)
.L0f173410:
/*  f173410:	0c012d20 */ 	jal	func0004b480
/*  f173414:	8f240004 */ 	lw	$a0,0x4($t9)
/*  f173418:	8faa24f0 */ 	lw	$t2,0x24f0($sp)
/*  f17341c:	ad420000 */ 	sw	$v0,0x0($t2)
.L0f173420:
/*  f173420:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f173424:	8fb00020 */ 	lw	$s0,0x20($sp)
/*  f173428:	27bd24f0 */ 	addiu	$sp,$sp,0x24f0
/*  f17342c:	03e00008 */ 	jr	$ra
/*  f173430:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173434
/*  f173434:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f173438:	afb70030 */ 	sw	$s7,0x30($sp)
/*  f17343c:	afb6002c */ 	sw	$s6,0x2c($sp)
/*  f173440:	afb50028 */ 	sw	$s5,0x28($sp)
/*  f173444:	afb40024 */ 	sw	$s4,0x24($sp)
/*  f173448:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f17344c:	00a0a025 */ 	or	$s4,$a1,$zero
/*  f173450:	0080a825 */ 	or	$s5,$a0,$zero
/*  f173454:	00c0b025 */ 	or	$s6,$a2,$zero
/*  f173458:	00e0b825 */ 	or	$s7,$a3,$zero
/*  f17345c:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f173460:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f173464:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f173468:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f17346c:	18a00013 */ 	blez	$a1,.L0f1734bc
/*  f173470:	00008825 */ 	or	$s1,$zero,$zero
/*  f173474:	00009025 */ 	or	$s2,$zero,$zero
/*  f173478:	00808025 */ 	or	$s0,$a0,$zero
/*  f17347c:	24130001 */ 	addiu	$s3,$zero,0x1
.L0f173480:
/*  f173480:	8e020000 */ 	lw	$v0,0x0($s0)
/*  f173484:	02552021 */ 	addu	$a0,$s2,$s5
/*  f173488:	02c02825 */ 	or	$a1,$s6,$zero
/*  f17348c:	28410daf */ 	slti	$at,$v0,0xdaf
/*  f173490:	10200005 */ 	beqz	$at,.L0f1734a8
/*  f173494:	00577021 */ 	addu	$t6,$v0,$s7
/*  f173498:	0fc5cc04 */ 	jal	func0f173010
/*  f17349c:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f1734a0:	10000002 */ 	beqz	$zero,.L0f1734ac
/*  f1734a4:	a213000b */ 	sb	$s3,0xb($s0)
.L0f1734a8:
/*  f1734a8:	ae0e0000 */ 	sw	$t6,0x0($s0)
.L0f1734ac:
/*  f1734ac:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f1734b0:	2652000c */ 	addiu	$s2,$s2,0xc
/*  f1734b4:	1634fff2 */ 	bne	$s1,$s4,.L0f173480
/*  f1734b8:	2610000c */ 	addiu	$s0,$s0,0xc
.L0f1734bc:
/*  f1734bc:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f1734c0:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f1734c4:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f1734c8:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f1734cc:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f1734d0:	8fb40024 */ 	lw	$s4,0x24($sp)
/*  f1734d4:	8fb50028 */ 	lw	$s5,0x28($sp)
/*  f1734d8:	8fb6002c */ 	lw	$s6,0x2c($sp)
/*  f1734dc:	8fb70030 */ 	lw	$s7,0x30($sp)
/*  f1734e0:	03e00008 */ 	jr	$ra
/*  f1734e4:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f1734e8
/*  f1734e8:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f1734ec:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f1734f0:	afa4001c */ 	sw	$a0,0x1c($sp)
/*  f1734f4:	27a4001c */ 	addiu	$a0,$sp,0x1c
/*  f1734f8:	0fc5cc04 */ 	jal	func0f173010
/*  f1734fc:	24060001 */ 	addiu	$a2,$zero,0x1
/*  f173500:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f173504:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f173508:	03e00008 */ 	jr	$ra
/*  f17350c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173510:	afa50004 */ 	sw	$a1,0x4($sp)
/*  f173514:	afa60008 */ 	sw	$a2,0x8($sp)
/*  f173518:	03e00008 */ 	jr	$ra
/*  f17351c:	00801025 */ 	or	$v0,$a0,$zero
);

GLOBAL_ASM(
glabel func0f173520
/*  f173520:	3c01800b */ 	lui	$at,0x800b
/*  f173524:	ac24b540 */ 	sw	$a0,-0x4ac0($at)
/*  f173528:	3c01800b */ 	lui	$at,0x800b
/*  f17352c:	ac20b544 */ 	sw	$zero,-0x4abc($at)
/*  f173530:	3c01800b */ 	lui	$at,0x800b
/*  f173534:	03e00008 */ 	jr	$ra
/*  f173538:	ac20b548 */ 	sw	$zero,-0x4ab8($at)
);

GLOBAL_ASM(
glabel func0f17353c
/*  f17353c:	3c05800b */ 	lui	$a1,%hi(var800ab548)
/*  f173540:	24a5b548 */ 	addiu	$a1,$a1,%lo(var800ab548)
/*  f173544:	8ca30000 */ 	lw	$v1,0x0($a1)
/*  f173548:	3c07800b */ 	lui	$a3,%hi(var800ab540)
/*  f17354c:	24e7b540 */ 	addiu	$a3,$a3,%lo(var800ab540)
/*  f173550:	0064082a */ 	slt	$at,$v1,$a0
/*  f173554:	1020000f */ 	beqz	$at,.L0f173594
/*  f173558:	3c06800b */ 	lui	$a2,%hi(var800ab544)
/*  f17355c:	24c6b544 */ 	addiu	$a2,$a2,%lo(var800ab544)
.L0f173560:
/*  f173560:	8ce20000 */ 	lw	$v0,0x0($a3)
/*  f173564:	8ccf0000 */ 	lw	$t7,0x0($a2)
/*  f173568:	24690008 */ 	addiu	$t1,$v1,0x8
/*  f17356c:	904e0000 */ 	lbu	$t6,0x0($v0)
/*  f173570:	000fc200 */ 	sll	$t8,$t7,0x8
/*  f173574:	0124082a */ 	slt	$at,$t1,$a0
/*  f173578:	24480001 */ 	addiu	$t0,$v0,0x1
/*  f17357c:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f173580:	acd90000 */ 	sw	$t9,0x0($a2)
/*  f173584:	ace80000 */ 	sw	$t0,0x0($a3)
/*  f173588:	aca90000 */ 	sw	$t1,0x0($a1)
/*  f17358c:	1420fff4 */ 	bnez	$at,.L0f173560
/*  f173590:	01201825 */ 	or	$v1,$t1,$zero
.L0f173594:
/*  f173594:	3c06800b */ 	lui	$a2,%hi(var800ab544)
/*  f173598:	24c6b544 */ 	addiu	$a2,$a2,%lo(var800ab544)
/*  f17359c:	8ccb0000 */ 	lw	$t3,0x0($a2)
/*  f1735a0:	240f0001 */ 	addiu	$t7,$zero,0x1
/*  f1735a4:	00645023 */ 	subu	$t2,$v1,$a0
/*  f1735a8:	008f7004 */ 	sllv	$t6,$t7,$a0
/*  f1735ac:	25d8ffff */ 	addiu	$t8,$t6,-1
/*  f1735b0:	014b6806 */ 	srlv	$t5,$t3,$t2
/*  f1735b4:	acaa0000 */ 	sw	$t2,0x0($a1)
/*  f1735b8:	03e00008 */ 	jr	$ra
/*  f1735bc:	01b81024 */ 	and	$v0,$t5,$t8
);

GLOBAL_ASM(
glabel func0f1735c0
/*  f1735c0:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f1735c4:	3c0e0200 */ 	lui	$t6,0x200
/*  f1735c8:	3c0f0200 */ 	lui	$t7,0x200
/*  f1735cc:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f1735d0:	25ef0000 */ 	addiu	$t7,$t7,0x0
/*  f1735d4:	25ce0b50 */ 	addiu	$t6,$t6,0xb50
/*  f1735d8:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f1735dc:	01cf8823 */ 	subu	$s1,$t6,$t7
/*  f1735e0:	afb20020 */ 	sw	$s2,0x20($sp)
/*  f1735e4:	afb00018 */ 	sw	$s0,0x18($sp)
/*  f1735e8:	02202025 */ 	or	$a0,$s1,$zero
/*  f1735ec:	0c0048f2 */ 	jal	func000123c8
/*  f1735f0:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f1735f4:	3c03800b */ 	lui	$v1,%hi(var800ab554)
/*  f1735f8:	2463b554 */ 	addiu	$v1,$v1,%lo(var800ab554)
/*  f1735fc:	3c05007f */ 	lui	$a1,0x7f
/*  f173600:	ac620000 */ 	sw	$v0,0x0($v1)
/*  f173604:	24a5b270 */ 	addiu	$a1,$a1,-19856
/*  f173608:	00402025 */ 	or	$a0,$v0,$zero
/*  f17360c:	0c003504 */ 	jal	func0000d410
/*  f173610:	02203025 */ 	or	$a2,$s1,$zero
/*  f173614:	3c18800b */ 	lui	$t8,0x800b
/*  f173618:	8f18b554 */ 	lw	$t8,-0x4aac($t8)
/*  f17361c:	3c070200 */ 	lui	$a3,0x200
/*  f173620:	3c06800b */ 	lui	$a2,%hi(var800ab550)
/*  f173624:	3c080200 */ 	lui	$t0,0x200
/*  f173628:	03071023 */ 	subu	$v0,$t8,$a3
/*  f17362c:	24c6b550 */ 	addiu	$a2,$a2,%lo(var800ab550)
/*  f173630:	25080000 */ 	addiu	$t0,$t0,0x0
/*  f173634:	acc20000 */ 	sw	$v0,0x0($a2)
/*  f173638:	00484821 */ 	addu	$t1,$v0,$t0
/*  f17363c:	3c01800b */ 	lui	$at,0x800b
/*  f173640:	3c0a0200 */ 	lui	$t2,0x200
/*  f173644:	ac29b564 */ 	sw	$t1,-0x4a9c($at)
/*  f173648:	254a0070 */ 	addiu	$t2,$t2,0x70
/*  f17364c:	004a5821 */ 	addu	$t3,$v0,$t2
/*  f173650:	3c01800b */ 	lui	$at,0x800b
/*  f173654:	3c0c0200 */ 	lui	$t4,0x200
/*  f173658:	ac2bb568 */ 	sw	$t3,-0x4a98($at)
/*  f17365c:	258c00d8 */ 	addiu	$t4,$t4,0xd8
/*  f173660:	004c6821 */ 	addu	$t5,$v0,$t4
/*  f173664:	3c01800b */ 	lui	$at,0x800b
/*  f173668:	3c0e0200 */ 	lui	$t6,0x200
/*  f17366c:	3c12800b */ 	lui	$s2,%hi(var800ab570)
/*  f173670:	ac2db56c */ 	sw	$t5,-0x4a94($at)
/*  f173674:	25ce0148 */ 	addiu	$t6,$t6,0x148
/*  f173678:	3c030200 */ 	lui	$v1,0x200
/*  f17367c:	2652b570 */ 	addiu	$s2,$s2,%lo(var800ab570)
/*  f173680:	004e7821 */ 	addu	$t7,$v0,$t6
/*  f173684:	246301c0 */ 	addiu	$v1,$v1,0x1c0
/*  f173688:	ae4f0000 */ 	sw	$t7,0x0($s2)
/*  f17368c:	0062c021 */ 	addu	$t8,$v1,$v0
/*  f173690:	3c01800b */ 	lui	$at,0x800b
/*  f173694:	3c190200 */ 	lui	$t9,0x200
/*  f173698:	ac38b560 */ 	sw	$t8,-0x4aa0($at)
/*  f17369c:	27390298 */ 	addiu	$t9,$t9,0x298
/*  f1736a0:	00594021 */ 	addu	$t0,$v0,$t9
/*  f1736a4:	3c01800b */ 	lui	$at,0x800b
/*  f1736a8:	3c090200 */ 	lui	$t1,0x200
/*  f1736ac:	ac28b574 */ 	sw	$t0,-0x4a8c($at)
/*  f1736b0:	252902d4 */ 	addiu	$t1,$t1,0x2d4
/*  f1736b4:	00495021 */ 	addu	$t2,$v0,$t1
/*  f1736b8:	3c01800b */ 	lui	$at,0x800b
/*  f1736bc:	3c0b0200 */ 	lui	$t3,0x200
/*  f1736c0:	ac2ab578 */ 	sw	$t2,-0x4a88($at)
/*  f1736c4:	256b02e0 */ 	addiu	$t3,$t3,0x2e0
/*  f1736c8:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f1736cc:	3c01800b */ 	lui	$at,0x800b
/*  f1736d0:	3c0d0200 */ 	lui	$t5,0x200
/*  f1736d4:	ac2cb57c */ 	sw	$t4,-0x4a84($at)
/*  f1736d8:	25ad02ec */ 	addiu	$t5,$t5,0x2ec
/*  f1736dc:	004d7021 */ 	addu	$t6,$v0,$t5
/*  f1736e0:	3c01800b */ 	lui	$at,0x800b
/*  f1736e4:	3c0f0200 */ 	lui	$t7,0x200
/*  f1736e8:	ac2eb580 */ 	sw	$t6,-0x4a80($at)
/*  f1736ec:	25ef02f8 */ 	addiu	$t7,$t7,0x2f8
/*  f1736f0:	004fc021 */ 	addu	$t8,$v0,$t7
/*  f1736f4:	3c01800b */ 	lui	$at,0x800b
/*  f1736f8:	3c190200 */ 	lui	$t9,0x200
/*  f1736fc:	ac38b584 */ 	sw	$t8,-0x4a7c($at)
/*  f173700:	27390304 */ 	addiu	$t9,$t9,0x304
/*  f173704:	00594021 */ 	addu	$t0,$v0,$t9
/*  f173708:	3c01800b */ 	lui	$at,0x800b
/*  f17370c:	3c090200 */ 	lui	$t1,0x200
/*  f173710:	ac28b588 */ 	sw	$t0,-0x4a78($at)
/*  f173714:	25290310 */ 	addiu	$t1,$t1,0x310
/*  f173718:	00495021 */ 	addu	$t2,$v0,$t1
/*  f17371c:	3c01800b */ 	lui	$at,0x800b
/*  f173720:	3c0b0200 */ 	lui	$t3,0x200
/*  f173724:	ac2ab58c */ 	sw	$t2,-0x4a74($at)
/*  f173728:	256b031c */ 	addiu	$t3,$t3,0x31c
/*  f17372c:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f173730:	3c01800b */ 	lui	$at,0x800b
/*  f173734:	3c0d0200 */ 	lui	$t5,0x200
/*  f173738:	ac2cb590 */ 	sw	$t4,-0x4a70($at)
/*  f17373c:	25ad0334 */ 	addiu	$t5,$t5,0x334
/*  f173740:	004d7021 */ 	addu	$t6,$v0,$t5
/*  f173744:	3c01800b */ 	lui	$at,0x800b
/*  f173748:	3c0f0200 */ 	lui	$t7,0x200
/*  f17374c:	ac2eb594 */ 	sw	$t6,-0x4a6c($at)
/*  f173750:	25ef07b4 */ 	addiu	$t7,$t7,0x7b4
/*  f173754:	004fc021 */ 	addu	$t8,$v0,$t7
/*  f173758:	3c01800b */ 	lui	$at,0x800b
/*  f17375c:	3c190200 */ 	lui	$t9,0x200
/*  f173760:	ac38b598 */ 	sw	$t8,-0x4a68($at)
/*  f173764:	273907d8 */ 	addiu	$t9,$t9,0x7d8
/*  f173768:	00594021 */ 	addu	$t0,$v0,$t9
/*  f17376c:	3c01800b */ 	lui	$at,0x800b
/*  f173770:	3c090200 */ 	lui	$t1,0x200
/*  f173774:	ac28b59c */ 	sw	$t0,-0x4a64($at)
/*  f173778:	25290820 */ 	addiu	$t1,$t1,0x820
/*  f17377c:	00495021 */ 	addu	$t2,$v0,$t1
/*  f173780:	3c01800b */ 	lui	$at,0x800b
/*  f173784:	3c0b0200 */ 	lui	$t3,0x200
/*  f173788:	ac2ab5a0 */ 	sw	$t2,-0x4a60($at)
/*  f17378c:	256b0898 */ 	addiu	$t3,$t3,0x898
/*  f173790:	004b6021 */ 	addu	$t4,$v0,$t3
/*  f173794:	3c01800b */ 	lui	$at,0x800b
/*  f173798:	3c0d0200 */ 	lui	$t5,0x200
/*  f17379c:	ac2cb5a4 */ 	sw	$t4,-0x4a5c($at)
/*  f1737a0:	25ad08a4 */ 	addiu	$t5,$t5,0x8a4
/*  f1737a4:	004d7021 */ 	addu	$t6,$v0,$t5
/*  f1737a8:	3c01800b */ 	lui	$at,0x800b
/*  f1737ac:	3c0f0200 */ 	lui	$t7,0x200
/*  f1737b0:	ac2eb5a8 */ 	sw	$t6,-0x4a58($at)
/*  f1737b4:	25ef0b44 */ 	addiu	$t7,$t7,0xb44
/*  f1737b8:	004fc021 */ 	addu	$t8,$v0,$t7
/*  f1737bc:	3c01800b */ 	lui	$at,0x800b
/*  f1737c0:	ac38b5ac */ 	sw	$t8,-0x4a54($at)
/*  f1737c4:	0223c823 */ 	subu	$t9,$s1,$v1
/*  f1737c8:	03274021 */ 	addu	$t0,$t9,$a3
/*  f1737cc:	2401000c */ 	addiu	$at,$zero,0xc
/*  f1737d0:	0101001b */ 	divu	$zero,$t0,$at
/*  f1737d4:	3c10800b */ 	lui	$s0,%hi(var800ab558)
/*  f1737d8:	00004812 */ 	mflo	$t1
/*  f1737dc:	3c01800b */ 	lui	$at,0x800b
/*  f1737e0:	2610b558 */ 	addiu	$s0,$s0,%lo(var800ab558)
/*  f1737e4:	ac29b558 */ 	sw	$t1,-0x4aa8($at)
/*  f1737e8:	8e040000 */ 	lw	$a0,0x0($s0)
/*  f1737ec:	24050004 */ 	addiu	$a1,$zero,0x4
/*  f1737f0:	00045080 */ 	sll	$t2,$a0,0x2
/*  f1737f4:	2544000f */ 	addiu	$a0,$t2,0xf
/*  f1737f8:	348b000f */ 	ori	$t3,$a0,0xf
/*  f1737fc:	0c0048f2 */ 	jal	func000123c8
/*  f173800:	3964000f */ 	xori	$a0,$t3,0xf
/*  f173804:	8e0d0000 */ 	lw	$t5,0x0($s0)
/*  f173808:	3c03800b */ 	lui	$v1,%hi(var800ab55c)
/*  f17380c:	2463b55c */ 	addiu	$v1,$v1,%lo(var800ab55c)
/*  f173810:	ac620000 */ 	sw	$v0,0x0($v1)
/*  f173814:	19a0000c */ 	blez	$t5,.L0f173848
/*  f173818:	00008825 */ 	or	$s1,$zero,$zero
/*  f17381c:	00001025 */ 	or	$v0,$zero,$zero
/*  f173820:	8c6e0000 */ 	lw	$t6,0x0($v1)
.L0f173824:
/*  f173824:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f173828:	01c27821 */ 	addu	$t7,$t6,$v0
/*  f17382c:	ade00000 */ 	sw	$zero,0x0($t7)
/*  f173830:	8e180000 */ 	lw	$t8,0x0($s0)
/*  f173834:	24420004 */ 	addiu	$v0,$v0,0x4
/*  f173838:	0238082a */ 	slt	$at,$s1,$t8
/*  f17383c:	5420fff9 */ 	bnezl	$at,.L0f173824
/*  f173840:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f173844:	00008825 */ 	or	$s1,$zero,$zero
.L0f173848:
/*  f173848:	8e590000 */ 	lw	$t9,0x0($s2)
.L0f17384c:
/*  f17384c:	001180c0 */ 	sll	$s0,$s1,0x3
/*  f173850:	00002825 */ 	or	$a1,$zero,$zero
/*  f173854:	00003025 */ 	or	$a2,$zero,$zero
/*  f173858:	0fc5cc04 */ 	jal	func0f173010
/*  f17385c:	02192021 */ 	addu	$a0,$s0,$t9
/*  f173860:	8e480000 */ 	lw	$t0,0x0($s2)
/*  f173864:	00002825 */ 	or	$a1,$zero,$zero
/*  f173868:	00003025 */ 	or	$a2,$zero,$zero
/*  f17386c:	02082021 */ 	addu	$a0,$s0,$t0
/*  f173870:	0fc5cc04 */ 	jal	func0f173010
/*  f173874:	24840004 */ 	addiu	$a0,$a0,0x4
/*  f173878:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f17387c:	2a21000f */ 	slti	$at,$s1,0xf
/*  f173880:	5420fff2 */ 	bnezl	$at,.L0f17384c
/*  f173884:	8e590000 */ 	lw	$t9,0x0($s2)
/*  f173888:	3c04800b */ 	lui	$a0,0x800b
/*  f17388c:	8c84b564 */ 	lw	$a0,-0x4a9c($a0)
/*  f173890:	00002825 */ 	or	$a1,$zero,$zero
/*  f173894:	0fc5cbd7 */ 	jal	func0f172f5c
/*  f173898:	00003025 */ 	or	$a2,$zero,$zero
/*  f17389c:	3c04800b */ 	lui	$a0,0x800b
/*  f1738a0:	8c84b56c */ 	lw	$a0,-0x4a94($a0)
/*  f1738a4:	00002825 */ 	or	$a1,$zero,$zero
/*  f1738a8:	0fc5cbd7 */ 	jal	func0f172f5c
/*  f1738ac:	00003025 */ 	or	$a2,$zero,$zero
/*  f1738b0:	0c003a61 */ 	jal	getCurrentStageId
/*  f1738b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1738b8:	3c098009 */ 	lui	$t1,0x8009
/*  f1738bc:	91290af0 */ 	lbu	$t1,0xaf0($t1)
/*  f1738c0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f1738c4:	15210045 */ 	bne	$t1,$at,.L0f1739dc
/*  f1738c8:	2401005a */ 	addiu	$at,$zero,0x5a
/*  f1738cc:	10410043 */ 	beq	$v0,$at,.L0f1739dc
/*  f1738d0:	24010026 */ 	addiu	$at,$zero,0x26
/*  f1738d4:	10410041 */ 	beq	$v0,$at,.L0f1739dc
/*  f1738d8:	2401005d */ 	addiu	$at,$zero,0x5d
/*  f1738dc:	1041003f */ 	beq	$v0,$at,.L0f1739dc
/*  f1738e0:	00008025 */ 	or	$s0,$zero,$zero
.L0f1738e4:
/*  f1738e4:	3c0a800b */ 	lui	$t2,0x800b
/*  f1738e8:	8d4ab560 */ 	lw	$t2,-0x4aa0($t2)
/*  f1738ec:	0fc2ce62 */ 	jal	func0f0b3988
/*  f1738f0:	020a2021 */ 	addu	$a0,$s0,$t2
/*  f1738f4:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f1738f8:	2a0100d8 */ 	slti	$at,$s0,0xd8
/*  f1738fc:	1420fff9 */ 	bnez	$at,.L0f1738e4
/*  f173900:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173904:	00008025 */ 	or	$s0,$zero,$zero
.L0f173908:
/*  f173908:	3c0b800b */ 	lui	$t3,0x800b
/*  f17390c:	8d6bb574 */ 	lw	$t3,-0x4a8c($t3)
/*  f173910:	0fc2ce62 */ 	jal	func0f0b3988
/*  f173914:	020b2021 */ 	addu	$a0,$s0,$t3
/*  f173918:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f17391c:	2a01003c */ 	slti	$at,$s0,0x3c
/*  f173920:	1420fff9 */ 	bnez	$at,.L0f173908
/*  f173924:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173928:	00008025 */ 	or	$s0,$zero,$zero
.L0f17392c:
/*  f17392c:	3c0c800b */ 	lui	$t4,0x800b
/*  f173930:	8d8cb598 */ 	lw	$t4,-0x4a68($t4)
/*  f173934:	0fc2ce62 */ 	jal	func0f0b3988
/*  f173938:	020c2021 */ 	addu	$a0,$s0,$t4
/*  f17393c:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f173940:	2a010024 */ 	slti	$at,$s0,0x24
/*  f173944:	1420fff9 */ 	bnez	$at,.L0f17392c
/*  f173948:	00000000 */ 	sll	$zero,$zero,0x0
/*  f17394c:	00008025 */ 	or	$s0,$zero,$zero
.L0f173950:
/*  f173950:	3c0d800b */ 	lui	$t5,0x800b
/*  f173954:	8dadb588 */ 	lw	$t5,-0x4a78($t5)
/*  f173958:	0fc2ce62 */ 	jal	func0f0b3988
/*  f17395c:	020d2021 */ 	addu	$a0,$s0,$t5
/*  f173960:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f173964:	2a01000c */ 	slti	$at,$s0,0xc
/*  f173968:	1420fff9 */ 	bnez	$at,.L0f173950
/*  f17396c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173970:	00008025 */ 	or	$s0,$zero,$zero
.L0f173974:
/*  f173974:	3c0e800b */ 	lui	$t6,0x800b
/*  f173978:	8dceb58c */ 	lw	$t6,-0x4a74($t6)
/*  f17397c:	0fc2ce62 */ 	jal	func0f0b3988
/*  f173980:	020e2021 */ 	addu	$a0,$s0,$t6
/*  f173984:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f173988:	2a01000c */ 	slti	$at,$s0,0xc
/*  f17398c:	1420fff9 */ 	bnez	$at,.L0f173974
/*  f173990:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173994:	00008025 */ 	or	$s0,$zero,$zero
.L0f173998:
/*  f173998:	3c0f800b */ 	lui	$t7,0x800b
/*  f17399c:	8defb5ac */ 	lw	$t7,-0x4a54($t7)
/*  f1739a0:	0fc2ce62 */ 	jal	func0f0b3988
/*  f1739a4:	020f2021 */ 	addu	$a0,$s0,$t7
/*  f1739a8:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f1739ac:	2a01000c */ 	slti	$at,$s0,0xc
/*  f1739b0:	1420fff9 */ 	bnez	$at,.L0f173998
/*  f1739b4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1739b8:	00008025 */ 	or	$s0,$zero,$zero
/*  f1739bc:	2411000c */ 	addiu	$s1,$zero,0xc
.L0f1739c0:
/*  f1739c0:	3c18800b */ 	lui	$t8,0x800b
/*  f1739c4:	8f18b5a4 */ 	lw	$t8,-0x4a5c($t8)
/*  f1739c8:	0fc2ce62 */ 	jal	func0f0b3988
/*  f1739cc:	02182021 */ 	addu	$a0,$s0,$t8
/*  f1739d0:	2610000c */ 	addiu	$s0,$s0,0xc
/*  f1739d4:	1611fffa */ 	bne	$s0,$s1,.L0f1739c0
/*  f1739d8:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1739dc:
/*  f1739dc:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f1739e0:	8fb00018 */ 	lw	$s0,0x18($sp)
/*  f1739e4:	8fb1001c */ 	lw	$s1,0x1c($sp)
/*  f1739e8:	8fb20020 */ 	lw	$s2,0x20($sp)
/*  f1739ec:	03e00008 */ 	jr	$ra
/*  f1739f0:	27bd0028 */ 	addiu	$sp,$sp,0x28
/*  f1739f4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1739f8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1739fc:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173a00:	03e00008 */ 	jr	$ra
/*  f173a04:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173a08
/*  f173a08:	3c03800b */ 	lui	$v1,%hi(var800ab5b8)
/*  f173a0c:	3c04800b */ 	lui	$a0,%hi(var800ab718)
/*  f173a10:	3c02800b */ 	lui	$v0,%hi(var800ab7b8)
/*  f173a14:	2442b7b8 */ 	addiu	$v0,$v0,%lo(var800ab7b8)
/*  f173a18:	2484b718 */ 	addiu	$a0,$a0,%lo(var800ab718)
/*  f173a1c:	2463b5b8 */ 	addiu	$v1,$v1,%lo(var800ab5b8)
.L0f173a20:
/*  f173a20:	24840014 */ 	addiu	$a0,$a0,0x14
/*  f173a24:	2463002c */ 	addiu	$v1,$v1,0x2c
/*  f173a28:	ac60ffd4 */ 	sw	$zero,-0x2c($v1)
/*  f173a2c:	1482fffc */ 	bne	$a0,$v0,.L0f173a20
/*  f173a30:	ac80ffec */ 	sw	$zero,-0x14($a0)
/*  f173a34:	240effff */ 	addiu	$t6,$zero,-1
/*  f173a38:	3c01800b */ 	lui	$at,0x800b
/*  f173a3c:	03e00008 */ 	jr	$ra
/*  f173a40:	ac2eb5b0 */ 	sw	$t6,-0x4a50($at)
);

GLOBAL_ASM(
glabel func0f173a44
/*  f173a44:	3c03800b */ 	lui	$v1,%hi(var800ab5b0)
/*  f173a48:	2463b5b0 */ 	addiu	$v1,$v1,%lo(var800ab5b0)
/*  f173a4c:	8c6e0000 */ 	lw	$t6,0x0($v1)
/*  f173a50:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f173a54:	548e0004 */ 	bnel	$a0,$t6,.L0f173a68
/*  f173a58:	ac640000 */ 	sw	$a0,0x0($v1)
/*  f173a5c:	03e00008 */ 	jr	$ra
/*  f173a60:	00001025 */ 	or	$v0,$zero,$zero
/*  f173a64:	ac640000 */ 	sw	$a0,0x0($v1)
.L0f173a68:
/*  f173a68:	03e00008 */ 	jr	$ra
/*  f173a6c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173a70
/*  f173a70:	00047080 */ 	sll	$t6,$a0,0x2
/*  f173a74:	01c47023 */ 	subu	$t6,$t6,$a0
/*  f173a78:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f173a7c:	01c47023 */ 	subu	$t6,$t6,$a0
/*  f173a80:	3c0f800b */ 	lui	$t7,%hi(var800ab5b8)
/*  f173a84:	25efb5b8 */ 	addiu	$t7,$t7,%lo(var800ab5b8)
/*  f173a88:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f173a8c:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f173a90:	8c580000 */ 	lw	$t8,0x0($v0)
/*  f173a94:	00001825 */ 	or	$v1,$zero,$zero
/*  f173a98:	53000027 */ 	beqzl	$t8,.L0f173b38
/*  f173a9c:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173aa0:	8c590004 */ 	lw	$t9,0x4($v0)
/*  f173aa4:	54b90024 */ 	bnel	$a1,$t9,.L0f173b38
/*  f173aa8:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173aac:	8c480008 */ 	lw	$t0,0x8($v0)
/*  f173ab0:	54c80021 */ 	bnel	$a2,$t0,.L0f173b38
/*  f173ab4:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173ab8:	8c49000c */ 	lw	$t1,0xc($v0)
/*  f173abc:	8faa0010 */ 	lw	$t2,0x10($sp)
/*  f173ac0:	54e9001d */ 	bnel	$a3,$t1,.L0f173b38
/*  f173ac4:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173ac8:	8c4b0010 */ 	lw	$t3,0x10($v0)
/*  f173acc:	8fac0014 */ 	lw	$t4,0x14($sp)
/*  f173ad0:	554b0019 */ 	bnel	$t2,$t3,.L0f173b38
/*  f173ad4:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173ad8:	8c4d0014 */ 	lw	$t5,0x14($v0)
/*  f173adc:	8fae0018 */ 	lw	$t6,0x18($sp)
/*  f173ae0:	558d0015 */ 	bnel	$t4,$t5,.L0f173b38
/*  f173ae4:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173ae8:	8c4f0018 */ 	lw	$t7,0x18($v0)
/*  f173aec:	8fb8001c */ 	lw	$t8,0x1c($sp)
/*  f173af0:	55cf0011 */ 	bnel	$t6,$t7,.L0f173b38
/*  f173af4:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173af8:	8c59001c */ 	lw	$t9,0x1c($v0)
/*  f173afc:	8fa80020 */ 	lw	$t0,0x20($sp)
/*  f173b00:	5719000d */ 	bnel	$t8,$t9,.L0f173b38
/*  f173b04:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173b08:	8c490020 */ 	lw	$t1,0x20($v0)
/*  f173b0c:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f173b10:	55090009 */ 	bnel	$t0,$t1,.L0f173b38
/*  f173b14:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173b18:	8c4b0024 */ 	lw	$t3,0x24($v0)
/*  f173b1c:	8fac0028 */ 	lw	$t4,0x28($sp)
/*  f173b20:	554b0005 */ 	bnel	$t2,$t3,.L0f173b38
/*  f173b24:	8faf0010 */ 	lw	$t7,0x10($sp)
/*  f173b28:	8c4d0028 */ 	lw	$t5,0x28($v0)
/*  f173b2c:	118d0015 */ 	beq	$t4,$t5,.L0f173b84
/*  f173b30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173b34:	8faf0010 */ 	lw	$t7,0x10($sp)
.L0f173b38:
/*  f173b38:	8fb80014 */ 	lw	$t8,0x14($sp)
/*  f173b3c:	8fb90018 */ 	lw	$t9,0x18($sp)
/*  f173b40:	8fa8001c */ 	lw	$t0,0x1c($sp)
/*  f173b44:	8fa90020 */ 	lw	$t1,0x20($sp)
/*  f173b48:	8faa0024 */ 	lw	$t2,0x24($sp)
/*  f173b4c:	8fab0028 */ 	lw	$t3,0x28($sp)
/*  f173b50:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f173b54:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f173b58:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f173b5c:	ac450004 */ 	sw	$a1,0x4($v0)
/*  f173b60:	ac460008 */ 	sw	$a2,0x8($v0)
/*  f173b64:	ac47000c */ 	sw	$a3,0xc($v0)
/*  f173b68:	ac4f0010 */ 	sw	$t7,0x10($v0)
/*  f173b6c:	ac580014 */ 	sw	$t8,0x14($v0)
/*  f173b70:	ac590018 */ 	sw	$t9,0x18($v0)
/*  f173b74:	ac48001c */ 	sw	$t0,0x1c($v0)
/*  f173b78:	ac490020 */ 	sw	$t1,0x20($v0)
/*  f173b7c:	ac4a0024 */ 	sw	$t2,0x24($v0)
/*  f173b80:	ac4b0028 */ 	sw	$t3,0x28($v0)
.L0f173b84:
/*  f173b84:	03e00008 */ 	jr	$ra
/*  f173b88:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f173b8c
/*  f173b8c:	00047080 */ 	sll	$t6,$a0,0x2
/*  f173b90:	01c47021 */ 	addu	$t6,$t6,$a0
/*  f173b94:	3c0f800b */ 	lui	$t7,%hi(var800ab718)
/*  f173b98:	25efb718 */ 	addiu	$t7,$t7,%lo(var800ab718)
/*  f173b9c:	000e7080 */ 	sll	$t6,$t6,0x2
/*  f173ba0:	01cf1021 */ 	addu	$v0,$t6,$t7
/*  f173ba4:	8c580000 */ 	lw	$t8,0x0($v0)
/*  f173ba8:	00001825 */ 	or	$v1,$zero,$zero
/*  f173bac:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f173bb0:	5300000f */ 	beqzl	$t8,.L0f173bf0
/*  f173bb4:	8fad0010 */ 	lw	$t5,0x10($sp)
/*  f173bb8:	8c590004 */ 	lw	$t9,0x4($v0)
/*  f173bbc:	54b9000c */ 	bnel	$a1,$t9,.L0f173bf0
/*  f173bc0:	8fad0010 */ 	lw	$t5,0x10($sp)
/*  f173bc4:	8c480008 */ 	lw	$t0,0x8($v0)
/*  f173bc8:	54c80009 */ 	bnel	$a2,$t0,.L0f173bf0
/*  f173bcc:	8fad0010 */ 	lw	$t5,0x10($sp)
/*  f173bd0:	8c49000c */ 	lw	$t1,0xc($v0)
/*  f173bd4:	8faa0010 */ 	lw	$t2,0x10($sp)
/*  f173bd8:	54e90005 */ 	bnel	$a3,$t1,.L0f173bf0
/*  f173bdc:	8fad0010 */ 	lw	$t5,0x10($sp)
/*  f173be0:	8c4b0010 */ 	lw	$t3,0x10($v0)
/*  f173be4:	114b0008 */ 	beq	$t2,$t3,.L0f173c08
/*  f173be8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173bec:	8fad0010 */ 	lw	$t5,0x10($sp)
.L0f173bf0:
/*  f173bf0:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f173bf4:	ac4c0000 */ 	sw	$t4,0x0($v0)
/*  f173bf8:	ac450004 */ 	sw	$a1,0x4($v0)
/*  f173bfc:	ac460008 */ 	sw	$a2,0x8($v0)
/*  f173c00:	ac47000c */ 	sw	$a3,0xc($v0)
/*  f173c04:	ac4d0010 */ 	sw	$t5,0x10($v0)
.L0f173c08:
/*  f173c08:	03e00008 */ 	jr	$ra
/*  f173c0c:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f173c10
/*  f173c10:	14a00003 */ 	bnez	$a1,.L0f173c20
/*  f173c14:	90830008 */ 	lbu	$v1,0x8($a0)
/*  f173c18:	03e00008 */ 	jr	$ra
/*  f173c1c:	00601025 */ 	or	$v0,$v1,$zero
.L0f173c20:
/*  f173c20:	8c8e000c */ 	lw	$t6,0xc($a0)
/*  f173c24:	3c02800b */ 	lui	$v0,0x800b
/*  f173c28:	000ec080 */ 	sll	$t8,$t6,0x2
/*  f173c2c:	07010018 */ 	bgez	$t8,.L0f173c90
/*  f173c30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173c34:	8c42b538 */ 	lw	$v0,-0x4ac8($v0)
/*  f173c38:	00003025 */ 	or	$a2,$zero,$zero
/*  f173c3c:	18400012 */ 	blez	$v0,.L0f173c88
/*  f173c40:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173c44:	8c830000 */ 	lw	$v1,0x0($a0)
/*  f173c48:	3c07800b */ 	lui	$a3,%hi(var800aabd8)
/*  f173c4c:	24e7abd8 */ 	addiu	$a3,$a3,%lo(var800aabd8)
/*  f173c50:	0003cd02 */ 	srl	$t9,$v1,0x14
/*  f173c54:	03201825 */ 	or	$v1,$t9,$zero
.L0f173c58:
/*  f173c58:	84e80000 */ 	lh	$t0,0x0($a3)
/*  f173c5c:	14680006 */ 	bne	$v1,$t0,.L0f173c78
/*  f173c60:	00064900 */ 	sll	$t1,$a2,0x4
/*  f173c64:	01255021 */ 	addu	$t2,$t1,$a1
/*  f173c68:	3c02800b */ 	lui	$v0,0x800b
/*  f173c6c:	004a1021 */ 	addu	$v0,$v0,$t2
/*  f173c70:	03e00008 */ 	jr	$ra
/*  f173c74:	9042abd9 */ 	lbu	$v0,-0x5427($v0)
.L0f173c78:
/*  f173c78:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f173c7c:	00c2082a */ 	slt	$at,$a2,$v0
/*  f173c80:	1420fff5 */ 	bnez	$at,.L0f173c58
/*  f173c84:	24e70010 */ 	addiu	$a3,$a3,0x10
.L0f173c88:
/*  f173c88:	03e00008 */ 	jr	$ra
/*  f173c8c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f173c90:
/*  f173c90:	18a00006 */ 	blez	$a1,.L0f173cac
/*  f173c94:	00003025 */ 	or	$a2,$zero,$zero
.L0f173c98:
/*  f173c98:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f173c9c:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f173ca0:	00035843 */ 	sra	$t3,$v1,0x1
/*  f173ca4:	14c5fffc */ 	bne	$a2,$a1,.L0f173c98
/*  f173ca8:	01601825 */ 	or	$v1,$t3,$zero
.L0f173cac:
/*  f173cac:	00601025 */ 	or	$v0,$v1,$zero
/*  f173cb0:	03e00008 */ 	jr	$ra
/*  f173cb4:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173cb8
/*  f173cb8:	14a00003 */ 	bnez	$a1,.L0f173cc8
/*  f173cbc:	90830009 */ 	lbu	$v1,0x9($a0)
/*  f173cc0:	03e00008 */ 	jr	$ra
/*  f173cc4:	00601025 */ 	or	$v0,$v1,$zero
.L0f173cc8:
/*  f173cc8:	8c8e000c */ 	lw	$t6,0xc($a0)
/*  f173ccc:	3c02800b */ 	lui	$v0,0x800b
/*  f173cd0:	000ec080 */ 	sll	$t8,$t6,0x2
/*  f173cd4:	07010018 */ 	bgez	$t8,.L0f173d38
/*  f173cd8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173cdc:	8c42b538 */ 	lw	$v0,-0x4ac8($v0)
/*  f173ce0:	00003025 */ 	or	$a2,$zero,$zero
/*  f173ce4:	18400012 */ 	blez	$v0,.L0f173d30
/*  f173ce8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f173cec:	8c830000 */ 	lw	$v1,0x0($a0)
/*  f173cf0:	3c07800b */ 	lui	$a3,%hi(var800aabd8)
/*  f173cf4:	24e7abd8 */ 	addiu	$a3,$a3,%lo(var800aabd8)
/*  f173cf8:	0003cd02 */ 	srl	$t9,$v1,0x14
/*  f173cfc:	03201825 */ 	or	$v1,$t9,$zero
.L0f173d00:
/*  f173d00:	84e80000 */ 	lh	$t0,0x0($a3)
/*  f173d04:	14680006 */ 	bne	$v1,$t0,.L0f173d20
/*  f173d08:	00064900 */ 	sll	$t1,$a2,0x4
/*  f173d0c:	01255021 */ 	addu	$t2,$t1,$a1
/*  f173d10:	3c02800b */ 	lui	$v0,0x800b
/*  f173d14:	004a1021 */ 	addu	$v0,$v0,$t2
/*  f173d18:	03e00008 */ 	jr	$ra
/*  f173d1c:	9042abe0 */ 	lbu	$v0,-0x5420($v0)
.L0f173d20:
/*  f173d20:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f173d24:	00c2082a */ 	slt	$at,$a2,$v0
/*  f173d28:	1420fff5 */ 	bnez	$at,.L0f173d00
/*  f173d2c:	24e70010 */ 	addiu	$a3,$a3,0x10
.L0f173d30:
/*  f173d30:	03e00008 */ 	jr	$ra
/*  f173d34:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f173d38:
/*  f173d38:	18a00006 */ 	blez	$a1,.L0f173d54
/*  f173d3c:	00003025 */ 	or	$a2,$zero,$zero
.L0f173d40:
/*  f173d40:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f173d44:	24c60001 */ 	addiu	$a2,$a2,0x1
/*  f173d48:	00035843 */ 	sra	$t3,$v1,0x1
/*  f173d4c:	14c5fffc */ 	bne	$a2,$a1,.L0f173d40
/*  f173d50:	01601825 */ 	or	$v1,$t3,$zero
.L0f173d54:
/*  f173d54:	00601025 */ 	or	$v0,$v1,$zero
/*  f173d58:	03e00008 */ 	jr	$ra
/*  f173d5c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173d60
/*  f173d60:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f173d64:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f173d68:	8c830008 */ 	lw	$v1,0x8($a0)
/*  f173d6c:	306e0003 */ 	andi	$t6,$v1,0x3
/*  f173d70:	0fc5cf04 */ 	jal	func0f173c10
/*  f173d74:	afae001c */ 	sw	$t6,0x1c($sp)
/*  f173d78:	8fa3001c */ 	lw	$v1,0x1c($sp)
/*  f173d7c:	24010003 */ 	addiu	$at,$zero,0x3
/*  f173d80:	00402025 */ 	or	$a0,$v0,$zero
/*  f173d84:	14610008 */ 	bne	$v1,$at,.L0f173da8
/*  f173d88:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f173d8c:	24420003 */ 	addiu	$v0,$v0,0x3
/*  f173d90:	04410003 */ 	bgez	$v0,.L0f173da0
/*  f173d94:	00027883 */ 	sra	$t7,$v0,0x2
/*  f173d98:	24410003 */ 	addiu	$at,$v0,0x3
/*  f173d9c:	00017883 */ 	sra	$t7,$at,0x2
.L0f173da0:
/*  f173da0:	10000019 */ 	beqz	$zero,.L0f173e08
/*  f173da4:	01e01025 */ 	or	$v0,$t7,$zero
.L0f173da8:
/*  f173da8:	24010002 */ 	addiu	$at,$zero,0x2
/*  f173dac:	14610007 */ 	bne	$v1,$at,.L0f173dcc
/*  f173db0:	24820003 */ 	addiu	$v0,$a0,0x3
/*  f173db4:	04410003 */ 	bgez	$v0,.L0f173dc4
/*  f173db8:	0002c083 */ 	sra	$t8,$v0,0x2
/*  f173dbc:	24410003 */ 	addiu	$at,$v0,0x3
/*  f173dc0:	0001c083 */ 	sra	$t8,$at,0x2
.L0f173dc4:
/*  f173dc4:	10000010 */ 	beqz	$zero,.L0f173e08
/*  f173dc8:	03001025 */ 	or	$v0,$t8,$zero
.L0f173dcc:
/*  f173dcc:	24010001 */ 	addiu	$at,$zero,0x1
/*  f173dd0:	14610008 */ 	bne	$v1,$at,.L0f173df4
/*  f173dd4:	2482000f */ 	addiu	$v0,$a0,0xf
/*  f173dd8:	24820007 */ 	addiu	$v0,$a0,0x7
/*  f173ddc:	04410003 */ 	bgez	$v0,.L0f173dec
/*  f173de0:	0002c8c3 */ 	sra	$t9,$v0,0x3
/*  f173de4:	24410007 */ 	addiu	$at,$v0,0x7
/*  f173de8:	0001c8c3 */ 	sra	$t9,$at,0x3
.L0f173dec:
/*  f173dec:	10000006 */ 	beqz	$zero,.L0f173e08
/*  f173df0:	03201025 */ 	or	$v0,$t9,$zero
.L0f173df4:
/*  f173df4:	04410003 */ 	bgez	$v0,.L0f173e04
/*  f173df8:	00024103 */ 	sra	$t0,$v0,0x4
/*  f173dfc:	2441000f */ 	addiu	$at,$v0,0xf
/*  f173e00:	00014103 */ 	sra	$t0,$at,0x4
.L0f173e04:
/*  f173e04:	01001025 */ 	or	$v0,$t0,$zero
.L0f173e08:
/*  f173e08:	03e00008 */ 	jr	$ra
/*  f173e0c:	27bd0020 */ 	addiu	$sp,$sp,0x20
);

GLOBAL_ASM(
glabel func0f173e10
/*  f173e10:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f173e14:	afbf0014 */ 	sw	$ra,0x14($sp)
/*  f173e18:	afa40020 */ 	sw	$a0,0x20($sp)
/*  f173e1c:	0fc5cf2e */ 	jal	func0f173cb8
/*  f173e20:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f173e24:	afa2001c */ 	sw	$v0,0x1c($sp)
/*  f173e28:	8fa40020 */ 	lw	$a0,0x20($sp)
/*  f173e2c:	0fc5cf58 */ 	jal	func0f173d60
/*  f173e30:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f173e34:	8fae001c */ 	lw	$t6,0x1c($sp)
/*  f173e38:	8fbf0014 */ 	lw	$ra,0x14($sp)
/*  f173e3c:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f173e40:	004e0019 */ 	multu	$v0,$t6
/*  f173e44:	00001012 */ 	mflo	$v0
/*  f173e48:	03e00008 */ 	jr	$ra
/*  f173e4c:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173e50
/*  f173e50:	27bdffd8 */ 	addiu	$sp,$sp,-40
/*  f173e54:	afbf0024 */ 	sw	$ra,0x24($sp)
/*  f173e58:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f173e5c:	afb2001c */ 	sw	$s2,0x1c($sp)
/*  f173e60:	afb10018 */ 	sw	$s1,0x18($sp)
/*  f173e64:	afb00014 */ 	sw	$s0,0x14($sp)
/*  f173e68:	8c830008 */ 	lw	$v1,0x8($a0)
/*  f173e6c:	9082000b */ 	lbu	$v0,0xb($a0)
/*  f173e70:	00c08825 */ 	or	$s1,$a2,$zero
/*  f173e74:	306e0003 */ 	andi	$t6,$v1,0x3
/*  f173e78:	00027942 */ 	srl	$t7,$v0,0x5
/*  f173e7c:	00809825 */ 	or	$s3,$a0,$zero
/*  f173e80:	11e00003 */ 	beqz	$t7,.L0f173e90
/*  f173e84:	01c01825 */ 	or	$v1,$t6,$zero
/*  f173e88:	10000002 */ 	beqz	$zero,.L0f173e94
/*  f173e8c:	01e09025 */ 	or	$s2,$t7,$zero
.L0f173e90:
/*  f173e90:	24120001 */ 	addiu	$s2,$zero,0x1
.L0f173e94:
/*  f173e94:	24020003 */ 	addiu	$v0,$zero,0x3
/*  f173e98:	14620003 */ 	bne	$v1,$v0,.L0f173ea8
/*  f173e9c:	ae200000 */ 	sw	$zero,0x0($s1)
/*  f173ea0:	1000000b */ 	beqz	$zero,.L0f173ed0
/*  f173ea4:	aca20000 */ 	sw	$v0,0x0($a1)
.L0f173ea8:
/*  f173ea8:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f173eac:	14620003 */ 	bne	$v1,$v0,.L0f173ebc
/*  f173eb0:	24010001 */ 	addiu	$at,$zero,0x1
/*  f173eb4:	10000006 */ 	beqz	$zero,.L0f173ed0
/*  f173eb8:	aca20000 */ 	sw	$v0,0x0($a1)
.L0f173ebc:
/*  f173ebc:	54610004 */ 	bnel	$v1,$at,.L0f173ed0
/*  f173ec0:	aca20000 */ 	sw	$v0,0x0($a1)
/*  f173ec4:	10000002 */ 	beqz	$zero,.L0f173ed0
/*  f173ec8:	aca20000 */ 	sw	$v0,0x0($a1)
/*  f173ecc:	aca20000 */ 	sw	$v0,0x0($a1)
.L0f173ed0:
/*  f173ed0:	1a40000a */ 	blez	$s2,.L0f173efc
/*  f173ed4:	00008025 */ 	or	$s0,$zero,$zero
.L0f173ed8:
/*  f173ed8:	02602025 */ 	or	$a0,$s3,$zero
/*  f173edc:	0fc5cf84 */ 	jal	func0f173e10
/*  f173ee0:	02002825 */ 	or	$a1,$s0,$zero
/*  f173ee4:	8e380000 */ 	lw	$t8,0x0($s1)
/*  f173ee8:	0002c880 */ 	sll	$t9,$v0,0x2
/*  f173eec:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f173ef0:	03194021 */ 	addu	$t0,$t8,$t9
/*  f173ef4:	1612fff8 */ 	bne	$s0,$s2,.L0f173ed8
/*  f173ef8:	ae280000 */ 	sw	$t0,0x0($s1)
.L0f173efc:
/*  f173efc:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*  f173f00:	8fb00014 */ 	lw	$s0,0x14($sp)
/*  f173f04:	8fb10018 */ 	lw	$s1,0x18($sp)
/*  f173f08:	8fb2001c */ 	lw	$s2,0x1c($sp)
/*  f173f0c:	8fb30020 */ 	lw	$s3,0x20($sp)
/*  f173f10:	03e00008 */ 	jr	$ra
/*  f173f14:	27bd0028 */ 	addiu	$sp,$sp,0x28
);

GLOBAL_ASM(
glabel func0f173f18
/*  f173f18:	2484ffff */ 	addiu	$a0,$a0,-1
/*  f173f1c:	18800008 */ 	blez	$a0,.L0f173f40
/*  f173f20:	00001825 */ 	or	$v1,$zero,$zero
/*  f173f24:	24020008 */ 	addiu	$v0,$zero,0x8
/*  f173f28:	00047043 */ 	sra	$t6,$a0,0x1
.L0f173f2c:
/*  f173f2c:	01c02025 */ 	or	$a0,$t6,$zero
/*  f173f30:	19c00003 */ 	blez	$t6,.L0f173f40
/*  f173f34:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f173f38:	5462fffc */ 	bnel	$v1,$v0,.L0f173f2c
/*  f173f3c:	00047043 */ 	sra	$t6,$a0,0x1
.L0f173f40:
/*  f173f40:	03e00008 */ 	jr	$ra
/*  f173f44:	00601025 */ 	or	$v0,$v1,$zero
);

GLOBAL_ASM(
glabel func0f173f48
/*  f173f48:	24010001 */ 	addiu	$at,$zero,0x1
/*  f173f4c:	54810004 */ 	bnel	$a0,$at,.L0f173f60
/*  f173f50:	24010002 */ 	addiu	$at,$zero,0x2
/*  f173f54:	03e00008 */ 	jr	$ra
/*  f173f58:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f173f5c:	24010002 */ 	addiu	$at,$zero,0x2
.L0f173f60:
/*  f173f60:	14810003 */ 	bne	$a0,$at,.L0f173f70
/*  f173f64:	00001025 */ 	or	$v0,$zero,$zero
/*  f173f68:	03e00008 */ 	jr	$ra
/*  f173f6c:	24020001 */ 	addiu	$v0,$zero,0x1
.L0f173f70:
/*  f173f70:	03e00008 */ 	jr	$ra
/*  f173f74:	00000000 */ 	sll	$zero,$zero,0x0
);

GLOBAL_ASM(
glabel func0f173f78
/*  f173f78:	27bdff70 */ 	addiu	$sp,$sp,-144
/*  f173f7c:	afbf0044 */ 	sw	$ra,0x44($sp)
/*  f173f80:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f173f84:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f173f88:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f173f8c:	afa60098 */ 	sw	$a2,0x98($sp)
/*  f173f90:	afa7009c */ 	sw	$a3,0x9c($sp)
/*  f173f94:	8cae0000 */ 	lw	$t6,0x0($a1)
/*  f173f98:	3c19800b */ 	lui	$t9,0x800b
/*  f173f9c:	8f39abc0 */ 	lw	$t9,-0x5440($t9)
/*  f173fa0:	000e7d02 */ 	srl	$t7,$t6,0x14
/*  f173fa4:	00809025 */ 	or	$s2,$a0,$zero
/*  f173fa8:	000fc0c0 */ 	sll	$t8,$t7,0x3
/*  f173fac:	00a08825 */ 	or	$s1,$a1,$zero
/*  f173fb0:	90a40008 */ 	lbu	$a0,0x8($a1)
/*  f173fb4:	0fc5cfc6 */ 	jal	func0f173f18
/*  f173fb8:	03198021 */ 	addu	$s0,$t8,$t9
/*  f173fbc:	afa20088 */ 	sw	$v0,0x88($sp)
/*  f173fc0:	0fc5cfc6 */ 	jal	func0f173f18
/*  f173fc4:	92240009 */ 	lbu	$a0,0x9($s1)
/*  f173fc8:	afa20084 */ 	sw	$v0,0x84($sp)
/*  f173fcc:	02202025 */ 	or	$a0,$s1,$zero
/*  f173fd0:	0fc5cf58 */ 	jal	func0f173d60
/*  f173fd4:	00002825 */ 	or	$a1,$zero,$zero
/*  f173fd8:	8fa800a4 */ 	lw	$t0,0xa4($sp)
/*  f173fdc:	02401825 */ 	or	$v1,$s2,$zero
/*  f173fe0:	3c01fa00 */ 	lui	$at,0xfa00
/*  f173fe4:	310900ff */ 	andi	$t1,$t0,0xff
/*  f173fe8:	00095200 */ 	sll	$t2,$t1,0x8
/*  f173fec:	01415825 */ 	or	$t3,$t2,$at
/*  f173ff0:	240cffff */ 	addiu	$t4,$zero,-1
/*  f173ff4:	ac6c0004 */ 	sw	$t4,0x4($v1)
/*  f173ff8:	ac6b0000 */ 	sw	$t3,0x0($v1)
/*  f173ffc:	8e24000c */ 	lw	$a0,0xc($s1)
/*  f174000:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f174004:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f174008:	00046f82 */ 	srl	$t5,$a0,0x1e
/*  f17400c:	0fc5ce91 */ 	jal	func0f173a44
/*  f174010:	000d2380 */ 	sll	$a0,$t5,0xe
/*  f174014:	1040000a */ 	beqz	$v0,.L0f174040
/*  f174018:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f17401c:	3c0fba00 */ 	lui	$t7,0xba00
/*  f174020:	35ef0e02 */ 	ori	$t7,$t7,0xe02
/*  f174024:	02401025 */ 	or	$v0,$s2,$zero
/*  f174028:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f17402c:	8e38000c */ 	lw	$t8,0xc($s1)
/*  f174030:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f174034:	0018cf82 */ 	srl	$t9,$t8,0x1e
/*  f174038:	00194380 */ 	sll	$t0,$t9,0xe
/*  f17403c:	ac480004 */ 	sw	$t0,0x4($v0)
.L0f174040:
/*  f174040:	920c0004 */ 	lbu	$t4,0x4($s0)
/*  f174044:	8e0a0004 */ 	lw	$t2,0x4($s0)
/*  f174048:	8e220008 */ 	lw	$v0,0x8($s1)
/*  f17404c:	318d000f */ 	andi	$t5,$t4,0xf
/*  f174050:	00ed0019 */ 	multu	$a3,$t5
/*  f174054:	000a5f02 */ 	srl	$t3,$t2,0x1c
/*  f174058:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f17405c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f174060:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f174064:	00022ec0 */ 	sll	$a1,$v0,0x1b
/*  f174068:	00054f42 */ 	srl	$t1,$a1,0x1d
/*  f17406c:	01202825 */ 	or	$a1,$t1,$zero
/*  f174070:	8faa0084 */ 	lw	$t2,0x84($sp)
/*  f174074:	00002025 */ 	or	$a0,$zero,$zero
/*  f174078:	00007012 */ 	mflo	$t6
/*  f17407c:	016e7821 */ 	addu	$t7,$t3,$t6
/*  f174080:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f174084:	92190005 */ 	lbu	$t9,0x5($s0)
/*  f174088:	8faf00a0 */ 	lw	$t7,0xa0($sp)
/*  f17408c:	8fae009c */ 	lw	$t6,0x9c($sp)
/*  f174090:	00194102 */ 	srl	$t0,$t9,0x4
/*  f174094:	03084823 */ 	subu	$t1,$t8,$t0
/*  f174098:	afa9001c */ 	sw	$t1,0x1c($sp)
/*  f17409c:	960c0004 */ 	lhu	$t4,0x4($s0)
/*  f1740a0:	afa70080 */ 	sw	$a3,0x80($sp)
/*  f1740a4:	30460003 */ 	andi	$a2,$v0,0x3
/*  f1740a8:	318d000f */ 	andi	$t5,$t4,0xf
/*  f1740ac:	014d5823 */ 	subu	$t3,$t2,$t5
/*  f1740b0:	afab0020 */ 	sw	$t3,0x20($sp)
/*  f1740b4:	afaf0028 */ 	sw	$t7,0x28($sp)
/*  f1740b8:	0fc5ce9c */ 	jal	func0f173a70
/*  f1740bc:	afae0024 */ 	sw	$t6,0x24($sp)
/*  f1740c0:	1040003c */ 	beqz	$v0,.L0f1741b4
/*  f1740c4:	8fa70080 */ 	lw	$a3,0x80($sp)
/*  f1740c8:	8e2a0008 */ 	lw	$t2,0x8($s1)
/*  f1740cc:	3c01f500 */ 	lui	$at,0xf500
/*  f1740d0:	30ef01ff */ 	andi	$t7,$a3,0x1ff
/*  f1740d4:	000acec0 */ 	sll	$t9,$t2,0x1b
/*  f1740d8:	314d0003 */ 	andi	$t5,$t2,0x3
/*  f1740dc:	920a0004 */ 	lbu	$t2,0x4($s0)
/*  f1740e0:	000d5cc0 */ 	sll	$t3,$t5,0x13
/*  f1740e4:	0019c742 */ 	srl	$t8,$t9,0x1d
/*  f1740e8:	314d000f */ 	andi	$t5,$t2,0xf
/*  f1740ec:	00ed0019 */ 	multu	$a3,$t5
/*  f1740f0:	33080007 */ 	andi	$t0,$t8,0x7
/*  f1740f4:	00084d40 */ 	sll	$t1,$t0,0x15
/*  f1740f8:	8e080004 */ 	lw	$t0,0x4($s0)
/*  f1740fc:	01216025 */ 	or	$t4,$t1,$at
/*  f174100:	018b7025 */ 	or	$t6,$t4,$t3
/*  f174104:	000fca40 */ 	sll	$t9,$t7,0x9
/*  f174108:	00084f02 */ 	srl	$t1,$t0,0x1c
/*  f17410c:	01d9c025 */ 	or	$t8,$t6,$t9
/*  f174110:	02401825 */ 	or	$v1,$s2,$zero
/*  f174114:	00006012 */ 	mflo	$t4
/*  f174118:	012c5821 */ 	addu	$t3,$t1,$t4
/*  f17411c:	316f01ff */ 	andi	$t7,$t3,0x1ff
/*  f174120:	030f7025 */ 	or	$t6,$t8,$t7
/*  f174124:	ac6e0000 */ 	sw	$t6,0x0($v1)
/*  f174128:	afa30054 */ 	sw	$v1,0x54($sp)
/*  f17412c:	26520008 */ 	addiu	$s2,$s2,0x8
/*  f174130:	0fc5cfd2 */ 	jal	func0f173f48
/*  f174134:	00002025 */ 	or	$a0,$zero,$zero
/*  f174138:	00002025 */ 	or	$a0,$zero,$zero
/*  f17413c:	0fc5cfd2 */ 	jal	func0f173f48
/*  f174140:	afa2004c */ 	sw	$v0,0x4c($sp)
/*  f174144:	8fa3004c */ 	lw	$v1,0x4c($sp)
/*  f174148:	8fac0084 */ 	lw	$t4,0x84($sp)
/*  f17414c:	96180004 */ 	lhu	$t8,0x4($s0)
/*  f174150:	30590003 */ 	andi	$t9,$v0,0x3
/*  f174154:	306a0003 */ 	andi	$t2,$v1,0x3
/*  f174158:	000a6c80 */ 	sll	$t5,$t2,0x12
/*  f17415c:	00194200 */ 	sll	$t0,$t9,0x8
/*  f174160:	010d4825 */ 	or	$t1,$t0,$t5
/*  f174164:	01987823 */ 	subu	$t7,$t4,$t8
/*  f174168:	8fa800a0 */ 	lw	$t0,0xa0($sp)
/*  f17416c:	31ee000f */ 	andi	$t6,$t7,0xf
/*  f174170:	920f0005 */ 	lbu	$t7,0x5($s0)
/*  f174174:	000ecb80 */ 	sll	$t9,$t6,0xe
/*  f174178:	8fb80088 */ 	lw	$t8,0x88($sp)
/*  f17417c:	01395025 */ 	or	$t2,$t1,$t9
/*  f174180:	310d000f */ 	andi	$t5,$t0,0xf
/*  f174184:	000d5a80 */ 	sll	$t3,$t5,0xa
/*  f174188:	014b6025 */ 	or	$t4,$t2,$t3
/*  f17418c:	000f7102 */ 	srl	$t6,$t7,0x4
/*  f174190:	8faa009c */ 	lw	$t2,0x9c($sp)
/*  f174194:	030e4823 */ 	subu	$t1,$t8,$t6
/*  f174198:	3139000f */ 	andi	$t9,$t1,0xf
/*  f17419c:	8fb80054 */ 	lw	$t8,0x54($sp)
/*  f1741a0:	00194100 */ 	sll	$t0,$t9,0x4
/*  f1741a4:	01886825 */ 	or	$t5,$t4,$t0
/*  f1741a8:	314b000f */ 	andi	$t3,$t2,0xf
/*  f1741ac:	01ab7825 */ 	or	$t7,$t5,$t3
/*  f1741b0:	af0f0004 */ 	sw	$t7,0x4($t8)
.L0f1741b4:
/*  f1741b4:	8fa40098 */ 	lw	$a0,0x98($sp)
/*  f1741b8:	24020002 */ 	addiu	$v0,$zero,0x2
/*  f1741bc:	00001825 */ 	or	$v1,$zero,$zero
/*  f1741c0:	14820007 */ 	bne	$a0,$v0,.L0f1741e0
/*  f1741c4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1741c8:	8e2e000c */ 	lw	$t6,0xc($s1)
/*  f1741cc:	000ec880 */ 	sll	$t9,$t6,0x2
/*  f1741d0:	07200003 */ 	bltz	$t9,.L0f1741e0
/*  f1741d4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1741d8:	10000001 */ 	beqz	$zero,.L0f1741e0
/*  f1741dc:	00401825 */ 	or	$v1,$v0,$zero
.L0f1741e0:
/*  f1741e0:	14820007 */ 	bne	$a0,$v0,.L0f174200
/*  f1741e4:	00602825 */ 	or	$a1,$v1,$zero
/*  f1741e8:	8e2c000c */ 	lw	$t4,0xc($s1)
/*  f1741ec:	000c5080 */ 	sll	$t2,$t4,0x2
/*  f1741f0:	05420004 */ 	bltzl	$t2,.L0f174204
/*  f1741f4:	00001825 */ 	or	$v1,$zero,$zero
/*  f1741f8:	10000002 */ 	beqz	$zero,.L0f174204
/*  f1741fc:	00401825 */ 	or	$v1,$v0,$zero
.L0f174200:
/*  f174200:	00001825 */ 	or	$v1,$zero,$zero
.L0f174204:
/*  f174204:	14820007 */ 	bne	$a0,$v0,.L0f174224
/*  f174208:	00603025 */ 	or	$a2,$v1,$zero
/*  f17420c:	8e2d000c */ 	lw	$t5,0xc($s1)
/*  f174210:	000d7880 */ 	sll	$t7,$t5,0x2
/*  f174214:	05e20004 */ 	bltzl	$t7,.L0f174228
/*  f174218:	00001825 */ 	or	$v1,$zero,$zero
/*  f17421c:	10000002 */ 	beqz	$zero,.L0f174228
/*  f174220:	00401825 */ 	or	$v1,$v0,$zero
.L0f174224:
/*  f174224:	00001825 */ 	or	$v1,$zero,$zero
.L0f174228:
/*  f174228:	92380008 */ 	lbu	$t8,0x8($s1)
/*  f17422c:	270effff */ 	addiu	$t6,$t8,-1
/*  f174230:	000e4880 */ 	sll	$t1,$t6,0x2
/*  f174234:	14820007 */ 	bne	$a0,$v0,.L0f174254
/*  f174238:	00693821 */ 	addu	$a3,$v1,$t1
/*  f17423c:	8e39000c */ 	lw	$t9,0xc($s1)
/*  f174240:	00194080 */ 	sll	$t0,$t9,0x2
/*  f174244:	05020004 */ 	bltzl	$t0,.L0f174258
/*  f174248:	00001825 */ 	or	$v1,$zero,$zero
/*  f17424c:	10000002 */ 	beqz	$zero,.L0f174258
/*  f174250:	24030002 */ 	addiu	$v1,$zero,0x2
.L0f174254:
/*  f174254:	00001825 */ 	or	$v1,$zero,$zero
.L0f174258:
/*  f174258:	922a0009 */ 	lbu	$t2,0x9($s1)
/*  f17425c:	afa70064 */ 	sw	$a3,0x64($sp)
/*  f174260:	afa60068 */ 	sw	$a2,0x68($sp)
/*  f174264:	254dffff */ 	addiu	$t5,$t2,-1
/*  f174268:	000d5880 */ 	sll	$t3,$t5,0x2
/*  f17426c:	006b8021 */ 	addu	$s0,$v1,$t3
/*  f174270:	afb00010 */ 	sw	$s0,0x10($sp)
/*  f174274:	afa5006c */ 	sw	$a1,0x6c($sp)
/*  f174278:	0fc5cee3 */ 	jal	func0f173b8c
/*  f17427c:	00002025 */ 	or	$a0,$zero,$zero
/*  f174280:	8fa5006c */ 	lw	$a1,0x6c($sp)
/*  f174284:	8fa60068 */ 	lw	$a2,0x68($sp)
/*  f174288:	1040000f */ 	beqz	$v0,.L0f1742c8
/*  f17428c:	8fa70064 */ 	lw	$a3,0x64($sp)
/*  f174290:	30af0fff */ 	andi	$t7,$a1,0xfff
/*  f174294:	000fc300 */ 	sll	$t8,$t7,0xc
/*  f174298:	02401025 */ 	or	$v0,$s2,$zero
/*  f17429c:	3c01f200 */ 	lui	$at,0xf200
/*  f1742a0:	30ec0fff */ 	andi	$t4,$a3,0xfff
/*  f1742a4:	000c4300 */ 	sll	$t0,$t4,0xc
/*  f1742a8:	03017025 */ 	or	$t6,$t8,$at
/*  f1742ac:	30c90fff */ 	andi	$t1,$a2,0xfff
/*  f1742b0:	320a0fff */ 	andi	$t2,$s0,0xfff
/*  f1742b4:	010a6825 */ 	or	$t5,$t0,$t2
/*  f1742b8:	01c9c825 */ 	or	$t9,$t6,$t1
/*  f1742bc:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f1742c0:	ac4d0004 */ 	sw	$t5,0x4($v0)
/*  f1742c4:	26520008 */ 	addiu	$s2,$s2,0x8
.L0f1742c8:
/*  f1742c8:	8fbf0044 */ 	lw	$ra,0x44($sp)
/*  f1742cc:	02401025 */ 	or	$v0,$s2,$zero
/*  f1742d0:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f1742d4:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f1742d8:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f1742dc:	03e00008 */ 	jr	$ra
/*  f1742e0:	27bd0090 */ 	addiu	$sp,$sp,0x90
);

GLOBAL_ASM(
glabel func0f1742e4
/*  f1742e4:	27bdfff8 */ 	addiu	$sp,$sp,-8
/*  f1742e8:	afb00004 */ 	sw	$s0,0x4($sp)
/*  f1742ec:	90c2000b */ 	lbu	$v0,0xb($a2)
/*  f1742f0:	00808025 */ 	or	$s0,$a0,$zero
/*  f1742f4:	00001825 */ 	or	$v1,$zero,$zero
/*  f1742f8:	00027142 */ 	srl	$t6,$v0,0x5
/*  f1742fc:	11c00003 */ 	beqz	$t6,.L0f17430c
/*  f174300:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174304:	10000001 */ 	beqz	$zero,.L0f17430c
/*  f174308:	25c3ffff */ 	addiu	$v1,$t6,-1
.L0f17430c:
/*  f17430c:	50e0001a */ 	beqzl	$a3,.L0f174378
/*  f174310:	8cad0000 */ 	lw	$t5,0x0($a1)
/*  f174314:	10a0000d */ 	beqz	$a1,.L0f17434c
/*  f174318:	02001025 */ 	or	$v0,$s0,$zero
/*  f17431c:	8ca40000 */ 	lw	$a0,0x0($a1)
/*  f174320:	2401c7ff */ 	addiu	$at,$zero,-14337
/*  f174324:	0003c2c0 */ 	sll	$t8,$v1,0xb
/*  f174328:	00817824 */ 	and	$t7,$a0,$at
/*  f17432c:	01f81025 */ 	or	$v0,$t7,$t8
/*  f174330:	50440018 */ 	beql	$v0,$a0,.L0f174394
/*  f174334:	02001025 */ 	or	$v0,$s0,$zero
/*  f174338:	ae020000 */ 	sw	$v0,0x0($s0)
/*  f17433c:	8cb90004 */ 	lw	$t9,0x4($a1)
/*  f174340:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174344:	10000012 */ 	beqz	$zero,.L0f174390
/*  f174348:	ae19fffc */ 	sw	$t9,-0x4($s0)
.L0f17434c:
/*  f17434c:	30680007 */ 	andi	$t0,$v1,0x7
/*  f174350:	00084ac0 */ 	sll	$t1,$t0,0xb
/*  f174354:	3c01bb00 */ 	lui	$at,0xbb00
/*  f174358:	01215025 */ 	or	$t2,$t1,$at
/*  f17435c:	354b0001 */ 	ori	$t3,$t2,0x1
/*  f174360:	240cffff */ 	addiu	$t4,$zero,-1
/*  f174364:	ac4c0004 */ 	sw	$t4,0x4($v0)
/*  f174368:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f17436c:	10000008 */ 	beqz	$zero,.L0f174390
/*  f174370:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174374:	8cad0000 */ 	lw	$t5,0x0($a1)
.L0f174378:
/*  f174378:	2401c7ff */ 	addiu	$at,$zero,-14337
/*  f17437c:	0003c2c0 */ 	sll	$t8,$v1,0xb
/*  f174380:	01a17024 */ 	and	$t6,$t5,$at
/*  f174384:	acae0000 */ 	sw	$t6,0x0($a1)
/*  f174388:	01d8c825 */ 	or	$t9,$t6,$t8
/*  f17438c:	acb90000 */ 	sw	$t9,0x0($a1)
.L0f174390:
/*  f174390:	02001025 */ 	or	$v0,$s0,$zero
.L0f174394:
/*  f174394:	8fb00004 */ 	lw	$s0,0x4($sp)
/*  f174398:	03e00008 */ 	jr	$ra
/*  f17439c:	27bd0008 */ 	addiu	$sp,$sp,0x8
);

GLOBAL_ASM(
glabel func0f1743a0
/*  f1743a0:	27bdff68 */ 	addiu	$sp,$sp,-152
/*  f1743a4:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f1743a8:	00808025 */ 	or	$s0,$a0,$zero
/*  f1743ac:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f1743b0:	afa5009c */ 	sw	$a1,0x9c($sp)
/*  f1743b4:	afa600a0 */ 	sw	$a2,0xa0($sp)
/*  f1743b8:	00a02025 */ 	or	$a0,$a1,$zero
/*  f1743bc:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f1743c0:	0fc5cf94 */ 	jal	func0f173e50
/*  f1743c4:	27a60090 */ 	addiu	$a2,$sp,0x90
/*  f1743c8:	8fa9009c */ 	lw	$t1,0x9c($sp)
/*  f1743cc:	8fa800a0 */ 	lw	$t0,0xa0($sp)
/*  f1743d0:	3c01fd00 */ 	lui	$at,0xfd00
/*  f1743d4:	8d2e000c */ 	lw	$t6,0xc($t1)
/*  f1743d8:	02001025 */ 	or	$v0,$s0,$zero
/*  f1743dc:	8fab0094 */ 	lw	$t3,0x94($sp)
/*  f1743e0:	000e7f82 */ 	srl	$t7,$t6,0x1e
/*  f1743e4:	15e00065 */ 	bnez	$t7,.L0f17457c
/*  f1743e8:	8fae0094 */ 	lw	$t6,0x94($sp)
/*  f1743ec:	8d380008 */ 	lw	$t8,0x8($t1)
/*  f1743f0:	31cf0003 */ 	andi	$t7,$t6,0x3
/*  f1743f4:	02001025 */ 	or	$v0,$s0,$zero
/*  f1743f8:	0018cec0 */ 	sll	$t9,$t8,0x1b
/*  f1743fc:	00195742 */ 	srl	$t2,$t9,0x1d
/*  f174400:	314b0007 */ 	andi	$t3,$t2,0x7
/*  f174404:	000b6540 */ 	sll	$t4,$t3,0x15
/*  f174408:	01816825 */ 	or	$t5,$t4,$at
/*  f17440c:	000fc4c0 */ 	sll	$t8,$t7,0x13
/*  f174410:	01b8c825 */ 	or	$t9,$t5,$t8
/*  f174414:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f174418:	8d2a0004 */ 	lw	$t2,0x4($t1)
/*  f17441c:	3c038008 */ 	lui	$v1,%hi(var800844d0)
/*  f174420:	246344d0 */ 	addiu	$v1,$v1,%lo(var800844d0)
/*  f174424:	ac4a0004 */ 	sw	$t2,0x4($v0)
/*  f174428:	8c6b0000 */ 	lw	$t3,0x0($v1)
/*  f17442c:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174430:	02001025 */ 	or	$v0,$s0,$zero
/*  f174434:	15600006 */ 	bnez	$t3,.L0f174450
/*  f174438:	3c0ce700 */ 	lui	$t4,0xe700
/*  f17443c:	ac4c0000 */ 	sw	$t4,0x0($v0)
/*  f174440:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f174444:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f174448:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f17444c:	ac6e0000 */ 	sw	$t6,0x0($v1)
.L0f174450:
/*  f174450:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f174454:	24010002 */ 	addiu	$at,$zero,0x2
/*  f174458:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f17445c:	14c10019 */ 	bne	$a2,$at,.L0f1744c4
/*  f174460:	00002825 */ 	or	$a1,$zero,$zero
/*  f174464:	15000017 */ 	bnez	$t0,.L0f1744c4
/*  f174468:	3c07e600 */ 	lui	$a3,0xe600
/*  f17446c:	02001825 */ 	or	$v1,$s0,$zero
/*  f174470:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174474:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174478:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f17447c:	02002025 */ 	or	$a0,$s0,$zero
/*  f174480:	3c0ff300 */ 	lui	$t7,0xf300
/*  f174484:	ac8f0000 */ 	sw	$t7,0x0($a0)
/*  f174488:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f17448c:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174490:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174494:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174498:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f17449c:	10200003 */ 	beqz	$at,.L0f1744ac
/*  f1744a0:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1744a4:	10000001 */ 	beqz	$zero,.L0f1744ac
/*  f1744a8:	00401825 */ 	or	$v1,$v0,$zero
.L0f1744ac:
/*  f1744ac:	306d0fff */ 	andi	$t5,$v1,0xfff
/*  f1744b0:	000dc300 */ 	sll	$t8,$t5,0xc
/*  f1744b4:	3c010700 */ 	lui	$at,0x700
/*  f1744b8:	0301c825 */ 	or	$t9,$t8,$at
/*  f1744bc:	100000b4 */ 	beqz	$zero,.L0f174790
/*  f1744c0:	ac990004 */ 	sw	$t9,0x4($a0)
.L0f1744c4:
/*  f1744c4:	00003825 */ 	or	$a3,$zero,$zero
/*  f1744c8:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f1744cc:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f1744d0:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f1744d4:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f1744d8:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f1744dc:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f1744e0:	0fc5ce9c */ 	jal	func0f173a70
/*  f1744e4:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f1744e8:	1040000d */ 	beqz	$v0,.L0f174520
/*  f1744ec:	8fa800a0 */ 	lw	$t0,0xa0($sp)
/*  f1744f0:	8faa0094 */ 	lw	$t2,0x94($sp)
/*  f1744f4:	02001025 */ 	or	$v0,$s0,$zero
/*  f1744f8:	3c01f500 */ 	lui	$at,0xf500
/*  f1744fc:	314b0003 */ 	andi	$t3,$t2,0x3
/*  f174500:	000b64c0 */ 	sll	$t4,$t3,0x13
/*  f174504:	01817025 */ 	or	$t6,$t4,$at
/*  f174508:	310f01ff */ 	andi	$t7,$t0,0x1ff
/*  f17450c:	01cf6825 */ 	or	$t5,$t6,$t7
/*  f174510:	3c180500 */ 	lui	$t8,0x500
/*  f174514:	ac580004 */ 	sw	$t8,0x4($v0)
/*  f174518:	ac4d0000 */ 	sw	$t5,0x0($v0)
/*  f17451c:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f174520:
/*  f174520:	02001825 */ 	or	$v1,$s0,$zero
/*  f174524:	3c07e600 */ 	lui	$a3,0xe600
/*  f174528:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f17452c:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174530:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f174534:	02002025 */ 	or	$a0,$s0,$zero
/*  f174538:	3c19f300 */ 	lui	$t9,0xf300
/*  f17453c:	ac990000 */ 	sw	$t9,0x0($a0)
/*  f174540:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f174544:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174548:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f17454c:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174550:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f174554:	10200003 */ 	beqz	$at,.L0f174564
/*  f174558:	00000000 */ 	sll	$zero,$zero,0x0
/*  f17455c:	10000001 */ 	beqz	$zero,.L0f174564
/*  f174560:	00401825 */ 	or	$v1,$v0,$zero
.L0f174564:
/*  f174564:	306a0fff */ 	andi	$t2,$v1,0xfff
/*  f174568:	000a5b00 */ 	sll	$t3,$t2,0xc
/*  f17456c:	3c010500 */ 	lui	$at,0x500
/*  f174570:	01616025 */ 	or	$t4,$t3,$at
/*  f174574:	10000086 */ 	beqz	$zero,.L0f174790
/*  f174578:	ac8c0004 */ 	sw	$t4,0x4($a0)
.L0f17457c:
/*  f17457c:	8d2e0008 */ 	lw	$t6,0x8($t1)
/*  f174580:	3c01fd00 */ 	lui	$at,0xfd00
/*  f174584:	316c0003 */ 	andi	$t4,$t3,0x3
/*  f174588:	000e7ec0 */ 	sll	$t7,$t6,0x1b
/*  f17458c:	000f6f42 */ 	srl	$t5,$t7,0x1d
/*  f174590:	31b80007 */ 	andi	$t8,$t5,0x7
/*  f174594:	0018cd40 */ 	sll	$t9,$t8,0x15
/*  f174598:	03215025 */ 	or	$t2,$t9,$at
/*  f17459c:	000c74c0 */ 	sll	$t6,$t4,0x13
/*  f1745a0:	014e7825 */ 	or	$t7,$t2,$t6
/*  f1745a4:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f1745a8:	8d2d0004 */ 	lw	$t5,0x4($t1)
/*  f1745ac:	3c038008 */ 	lui	$v1,%hi(var800844d0)
/*  f1745b0:	246344d0 */ 	addiu	$v1,$v1,%lo(var800844d0)
/*  f1745b4:	ac4d0004 */ 	sw	$t5,0x4($v0)
/*  f1745b8:	8c780000 */ 	lw	$t8,0x0($v1)
/*  f1745bc:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1745c0:	02001025 */ 	or	$v0,$s0,$zero
/*  f1745c4:	17000006 */ 	bnez	$t8,.L0f1745e0
/*  f1745c8:	3c19e700 */ 	lui	$t9,0xe700
/*  f1745cc:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f1745d0:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f1745d4:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f1745d8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1745dc:	ac6b0000 */ 	sw	$t3,0x0($v1)
.L0f1745e0:
/*  f1745e0:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f1745e4:	24010002 */ 	addiu	$at,$zero,0x2
/*  f1745e8:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f1745ec:	14c10019 */ 	bne	$a2,$at,.L0f174654
/*  f1745f0:	00002825 */ 	or	$a1,$zero,$zero
/*  f1745f4:	15000017 */ 	bnez	$t0,.L0f174654
/*  f1745f8:	3c07e600 */ 	lui	$a3,0xe600
/*  f1745fc:	02001825 */ 	or	$v1,$s0,$zero
/*  f174600:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174604:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174608:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f17460c:	02002025 */ 	or	$a0,$s0,$zero
/*  f174610:	3c0cf300 */ 	lui	$t4,0xf300
/*  f174614:	ac8c0000 */ 	sw	$t4,0x0($a0)
/*  f174618:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f17461c:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174620:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174624:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174628:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f17462c:	10200003 */ 	beqz	$at,.L0f17463c
/*  f174630:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174634:	10000001 */ 	beqz	$zero,.L0f17463c
/*  f174638:	00401825 */ 	or	$v1,$v0,$zero
.L0f17463c:
/*  f17463c:	306a0fff */ 	andi	$t2,$v1,0xfff
/*  f174640:	000a7300 */ 	sll	$t6,$t2,0xc
/*  f174644:	3c010700 */ 	lui	$at,0x700
/*  f174648:	01c17825 */ 	or	$t7,$t6,$at
/*  f17464c:	1000002f */ 	beqz	$zero,.L0f17470c
/*  f174650:	ac8f0004 */ 	sw	$t7,0x4($a0)
.L0f174654:
/*  f174654:	00003825 */ 	or	$a3,$zero,$zero
/*  f174658:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f17465c:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f174660:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f174664:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f174668:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f17466c:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f174670:	0fc5ce9c */ 	jal	func0f173a70
/*  f174674:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f174678:	8fa800a0 */ 	lw	$t0,0xa0($sp)
/*  f17467c:	1040000d */ 	beqz	$v0,.L0f1746b4
/*  f174680:	8fa9009c */ 	lw	$t1,0x9c($sp)
/*  f174684:	8fad0094 */ 	lw	$t5,0x94($sp)
/*  f174688:	02001025 */ 	or	$v0,$s0,$zero
/*  f17468c:	3c01f500 */ 	lui	$at,0xf500
/*  f174690:	31b80003 */ 	andi	$t8,$t5,0x3
/*  f174694:	0018ccc0 */ 	sll	$t9,$t8,0x13
/*  f174698:	03215825 */ 	or	$t3,$t9,$at
/*  f17469c:	310c01ff */ 	andi	$t4,$t0,0x1ff
/*  f1746a0:	016c5025 */ 	or	$t2,$t3,$t4
/*  f1746a4:	3c0e0500 */ 	lui	$t6,0x500
/*  f1746a8:	ac4e0004 */ 	sw	$t6,0x4($v0)
/*  f1746ac:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f1746b0:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f1746b4:
/*  f1746b4:	02001825 */ 	or	$v1,$s0,$zero
/*  f1746b8:	3c07e600 */ 	lui	$a3,0xe600
/*  f1746bc:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1746c0:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f1746c4:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f1746c8:	02002025 */ 	or	$a0,$s0,$zero
/*  f1746cc:	3c0ff300 */ 	lui	$t7,0xf300
/*  f1746d0:	ac8f0000 */ 	sw	$t7,0x0($a0)
/*  f1746d4:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f1746d8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f1746dc:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f1746e0:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f1746e4:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f1746e8:	10200003 */ 	beqz	$at,.L0f1746f8
/*  f1746ec:	00000000 */ 	sll	$zero,$zero,0x0
/*  f1746f0:	10000001 */ 	beqz	$zero,.L0f1746f8
/*  f1746f4:	00401825 */ 	or	$v1,$v0,$zero
.L0f1746f8:
/*  f1746f8:	306d0fff */ 	andi	$t5,$v1,0xfff
/*  f1746fc:	000dc300 */ 	sll	$t8,$t5,0xc
/*  f174700:	3c010500 */ 	lui	$at,0x500
/*  f174704:	0301c825 */ 	or	$t9,$t8,$at
/*  f174708:	ac990004 */ 	sw	$t9,0x4($a0)
.L0f17470c:
/*  f17470c:	912b000a */ 	lbu	$t3,0xa($t1)
/*  f174710:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f174714:	240c03ff */ 	addiu	$t4,$zero,0x3ff
/*  f174718:	018b1023 */ 	subu	$v0,$t4,$t3
/*  f17471c:	0045082b */ 	sltu	$at,$v0,$a1
/*  f174720:	10200003 */ 	beqz	$at,.L0f174730
/*  f174724:	00003025 */ 	or	$a2,$zero,$zero
/*  f174728:	10000001 */ 	beqz	$zero,.L0f174730
/*  f17472c:	00403025 */ 	or	$a2,$v0,$zero
.L0f174730:
/*  f174730:	00a62823 */ 	subu	$a1,$a1,$a2
/*  f174734:	02001025 */ 	or	$v0,$s0,$zero
/*  f174738:	30af03ff */ 	andi	$t7,$a1,0x3ff
/*  f17473c:	000f6b80 */ 	sll	$t5,$t7,0xe
/*  f174740:	30c403ff */ 	andi	$a0,$a2,0x3ff
/*  f174744:	3c01f000 */ 	lui	$at,0xf000
/*  f174748:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f17474c:	01a1c025 */ 	or	$t8,$t5,$at
/*  f174750:	00047080 */ 	sll	$t6,$a0,0x2
/*  f174754:	ac470000 */ 	sw	$a3,0x0($v0)
/*  f174758:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f17475c:	030ec825 */ 	or	$t9,$t8,$t6
/*  f174760:	02001825 */ 	or	$v1,$s0,$zero
/*  f174764:	ac790000 */ 	sw	$t9,0x0($v1)
/*  f174768:	912c000a */ 	lbu	$t4,0xa($t1)
/*  f17476c:	01c02025 */ 	or	$a0,$t6,$zero
/*  f174770:	3c010600 */ 	lui	$at,0x600
/*  f174774:	01855821 */ 	addu	$t3,$t4,$a1
/*  f174778:	316a03ff */ 	andi	$t2,$t3,0x3ff
/*  f17477c:	000a7380 */ 	sll	$t6,$t2,0xe
/*  f174780:	01c17825 */ 	or	$t7,$t6,$at
/*  f174784:	01e46825 */ 	or	$t5,$t7,$a0
/*  f174788:	ac6d0004 */ 	sw	$t5,0x4($v1)
/*  f17478c:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f174790:
/*  f174790:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f174794:	02001025 */ 	or	$v0,$s0,$zero
/*  f174798:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f17479c:	03e00008 */ 	jr	$ra
/*  f1747a0:	27bd0098 */ 	addiu	$sp,$sp,0x98
);

GLOBAL_ASM(
glabel func0f1747a4
/*  f1747a4:	27bdff48 */ 	addiu	$sp,$sp,-184
/*  f1747a8:	8fae00d4 */ 	lw	$t6,0xd4($sp)
/*  f1747ac:	afbf005c */ 	sw	$ra,0x5c($sp)
/*  f1747b0:	afbe0058 */ 	sw	$s8,0x58($sp)
/*  f1747b4:	afb70054 */ 	sw	$s7,0x54($sp)
/*  f1747b8:	afb60050 */ 	sw	$s6,0x50($sp)
/*  f1747bc:	afb5004c */ 	sw	$s5,0x4c($sp)
/*  f1747c0:	afb40048 */ 	sw	$s4,0x48($sp)
/*  f1747c4:	afb30044 */ 	sw	$s3,0x44($sp)
/*  f1747c8:	afb20040 */ 	sw	$s2,0x40($sp)
/*  f1747cc:	afb1003c */ 	sw	$s1,0x3c($sp)
/*  f1747d0:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f1747d4:	afa600c0 */ 	sw	$a2,0xc0($sp)
/*  f1747d8:	afa700c4 */ 	sw	$a3,0xc4($sp)
/*  f1747dc:	afae00b4 */ 	sw	$t6,0xb4($sp)
/*  f1747e0:	90a2000b */ 	lbu	$v0,0xb($a1)
/*  f1747e4:	8fb000d0 */ 	lw	$s0,0xd0($sp)
/*  f1747e8:	00a0a825 */ 	or	$s5,$a1,$zero
/*  f1747ec:	00027942 */ 	srl	$t7,$v0,0x5
/*  f1747f0:	0080b025 */ 	or	$s6,$a0,$zero
/*  f1747f4:	06000005 */ 	bltz	$s0,.L0f17480c
/*  f1747f8:	01e01025 */ 	or	$v0,$t7,$zero
/*  f1747fc:	020f082a */ 	slt	$at,$s0,$t7
/*  f174800:	50200003 */ 	beqzl	$at,.L0f174810
/*  f174804:	8fa300cc */ 	lw	$v1,0xcc($sp)
/*  f174808:	02001025 */ 	or	$v0,$s0,$zero
.L0f17480c:
/*  f17480c:	8fa300cc */ 	lw	$v1,0xcc($sp)
.L0f174810:
/*  f174810:	00433021 */ 	addu	$a2,$v0,$v1
/*  f174814:	0066082a */ 	slt	$at,$v1,$a2
/*  f174818:	102000c1 */ 	beqz	$at,.L0f174b20
/*  f17481c:	0060f025 */ 	or	$s8,$v1,$zero
/*  f174820:	28610006 */ 	slti	$at,$v1,0x6
/*  f174824:	102000be */ 	beqz	$at,.L0f174b20
/*  f174828:	00639023 */ 	subu	$s2,$v1,$v1
/*  f17482c:	afa60064 */ 	sw	$a2,0x64($sp)
/*  f174830:	02a02025 */ 	or	$a0,$s5,$zero
.L0f174834:
/*  f174834:	0fc5cf04 */ 	jal	func0f173c10
/*  f174838:	02402825 */ 	or	$a1,$s2,$zero
/*  f17483c:	0fc5cfc6 */ 	jal	func0f173f18
/*  f174840:	00402025 */ 	or	$a0,$v0,$zero
/*  f174844:	00409825 */ 	or	$s3,$v0,$zero
/*  f174848:	02a02025 */ 	or	$a0,$s5,$zero
/*  f17484c:	0fc5cf2e */ 	jal	func0f173cb8
/*  f174850:	02402825 */ 	or	$a1,$s2,$zero
/*  f174854:	0fc5cfc6 */ 	jal	func0f173f18
/*  f174858:	00402025 */ 	or	$a0,$v0,$zero
/*  f17485c:	0040a025 */ 	or	$s4,$v0,$zero
/*  f174860:	02a02025 */ 	or	$a0,$s5,$zero
/*  f174864:	0fc5cf58 */ 	jal	func0f173d60
/*  f174868:	02402825 */ 	or	$a1,$s2,$zero
/*  f17486c:	00408025 */ 	or	$s0,$v0,$zero
/*  f174870:	02a02025 */ 	or	$a0,$s5,$zero
/*  f174874:	0fc5cf84 */ 	jal	func0f173e10
/*  f174878:	02402825 */ 	or	$a1,$s2,$zero
/*  f17487c:	afa20080 */ 	sw	$v0,0x80($sp)
/*  f174880:	8ea3000c */ 	lw	$v1,0xc($s5)
/*  f174884:	0003c080 */ 	sll	$t8,$v1,0x2
/*  f174888:	00032782 */ 	srl	$a0,$v1,0x1e
/*  f17488c:	0018cfc2 */ 	srl	$t9,$t8,0x1f
/*  f174890:	00044380 */ 	sll	$t0,$a0,0xe
/*  f174894:	afb9007c */ 	sw	$t9,0x7c($sp)
/*  f174898:	0fc5ce91 */ 	jal	func0f173a44
/*  f17489c:	01002025 */ 	or	$a0,$t0,$zero
/*  f1748a0:	1040000a */ 	beqz	$v0,.L0f1748cc
/*  f1748a4:	03c02025 */ 	or	$a0,$s8,$zero
/*  f1748a8:	3c09ba00 */ 	lui	$t1,0xba00
/*  f1748ac:	35290e02 */ 	ori	$t1,$t1,0xe02
/*  f1748b0:	02c01025 */ 	or	$v0,$s6,$zero
/*  f1748b4:	ac490000 */ 	sw	$t1,0x0($v0)
/*  f1748b8:	8eaa000c */ 	lw	$t2,0xc($s5)
/*  f1748bc:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f1748c0:	000a5f82 */ 	srl	$t3,$t2,0x1e
/*  f1748c4:	000b6380 */ 	sll	$t4,$t3,0xe
/*  f1748c8:	ac4c0004 */ 	sw	$t4,0x4($v0)
.L0f1748cc:
/*  f1748cc:	8ea20008 */ 	lw	$v0,0x8($s5)
/*  f1748d0:	8fae00b4 */ 	lw	$t6,0xb4($sp)
/*  f1748d4:	8faf00c0 */ 	lw	$t7,0xc0($sp)
/*  f1748d8:	8fb800c4 */ 	lw	$t8,0xc4($sp)
/*  f1748dc:	00022ec0 */ 	sll	$a1,$v0,0x1b
/*  f1748e0:	00056f42 */ 	srl	$t5,$a1,0x1d
/*  f1748e4:	01a02825 */ 	or	$a1,$t5,$zero
/*  f1748e8:	afb20028 */ 	sw	$s2,0x28($sp)
/*  f1748ec:	afb20024 */ 	sw	$s2,0x24($sp)
/*  f1748f0:	afb40020 */ 	sw	$s4,0x20($sp)
/*  f1748f4:	afb3001c */ 	sw	$s3,0x1c($sp)
/*  f1748f8:	02003825 */ 	or	$a3,$s0,$zero
/*  f1748fc:	30460003 */ 	andi	$a2,$v0,0x3
/*  f174900:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f174904:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f174908:	0fc5ce9c */ 	jal	func0f173a70
/*  f17490c:	afb80018 */ 	sw	$t8,0x18($sp)
/*  f174910:	1040002c */ 	beqz	$v0,.L0f1749c4
/*  f174914:	02c08825 */ 	or	$s1,$s6,$zero
/*  f174918:	8eac0008 */ 	lw	$t4,0x8($s5)
/*  f17491c:	3c01f500 */ 	lui	$at,0xf500
/*  f174920:	321801ff */ 	andi	$t8,$s0,0x1ff
/*  f174924:	000ccec0 */ 	sll	$t9,$t4,0x1b
/*  f174928:	00194742 */ 	srl	$t0,$t9,0x1d
/*  f17492c:	31090007 */ 	andi	$t1,$t0,0x7
/*  f174930:	00095540 */ 	sll	$t2,$t1,0x15
/*  f174934:	8fa900b4 */ 	lw	$t1,0xb4($sp)
/*  f174938:	318d0003 */ 	andi	$t5,$t4,0x3
/*  f17493c:	000d74c0 */ 	sll	$t6,$t5,0x13
/*  f174940:	01415825 */ 	or	$t3,$t2,$at
/*  f174944:	016e7825 */ 	or	$t7,$t3,$t6
/*  f174948:	0018ca40 */ 	sll	$t9,$t8,0x9
/*  f17494c:	01f94025 */ 	or	$t0,$t7,$t9
/*  f174950:	312a01ff */ 	andi	$t2,$t1,0x1ff
/*  f174954:	010a6025 */ 	or	$t4,$t0,$t2
/*  f174958:	ae2c0000 */ 	sw	$t4,0x0($s1)
/*  f17495c:	8fa400c4 */ 	lw	$a0,0xc4($sp)
/*  f174960:	0fc5cfd2 */ 	jal	func0f173f48
/*  f174964:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f174968:	00408025 */ 	or	$s0,$v0,$zero
/*  f17496c:	0fc5cfd2 */ 	jal	func0f173f48
/*  f174970:	8fa400c0 */ 	lw	$a0,0xc0($sp)
/*  f174974:	304d0003 */ 	andi	$t5,$v0,0x3
/*  f174978:	33ce0007 */ 	andi	$t6,$s8,0x7
/*  f17497c:	000ec600 */ 	sll	$t8,$t6,0x18
/*  f174980:	000d5a00 */ 	sll	$t3,$t5,0x8
/*  f174984:	01787825 */ 	or	$t7,$t3,$t8
/*  f174988:	32190003 */ 	andi	$t9,$s0,0x3
/*  f17498c:	00194c80 */ 	sll	$t1,$t9,0x12
/*  f174990:	328a000f */ 	andi	$t2,$s4,0xf
/*  f174994:	000a6380 */ 	sll	$t4,$t2,0xe
/*  f174998:	01e94025 */ 	or	$t0,$t7,$t1
/*  f17499c:	324e000f */ 	andi	$t6,$s2,0xf
/*  f1749a0:	000e5a80 */ 	sll	$t3,$t6,0xa
/*  f1749a4:	010c6825 */ 	or	$t5,$t0,$t4
/*  f1749a8:	3279000f */ 	andi	$t9,$s3,0xf
/*  f1749ac:	00197900 */ 	sll	$t7,$t9,0x4
/*  f1749b0:	01abc025 */ 	or	$t8,$t5,$t3
/*  f1749b4:	030f4825 */ 	or	$t1,$t8,$t7
/*  f1749b8:	324a000f */ 	andi	$t2,$s2,0xf
/*  f1749bc:	012a4025 */ 	or	$t0,$t1,$t2
/*  f1749c0:	ae280004 */ 	sw	$t0,0x4($s1)
.L0f1749c4:
/*  f1749c4:	8fa200c8 */ 	lw	$v0,0xc8($sp)
/*  f1749c8:	24030002 */ 	addiu	$v1,$zero,0x2
/*  f1749cc:	02a02025 */ 	or	$a0,$s5,$zero
/*  f1749d0:	14430006 */ 	bne	$v0,$v1,.L0f1749ec
/*  f1749d4:	02402825 */ 	or	$a1,$s2,$zero
/*  f1749d8:	8fac007c */ 	lw	$t4,0x7c($sp)
/*  f1749dc:	55800004 */ 	bnezl	$t4,.L0f1749f0
/*  f1749e0:	00008025 */ 	or	$s0,$zero,$zero
/*  f1749e4:	10000002 */ 	beqz	$zero,.L0f1749f0
/*  f1749e8:	00608025 */ 	or	$s0,$v1,$zero
.L0f1749ec:
/*  f1749ec:	00008025 */ 	or	$s0,$zero,$zero
.L0f1749f0:
/*  f1749f0:	14430006 */ 	bne	$v0,$v1,.L0f174a0c
/*  f1749f4:	afb00090 */ 	sw	$s0,0x90($sp)
/*  f1749f8:	8fae007c */ 	lw	$t6,0x7c($sp)
/*  f1749fc:	55c00004 */ 	bnezl	$t6,.L0f174a10
/*  f174a00:	00008025 */ 	or	$s0,$zero,$zero
/*  f174a04:	10000002 */ 	beqz	$zero,.L0f174a10
/*  f174a08:	00608025 */ 	or	$s0,$v1,$zero
.L0f174a0c:
/*  f174a0c:	00008025 */ 	or	$s0,$zero,$zero
.L0f174a10:
/*  f174a10:	0fc5cf04 */ 	jal	func0f173c10
/*  f174a14:	0200b825 */ 	or	$s7,$s0,$zero
/*  f174a18:	8fad00c8 */ 	lw	$t5,0xc8($sp)
/*  f174a1c:	00409825 */ 	or	$s3,$v0,$zero
/*  f174a20:	24010002 */ 	addiu	$at,$zero,0x2
/*  f174a24:	15a10006 */ 	bne	$t5,$at,.L0f174a40
/*  f174a28:	2679ffff */ 	addiu	$t9,$s3,-1
/*  f174a2c:	8fab007c */ 	lw	$t3,0x7c($sp)
/*  f174a30:	55600004 */ 	bnezl	$t3,.L0f174a44
/*  f174a34:	00008025 */ 	or	$s0,$zero,$zero
/*  f174a38:	10000002 */ 	beqz	$zero,.L0f174a44
/*  f174a3c:	24100002 */ 	addiu	$s0,$zero,0x2
.L0f174a40:
/*  f174a40:	00008025 */ 	or	$s0,$zero,$zero
.L0f174a44:
/*  f174a44:	0019c080 */ 	sll	$t8,$t9,0x2
/*  f174a48:	0218a021 */ 	addu	$s4,$s0,$t8
/*  f174a4c:	02a02025 */ 	or	$a0,$s5,$zero
/*  f174a50:	0fc5cf2e */ 	jal	func0f173cb8
/*  f174a54:	02402825 */ 	or	$a1,$s2,$zero
/*  f174a58:	8faf00c8 */ 	lw	$t7,0xc8($sp)
/*  f174a5c:	24010002 */ 	addiu	$at,$zero,0x2
/*  f174a60:	00409825 */ 	or	$s3,$v0,$zero
/*  f174a64:	15e10006 */ 	bne	$t7,$at,.L0f174a80
/*  f174a68:	03c02025 */ 	or	$a0,$s8,$zero
/*  f174a6c:	8fa9007c */ 	lw	$t1,0x7c($sp)
/*  f174a70:	55200004 */ 	bnezl	$t1,.L0f174a84
/*  f174a74:	00008025 */ 	or	$s0,$zero,$zero
/*  f174a78:	10000002 */ 	beqz	$zero,.L0f174a84
/*  f174a7c:	24100002 */ 	addiu	$s0,$zero,0x2
.L0f174a80:
/*  f174a80:	00008025 */ 	or	$s0,$zero,$zero
.L0f174a84:
/*  f174a84:	266affff */ 	addiu	$t2,$s3,-1
/*  f174a88:	000a4080 */ 	sll	$t0,$t2,0x2
/*  f174a8c:	02088821 */ 	addu	$s1,$s0,$t0
/*  f174a90:	afb10010 */ 	sw	$s1,0x10($sp)
/*  f174a94:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f174a98:	02e03025 */ 	or	$a2,$s7,$zero
/*  f174a9c:	0fc5cee3 */ 	jal	func0f173b8c
/*  f174aa0:	02803825 */ 	or	$a3,$s4,$zero
/*  f174aa4:	10400013 */ 	beqz	$v0,.L0f174af4
/*  f174aa8:	26520001 */ 	addiu	$s2,$s2,0x1
/*  f174aac:	8fac0090 */ 	lw	$t4,0x90($sp)
/*  f174ab0:	3c01f200 */ 	lui	$at,0xf200
/*  f174ab4:	33cf0007 */ 	andi	$t7,$s8,0x7
/*  f174ab8:	318e0fff */ 	andi	$t6,$t4,0xfff
/*  f174abc:	000e6b00 */ 	sll	$t5,$t6,0xc
/*  f174ac0:	328a0fff */ 	andi	$t2,$s4,0xfff
/*  f174ac4:	000a4300 */ 	sll	$t0,$t2,0xc
/*  f174ac8:	01a15825 */ 	or	$t3,$t5,$at
/*  f174acc:	000f4e00 */ 	sll	$t1,$t7,0x18
/*  f174ad0:	02c01025 */ 	or	$v0,$s6,$zero
/*  f174ad4:	01286025 */ 	or	$t4,$t1,$t0
/*  f174ad8:	322e0fff */ 	andi	$t6,$s1,0xfff
/*  f174adc:	32f90fff */ 	andi	$t9,$s7,0xfff
/*  f174ae0:	0179c025 */ 	or	$t8,$t3,$t9
/*  f174ae4:	018e6825 */ 	or	$t5,$t4,$t6
/*  f174ae8:	ac4d0004 */ 	sw	$t5,0x4($v0)
/*  f174aec:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f174af0:	26d60008 */ 	addiu	$s6,$s6,0x8
.L0f174af4:
/*  f174af4:	8faf0064 */ 	lw	$t7,0x64($sp)
/*  f174af8:	8fab00b4 */ 	lw	$t3,0xb4($sp)
/*  f174afc:	8fb90080 */ 	lw	$t9,0x80($sp)
/*  f174b00:	27de0001 */ 	addiu	$s8,$s8,0x1
/*  f174b04:	03cf082a */ 	slt	$at,$s8,$t7
/*  f174b08:	0179c021 */ 	addu	$t8,$t3,$t9
/*  f174b0c:	10200004 */ 	beqz	$at,.L0f174b20
/*  f174b10:	afb800b4 */ 	sw	$t8,0xb4($sp)
/*  f174b14:	2bc10006 */ 	slti	$at,$s8,0x6
/*  f174b18:	5420ff46 */ 	bnezl	$at,.L0f174834
/*  f174b1c:	02a02025 */ 	or	$a0,$s5,$zero
.L0f174b20:
/*  f174b20:	8fbf005c */ 	lw	$ra,0x5c($sp)
/*  f174b24:	02c01025 */ 	or	$v0,$s6,$zero
/*  f174b28:	8fb60050 */ 	lw	$s6,0x50($sp)
/*  f174b2c:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f174b30:	8fb1003c */ 	lw	$s1,0x3c($sp)
/*  f174b34:	8fb20040 */ 	lw	$s2,0x40($sp)
/*  f174b38:	8fb30044 */ 	lw	$s3,0x44($sp)
/*  f174b3c:	8fb40048 */ 	lw	$s4,0x48($sp)
/*  f174b40:	8fb5004c */ 	lw	$s5,0x4c($sp)
/*  f174b44:	8fb70054 */ 	lw	$s7,0x54($sp)
/*  f174b48:	8fbe0058 */ 	lw	$s8,0x58($sp)
/*  f174b4c:	03e00008 */ 	jr	$ra
/*  f174b50:	27bd00b8 */ 	addiu	$sp,$sp,0xb8
);

GLOBAL_ASM(
glabel func0f174b54
/*  f174b54:	27bdff68 */ 	addiu	$sp,$sp,-152
/*  f174b58:	afb00038 */ 	sw	$s0,0x38($sp)
/*  f174b5c:	00808025 */ 	or	$s0,$a0,$zero
/*  f174b60:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f174b64:	afa5009c */ 	sw	$a1,0x9c($sp)
/*  f174b68:	00a02025 */ 	or	$a0,$a1,$zero
/*  f174b6c:	27a50094 */ 	addiu	$a1,$sp,0x94
/*  f174b70:	0fc5cf94 */ 	jal	func0f173e50
/*  f174b74:	27a60090 */ 	addiu	$a2,$sp,0x90
/*  f174b78:	8fa8009c */ 	lw	$t0,0x9c($sp)
/*  f174b7c:	3c01fd00 */ 	lui	$at,0xfd00
/*  f174b80:	8fad0094 */ 	lw	$t5,0x94($sp)
/*  f174b84:	8d0e000c */ 	lw	$t6,0xc($t0)
/*  f174b88:	02001025 */ 	or	$v0,$s0,$zero
/*  f174b8c:	000e7f82 */ 	srl	$t7,$t6,0x1e
/*  f174b90:	15e00061 */ 	bnez	$t7,.L0f174d18
/*  f174b94:	8fae0094 */ 	lw	$t6,0x94($sp)
/*  f174b98:	8d180008 */ 	lw	$t8,0x8($t0)
/*  f174b9c:	31ae0003 */ 	andi	$t6,$t5,0x3
/*  f174ba0:	000e7cc0 */ 	sll	$t7,$t6,0x13
/*  f174ba4:	0018cec0 */ 	sll	$t9,$t8,0x1b
/*  f174ba8:	00194f42 */ 	srl	$t1,$t9,0x1d
/*  f174bac:	312a0007 */ 	andi	$t2,$t1,0x7
/*  f174bb0:	000a5d40 */ 	sll	$t3,$t2,0x15
/*  f174bb4:	01616025 */ 	or	$t4,$t3,$at
/*  f174bb8:	018fc025 */ 	or	$t8,$t4,$t7
/*  f174bbc:	02001025 */ 	or	$v0,$s0,$zero
/*  f174bc0:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f174bc4:	8d190004 */ 	lw	$t9,0x4($t0)
/*  f174bc8:	3c038008 */ 	lui	$v1,%hi(var800844d0)
/*  f174bcc:	246344d0 */ 	addiu	$v1,$v1,%lo(var800844d0)
/*  f174bd0:	ac590004 */ 	sw	$t9,0x4($v0)
/*  f174bd4:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f174bd8:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174bdc:	02001025 */ 	or	$v0,$s0,$zero
/*  f174be0:	15200006 */ 	bnez	$t1,.L0f174bfc
/*  f174be4:	3c0ae700 */ 	lui	$t2,0xe700
/*  f174be8:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f174bec:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f174bf0:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f174bf4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174bf8:	ac6b0000 */ 	sw	$t3,0x0($v1)
.L0f174bfc:
/*  f174bfc:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f174c00:	24010002 */ 	addiu	$at,$zero,0x2
/*  f174c04:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f174c08:	14c10018 */ 	bne	$a2,$at,.L0f174c6c
/*  f174c0c:	00002825 */ 	or	$a1,$zero,$zero
/*  f174c10:	02001825 */ 	or	$v1,$s0,$zero
/*  f174c14:	3c07e600 */ 	lui	$a3,0xe600
/*  f174c18:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174c1c:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174c20:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f174c24:	02002025 */ 	or	$a0,$s0,$zero
/*  f174c28:	3c0df300 */ 	lui	$t5,0xf300
/*  f174c2c:	ac8d0000 */ 	sw	$t5,0x0($a0)
/*  f174c30:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f174c34:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174c38:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174c3c:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174c40:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f174c44:	10200003 */ 	beqz	$at,.L0f174c54
/*  f174c48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174c4c:	10000001 */ 	beqz	$zero,.L0f174c54
/*  f174c50:	00401825 */ 	or	$v1,$v0,$zero
.L0f174c54:
/*  f174c54:	306e0fff */ 	andi	$t6,$v1,0xfff
/*  f174c58:	000e6300 */ 	sll	$t4,$t6,0xc
/*  f174c5c:	3c010700 */ 	lui	$at,0x700
/*  f174c60:	01817825 */ 	or	$t7,$t4,$at
/*  f174c64:	100000ad */ 	beqz	$zero,.L0f174f1c
/*  f174c68:	ac8f0004 */ 	sw	$t7,0x4($a0)
.L0f174c6c:
/*  f174c6c:	00003825 */ 	or	$a3,$zero,$zero
/*  f174c70:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f174c74:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f174c78:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f174c7c:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f174c80:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f174c84:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f174c88:	0fc5ce9c */ 	jal	func0f173a70
/*  f174c8c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f174c90:	1040000b */ 	beqz	$v0,.L0f174cc0
/*  f174c94:	3c07e600 */ 	lui	$a3,0xe600
/*  f174c98:	8fb80094 */ 	lw	$t8,0x94($sp)
/*  f174c9c:	02001025 */ 	or	$v0,$s0,$zero
/*  f174ca0:	3c01f500 */ 	lui	$at,0xf500
/*  f174ca4:	33190003 */ 	andi	$t9,$t8,0x3
/*  f174ca8:	00194cc0 */ 	sll	$t1,$t9,0x13
/*  f174cac:	01215025 */ 	or	$t2,$t1,$at
/*  f174cb0:	3c0b0500 */ 	lui	$t3,0x500
/*  f174cb4:	ac4b0004 */ 	sw	$t3,0x4($v0)
/*  f174cb8:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f174cbc:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f174cc0:
/*  f174cc0:	02001825 */ 	or	$v1,$s0,$zero
/*  f174cc4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174cc8:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174ccc:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f174cd0:	02002025 */ 	or	$a0,$s0,$zero
/*  f174cd4:	3c0df300 */ 	lui	$t5,0xf300
/*  f174cd8:	ac8d0000 */ 	sw	$t5,0x0($a0)
/*  f174cdc:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f174ce0:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174ce4:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174ce8:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174cec:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f174cf0:	10200003 */ 	beqz	$at,.L0f174d00
/*  f174cf4:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174cf8:	10000001 */ 	beqz	$zero,.L0f174d00
/*  f174cfc:	00401825 */ 	or	$v1,$v0,$zero
.L0f174d00:
/*  f174d00:	306e0fff */ 	andi	$t6,$v1,0xfff
/*  f174d04:	000e6300 */ 	sll	$t4,$t6,0xc
/*  f174d08:	3c010500 */ 	lui	$at,0x500
/*  f174d0c:	01817825 */ 	or	$t7,$t4,$at
/*  f174d10:	10000082 */ 	beqz	$zero,.L0f174f1c
/*  f174d14:	ac8f0004 */ 	sw	$t7,0x4($a0)
.L0f174d18:
/*  f174d18:	8d180008 */ 	lw	$t8,0x8($t0)
/*  f174d1c:	3c01fd00 */ 	lui	$at,0xfd00
/*  f174d20:	31cc0003 */ 	andi	$t4,$t6,0x3
/*  f174d24:	0018cec0 */ 	sll	$t9,$t8,0x1b
/*  f174d28:	00194f42 */ 	srl	$t1,$t9,0x1d
/*  f174d2c:	312a0007 */ 	andi	$t2,$t1,0x7
/*  f174d30:	000a5d40 */ 	sll	$t3,$t2,0x15
/*  f174d34:	01616825 */ 	or	$t5,$t3,$at
/*  f174d38:	000c7cc0 */ 	sll	$t7,$t4,0x13
/*  f174d3c:	01afc025 */ 	or	$t8,$t5,$t7
/*  f174d40:	ac580000 */ 	sw	$t8,0x0($v0)
/*  f174d44:	8d190004 */ 	lw	$t9,0x4($t0)
/*  f174d48:	3c038008 */ 	lui	$v1,%hi(var800844d0)
/*  f174d4c:	246344d0 */ 	addiu	$v1,$v1,%lo(var800844d0)
/*  f174d50:	ac590004 */ 	sw	$t9,0x4($v0)
/*  f174d54:	8c690000 */ 	lw	$t1,0x0($v1)
/*  f174d58:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174d5c:	02001025 */ 	or	$v0,$s0,$zero
/*  f174d60:	15200006 */ 	bnez	$t1,.L0f174d7c
/*  f174d64:	3c0ae700 */ 	lui	$t2,0xe700
/*  f174d68:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f174d6c:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f174d70:	240b0001 */ 	addiu	$t3,$zero,0x1
/*  f174d74:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174d78:	ac6b0000 */ 	sw	$t3,0x0($v1)
.L0f174d7c:
/*  f174d7c:	8fa60094 */ 	lw	$a2,0x94($sp)
/*  f174d80:	24010002 */ 	addiu	$at,$zero,0x2
/*  f174d84:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f174d88:	14c10018 */ 	bne	$a2,$at,.L0f174dec
/*  f174d8c:	00002825 */ 	or	$a1,$zero,$zero
/*  f174d90:	02001825 */ 	or	$v1,$s0,$zero
/*  f174d94:	3c07e600 */ 	lui	$a3,0xe600
/*  f174d98:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174d9c:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174da0:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f174da4:	02002025 */ 	or	$a0,$s0,$zero
/*  f174da8:	3c0ef300 */ 	lui	$t6,0xf300
/*  f174dac:	ac8e0000 */ 	sw	$t6,0x0($a0)
/*  f174db0:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f174db4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174db8:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174dbc:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174dc0:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f174dc4:	10200003 */ 	beqz	$at,.L0f174dd4
/*  f174dc8:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174dcc:	10000001 */ 	beqz	$zero,.L0f174dd4
/*  f174dd0:	00401825 */ 	or	$v1,$v0,$zero
.L0f174dd4:
/*  f174dd4:	306c0fff */ 	andi	$t4,$v1,0xfff
/*  f174dd8:	000c6b00 */ 	sll	$t5,$t4,0xc
/*  f174ddc:	3c010700 */ 	lui	$at,0x700
/*  f174de0:	01a17825 */ 	or	$t7,$t5,$at
/*  f174de4:	1000002c */ 	beqz	$zero,.L0f174e98
/*  f174de8:	ac8f0004 */ 	sw	$t7,0x4($a0)
.L0f174dec:
/*  f174dec:	00003825 */ 	or	$a3,$zero,$zero
/*  f174df0:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f174df4:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f174df8:	afa00018 */ 	sw	$zero,0x18($sp)
/*  f174dfc:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f174e00:	afa00020 */ 	sw	$zero,0x20($sp)
/*  f174e04:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f174e08:	0fc5ce9c */ 	jal	func0f173a70
/*  f174e0c:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f174e10:	1040000b */ 	beqz	$v0,.L0f174e40
/*  f174e14:	8fa8009c */ 	lw	$t0,0x9c($sp)
/*  f174e18:	8fb80094 */ 	lw	$t8,0x94($sp)
/*  f174e1c:	02001025 */ 	or	$v0,$s0,$zero
/*  f174e20:	3c01f500 */ 	lui	$at,0xf500
/*  f174e24:	33190003 */ 	andi	$t9,$t8,0x3
/*  f174e28:	00194cc0 */ 	sll	$t1,$t9,0x13
/*  f174e2c:	01215025 */ 	or	$t2,$t1,$at
/*  f174e30:	3c0b0500 */ 	lui	$t3,0x500
/*  f174e34:	ac4b0004 */ 	sw	$t3,0x4($v0)
/*  f174e38:	ac4a0000 */ 	sw	$t2,0x0($v0)
/*  f174e3c:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f174e40:
/*  f174e40:	02001825 */ 	or	$v1,$s0,$zero
/*  f174e44:	3c07e600 */ 	lui	$a3,0xe600
/*  f174e48:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174e4c:	ac670000 */ 	sw	$a3,0x0($v1)
/*  f174e50:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f174e54:	02002025 */ 	or	$a0,$s0,$zero
/*  f174e58:	3c0ef300 */ 	lui	$t6,0xf300
/*  f174e5c:	ac8e0000 */ 	sw	$t6,0x0($a0)
/*  f174e60:	8fa20090 */ 	lw	$v0,0x90($sp)
/*  f174e64:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174e68:	240307ff */ 	addiu	$v1,$zero,0x7ff
/*  f174e6c:	2442ffff */ 	addiu	$v0,$v0,-1
/*  f174e70:	284107ff */ 	slti	$at,$v0,0x7ff
/*  f174e74:	10200003 */ 	beqz	$at,.L0f174e84
/*  f174e78:	00000000 */ 	sll	$zero,$zero,0x0
/*  f174e7c:	10000001 */ 	beqz	$zero,.L0f174e84
/*  f174e80:	00401825 */ 	or	$v1,$v0,$zero
.L0f174e84:
/*  f174e84:	306c0fff */ 	andi	$t4,$v1,0xfff
/*  f174e88:	000c6b00 */ 	sll	$t5,$t4,0xc
/*  f174e8c:	3c010500 */ 	lui	$at,0x500
/*  f174e90:	01a17825 */ 	or	$t7,$t5,$at
/*  f174e94:	ac8f0004 */ 	sw	$t7,0x4($a0)
.L0f174e98:
/*  f174e98:	9118000a */ 	lbu	$t8,0xa($t0)
/*  f174e9c:	8fa50090 */ 	lw	$a1,0x90($sp)
/*  f174ea0:	241903ff */ 	addiu	$t9,$zero,0x3ff
/*  f174ea4:	03381023 */ 	subu	$v0,$t9,$t8
/*  f174ea8:	0045082b */ 	sltu	$at,$v0,$a1
/*  f174eac:	10200003 */ 	beqz	$at,.L0f174ebc
/*  f174eb0:	00003025 */ 	or	$a2,$zero,$zero
/*  f174eb4:	10000001 */ 	beqz	$zero,.L0f174ebc
/*  f174eb8:	00403025 */ 	or	$a2,$v0,$zero
.L0f174ebc:
/*  f174ebc:	00a62823 */ 	subu	$a1,$a1,$a2
/*  f174ec0:	02001025 */ 	or	$v0,$s0,$zero
/*  f174ec4:	30ab03ff */ 	andi	$t3,$a1,0x3ff
/*  f174ec8:	000b7380 */ 	sll	$t6,$t3,0xe
/*  f174ecc:	30c403ff */ 	andi	$a0,$a2,0x3ff
/*  f174ed0:	3c01f000 */ 	lui	$at,0xf000
/*  f174ed4:	26100008 */ 	addiu	$s0,$s0,0x8
/*  f174ed8:	01c16025 */ 	or	$t4,$t6,$at
/*  f174edc:	00045080 */ 	sll	$t2,$a0,0x2
/*  f174ee0:	ac470000 */ 	sw	$a3,0x0($v0)
/*  f174ee4:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f174ee8:	018a6825 */ 	or	$t5,$t4,$t2
/*  f174eec:	02001825 */ 	or	$v1,$s0,$zero
/*  f174ef0:	ac6d0000 */ 	sw	$t5,0x0($v1)
/*  f174ef4:	910f000a */ 	lbu	$t7,0xa($t0)
/*  f174ef8:	01402025 */ 	or	$a0,$t2,$zero
/*  f174efc:	3c010600 */ 	lui	$at,0x600
/*  f174f00:	01e5c821 */ 	addu	$t9,$t7,$a1
/*  f174f04:	333803ff */ 	andi	$t8,$t9,0x3ff
/*  f174f08:	00184b80 */ 	sll	$t1,$t8,0xe
/*  f174f0c:	01215025 */ 	or	$t2,$t1,$at
/*  f174f10:	01445825 */ 	or	$t3,$t2,$a0
/*  f174f14:	ac6b0004 */ 	sw	$t3,0x4($v1)
/*  f174f18:	26100008 */ 	addiu	$s0,$s0,0x8
.L0f174f1c:
/*  f174f1c:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f174f20:	02001025 */ 	or	$v0,$s0,$zero
/*  f174f24:	8fb00038 */ 	lw	$s0,0x38($sp)
/*  f174f28:	03e00008 */ 	jr	$ra
/*  f174f2c:	27bd0098 */ 	addiu	$sp,$sp,0x98
);

GLOBAL_ASM(
glabel func0f174f30
/*  f174f30:	27bdff90 */ 	addiu	$sp,$sp,-112
/*  f174f34:	afb10038 */ 	sw	$s1,0x38($sp)
/*  f174f38:	00808825 */ 	or	$s1,$a0,$zero
/*  f174f3c:	afbf003c */ 	sw	$ra,0x3c($sp)
/*  f174f40:	afb00034 */ 	sw	$s0,0x34($sp)
/*  f174f44:	afa60078 */ 	sw	$a2,0x78($sp)
/*  f174f48:	afa7007c */ 	sw	$a3,0x7c($sp)
/*  f174f4c:	00a08025 */ 	or	$s0,$a1,$zero
/*  f174f50:	0fc5cfc6 */ 	jal	func0f173f18
/*  f174f54:	90a40008 */ 	lbu	$a0,0x8($a1)
/*  f174f58:	afa2006c */ 	sw	$v0,0x6c($sp)
/*  f174f5c:	0fc5cfc6 */ 	jal	func0f173f18
/*  f174f60:	92040009 */ 	lbu	$a0,0x9($s0)
/*  f174f64:	afa20068 */ 	sw	$v0,0x68($sp)
/*  f174f68:	02002025 */ 	or	$a0,$s0,$zero
/*  f174f6c:	0fc5cf58 */ 	jal	func0f173d60
/*  f174f70:	00002825 */ 	or	$a1,$zero,$zero
/*  f174f74:	afa20064 */ 	sw	$v0,0x64($sp)
/*  f174f78:	8e03000c */ 	lw	$v1,0xc($s0)
/*  f174f7c:	00037080 */ 	sll	$t6,$v1,0x2
/*  f174f80:	00032782 */ 	srl	$a0,$v1,0x1e
/*  f174f84:	000e7fc2 */ 	srl	$t7,$t6,0x1f
/*  f174f88:	0004c380 */ 	sll	$t8,$a0,0xe
/*  f174f8c:	afaf0050 */ 	sw	$t7,0x50($sp)
/*  f174f90:	0fc5ce91 */ 	jal	func0f173a44
/*  f174f94:	03002025 */ 	or	$a0,$t8,$zero
/*  f174f98:	10400009 */ 	beqz	$v0,.L0f174fc0
/*  f174f9c:	3c19ba00 */ 	lui	$t9,0xba00
/*  f174fa0:	02201025 */ 	or	$v0,$s1,$zero
/*  f174fa4:	37390e02 */ 	ori	$t9,$t9,0xe02
/*  f174fa8:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f174fac:	8e09000c */ 	lw	$t1,0xc($s0)
/*  f174fb0:	26310008 */ 	addiu	$s1,$s1,0x8
/*  f174fb4:	00095782 */ 	srl	$t2,$t1,0x1e
/*  f174fb8:	000a5b80 */ 	sll	$t3,$t2,0xe
/*  f174fbc:	ac4b0004 */ 	sw	$t3,0x4($v0)
.L0f174fc0:
/*  f174fc0:	8e020008 */ 	lw	$v0,0x8($s0)
/*  f174fc4:	8fad0078 */ 	lw	$t5,0x78($sp)
/*  f174fc8:	8fae007c */ 	lw	$t6,0x7c($sp)
/*  f174fcc:	8faf006c */ 	lw	$t7,0x6c($sp)
/*  f174fd0:	8fb80068 */ 	lw	$t8,0x68($sp)
/*  f174fd4:	00022ec0 */ 	sll	$a1,$v0,0x1b
/*  f174fd8:	00056742 */ 	srl	$t4,$a1,0x1d
/*  f174fdc:	01802825 */ 	or	$a1,$t4,$zero
/*  f174fe0:	afa00028 */ 	sw	$zero,0x28($sp)
/*  f174fe4:	afa00024 */ 	sw	$zero,0x24($sp)
/*  f174fe8:	afa00010 */ 	sw	$zero,0x10($sp)
/*  f174fec:	8fa40084 */ 	lw	$a0,0x84($sp)
/*  f174ff0:	8fa70064 */ 	lw	$a3,0x64($sp)
/*  f174ff4:	30460003 */ 	andi	$a2,$v0,0x3
/*  f174ff8:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f174ffc:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f175000:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f175004:	0fc5ce9c */ 	jal	func0f173a70
/*  f175008:	afb80020 */ 	sw	$t8,0x20($sp)
/*  f17500c:	1040002b */ 	beqz	$v0,.L0f1750bc
/*  f175010:	02201825 */ 	or	$v1,$s1,$zero
/*  f175014:	8e0d0008 */ 	lw	$t5,0x8($s0)
/*  f175018:	3c01f500 */ 	lui	$at,0xf500
/*  f17501c:	26310008 */ 	addiu	$s1,$s1,0x8
/*  f175020:	000dcec0 */ 	sll	$t9,$t5,0x1b
/*  f175024:	00194f42 */ 	srl	$t1,$t9,0x1d
/*  f175028:	8fb90064 */ 	lw	$t9,0x64($sp)
/*  f17502c:	312a0007 */ 	andi	$t2,$t1,0x7
/*  f175030:	000a5d40 */ 	sll	$t3,$t2,0x15
/*  f175034:	31ae0003 */ 	andi	$t6,$t5,0x3
/*  f175038:	000e7cc0 */ 	sll	$t7,$t6,0x13
/*  f17503c:	01616025 */ 	or	$t4,$t3,$at
/*  f175040:	332901ff */ 	andi	$t1,$t9,0x1ff
/*  f175044:	00095240 */ 	sll	$t2,$t1,0x9
/*  f175048:	018fc025 */ 	or	$t8,$t4,$t7
/*  f17504c:	030a5825 */ 	or	$t3,$t8,$t2
/*  f175050:	ac6b0000 */ 	sw	$t3,0x0($v1)
/*  f175054:	afa30048 */ 	sw	$v1,0x48($sp)
/*  f175058:	0fc5cfd2 */ 	jal	func0f173f48
/*  f17505c:	8fa4007c */ 	lw	$a0,0x7c($sp)
/*  f175060:	8fa40078 */ 	lw	$a0,0x78($sp)
/*  f175064:	0fc5cfd2 */ 	jal	func0f173f48
/*  f175068:	afa20040 */ 	sw	$v0,0x40($sp)
/*  f17506c:	8fac0084 */ 	lw	$t4,0x84($sp)
/*  f175070:	304d0003 */ 	andi	$t5,$v0,0x3
/*  f175074:	8fa30040 */ 	lw	$v1,0x40($sp)
/*  f175078:	000d7200 */ 	sll	$t6,$t5,0x8
/*  f17507c:	318f0007 */ 	andi	$t7,$t4,0x7
/*  f175080:	8fad0068 */ 	lw	$t5,0x68($sp)
/*  f175084:	000fce00 */ 	sll	$t9,$t7,0x18
/*  f175088:	01d94825 */ 	or	$t1,$t6,$t9
/*  f17508c:	8fb9006c */ 	lw	$t9,0x6c($sp)
/*  f175090:	30780003 */ 	andi	$t8,$v1,0x3
/*  f175094:	00185480 */ 	sll	$t2,$t8,0x12
/*  f175098:	31ac000f */ 	andi	$t4,$t5,0xf
/*  f17509c:	012a5825 */ 	or	$t3,$t1,$t2
/*  f1750a0:	8fad0048 */ 	lw	$t5,0x48($sp)
/*  f1750a4:	000c7b80 */ 	sll	$t7,$t4,0xe
/*  f1750a8:	3338000f */ 	andi	$t8,$t9,0xf
/*  f1750ac:	00184900 */ 	sll	$t1,$t8,0x4
/*  f1750b0:	016f7025 */ 	or	$t6,$t3,$t7
/*  f1750b4:	01c95025 */ 	or	$t2,$t6,$t1
/*  f1750b8:	adaa0004 */ 	sw	$t2,0x4($t5)
.L0f1750bc:
/*  f1750bc:	8fa20080 */ 	lw	$v0,0x80($sp)
/*  f1750c0:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f1750c4:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f1750c8:	14440005 */ 	bne	$v0,$a0,.L0f1750e0
/*  f1750cc:	00001825 */ 	or	$v1,$zero,$zero
/*  f1750d0:	55000004 */ 	bnezl	$t0,.L0f1750e4
/*  f1750d4:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f1750d8:	10000002 */ 	beqz	$zero,.L0f1750e4
/*  f1750dc:	00801825 */ 	or	$v1,$a0,$zero
.L0f1750e0:
/*  f1750e0:	8fa80050 */ 	lw	$t0,0x50($sp)
.L0f1750e4:
/*  f1750e4:	14440005 */ 	bne	$v0,$a0,.L0f1750fc
/*  f1750e8:	00602825 */ 	or	$a1,$v1,$zero
/*  f1750ec:	55000004 */ 	bnezl	$t0,.L0f175100
/*  f1750f0:	00001825 */ 	or	$v1,$zero,$zero
/*  f1750f4:	10000002 */ 	beqz	$zero,.L0f175100
/*  f1750f8:	00801825 */ 	or	$v1,$a0,$zero
.L0f1750fc:
/*  f1750fc:	00001825 */ 	or	$v1,$zero,$zero
.L0f175100:
/*  f175100:	14440005 */ 	bne	$v0,$a0,.L0f175118
/*  f175104:	00603025 */ 	or	$a2,$v1,$zero
/*  f175108:	55000004 */ 	bnezl	$t0,.L0f17511c
/*  f17510c:	00001825 */ 	or	$v1,$zero,$zero
/*  f175110:	10000002 */ 	beqz	$zero,.L0f17511c
/*  f175114:	00801825 */ 	or	$v1,$a0,$zero
.L0f175118:
/*  f175118:	00001825 */ 	or	$v1,$zero,$zero
.L0f17511c:
/*  f17511c:	920c0008 */ 	lbu	$t4,0x8($s0)
/*  f175120:	258bffff */ 	addiu	$t3,$t4,-1
/*  f175124:	000b7880 */ 	sll	$t7,$t3,0x2
/*  f175128:	14440005 */ 	bne	$v0,$a0,.L0f175140
/*  f17512c:	006f3821 */ 	addu	$a3,$v1,$t7
/*  f175130:	55000004 */ 	bnezl	$t0,.L0f175144
/*  f175134:	00001825 */ 	or	$v1,$zero,$zero
/*  f175138:	10000002 */ 	beqz	$zero,.L0f175144
/*  f17513c:	24030002 */ 	addiu	$v1,$zero,0x2
.L0f175140:
/*  f175140:	00001825 */ 	or	$v1,$zero,$zero
.L0f175144:
/*  f175144:	92190009 */ 	lbu	$t9,0x9($s0)
/*  f175148:	afa70058 */ 	sw	$a3,0x58($sp)
/*  f17514c:	afa6005c */ 	sw	$a2,0x5c($sp)
/*  f175150:	2738ffff */ 	addiu	$t8,$t9,-1
/*  f175154:	00187080 */ 	sll	$t6,$t8,0x2
/*  f175158:	006e4021 */ 	addu	$t0,$v1,$t6
/*  f17515c:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f175160:	afa80054 */ 	sw	$t0,0x54($sp)
/*  f175164:	afa50060 */ 	sw	$a1,0x60($sp)
/*  f175168:	0fc5cee3 */ 	jal	func0f173b8c
/*  f17516c:	8fa40084 */ 	lw	$a0,0x84($sp)
/*  f175170:	8fa50060 */ 	lw	$a1,0x60($sp)
/*  f175174:	8fa6005c */ 	lw	$a2,0x5c($sp)
/*  f175178:	8fa70058 */ 	lw	$a3,0x58($sp)
/*  f17517c:	10400013 */ 	beqz	$v0,.L0f1751cc
/*  f175180:	8fa80054 */ 	lw	$t0,0x54($sp)
/*  f175184:	30a90fff */ 	andi	$t1,$a1,0xfff
/*  f175188:	00095300 */ 	sll	$t2,$t1,0xc
/*  f17518c:	3c01f200 */ 	lui	$at,0xf200
/*  f175190:	01416825 */ 	or	$t5,$t2,$at
/*  f175194:	30cc0fff */ 	andi	$t4,$a2,0xfff
/*  f175198:	01ac5825 */ 	or	$t3,$t5,$t4
/*  f17519c:	02201025 */ 	or	$v0,$s1,$zero
/*  f1751a0:	ac4b0000 */ 	sw	$t3,0x0($v0)
/*  f1751a4:	8faf0084 */ 	lw	$t7,0x84($sp)
/*  f1751a8:	30ee0fff */ 	andi	$t6,$a3,0xfff
/*  f1751ac:	000e4b00 */ 	sll	$t1,$t6,0xc
/*  f1751b0:	31f90007 */ 	andi	$t9,$t7,0x7
/*  f1751b4:	0019c600 */ 	sll	$t8,$t9,0x18
/*  f1751b8:	03095025 */ 	or	$t2,$t8,$t1
/*  f1751bc:	310d0fff */ 	andi	$t5,$t0,0xfff
/*  f1751c0:	014d6025 */ 	or	$t4,$t2,$t5
/*  f1751c4:	ac4c0004 */ 	sw	$t4,0x4($v0)
/*  f1751c8:	26310008 */ 	addiu	$s1,$s1,0x8
.L0f1751cc:
/*  f1751cc:	8fbf003c */ 	lw	$ra,0x3c($sp)
/*  f1751d0:	02201025 */ 	or	$v0,$s1,$zero
/*  f1751d4:	8fb10038 */ 	lw	$s1,0x38($sp)
/*  f1751d8:	8fb00034 */ 	lw	$s0,0x34($sp)
/*  f1751dc:	03e00008 */ 	jr	$ra
/*  f1751e0:	27bd0070 */ 	addiu	$sp,$sp,0x70
);

GLOBAL_ASM(
glabel func0f1751e4
/*  f1751e4:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f1751e8:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f1751ec:	afb10028 */ 	sw	$s1,0x28($sp)
/*  f1751f0:	afa60040 */ 	sw	$a2,0x40($sp)
/*  f1751f4:	00a08825 */ 	or	$s1,$a1,$zero
/*  f1751f8:	afb00024 */ 	sw	$s0,0x24($sp)
/*  f1751fc:	afa70044 */ 	sw	$a3,0x44($sp)
/*  f175200:	00003025 */ 	or	$a2,$zero,$zero
/*  f175204:	0fc5d0e8 */ 	jal	func0f1743a0
/*  f175208:	afa00034 */ 	sw	$zero,0x34($sp)
/*  f17520c:	8fae004c */ 	lw	$t6,0x4c($sp)
/*  f175210:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f175214:	00408025 */ 	or	$s0,$v0,$zero
/*  f175218:	11c0000d */ 	beqz	$t6,.L0f175250
/*  f17521c:	00402025 */ 	or	$a0,$v0,$zero
/*  f175220:	8faf0048 */ 	lw	$t7,0x48($sp)
/*  f175224:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f175228:	afb80018 */ 	sw	$t8,0x18($sp)
/*  f17522c:	02202825 */ 	or	$a1,$s1,$zero
/*  f175230:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f175234:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f175238:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f17523c:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f175240:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f175244:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f175248:	00408025 */ 	or	$s0,$v0,$zero
/*  f17524c:	24030001 */ 	addiu	$v1,$zero,0x1
.L0f175250:
/*  f175250:	8fb90048 */ 	lw	$t9,0x48($sp)
/*  f175254:	2408ffff */ 	addiu	$t0,$zero,-1
/*  f175258:	afa80018 */ 	sw	$t0,0x18($sp)
/*  f17525c:	02002025 */ 	or	$a0,$s0,$zero
/*  f175260:	02202825 */ 	or	$a1,$s1,$zero
/*  f175264:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f175268:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f17526c:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f175270:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f175274:	afa30034 */ 	sw	$v1,0x34($sp)
/*  f175278:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f17527c:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f175280:	9224000b */ 	lbu	$a0,0xb($s1)
/*  f175284:	8faa004c */ 	lw	$t2,0x4c($sp)
/*  f175288:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f17528c:	00044942 */ 	srl	$t1,$a0,0x5
/*  f175290:	00408025 */ 	or	$s0,$v0,$zero
/*  f175294:	1540000f */ 	bnez	$t2,.L0f1752d4
/*  f175298:	00691821 */ 	addu	$v1,$v1,$t1
/*  f17529c:	24010001 */ 	addiu	$at,$zero,0x1
/*  f1752a0:	1521000c */ 	bne	$t1,$at,.L0f1752d4
/*  f1752a4:	00402025 */ 	or	$a0,$v0,$zero
/*  f1752a8:	8fab0048 */ 	lw	$t3,0x48($sp)
/*  f1752ac:	240cffff */ 	addiu	$t4,$zero,-1
/*  f1752b0:	afac0018 */ 	sw	$t4,0x18($sp)
/*  f1752b4:	02202825 */ 	or	$a1,$s1,$zero
/*  f1752b8:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f1752bc:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f1752c0:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f1752c4:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f1752c8:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f1752cc:	afab0010 */ 	sw	$t3,0x10($sp)
/*  f1752d0:	00408025 */ 	or	$s0,$v0,$zero
.L0f1752d4:
/*  f1752d4:	02001825 */ 	or	$v1,$s0,$zero
/*  f1752d8:	3c0de700 */ 	lui	$t5,0xe700
/*  f1752dc:	ac6d0000 */ 	sw	$t5,0x0($v1)
/*  f1752e0:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f1752e4:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f1752e8:	26020008 */ 	addiu	$v0,$s0,0x8
/*  f1752ec:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f1752f0:	3c018008 */ 	lui	$at,0x8008
/*  f1752f4:	8fb00024 */ 	lw	$s0,0x24($sp)
/*  f1752f8:	8fb10028 */ 	lw	$s1,0x28($sp)
/*  f1752fc:	ac2e44d0 */ 	sw	$t6,0x44d0($at)
/*  f175300:	03e00008 */ 	jr	$ra
/*  f175304:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f175308
/*  f175308:	27bdffc0 */ 	addiu	$sp,$sp,-64
/*  f17530c:	afb20030 */ 	sw	$s2,0x30($sp)
/*  f175310:	afb00028 */ 	sw	$s0,0x28($sp)
/*  f175314:	00808025 */ 	or	$s0,$a0,$zero
/*  f175318:	00a09025 */ 	or	$s2,$a1,$zero
/*  f17531c:	afbf0034 */ 	sw	$ra,0x34($sp)
/*  f175320:	afb1002c */ 	sw	$s1,0x2c($sp)
/*  f175324:	afa60048 */ 	sw	$a2,0x48($sp)
/*  f175328:	afa7004c */ 	sw	$a3,0x4c($sp)
/*  f17532c:	00002825 */ 	or	$a1,$zero,$zero
/*  f175330:	0fc5cf84 */ 	jal	func0f173e10
/*  f175334:	8fa40054 */ 	lw	$a0,0x54($sp)
/*  f175338:	00408825 */ 	or	$s1,$v0,$zero
/*  f17533c:	02002025 */ 	or	$a0,$s0,$zero
/*  f175340:	0fc5d2d5 */ 	jal	func0f174b54
/*  f175344:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f175348:	3c0ee800 */ 	lui	$t6,0xe800
/*  f17534c:	ac4e0000 */ 	sw	$t6,0x0($v0)
/*  f175350:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f175354:	24440008 */ 	addiu	$a0,$v0,0x8
/*  f175358:	02402825 */ 	or	$a1,$s2,$zero
/*  f17535c:	0fc5d0e8 */ 	jal	func0f1743a0
/*  f175360:	02203025 */ 	or	$a2,$s1,$zero
/*  f175364:	8faf005c */ 	lw	$t7,0x5c($sp)
/*  f175368:	8fb80060 */ 	lw	$t8,0x60($sp)
/*  f17536c:	00402025 */ 	or	$a0,$v0,$zero
/*  f175370:	8fa50054 */ 	lw	$a1,0x54($sp)
/*  f175374:	8fa60050 */ 	lw	$a2,0x50($sp)
/*  f175378:	8fa70058 */ 	lw	$a3,0x58($sp)
/*  f17537c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f175380:	0fc5cfde */ 	jal	func0f173f78
/*  f175384:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f175388:	8fb90064 */ 	lw	$t9,0x64($sp)
/*  f17538c:	00408025 */ 	or	$s0,$v0,$zero
/*  f175390:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f175394:	1320000f */ 	beqz	$t9,.L0f1753d4
/*  f175398:	00402025 */ 	or	$a0,$v0,$zero
/*  f17539c:	8fa80050 */ 	lw	$t0,0x50($sp)
/*  f1753a0:	24090001 */ 	addiu	$t1,$zero,0x1
/*  f1753a4:	afa90018 */ 	sw	$t1,0x18($sp)
/*  f1753a8:	02402825 */ 	or	$a1,$s2,$zero
/*  f1753ac:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f1753b0:	8fa7004c */ 	lw	$a3,0x4c($sp)
/*  f1753b4:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f1753b8:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f1753bc:	afa30038 */ 	sw	$v1,0x38($sp)
/*  f1753c0:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f1753c4:	afa80010 */ 	sw	$t0,0x10($sp)
/*  f1753c8:	8fa30038 */ 	lw	$v1,0x38($sp)
/*  f1753cc:	00408025 */ 	or	$s0,$v0,$zero
/*  f1753d0:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f1753d4:
/*  f1753d4:	8faa0050 */ 	lw	$t2,0x50($sp)
/*  f1753d8:	240bffff */ 	addiu	$t3,$zero,-1
/*  f1753dc:	afab0018 */ 	sw	$t3,0x18($sp)
/*  f1753e0:	02002025 */ 	or	$a0,$s0,$zero
/*  f1753e4:	02402825 */ 	or	$a1,$s2,$zero
/*  f1753e8:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f1753ec:	8fa7004c */ 	lw	$a3,0x4c($sp)
/*  f1753f0:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f1753f4:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f1753f8:	afa30038 */ 	sw	$v1,0x38($sp)
/*  f1753fc:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f175400:	afaa0010 */ 	sw	$t2,0x10($sp)
/*  f175404:	9244000b */ 	lbu	$a0,0xb($s2)
/*  f175408:	8fad0064 */ 	lw	$t5,0x64($sp)
/*  f17540c:	8fa30038 */ 	lw	$v1,0x38($sp)
/*  f175410:	00046142 */ 	srl	$t4,$a0,0x5
/*  f175414:	00408025 */ 	or	$s0,$v0,$zero
/*  f175418:	15a0000f */ 	bnez	$t5,.L0f175458
/*  f17541c:	006c1821 */ 	addu	$v1,$v1,$t4
/*  f175420:	24010001 */ 	addiu	$at,$zero,0x1
/*  f175424:	1581000c */ 	bne	$t4,$at,.L0f175458
/*  f175428:	00402025 */ 	or	$a0,$v0,$zero
/*  f17542c:	8fae0050 */ 	lw	$t6,0x50($sp)
/*  f175430:	240fffff */ 	addiu	$t7,$zero,-1
/*  f175434:	afaf0018 */ 	sw	$t7,0x18($sp)
/*  f175438:	02402825 */ 	or	$a1,$s2,$zero
/*  f17543c:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f175440:	8fa7004c */ 	lw	$a3,0x4c($sp)
/*  f175444:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f175448:	afb1001c */ 	sw	$s1,0x1c($sp)
/*  f17544c:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f175450:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f175454:	00408025 */ 	or	$s0,$v0,$zero
.L0f175458:
/*  f175458:	02001825 */ 	or	$v1,$s0,$zero
/*  f17545c:	3c18e700 */ 	lui	$t8,0xe700
/*  f175460:	ac780000 */ 	sw	$t8,0x0($v1)
/*  f175464:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f175468:	8fbf0034 */ 	lw	$ra,0x34($sp)
/*  f17546c:	26020008 */ 	addiu	$v0,$s0,0x8
/*  f175470:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f175474:	3c018008 */ 	lui	$at,0x8008
/*  f175478:	8fb00028 */ 	lw	$s0,0x28($sp)
/*  f17547c:	8fb20030 */ 	lw	$s2,0x30($sp)
/*  f175480:	8fb1002c */ 	lw	$s1,0x2c($sp)
/*  f175484:	ac3944d0 */ 	sw	$t9,0x44d0($at)
/*  f175488:	03e00008 */ 	jr	$ra
/*  f17548c:	27bd0040 */ 	addiu	$sp,$sp,0x40
);

GLOBAL_ASM(
glabel func0f175490
/*  f175490:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*  f175494:	afbf002c */ 	sw	$ra,0x2c($sp)
/*  f175498:	afb10028 */ 	sw	$s1,0x28($sp)
/*  f17549c:	afa60040 */ 	sw	$a2,0x40($sp)
/*  f1754a0:	00a08825 */ 	or	$s1,$a1,$zero
/*  f1754a4:	afb00024 */ 	sw	$s0,0x24($sp)
/*  f1754a8:	afa70044 */ 	sw	$a3,0x44($sp)
/*  f1754ac:	0fc5d0e8 */ 	jal	func0f1743a0
/*  f1754b0:	00003025 */ 	or	$a2,$zero,$zero
/*  f1754b4:	8fae0050 */ 	lw	$t6,0x50($sp)
/*  f1754b8:	8faf0054 */ 	lw	$t7,0x54($sp)
/*  f1754bc:	00402025 */ 	or	$a0,$v0,$zero
/*  f1754c0:	02202825 */ 	or	$a1,$s1,$zero
/*  f1754c4:	8fa60048 */ 	lw	$a2,0x48($sp)
/*  f1754c8:	8fa7004c */ 	lw	$a3,0x4c($sp)
/*  f1754cc:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f1754d0:	0fc5cfde */ 	jal	func0f173f78
/*  f1754d4:	afaf0014 */ 	sw	$t7,0x14($sp)
/*  f1754d8:	8fb80058 */ 	lw	$t8,0x58($sp)
/*  f1754dc:	00408025 */ 	or	$s0,$v0,$zero
/*  f1754e0:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f1754e4:	1300000f */ 	beqz	$t8,.L0f175524
/*  f1754e8:	00402025 */ 	or	$a0,$v0,$zero
/*  f1754ec:	8fb90048 */ 	lw	$t9,0x48($sp)
/*  f1754f0:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f1754f4:	afa80018 */ 	sw	$t0,0x18($sp)
/*  f1754f8:	02202825 */ 	or	$a1,$s1,$zero
/*  f1754fc:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f175500:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f175504:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f175508:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f17550c:	afa30034 */ 	sw	$v1,0x34($sp)
/*  f175510:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f175514:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f175518:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f17551c:	00408025 */ 	or	$s0,$v0,$zero
/*  f175520:	24630001 */ 	addiu	$v1,$v1,0x1
.L0f175524:
/*  f175524:	8fa90048 */ 	lw	$t1,0x48($sp)
/*  f175528:	240affff */ 	addiu	$t2,$zero,-1
/*  f17552c:	afaa0018 */ 	sw	$t2,0x18($sp)
/*  f175530:	02002025 */ 	or	$a0,$s0,$zero
/*  f175534:	02202825 */ 	or	$a1,$s1,$zero
/*  f175538:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f17553c:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f175540:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f175544:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f175548:	afa30034 */ 	sw	$v1,0x34($sp)
/*  f17554c:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f175550:	afa90010 */ 	sw	$t1,0x10($sp)
/*  f175554:	9224000b */ 	lbu	$a0,0xb($s1)
/*  f175558:	8fac0058 */ 	lw	$t4,0x58($sp)
/*  f17555c:	8fa30034 */ 	lw	$v1,0x34($sp)
/*  f175560:	00045942 */ 	srl	$t3,$a0,0x5
/*  f175564:	00408025 */ 	or	$s0,$v0,$zero
/*  f175568:	1580000f */ 	bnez	$t4,.L0f1755a8
/*  f17556c:	006b1821 */ 	addu	$v1,$v1,$t3
/*  f175570:	24010001 */ 	addiu	$at,$zero,0x1
/*  f175574:	1561000c */ 	bne	$t3,$at,.L0f1755a8
/*  f175578:	00402025 */ 	or	$a0,$v0,$zero
/*  f17557c:	8fad0048 */ 	lw	$t5,0x48($sp)
/*  f175580:	240effff */ 	addiu	$t6,$zero,-1
/*  f175584:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f175588:	02202825 */ 	or	$a1,$s1,$zero
/*  f17558c:	8fa60040 */ 	lw	$a2,0x40($sp)
/*  f175590:	8fa70044 */ 	lw	$a3,0x44($sp)
/*  f175594:	afa30014 */ 	sw	$v1,0x14($sp)
/*  f175598:	afa0001c */ 	sw	$zero,0x1c($sp)
/*  f17559c:	0fc5d1e9 */ 	jal	func0f1747a4
/*  f1755a0:	afad0010 */ 	sw	$t5,0x10($sp)
/*  f1755a4:	00408025 */ 	or	$s0,$v0,$zero
.L0f1755a8:
/*  f1755a8:	02001825 */ 	or	$v1,$s0,$zero
/*  f1755ac:	3c0fe700 */ 	lui	$t7,0xe700
/*  f1755b0:	ac6f0000 */ 	sw	$t7,0x0($v1)
/*  f1755b4:	ac600004 */ 	sw	$zero,0x4($v1)
/*  f1755b8:	8fbf002c */ 	lw	$ra,0x2c($sp)
/*  f1755bc:	26020008 */ 	addiu	$v0,$s0,0x8
/*  f1755c0:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f1755c4:	3c018008 */ 	lui	$at,0x8008
/*  f1755c8:	8fb00024 */ 	lw	$s0,0x24($sp)
/*  f1755cc:	8fb10028 */ 	lw	$s1,0x28($sp)
/*  f1755d0:	ac3844d0 */ 	sw	$t8,0x44d0($at)
/*  f1755d4:	03e00008 */ 	jr	$ra
/*  f1755d8:	27bd0038 */ 	addiu	$sp,$sp,0x38
);

GLOBAL_ASM(
glabel func0f1755dc
/*  f1755dc:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f1755e0:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f1755e4:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f1755e8:	afa60028 */ 	sw	$a2,0x28($sp)
/*  f1755ec:	0fc5d2d5 */ 	jal	func0f174b54
/*  f1755f0:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f1755f4:	8fae0030 */ 	lw	$t6,0x30($sp)
/*  f1755f8:	00402025 */ 	or	$a0,$v0,$zero
/*  f1755fc:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f175600:	8fa60028 */ 	lw	$a2,0x28($sp)
/*  f175604:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f175608:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f17560c:	0fc5d3cc */ 	jal	func0f174f30
/*  f175610:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f175614:	3c0fe700 */ 	lui	$t7,0xe700
/*  f175618:	ac4f0000 */ 	sw	$t7,0x0($v0)
/*  f17561c:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f175620:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f175624:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f175628:	3c018008 */ 	lui	$at,0x8008
/*  f17562c:	ac3844d0 */ 	sw	$t8,0x44d0($at)
/*  f175630:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f175634:	03e00008 */ 	jr	$ra
/*  f175638:	24420008 */ 	addiu	$v0,$v0,0x8
);

GLOBAL_ASM(
glabel func0f17563c
/*  f17563c:	27bdffe0 */ 	addiu	$sp,$sp,-32
/*  f175640:	afbf001c */ 	sw	$ra,0x1c($sp)
/*  f175644:	afa50024 */ 	sw	$a1,0x24($sp)
/*  f175648:	afa60028 */ 	sw	$a2,0x28($sp)
/*  f17564c:	0fc5d2d5 */ 	jal	func0f174b54
/*  f175650:	afa7002c */ 	sw	$a3,0x2c($sp)
/*  f175654:	8fae0030 */ 	lw	$t6,0x30($sp)
/*  f175658:	00402025 */ 	or	$a0,$v0,$zero
/*  f17565c:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f175660:	8fa60028 */ 	lw	$a2,0x28($sp)
/*  f175664:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f175668:	afa00014 */ 	sw	$zero,0x14($sp)
/*  f17566c:	0fc5d3cc */ 	jal	func0f174f30
/*  f175670:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f175674:	8faf0030 */ 	lw	$t7,0x30($sp)
/*  f175678:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f17567c:	afb80014 */ 	sw	$t8,0x14($sp)
/*  f175680:	00402025 */ 	or	$a0,$v0,$zero
/*  f175684:	8fa50024 */ 	lw	$a1,0x24($sp)
/*  f175688:	8fa60028 */ 	lw	$a2,0x28($sp)
/*  f17568c:	8fa7002c */ 	lw	$a3,0x2c($sp)
/*  f175690:	0fc5d3cc */ 	jal	func0f174f30
/*  f175694:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f175698:	3c19e700 */ 	lui	$t9,0xe700
/*  f17569c:	ac590000 */ 	sw	$t9,0x0($v0)
/*  f1756a0:	ac400004 */ 	sw	$zero,0x4($v0)
/*  f1756a4:	8fbf001c */ 	lw	$ra,0x1c($sp)
/*  f1756a8:	24080001 */ 	addiu	$t0,$zero,0x1
/*  f1756ac:	3c018008 */ 	lui	$at,0x8008
/*  f1756b0:	ac2844d0 */ 	sw	$t0,0x44d0($at)
/*  f1756b4:	27bd0020 */ 	addiu	$sp,$sp,0x20
/*  f1756b8:	03e00008 */ 	jr	$ra
/*  f1756bc:	24420008 */ 	addiu	$v0,$v0,0x8
);

GLOBAL_ASM(
glabel func0f1756c0
/*  f1756c0:	27bdfec8 */ 	addiu	$sp,$sp,-312
/*  f1756c4:	afb00030 */ 	sw	$s0,0x30($sp)
/*  f1756c8:	afbf0054 */ 	sw	$ra,0x54($sp)
/*  f1756cc:	afbe0050 */ 	sw	$s8,0x50($sp)
/*  f1756d0:	afb60048 */ 	sw	$s6,0x48($sp)
/*  f1756d4:	afb50044 */ 	sw	$s5,0x44($sp)
/*  f1756d8:	240e0001 */ 	addiu	$t6,$zero,0x1
/*  f1756dc:	3c018008 */ 	lui	$at,0x8008
/*  f1756e0:	000580c3 */ 	sra	$s0,$a1,0x3
/*  f1756e4:	afb7004c */ 	sw	$s7,0x4c($sp)
/*  f1756e8:	afb40040 */ 	sw	$s4,0x40($sp)
/*  f1756ec:	afb3003c */ 	sw	$s3,0x3c($sp)
/*  f1756f0:	afb20038 */ 	sw	$s2,0x38($sp)
/*  f1756f4:	afb10034 */ 	sw	$s1,0x34($sp)
/*  f1756f8:	afa60140 */ 	sw	$a2,0x140($sp)
/*  f1756fc:	afa70144 */ 	sw	$a3,0x144($sp)
/*  f175700:	afa0012c */ 	sw	$zero,0x12c($sp)
/*  f175704:	afae0104 */ 	sw	$t6,0x104($sp)
/*  f175708:	0000f025 */ 	or	$s8,$zero,$zero
/*  f17570c:	afa000e8 */ 	sw	$zero,0xe8($sp)
/*  f175710:	afa000e4 */ 	sw	$zero,0xe4($sp)
/*  f175714:	ac2044d0 */ 	sw	$zero,0x44d0($at)
/*  f175718:	afa000f4 */ 	sw	$zero,0xf4($sp)
/*  f17571c:	0080a825 */ 	or	$s5,$a0,$zero
/*  f175720:	00c0b025 */ 	or	$s6,$a2,$zero
/*  f175724:	0fc5ce82 */ 	jal	func0f173a08
/*  f175728:	afb00128 */ 	sw	$s0,0x128($sp)
/*  f17572c:	0fc4f13c */ 	jal	func0f13c4f0
/*  f175730:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175734:	10400006 */ 	beqz	$v0,.L0f175750
/*  f175738:	afa200e0 */ 	sw	$v0,0xe0($sp)
/*  f17573c:	27a20090 */ 	addiu	$v0,$sp,0x90
/*  f175740:	27a300a0 */ 	addiu	$v1,$sp,0xa0
.L0f175744:
/*  f175744:	24420001 */ 	addiu	$v0,$v0,0x1
/*  f175748:	1443fffe */ 	bne	$v0,$v1,.L0f175744
/*  f17574c:	a040ffff */ 	sb	$zero,-0x1($v0)
.L0f175750:
/*  f175750:	8faf0144 */ 	lw	$t7,0x144($sp)
/*  f175754:	3c18800b */ 	lui	$t8,%hi(var800aabc8)
/*  f175758:	2718abc8 */ 	addiu	$t8,$t8,%lo(var800aabc8)
/*  f17575c:	15e00002 */ 	bnez	$t7,.L0f175768
/*  f175760:	27b70090 */ 	addiu	$s7,$sp,0x90
/*  f175764:	afb80144 */ 	sw	$t8,0x144($sp)
.L0f175768:
/*  f175768:	5a0001d5 */ 	blezl	$s0,.L0f175ec0
/*  f17576c:	8fb90140 */ 	lw	$t9,0x140($sp)
/*  f175770:	92a30000 */ 	lbu	$v1,0x0($s5)
.L0f175774:
/*  f175774:	286100c1 */ 	slti	$at,$v1,0xc1
/*  f175778:	14200006 */ 	bnez	$at,.L0f175794
/*  f17577c:	00601025 */ 	or	$v0,$v1,$zero
/*  f175780:	240100e7 */ 	addiu	$at,$zero,0xe7
/*  f175784:	10410116 */ 	beq	$v0,$at,.L0f175be0
/*  f175788:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f17578c:	100001a7 */ 	beqz	$zero,.L0f175e2c
/*  f175790:	8ea10000 */ 	lw	$at,0x0($s5)
.L0f175794:
/*  f175794:	28410005 */ 	slti	$at,$v0,0x5
/*  f175798:	14200009 */ 	bnez	$at,.L0f1757c0
/*  f17579c:	2459ff4f */ 	addiu	$t9,$v0,-177
/*  f1757a0:	2f210010 */ 	sltiu	$at,$t9,0x10
/*  f1757a4:	102001a0 */ 	beqz	$at,.L0f175e28
/*  f1757a8:	0019c880 */ 	sll	$t9,$t9,0x2
/*  f1757ac:	3c017f1b */ 	lui	$at,%hi(var7f1b7c30)
/*  f1757b0:	00390821 */ 	addu	$at,$at,$t9
/*  f1757b4:	8c397c30 */ 	lw	$t9,%lo(var7f1b7c30)($at)
/*  f1757b8:	03200008 */ 	jr	$t9
/*  f1757bc:	00000000 */ 	sll	$zero,$zero,0x0
.L0f1757c0:
/*  f1757c0:	24010004 */ 	addiu	$at,$zero,0x4
/*  f1757c4:	104100c8 */ 	beq	$v0,$at,.L0f175ae8
/*  f1757c8:	8fb800e0 */ 	lw	$t8,0xe0($sp)
/*  f1757cc:	10000197 */ 	beqz	$zero,.L0f175e2c
/*  f1757d0:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f1757d4:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f1757d8:	13c00003 */ 	beqz	$s8,.L0f1757e8
/*  f1757dc:	afac00e4 */ 	sw	$t4,0xe4($sp)
/*  f1757e0:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f1757e4:	afad00e8 */ 	sw	$t5,0xe8($sp)
.L0f1757e8:
/*  f1757e8:	8eb20004 */ 	lw	$s2,0x4($s5)
/*  f1757ec:	8eb30000 */ 	lw	$s3,0x0($s5)
/*  f1757f0:	8fa50144 */ 	lw	$a1,0x144($sp)
/*  f1757f4:	32440fff */ 	andi	$a0,$s2,0xfff
/*  f1757f8:	326f0200 */ 	andi	$t7,$s3,0x200
/*  f1757fc:	00809025 */ 	or	$s2,$a0,$zero
/*  f175800:	0fc5cd3a */ 	jal	func0f1734e8
/*  f175804:	01e09825 */ 	or	$s3,$t7,$zero
/*  f175808:	02402025 */ 	or	$a0,$s2,$zero
/*  f17580c:	0fc5cba3 */ 	jal	func0f172e8c
/*  f175810:	8fa50144 */ 	lw	$a1,0x144($sp)
/*  f175814:	10400006 */ 	beqz	$v0,.L0f175830
/*  f175818:	00408825 */ 	or	$s1,$v0,$zero
/*  f17581c:	8c58000c */ 	lw	$t8,0xc($v0)
/*  f175820:	0018c8c0 */ 	sll	$t9,$t8,0x3
/*  f175824:	001967c2 */ 	srl	$t4,$t9,0x1f
/*  f175828:	10000002 */ 	beqz	$zero,.L0f175834
/*  f17582c:	afac00f4 */ 	sw	$t4,0xf4($sp)
.L0f175830:
/*  f175830:	afa000f4 */ 	sw	$zero,0xf4($sp)
.L0f175834:
/*  f175834:	104000aa */ 	beqz	$v0,.L0f175ae0
/*  f175838:	02c02025 */ 	or	$a0,$s6,$zero
/*  f17583c:	8fa70104 */ 	lw	$a3,0x104($sp)
/*  f175840:	afa00104 */ 	sw	$zero,0x104($sp)
/*  f175844:	8fa5012c */ 	lw	$a1,0x12c($sp)
/*  f175848:	02203025 */ 	or	$a2,$s1,$zero
/*  f17584c:	0fc5d0b9 */ 	jal	func0f1742e4
/*  f175850:	0000f025 */ 	or	$s8,$zero,$zero
/*  f175854:	8ea30000 */ 	lw	$v1,0x0($s5)
/*  f175858:	0040b025 */ 	or	$s6,$v0,$zero
/*  f17585c:	306d0007 */ 	andi	$t5,$v1,0x7
/*  f175860:	2da10005 */ 	sltiu	$at,$t5,0x5
/*  f175864:	1020006f */ 	beqz	$at,.L0f175a24
/*  f175868:	000d6880 */ 	sll	$t5,$t5,0x2
/*  f17586c:	3c017f1b */ 	lui	$at,%hi(var7f1b7c70)
/*  f175870:	002d0821 */ 	addu	$at,$at,$t5
/*  f175874:	8c2d7c70 */ 	lw	$t5,%lo(var7f1b7c70)($at)
/*  f175878:	01a00008 */ 	jr	$t5
/*  f17587c:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175880:	8ea80004 */ 	lw	$t0,0x4($s5)
/*  f175884:	00033582 */ 	srl	$a2,$v1,0x16
/*  f175888:	00033d02 */ 	srl	$a3,$v1,0x14
/*  f17588c:	00087602 */ 	srl	$t6,$t0,0x18
/*  f175890:	31cf00ff */ 	andi	$t7,$t6,0xff
/*  f175894:	00031482 */ 	srl	$v0,$v1,0x12
/*  f175898:	00034b82 */ 	srl	$t1,$v1,0xe
/*  f17589c:	00035282 */ 	srl	$t2,$v1,0xa
/*  f1758a0:	30d80003 */ 	andi	$t8,$a2,0x3
/*  f1758a4:	30f90003 */ 	andi	$t9,$a3,0x3
/*  f1758a8:	304c0003 */ 	andi	$t4,$v0,0x3
/*  f1758ac:	312d000f */ 	andi	$t5,$t1,0xf
/*  f1758b0:	314e000f */ 	andi	$t6,$t2,0xf
/*  f1758b4:	03003025 */ 	or	$a2,$t8,$zero
/*  f1758b8:	03203825 */ 	or	$a3,$t9,$zero
/*  f1758bc:	afae0018 */ 	sw	$t6,0x18($sp)
/*  f1758c0:	afad0014 */ 	sw	$t5,0x14($sp)
/*  f1758c4:	afac0010 */ 	sw	$t4,0x10($sp)
/*  f1758c8:	afaf001c */ 	sw	$t7,0x1c($sp)
/*  f1758cc:	afb30020 */ 	sw	$s3,0x20($sp)
/*  f1758d0:	02c02025 */ 	or	$a0,$s6,$zero
/*  f1758d4:	0fc5d524 */ 	jal	func0f175490
/*  f1758d8:	02202825 */ 	or	$a1,$s1,$zero
/*  f1758dc:	10000051 */ 	beqz	$zero,.L0f175a24
/*  f1758e0:	0040b025 */ 	or	$s6,$v0,$zero
/*  f1758e4:	8eb00004 */ 	lw	$s0,0x4($s5)
/*  f1758e8:	8fa50144 */ 	lw	$a1,0x144($sp)
/*  f1758ec:	00107b02 */ 	srl	$t7,$s0,0xc
/*  f1758f0:	31e40fff */ 	andi	$a0,$t7,0xfff
/*  f1758f4:	0fc5cd3a */ 	jal	func0f1734e8
/*  f1758f8:	00808025 */ 	or	$s0,$a0,$zero
/*  f1758fc:	02002025 */ 	or	$a0,$s0,$zero
/*  f175900:	0fc5cba3 */ 	jal	func0f172e8c
/*  f175904:	8fa50144 */ 	lw	$a1,0x144($sp)
/*  f175908:	10400046 */ 	beqz	$v0,.L0f175a24
/*  f17590c:	00405825 */ 	or	$t3,$v0,$zero
/*  f175910:	8ea30000 */ 	lw	$v1,0x0($s5)
/*  f175914:	8ea80004 */ 	lw	$t0,0x4($s5)
/*  f175918:	afb30024 */ 	sw	$s3,0x24($sp)
/*  f17591c:	00033582 */ 	srl	$a2,$v1,0x16
/*  f175920:	0008ce02 */ 	srl	$t9,$t0,0x18
/*  f175924:	332c00ff */ 	andi	$t4,$t9,0xff
/*  f175928:	00033d02 */ 	srl	$a3,$v1,0x14
/*  f17592c:	00031482 */ 	srl	$v0,$v1,0x12
/*  f175930:	00034b82 */ 	srl	$t1,$v1,0xe
/*  f175934:	00035282 */ 	srl	$t2,$v1,0xa
/*  f175938:	30cd0003 */ 	andi	$t5,$a2,0x3
/*  f17593c:	30ee0003 */ 	andi	$t6,$a3,0x3
/*  f175940:	304f0003 */ 	andi	$t7,$v0,0x3
/*  f175944:	3138000f */ 	andi	$t8,$t1,0xf
/*  f175948:	3159000f */ 	andi	$t9,$t2,0xf
/*  f17594c:	01a03025 */ 	or	$a2,$t5,$zero
/*  f175950:	01c03825 */ 	or	$a3,$t6,$zero
/*  f175954:	afb9001c */ 	sw	$t9,0x1c($sp)
/*  f175958:	afb80018 */ 	sw	$t8,0x18($sp)
/*  f17595c:	afaf0010 */ 	sw	$t7,0x10($sp)
/*  f175960:	afac0020 */ 	sw	$t4,0x20($sp)
/*  f175964:	afab0014 */ 	sw	$t3,0x14($sp)
/*  f175968:	02c02025 */ 	or	$a0,$s6,$zero
/*  f17596c:	0fc5d4c2 */ 	jal	func0f175308
/*  f175970:	02202825 */ 	or	$a1,$s1,$zero
/*  f175974:	1000002b */ 	beqz	$zero,.L0f175a24
/*  f175978:	0040b025 */ 	or	$s6,$v0,$zero
/*  f17597c:	00033582 */ 	srl	$a2,$v1,0x16
/*  f175980:	00033d02 */ 	srl	$a3,$v1,0x14
/*  f175984:	00031482 */ 	srl	$v0,$v1,0x12
/*  f175988:	30cc0003 */ 	andi	$t4,$a2,0x3
/*  f17598c:	30ed0003 */ 	andi	$t5,$a3,0x3
/*  f175990:	304e0003 */ 	andi	$t6,$v0,0x3
/*  f175994:	01803025 */ 	or	$a2,$t4,$zero
/*  f175998:	01a03825 */ 	or	$a3,$t5,$zero
/*  f17599c:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f1759a0:	02c02025 */ 	or	$a0,$s6,$zero
/*  f1759a4:	02202825 */ 	or	$a1,$s1,$zero
/*  f1759a8:	0fc5d479 */ 	jal	func0f1751e4
/*  f1759ac:	afb30014 */ 	sw	$s3,0x14($sp)
/*  f1759b0:	1000001c */ 	beqz	$zero,.L0f175a24
/*  f1759b4:	0040b025 */ 	or	$s6,$v0,$zero
/*  f1759b8:	00033582 */ 	srl	$a2,$v1,0x16
/*  f1759bc:	00033d02 */ 	srl	$a3,$v1,0x14
/*  f1759c0:	00031482 */ 	srl	$v0,$v1,0x12
/*  f1759c4:	30cf0003 */ 	andi	$t7,$a2,0x3
/*  f1759c8:	30f80003 */ 	andi	$t8,$a3,0x3
/*  f1759cc:	30590003 */ 	andi	$t9,$v0,0x3
/*  f1759d0:	01e03025 */ 	or	$a2,$t7,$zero
/*  f1759d4:	03003825 */ 	or	$a3,$t8,$zero
/*  f1759d8:	afb90010 */ 	sw	$t9,0x10($sp)
/*  f1759dc:	02c02025 */ 	or	$a0,$s6,$zero
/*  f1759e0:	0fc5d58f */ 	jal	func0f17563c
/*  f1759e4:	02202825 */ 	or	$a1,$s1,$zero
/*  f1759e8:	1000000e */ 	beqz	$zero,.L0f175a24
/*  f1759ec:	0040b025 */ 	or	$s6,$v0,$zero
/*  f1759f0:	00033582 */ 	srl	$a2,$v1,0x16
/*  f1759f4:	00033d02 */ 	srl	$a3,$v1,0x14
/*  f1759f8:	00031482 */ 	srl	$v0,$v1,0x12
/*  f1759fc:	30cc0003 */ 	andi	$t4,$a2,0x3
/*  f175a00:	30ed0003 */ 	andi	$t5,$a3,0x3
/*  f175a04:	304e0003 */ 	andi	$t6,$v0,0x3
/*  f175a08:	01803025 */ 	or	$a2,$t4,$zero
/*  f175a0c:	01a03825 */ 	or	$a3,$t5,$zero
/*  f175a10:	afae0010 */ 	sw	$t6,0x10($sp)
/*  f175a14:	02c02025 */ 	or	$a0,$s6,$zero
/*  f175a18:	0fc5d577 */ 	jal	func0f1755dc
/*  f175a1c:	02202825 */ 	or	$a1,$s1,$zero
/*  f175a20:	0040b025 */ 	or	$s6,$v0,$zero
.L0f175a24:
/*  f175a24:	8faf00e0 */ 	lw	$t7,0xe0($sp)
/*  f175a28:	240106cb */ 	addiu	$at,$zero,0x6cb
/*  f175a2c:	11e0002c */ 	beqz	$t7,.L0f175ae0
/*  f175a30:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175a34:	56410005 */ 	bnel	$s2,$at,.L0f175a4c
/*  f175a38:	24010a6a */ 	addiu	$at,$zero,0xa6a
/*  f175a3c:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175a40:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f175a44:	241e0001 */ 	addiu	$s8,$zero,0x1
/*  f175a48:	24010a6a */ 	addiu	$at,$zero,0xa6a
.L0f175a4c:
/*  f175a4c:	16410003 */ 	bne	$s2,$at,.L0f175a5c
/*  f175a50:	24040006 */ 	addiu	$a0,$zero,0x6
/*  f175a54:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175a58:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175a5c:
/*  f175a5c:	24010a69 */ 	addiu	$at,$zero,0xa69
/*  f175a60:	16410003 */ 	bne	$s2,$at,.L0f175a70
/*  f175a64:	24040007 */ 	addiu	$a0,$zero,0x7
/*  f175a68:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175a6c:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175a70:
/*  f175a70:	240106e2 */ 	addiu	$at,$zero,0x6e2
/*  f175a74:	16410003 */ 	bne	$s2,$at,.L0f175a84
/*  f175a78:	24040003 */ 	addiu	$a0,$zero,0x3
/*  f175a7c:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175a80:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175a84:
/*  f175a84:	240101c7 */ 	addiu	$at,$zero,0x1c7
/*  f175a88:	12410004 */ 	beq	$s2,$at,.L0f175a9c
/*  f175a8c:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f175a90:	24010dae */ 	addiu	$at,$zero,0xdae
/*  f175a94:	56410004 */ 	bnel	$s2,$at,.L0f175aa8
/*  f175a98:	2401029b */ 	addiu	$at,$zero,0x29b
.L0f175a9c:
/*  f175a9c:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175aa0:	241e0001 */ 	addiu	$s8,$zero,0x1
/*  f175aa4:	2401029b */ 	addiu	$at,$zero,0x29b
.L0f175aa8:
/*  f175aa8:	16410003 */ 	bne	$s2,$at,.L0f175ab8
/*  f175aac:	24040004 */ 	addiu	$a0,$zero,0x4
/*  f175ab0:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175ab4:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175ab8:
/*  f175ab8:	2401090f */ 	addiu	$at,$zero,0x90f
/*  f175abc:	16410003 */ 	bne	$s2,$at,.L0f175acc
/*  f175ac0:	24040005 */ 	addiu	$a0,$zero,0x5
/*  f175ac4:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175ac8:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175acc:
/*  f175acc:	24010a42 */ 	addiu	$at,$zero,0xa42
/*  f175ad0:	16410003 */ 	bne	$s2,$at,.L0f175ae0
/*  f175ad4:	24040002 */ 	addiu	$a0,$zero,0x2
/*  f175ad8:	0fc4f0ba */ 	jal	func0f13c2e8
/*  f175adc:	241e0001 */ 	addiu	$s8,$zero,0x1
.L0f175ae0:
/*  f175ae0:	100000d7 */ 	beqz	$zero,.L0f175e40
/*  f175ae4:	26b50008 */ 	addiu	$s5,$s5,0x8
.L0f175ae8:
/*  f175ae8:	1300001e */ 	beqz	$t8,.L0f175b64
/*  f175aec:	3c0100ff */ 	lui	$at,0xff
/*  f175af0:	92a30001 */ 	lbu	$v1,0x1($s5)
/*  f175af4:	8eb30004 */ 	lw	$s3,0x4($s5)
/*  f175af8:	3421ffff */ 	ori	$at,$at,0xffff
/*  f175afc:	00032102 */ 	srl	$a0,$v1,0x4
/*  f175b00:	24840001 */ 	addiu	$a0,$a0,0x1
/*  f175b04:	3062000f */ 	andi	$v0,$v1,0xf
/*  f175b08:	0044a021 */ 	addu	$s4,$v0,$a0
/*  f175b0c:	0261c824 */ 	and	$t9,$s3,$at
/*  f175b10:	0054082a */ 	slt	$at,$v0,$s4
/*  f175b14:	03209825 */ 	or	$s3,$t9,$zero
/*  f175b18:	10200012 */ 	beqz	$at,.L0f175b64
/*  f175b1c:	00408825 */ 	or	$s1,$v0,$zero
/*  f175b20:	00026080 */ 	sll	$t4,$v0,0x2
/*  f175b24:	27ad00a0 */ 	addiu	$t5,$sp,0xa0
/*  f175b28:	018d9021 */ 	addu	$s2,$t4,$t5
.L0f175b2c:
/*  f175b2c:	13c00007 */ 	beqz	$s8,.L0f175b4c
/*  f175b30:	02f18021 */ 	addu	$s0,$s7,$s1
/*  f175b34:	920e0000 */ 	lbu	$t6,0x0($s0)
/*  f175b38:	51c00005 */ 	beqzl	$t6,.L0f175b50
/*  f175b3c:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f175b40:	0fc4f01f */ 	jal	func0f13c07c
/*  f175b44:	8e440000 */ 	lw	$a0,0x0($s2)
/*  f175b48:	a2000000 */ 	sb	$zero,0x0($s0)
.L0f175b4c:
/*  f175b4c:	26310001 */ 	addiu	$s1,$s1,0x1
.L0f175b50:
/*  f175b50:	0234082a */ 	slt	$at,$s1,$s4
/*  f175b54:	ae530000 */ 	sw	$s3,0x0($s2)
/*  f175b58:	26520004 */ 	addiu	$s2,$s2,0x4
/*  f175b5c:	1420fff3 */ 	bnez	$at,.L0f175b2c
/*  f175b60:	2673000c */ 	addiu	$s3,$s3,0xc
.L0f175b64:
/*  f175b64:	8faf00f4 */ 	lw	$t7,0xf4($sp)
/*  f175b68:	8fb80148 */ 	lw	$t8,0x148($sp)
/*  f175b6c:	51e00016 */ 	beqzl	$t7,.L0f175bc8
/*  f175b70:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f175b74:	13000013 */ 	beqz	$t8,.L0f175bc4
/*  f175b78:	3c0100ff */ 	lui	$at,0xff
/*  f175b7c:	92a40001 */ 	lbu	$a0,0x1($s5)
/*  f175b80:	8ea50004 */ 	lw	$a1,0x4($s5)
/*  f175b84:	3421ffff */ 	ori	$at,$at,0xffff
/*  f175b88:	0004c902 */ 	srl	$t9,$a0,0x4
/*  f175b8c:	27240001 */ 	addiu	$a0,$t9,0x1
/*  f175b90:	00001825 */ 	or	$v1,$zero,$zero
/*  f175b94:	1880000b */ 	blez	$a0,.L0f175bc4
/*  f175b98:	00a16024 */ 	and	$t4,$a1,$at
/*  f175b9c:	030c1021 */ 	addu	$v0,$t8,$t4
.L0f175ba0:
/*  f175ba0:	844d0008 */ 	lh	$t5,0x8($v0)
/*  f175ba4:	844f000a */ 	lh	$t7,0xa($v0)
/*  f175ba8:	24630001 */ 	addiu	$v1,$v1,0x1
/*  f175bac:	000d7043 */ 	sra	$t6,$t5,0x1
/*  f175bb0:	000fc843 */ 	sra	$t9,$t7,0x1
/*  f175bb4:	2442000c */ 	addiu	$v0,$v0,0xc
/*  f175bb8:	a44efffc */ 	sh	$t6,-0x4($v0)
/*  f175bbc:	1464fff8 */ 	bne	$v1,$a0,.L0f175ba0
/*  f175bc0:	a459fffe */ 	sh	$t9,-0x2($v0)
.L0f175bc4:
/*  f175bc4:	8ea10000 */ 	lw	$at,0x0($s5)
.L0f175bc8:
/*  f175bc8:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175bcc:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175bd0:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175bd4:	8eb8fffc */ 	lw	$t8,-0x4($s5)
/*  f175bd8:	10000099 */ 	beqz	$zero,.L0f175e40
/*  f175bdc:	aed8fffc */ 	sw	$t8,-0x4($s6)
.L0f175be0:
/*  f175be0:	3c018008 */ 	lui	$at,0x8008
/*  f175be4:	ac2d44d0 */ 	sw	$t5,0x44d0($at)
/*  f175be8:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f175bec:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175bf0:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175bf4:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175bf8:	8eb9fffc */ 	lw	$t9,-0x4($s5)
/*  f175bfc:	10000090 */ 	beqz	$zero,.L0f175e40
/*  f175c00:	aed9fffc */ 	sw	$t9,-0x4($s6)
/*  f175c04:	240c0001 */ 	addiu	$t4,$zero,0x1
/*  f175c08:	13c00067 */ 	beqz	$s8,.L0f175da8
/*  f175c0c:	afac0104 */ 	sw	$t4,0x104($sp)
/*  f175c10:	240100bf */ 	addiu	$at,$zero,0xbf
/*  f175c14:	54610015 */ 	bnel	$v1,$at,.L0f175c6c
/*  f175c18:	92a20007 */ 	lbu	$v0,0x7($s5)
/*  f175c1c:	92ad0005 */ 	lbu	$t5,0x5($s5)
/*  f175c20:	2401000a */ 	addiu	$at,$zero,0xa
/*  f175c24:	24180001 */ 	addiu	$t8,$zero,0x1
/*  f175c28:	01a1001a */ 	div	$zero,$t5,$at
/*  f175c2c:	00007812 */ 	mflo	$t7
/*  f175c30:	02ef7021 */ 	addu	$t6,$s7,$t7
/*  f175c34:	a1d80000 */ 	sb	$t8,0x0($t6)
/*  f175c38:	92ac0006 */ 	lbu	$t4,0x6($s5)
/*  f175c3c:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f175c40:	0181001a */ 	div	$zero,$t4,$at
/*  f175c44:	00006812 */ 	mflo	$t5
/*  f175c48:	02ed7821 */ 	addu	$t7,$s7,$t5
/*  f175c4c:	a1f90000 */ 	sb	$t9,0x0($t7)
/*  f175c50:	92ae0007 */ 	lbu	$t6,0x7($s5)
/*  f175c54:	01c1001a */ 	div	$zero,$t6,$at
/*  f175c58:	00006012 */ 	mflo	$t4
/*  f175c5c:	02ec6821 */ 	addu	$t5,$s7,$t4
/*  f175c60:	10000051 */ 	beqz	$zero,.L0f175da8
/*  f175c64:	a1b80000 */ 	sb	$t8,0x0($t5)
/*  f175c68:	92a20007 */ 	lbu	$v0,0x7($s5)
.L0f175c6c:
/*  f175c6c:	8ea30004 */ 	lw	$v1,0x4($s5)
/*  f175c70:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f175c74:	0002c902 */ 	srl	$t9,$v0,0x4
/*  f175c78:	306f000f */ 	andi	$t7,$v1,0xf
/*  f175c7c:	172f0004 */ 	bne	$t9,$t7,.L0f175c90
/*  f175c80:	01e01825 */ 	or	$v1,$t7,$zero
/*  f175c84:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f175c88:	31cc000f */ 	andi	$t4,$t6,0xf
/*  f175c8c:	132c000b */ 	beq	$t9,$t4,.L0f175cbc
.L0f175c90:
/*  f175c90:	24020001 */ 	addiu	$v0,$zero,0x1
/*  f175c94:	02e3c021 */ 	addu	$t8,$s7,$v1
/*  f175c98:	a3020000 */ 	sb	$v0,0x0($t8)
/*  f175c9c:	92ad0007 */ 	lbu	$t5,0x7($s5)
/*  f175ca0:	000dc902 */ 	srl	$t9,$t5,0x4
/*  f175ca4:	02f97821 */ 	addu	$t7,$s7,$t9
/*  f175ca8:	a1e20000 */ 	sb	$v0,0x0($t7)
/*  f175cac:	8eae0000 */ 	lw	$t6,0x0($s5)
/*  f175cb0:	31cc000f */ 	andi	$t4,$t6,0xf
/*  f175cb4:	02ecc021 */ 	addu	$t8,$s7,$t4
/*  f175cb8:	a3020000 */ 	sb	$v0,0x0($t8)
.L0f175cbc:
/*  f175cbc:	96a30006 */ 	lhu	$v1,0x6($s5)
/*  f175cc0:	92a20006 */ 	lbu	$v0,0x6($s5)
/*  f175cc4:	00036b02 */ 	srl	$t5,$v1,0xc
/*  f175cc8:	3059000f */ 	andi	$t9,$v0,0xf
/*  f175ccc:	15b90004 */ 	bne	$t5,$t9,.L0f175ce0
/*  f175cd0:	03201025 */ 	or	$v0,$t9,$zero
/*  f175cd4:	92af0003 */ 	lbu	$t7,0x3($s5)
/*  f175cd8:	000f7102 */ 	srl	$t6,$t7,0x4
/*  f175cdc:	11ae000b */ 	beq	$t5,$t6,.L0f175d0c
.L0f175ce0:
/*  f175ce0:	24030001 */ 	addiu	$v1,$zero,0x1
/*  f175ce4:	02e26021 */ 	addu	$t4,$s7,$v0
/*  f175ce8:	a1830000 */ 	sb	$v1,0x0($t4)
/*  f175cec:	96b80006 */ 	lhu	$t8,0x6($s5)
/*  f175cf0:	00186b02 */ 	srl	$t5,$t8,0xc
/*  f175cf4:	02edc821 */ 	addu	$t9,$s7,$t5
/*  f175cf8:	a3230000 */ 	sb	$v1,0x0($t9)
/*  f175cfc:	92af0003 */ 	lbu	$t7,0x3($s5)
/*  f175d00:	000f7102 */ 	srl	$t6,$t7,0x4
/*  f175d04:	02ee6021 */ 	addu	$t4,$s7,$t6
/*  f175d08:	a1830000 */ 	sb	$v1,0x0($t4)
.L0f175d0c:
/*  f175d0c:	92a30005 */ 	lbu	$v1,0x5($s5)
/*  f175d10:	96a20004 */ 	lhu	$v0,0x4($s5)
/*  f175d14:	0003c102 */ 	srl	$t8,$v1,0x4
/*  f175d18:	304d000f */ 	andi	$t5,$v0,0xf
/*  f175d1c:	170d0004 */ 	bne	$t8,$t5,.L0f175d30
/*  f175d20:	01a01025 */ 	or	$v0,$t5,$zero
/*  f175d24:	92b90002 */ 	lbu	$t9,0x2($s5)
/*  f175d28:	332f000f */ 	andi	$t7,$t9,0xf
/*  f175d2c:	130f000a */ 	beq	$t8,$t7,.L0f175d58
.L0f175d30:
/*  f175d30:	02e27021 */ 	addu	$t6,$s7,$v0
/*  f175d34:	a1c40000 */ 	sb	$a0,0x0($t6)
/*  f175d38:	92ac0005 */ 	lbu	$t4,0x5($s5)
/*  f175d3c:	000cc102 */ 	srl	$t8,$t4,0x4
/*  f175d40:	02f86821 */ 	addu	$t5,$s7,$t8
/*  f175d44:	a1a40000 */ 	sb	$a0,0x0($t5)
/*  f175d48:	92b90002 */ 	lbu	$t9,0x2($s5)
/*  f175d4c:	332f000f */ 	andi	$t7,$t9,0xf
/*  f175d50:	02ef7021 */ 	addu	$t6,$s7,$t7
/*  f175d54:	a1c40000 */ 	sb	$a0,0x0($t6)
.L0f175d58:
/*  f175d58:	8ea30004 */ 	lw	$v1,0x4($s5)
/*  f175d5c:	92a20004 */ 	lbu	$v0,0x4($s5)
/*  f175d60:	24040001 */ 	addiu	$a0,$zero,0x1
/*  f175d64:	00036702 */ 	srl	$t4,$v1,0x1c
/*  f175d68:	3058000f */ 	andi	$t8,$v0,0xf
/*  f175d6c:	15980004 */ 	bne	$t4,$t8,.L0f175d80
/*  f175d70:	03001025 */ 	or	$v0,$t8,$zero
/*  f175d74:	96ad0002 */ 	lhu	$t5,0x2($s5)
/*  f175d78:	000dcb02 */ 	srl	$t9,$t5,0xc
/*  f175d7c:	1199000a */ 	beq	$t4,$t9,.L0f175da8
.L0f175d80:
/*  f175d80:	02e27821 */ 	addu	$t7,$s7,$v0
/*  f175d84:	a1e40000 */ 	sb	$a0,0x0($t7)
/*  f175d88:	8eae0004 */ 	lw	$t6,0x4($s5)
/*  f175d8c:	000e6702 */ 	srl	$t4,$t6,0x1c
/*  f175d90:	02ecc021 */ 	addu	$t8,$s7,$t4
/*  f175d94:	a3040000 */ 	sb	$a0,0x0($t8)
/*  f175d98:	96ad0002 */ 	lhu	$t5,0x2($s5)
/*  f175d9c:	000dcb02 */ 	srl	$t9,$t5,0xc
/*  f175da0:	02f97821 */ 	addu	$t7,$s7,$t9
/*  f175da4:	a1e40000 */ 	sb	$a0,0x0($t7)
.L0f175da8:
/*  f175da8:	3c018008 */ 	lui	$at,0x8008
/*  f175dac:	ac2044d0 */ 	sw	$zero,0x44d0($at)
/*  f175db0:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f175db4:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175db8:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175dbc:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175dc0:	8eb8fffc */ 	lw	$t8,-0x4($s5)
/*  f175dc4:	1000001e */ 	beqz	$zero,.L0f175e40
/*  f175dc8:	aed8fffc */ 	sw	$t8,-0x4($s6)
/*  f175dcc:	240d0001 */ 	addiu	$t5,$zero,0x1
/*  f175dd0:	001e102b */ 	sltu	$v0,$zero,$s8
/*  f175dd4:	afad00e4 */ 	sw	$t5,0xe4($sp)
/*  f175dd8:	0000f025 */ 	or	$s8,$zero,$zero
/*  f175ddc:	10400003 */ 	beqz	$v0,.L0f175dec
/*  f175de0:	afa00104 */ 	sw	$zero,0x104($sp)
/*  f175de4:	24190001 */ 	addiu	$t9,$zero,0x1
/*  f175de8:	afb900e8 */ 	sw	$t9,0xe8($sp)
.L0f175dec:
/*  f175dec:	afb6012c */ 	sw	$s6,0x12c($sp)
/*  f175df0:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f175df4:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175df8:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175dfc:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175e00:	8eaefffc */ 	lw	$t6,-0x4($s5)
/*  f175e04:	1000000e */ 	beqz	$zero,.L0f175e40
/*  f175e08:	aecefffc */ 	sw	$t6,-0x4($s6)
/*  f175e0c:	8ea10000 */ 	lw	$at,0x0($s5)
/*  f175e10:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175e14:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175e18:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175e1c:	8eb9fffc */ 	lw	$t9,-0x4($s5)
/*  f175e20:	10000007 */ 	beqz	$zero,.L0f175e40
/*  f175e24:	aed9fffc */ 	sw	$t9,-0x4($s6)
.L0f175e28:
/*  f175e28:	8ea10000 */ 	lw	$at,0x0($s5)
.L0f175e2c:
/*  f175e2c:	26d60008 */ 	addiu	$s6,$s6,0x8
/*  f175e30:	26b50008 */ 	addiu	$s5,$s5,0x8
/*  f175e34:	aec1fff8 */ 	sw	$at,-0x8($s6)
/*  f175e38:	8eaefffc */ 	lw	$t6,-0x4($s5)
/*  f175e3c:	aecefffc */ 	sw	$t6,-0x4($s6)
.L0f175e40:
/*  f175e40:	8fad0128 */ 	lw	$t5,0x128($sp)
/*  f175e44:	8fb900e4 */ 	lw	$t9,0xe4($sp)
/*  f175e48:	25b8ffff */ 	addiu	$t8,$t5,-1
/*  f175e4c:	17200003 */ 	bnez	$t9,.L0f175e5c
/*  f175e50:	afb80128 */ 	sw	$t8,0x128($sp)
/*  f175e54:	5f000017 */ 	bgtzl	$t8,.L0f175eb4
/*  f175e58:	8fad0128 */ 	lw	$t5,0x128($sp)
.L0f175e5c:
/*  f175e5c:	8faf00e8 */ 	lw	$t7,0xe8($sp)
/*  f175e60:	afa000e4 */ 	sw	$zero,0xe4($sp)
/*  f175e64:	00008025 */ 	or	$s0,$zero,$zero
/*  f175e68:	55e00004 */ 	bnezl	$t7,.L0f175e7c
/*  f175e6c:	afa000e8 */ 	sw	$zero,0xe8($sp)
/*  f175e70:	53c00010 */ 	beqzl	$s8,.L0f175eb4
/*  f175e74:	8fad0128 */ 	lw	$t5,0x128($sp)
/*  f175e78:	afa000e8 */ 	sw	$zero,0xe8($sp)
.L0f175e7c:
/*  f175e7c:	27b10090 */ 	addiu	$s1,$sp,0x90
.L0f175e80:
/*  f175e80:	922c0000 */ 	lbu	$t4,0x0($s1)
/*  f175e84:	00107080 */ 	sll	$t6,$s0,0x2
/*  f175e88:	03ae2021 */ 	addu	$a0,$sp,$t6
/*  f175e8c:	51800005 */ 	beqzl	$t4,.L0f175ea4
/*  f175e90:	26100001 */ 	addiu	$s0,$s0,0x1
/*  f175e94:	0fc4f01f */ 	jal	func0f13c07c
/*  f175e98:	8c8400a0 */ 	lw	$a0,0xa0($a0)
/*  f175e9c:	a2200000 */ 	sb	$zero,0x0($s1)
/*  f175ea0:	26100001 */ 	addiu	$s0,$s0,0x1
.L0f175ea4:
/*  f175ea4:	24010010 */ 	addiu	$at,$zero,0x10
/*  f175ea8:	1601fff5 */ 	bne	$s0,$at,.L0f175e80
/*  f175eac:	26310001 */ 	addiu	$s1,$s1,0x1
/*  f175eb0:	8fad0128 */ 	lw	$t5,0x128($sp)
.L0f175eb4:
/*  f175eb4:	5da0fe2f */ 	bgtzl	$t5,.L0f175774
/*  f175eb8:	92a30000 */ 	lbu	$v1,0x0($s5)
/*  f175ebc:	8fb90140 */ 	lw	$t9,0x140($sp)
.L0f175ec0:
/*  f175ec0:	8fbf0054 */ 	lw	$ra,0x54($sp)
/*  f175ec4:	8fb00030 */ 	lw	$s0,0x30($sp)
/*  f175ec8:	02d91023 */ 	subu	$v0,$s6,$t9
/*  f175ecc:	8fb60048 */ 	lw	$s6,0x48($sp)
/*  f175ed0:	8fb10034 */ 	lw	$s1,0x34($sp)
/*  f175ed4:	8fb20038 */ 	lw	$s2,0x38($sp)
/*  f175ed8:	8fb3003c */ 	lw	$s3,0x3c($sp)
/*  f175edc:	8fb40040 */ 	lw	$s4,0x40($sp)
/*  f175ee0:	8fb50044 */ 	lw	$s5,0x44($sp)
/*  f175ee4:	8fb7004c */ 	lw	$s7,0x4c($sp)
/*  f175ee8:	8fbe0050 */ 	lw	$s8,0x50($sp)
/*  f175eec:	03e00008 */ 	jr	$ra
/*  f175ef0:	27bd0138 */ 	addiu	$sp,$sp,0x138
);

GLOBAL_ASM(
glabel func0f175ef4
/*  f175ef4:	000670c3 */ 	sra	$t6,$a2,0x3
/*  f175ef8:	25c2ffff */ 	addiu	$v0,$t6,-1
/*  f175efc:	01c03025 */ 	or	$a2,$t6,$zero
/*  f175f00:	000218c0 */ 	sll	$v1,$v0,0x3
/*  f175f04:	00642021 */ 	addu	$a0,$v1,$a0
/*  f175f08:	00652821 */ 	addu	$a1,$v1,$a1
/*  f175f0c:	01c03825 */ 	or	$a3,$t6,$zero
/*  f175f10:	10c0000a */ 	beqz	$a2,.L0f175f3c
/*  f175f14:	00403025 */ 	or	$a2,$v0,$zero
.L0f175f18:
/*  f175f18:	8c980000 */ 	lw	$t8,0x0($a0)
/*  f175f1c:	8c990004 */ 	lw	$t9,0x4($a0)
/*  f175f20:	00c03825 */ 	or	$a3,$a2,$zero
/*  f175f24:	24a5fff8 */ 	addiu	$a1,$a1,-8
/*  f175f28:	2484fff8 */ 	addiu	$a0,$a0,-8
/*  f175f2c:	acb80008 */ 	sw	$t8,0x8($a1)
/*  f175f30:	acb9000c */ 	sw	$t9,0xc($a1)
/*  f175f34:	14c0fff8 */ 	bnez	$a2,.L0f175f18
/*  f175f38:	24c6ffff */ 	addiu	$a2,$a2,-1
.L0f175f3c:
/*  f175f3c:	03e00008 */ 	jr	$ra
/*  f175f40:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175f44:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175f48:	00000000 */ 	sll	$zero,$zero,0x0
/*  f175f4c:	00000000 */ 	sll	$zero,$zero,0x0
);