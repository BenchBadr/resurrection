static const u8 sDummyDesc[] = _(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] = _(
    "Un objet qui permet\n"
    "d’attraper les\n"
    "Pokémon sauvages.");

static const u8 sGreatBallDesc[] = _(
    "BALL au taux de\n"
    "réussite supérieur\n"
    "à la POKé BALL.");

static const u8 sUltraBallDesc[] = _(
    "BALL au taux de\n"
    "réussite supérieur\n"
    "à la SUPER BALL.");

static const u8 sMasterBallDesc[] = _(
    "La meilleure BALL.\n"
    "Capture le Pokémon\n"
    "à coup sûr.");

static const u8 sPremierBallDesc[] = _(
    "Une BALL rare créée\n"
    "à l’occasion d’un\n"
    "grand évènement.");

static const u8 sHealBallDesc[] = _(
    "Une BALL qui soigne \n"
    "le Pokémon attrapé.");

static const u8 sNetBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur un Pokémon\n"
    "EAU ou INSECTE.");

static const u8 sNestBallDesc[] = _(
    "Une BALL qui marche\n"
    "mieux avec les\n"
    "Pokémon faibles.");

static const u8 sDiveBallDesc[] = _(
    "Une BALL qui marche\n"
    "mieux avec les\n"
    "{PKMN} sous-marins.");

static const u8 sDuskBallDesc[] = _(
    "Une BALL qui \n"
    "marche mieux dans \n"
    "les zones sombres.");

static const u8 sTimerBallDesc[] = _(
    "Plus efficace\n"
    "pendant les\n"
    "combats longs.");

static const u8 sQuickBallDesc[] = _(
    "Une BALL qui marche\n"
    "mieux au début des \n"
    "combats.");

static const u8 sRepeatBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur un Pokémon\n"
    "déjà capturé.");

static const u8 sLuxuryBallDesc[] = _(
    "Une BALL confor-\n"
    "table qui rend les\n"
    "Pokémon amicaux.");

static const u8 sLevelBallDesc[] = _(
    "Une BALL qui marche \n"
    "bien sur les Pokémon\n"
    "de bas niveau.");

static const u8 sLureBallDesc[] = _(
    "Une BALL qui marche \n"
    "bien sur les Pokémon\n"
    "ferrés.");

static const u8 sMoonBallDesc[] = _(
    "Une BALL liée à \n"
    "l'énergie lunaire et\n"
    "à ses Pokémon.");

static const u8 sFriendBallDesc[] = _(
    "Une BALL qui rend\n"
    "les Pokémon attrapés\n"
    "amicaux.");

static const u8 sLoveBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur les Pokémon\n"
    "de sexe opposé.");

static const u8 sFastBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur les Pokémon\n"
    "très rapides.");

static const u8 sHeavyBallDesc[] = _(
    "Une BALL qui marche\n"
    "bien sur les Pokémon\n"
    "les plus lourds");

static const u8 sDreamBallDesc[] = _(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "Une BALL qui marche\n"
    "bien sur les Pokémon\n"
    "qui rêvent.");
#else
    "Une BALL utilisée à \n"
    "l'entrée de la forêt \n"
    "des rêves.");
#endif

static const u8 sSafariBallDesc[] = _(
    "Une BALL spéciale\n"
    "utilisée juste\n"
    "au PARC SAFARI.");

static const u8 sSportBallDesc[] = _(
    "Une BALL utilisée\n"
    "dans les concours\n"
    "de capture.");

static const u8 sParkBallDesc[] = _(
    "Une BALL spéciale\n"
    "utilisable dans \n"
    "le Parc des Amis.");

static const u8 sBeastBallDesc[] = _(
    "Une BALL créée pour\n"
    "attraper des \n"
    "Ultra-Chimères.");

static const u8 sCherishBallDesc[] = _(
    "Une BALL spéciale\n"
    "créée pour un évèn-\n"
    "ement particulier");

// Medicine
static const u8 sPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un Pokémon\n"
    "de 20 points.");

static const u8 sSuperPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un Pokémon de\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "60 points.");
#else
    "50 points.");
#endif

static const u8 sHyperPotionDesc[] = _(
    "Restaure les PV\n"
    "d’un Pokémon de\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "120 points.");
#else
    "200 points.");
#endif

static const u8 sMaxPotionDesc[] = _(
    "Restaure tous les\n"
    "PV d’un Pokémon.");

static const u8 sFullRestoreDesc[] = _(
    "Restaure tous les\n"
    "PV et le statut\n"
    "d’un Pokémon.");

static const u8 sReviveDesc[] = _(
    "Réanime un Pokémon\n"
    "K.O. et restaure la\n"
    "moitié de ses PV.");

static const u8 sMaxReviveDesc[] = _(
    "Réanime un Pokémon\n"
    "K.O. et restaure\n"
    "tous ses PV.");

static const u8 sFreshWaterDesc[] = _(
    "Une eau minérale\n"
    "qui restaure 30 PV.");

static const u8 sSodaPopDesc[] = _(
    "Une boisson\n"
    "pétillante qui\n"
    "restaure 50 PV.");

static const u8 sLemonadeDesc[] = _(
    "Une boisson très\n"
    "sucrée qui\n"
    "restaure 70 PV.");

static const u8 sMoomooMilkDesc[] = _(
    "Un lait nourrissant\n"
    "qui restaure les PV\n"
    "de 100 points.");

static const u8 sEnergyPowderDesc[] = _(
    "Une poudre amère\n"
    "qui restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 60 points.");
#else
    "de 50 points.");
#endif

static const u8 sEnergyRootDesc[] = _(
    "Une racine amère\n"
    "qui restaure les PV\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "de 120 points.");
#else
    "de 200 points.");
#endif

static const u8 sHealPowderDesc[] = _(
    "Une poudre amère\n"
    "soignant les chan-\n"
    "gements de statut.");

static const u8 sRevivalHerbDesc[] = _(
    "Une herbe très\n"
    "amère qui réanime\n"
    "un Pokémon K.O.");

static const u8 sAntidoteDesc[] = _(
    "Soigne les Pokémon\n"
    "empoisonnés.");

static const u8 sParalyzeHealDesc[] = _(
    "Soigne les Pokémon\n"
    "paralysés.");

static const u8 sBurnHealDesc[] = _(
    "Soigne les Pokémon\n"
    "de leurs brûlures.");

static const u8 sIceHealDesc[] = _(
    "Décongèle les\n"
    "Pokémon gelés.");

static const u8 sAwakeningDesc[] = _(
    "Réveille les\n"
    "Pokémon endormis.");

static const u8 sFullHealDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sEtherDesc[] = _(
    "Restaure 10 PP\n"
    "d’une attaque\n"
    "sélectionnée.");

static const u8 sMaxEtherDesc[] = _(
    "Restaure tous les\n"
    "PP d’une attaque\n"
    "sélectionnée.");

static const u8 sElixirDesc[] = _(
    "Restaure 10 PP\n"
    "de toutes les\n"
    "attaques.");

static const u8 sMaxElixirDesc[] = _(
    "Restaure tous les\n"
    "PP de toutes les\n"
    "attaques.");

static const u8 sBerryJuiceDesc[] = _(
    "Une boisson 100%\n"
    "pur jus qui\n"
    "restaure 20 PV.");

static const u8 sSacredAshDesc[] = _(
    "Réanime tous les\n"
    "Pokémon K.O. et\n"
    "restaure leurs PV.");

static const u8 sSweetHeartDesc[] = _(
    "Un doux chocholat\n"
    "qui restaure 20\n"
    "PV.");

static const u8 sMaxHoneyDesc[] = _(
    "Réanime un Pokémon\n"
    "K.O. et restaure\n"
    "tous ses PV.");

static const u8 sPewterCrunchiesDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sRageCandyBarDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sLavaCookieDesc[] = _(
    "Spécialité locale\n"
    "soignant les chan-\n"
    "gements de statut.");

static const u8 sOldGateauDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sCasteliaconeDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sLumioseGaletteDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sShalourSableDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

static const u8 sBigMalasadaDesc[] = _(
    "Soigne les change-\n"
    "ments de statut \n"
    "d’un Pokémon.");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "Monte les PV d’un\n"
    "Pokémon.");

static const u8 sProteinDesc[] = _(
    "Monte l’ATTAQUE\n"
    "d’un Pokémon.");

static const u8 sIronDesc[] = _(
    "Monte la DEFENSE\n"
    "d’un Pokémon.");

static const u8 sCalciumDesc[] = _(
    "Monte l’ATQ. SPE.\n"
    "d’un Pokémon.");

static const u8 sZincDesc[] = _(
    "Monte la DEF. SPE.\n"
    "d’un Pokémon.");

static const u8 sCarbosDesc[] = _(
    "Monte la VITESSE\n"
    "d’un Pokémon.");

static const u8 sPPUpDesc[] = _(
    "Monte les PP max.\n"
    "d’une attaque\n"
    "sélectionnée.");

static const u8 sPPMaxDesc[] = _(
    "Monte les PP d’une\n"
    "attaque à son\n"
    "maximum.");

// EV Feathers
static const u8 sHealthFeatherDesc[] = _(
    "Un objet qui monte\n"
    "les PV d'un\n"
    "Pokémon.");

static const u8 sMuscleFeatherDesc[] = _(
    "Un objet qui monte\n"
    "l'ATTAQUE d'un\n"
    "Pokémon.");

static const u8 sResistFeatherDesc[] = _(
    "Un objet qui monte\n"
    "la DEFENSE d'un\n"
    "Pokémon.");

static const u8 sGeniusFeatherDesc[] = _(
    "Un objet qui monte\n"
    "l'ATT. SPE. d'un\n"
    "Pokémon.");

static const u8 sCleverFeatherDesc[] = _(
    "Un objet qui monte\n"
    "la DEF. SPE. d'un\n"
    "Pokémon.");

static const u8 sSwiftFeatherDesc[] = _(
    "Un objet qui monte\n"
    "la VITESSE d'un\n"
    "Pokémon.");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] = _(
    "Change le talent\n"
    "d'un Pokémon.");

static const u8 sAbilityPatchDesc[] = _(
    "Change le talent d'un\n"
    "Pokémon en son\n"
    "talent caché");

// Mints
static const u8 sLonelyMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT - DEF.");

static const u8 sAdamantMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT - ATT.SPE");

static const u8 sNaughtyMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT - DEF.SPE.");

static const u8 sBraveMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT - VIT.");

static const u8 sBoldMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF - ATT.");

static const u8 sImpishMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF - ATT.SPE.");

static const u8 sLaxMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF - DEF.SPE.");

static const u8 sRelaxedMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF - VIT");

static const u8 sModestMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT.SPE - ATT.");

static const u8 sMildMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT.SPE - DEF.");

static const u8 sRashMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT.SPE - DEF.SPE.");

static const u8 sQuietMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ ATT.SPE - VIT.");

static const u8 sCalmMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF.SPE - ATT.");

static const u8 sGentleMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF.SPE - DEF.");

static const u8 sCarefulMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF.SPE - ATT.SPE.");

static const u8 sSassyMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ DEF.SPE - VIT.");

static const u8 sTimidMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ VIT - ATT.");

static const u8 sHastyMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ VIT - DEF.");

static const u8 sJollyMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ VIT - ATT.SPE");

static const u8 sNaiveMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon en\n"
    "+ VIT - DEF.SPE");

static const u8 sSeriousMintDesc[] = _(
    "Change la nature\n"
    "d'un Pokémon et\n"
    "équilibre ses stats");

// Candy
static const u8 sRareCandyDesc[] = _(
    "Fait progresser un\n"
    "Pokémon d’un\n"
    "niveau.");

static const u8 sExpCandyXSDesc[] = _(
    "Donne très peu\n"
    "de points Exp.\n"
    "à un Pokémon.");

static const u8 sExpCandySDesc[] = _(
    "Donne un peu\n"
    "de points Exp.\n"
    "à un Pokémon.");

static const u8 sExpCandyMDesc[] = _(
    "Donne un certain\n"
    "nombre de points\n"
    "Exp. à un Pokémon.");

static const u8 sExpCandyLDesc[] = _(
    "Donne beaucoup\n"
    "de points Exp.\n"
    "à un Pokémon.");

static const u8 sExpCandyXLDesc[] = _(
    "Donne énormément\n"
    "de points Exp.\n"
    "à un Pokémon.");

static const u8 sDynamaxCandyDesc[] = _(
    "Monte de 1 le\n"
    "niveau Dynamax\n"
    "d'un Pokémon");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui réveille les\n"
    "Pokémon endormis.");

static const u8 sYellowFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui sort un Pokémon\n"
    "de sa confusion.");

static const u8 sRedFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui met fin à\n"
    "l’attirance.");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui repousse les\n"
    "Pokémon sauvages.");

static const u8 sWhiteFluteDesc[] = _(
    "Une flûte en verre\n"
    "qui attire les\n"
    "Pokémon sauvages.");

// Encounter Modifiers
static const u8 sRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 100 pas.");

static const u8 sSuperRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 200 pas.");

static const u8 sMaxRepelDesc[] = _(
    "Repousse les {PKMN}\n"
    "sauvages faibles \n"
    "durant 250 pas.");

static const u8 sLureDesc[] = _(
    "Attire les Pokémon\n"
    "rares durant\n"
    "100 pas.");

static const u8 sSuperLureDesc[] = _(
    "Attire les Pokémon\n"
    "rares durant\n"
    "200 pas.");

static const u8 sMaxLureDesc[] = _(
    "Attire les Pokémon\n"
    "rares durant\n"
    "250 pas.");

static const u8 sEscapeRopeDesc[] = _(
    "Pour sortir rapide-\n"
    "ment d’une grotte\n"
    "ou d’un souterrain.");

// Battle items
static const u8 sXAttackDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte beaucoup\n"
    "l’ATTAQUE pendant\n"
    "un combat.");
#else
    "Monte l’ATTAQUE\n"
    "pendant un combat.");
#endif

static const u8 sXDefenseDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte beaucoup\n"
    "la DEFENSE pendant\n"
    "un combat.");
#else
    "Monte la DEFENSE\n"
    "pendant un combat.");
#endif

static const u8 sXSpAtkDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte beaucoup\n"
    "l'ATT.SPE pendant\n"
    "un combat.");
#else
    "Monte l’ATQ. SPE.\n"
    "pendant un combat.");
#endif

static const u8 sXSpDefDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte beaucoup\n"
    "la DEF.SPE pendant\n"
    "un combat.");
#else
    "Monte la DEF.SPE\n"
    "pendant un combat.");
#endif

static const u8 sXSpeedDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte beaucoup\n"
    "la VITESSE pendant\n"
    "un combat.");
#else
    "Monte la VITESSE\n"
    "pendant un combat.");

#endif

static const u8 sXAccuracyDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Monte grandement la\n"
    "précision pendant\n"
    "un combat.");
#else
    "Monte la précision\n"
    "pendant un combat.");
#endif

static const u8 sDireHitDesc[] = _(
    "Monte le taux de\n"
    "critiques pendant\n"
    "un combat.");

static const u8 sGuardSpecDesc[] = _(
    "Empêche la perte\n"
    "de points de stats\n"
    "pendant un combat.");

// Escape Items
static const u8 sPokeDollDesc[] = _(
    "Pour s’enfuir d’un\n"
    "combat contre un\n"
    "Pokémon sauvage.");

static const u8 sFluffyTailDesc[] = _(
    "Pour s’enfuir d’un\n"
    "combat contre un\n"
    "Pokémon sauvage.");

static const u8 sPokeToyDesc[] = _(
    "Pour s’enfuir d’un\n"
    "combat contre un\n"
    "Pokémon sauvage.");

static const u8 sMaxMushroomsDesc[] = _(
    "Monte toutes les\n"
    "statistiques\n"
    "pendant un combat.");

// Treasures
static const u8 sBottleCapDesc[] = _(
    "Une jolie capsule\n"
    "en argent à\n"
    "offrir.");

static const u8 sGoldBottleCapDesc[] = _(
    "Une jolie capsule\n"
    "en or à\n"
    "offrir.");

static const u8 sNuggetDesc[] = _(
    "Pépite d’or pur.\n"
    "Peut être vendue\n"
    "à bon prix.");

static const u8 sBigNuggetDesc[] = _(
    "Grosse pépite d'or.\n"
    "Peut être vendue\n"
    "à bon prix.");

static const u8 sTinyMushroomDesc[] = _(
    "Un champignon or-\n"
    "dinaire. Peut être\n"
    "vendu à bas prix.");

static const u8 sBigMushroomDesc[] = _(
    "Un champignon rare.\n"
    "Peut être vendu\n"
    "à bon prix.");

static const u8 sBalmMushroomDesc[] = _(
    "Un champignon très\n"
    "rare. Peut être\n"
    "vendu à bon prix.");

static const u8 sPearlDesc[] = _(
    "Une jolie perle.\n"
    "Peut être vendue\n"
    "à bas prix.");

static const u8 sBigPearlDesc[] = _(
    "Une perle magni-\n"
    "fique. Peut être\n"
    "vendue à bon prix.");

static const u8 sPearlStringDesc[] = _(
    "Un groupe de perles\n"
    "qui peut être vendu\n"
    "à bon prix.");

static const u8 sStardustDesc[] = _(
    "Sable rouge très\n"
    "fin. Peut être\n"
    "vendu à bon prix.");

static const u8 sStarPieceDesc[] = _(
    "Fragment de gemme\n"
    "rouge. Peut se ven-\n"
    "dre à très bon prix.");

static const u8 sCometShardDesc[] = _(
    "Un morceau de\n"
    "comète. Peut être\n"
    "vendu à bon prix.");

static const u8 sShoalSaltDesc[] = _(
    "Sel obtenu dans\n"
    "la Grotte Tréfonds.");

static const u8 sShoalShellDesc[] = _(
    "Coquille obtenue\n"
    "dans la Grotte\n"
    "Tréfonds.");

static const u8 sRedShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sBlueShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sYellowShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sGreenShardDesc[] = _(
    "Fragment d’objet\n"
    "antique. Peut être\n"
    "vendu à bas prix.");

static const u8 sHeartScaleDesc[] = _(
    "Une jolie écaille\n"
    "convoitée par les\n"
    "collectionneurs.");

static const u8 sHoneyDesc[] = _(
    "Un doux miel qui\n"
    "attire les Pokémon\n"
    "sauvages.");

static const u8 sRareBoneDesc[] = _(
    "Un os très rare.\n"
    "Peut être vendu\n"
    "à bon prix.");

static const u8 sOddKeystoneDesc[] = _(
    "Des voix peuvent\n"
    "sortir de cette\n"
    "roche.");

static const u8 sPrettyFeatherDesc[] = _(
    "Une jolie plume\n"
    "ordinaire qui ne\n"
    "fait rien.");

static const u8 sRelicCopperDesc[] = _(
    "Une vieille pièce\n"
    "en bronze vendable\n"
    "à un bon prix.");

static const u8 sRelicSilverDesc[] = _(
    "Une vieille pièce\n"
    "en argent vendable\n"
    "à un bon prix.");

static const u8 sRelicGoldDesc[] = _(
    "Une vieille pièce\n"
    "en or vendable\n"
    "à un bon prix.");

static const u8 sRelicVaseDesc[] = _(
    "Un vieux vase\n"
    "vendable\n"
    "à un bon prix.");

static const u8 sRelicBandDesc[] = _(
    "Un vieux bijou\n"
    "vendable\n"
    "à un bon prix.");

static const u8 sRelicStatueDesc[] = _(
    "Une vieille\n"
    "statue vendable\n"
    "à un bon prix.");

static const u8 sRelicCrownDesc[] = _(
    "Une vieille couro-\n"
    "nne vendable\n"
    "à un bon prix.");

static const u8 sStrangeSouvenirDesc[] = _(
    "Un ornement à\n"
    "l'image d'un\n"
    "Pokémon vénéré.");

// Fossils
static const u8 sHelixFossilDesc[] = _(
    "Fossile d'un POKé-\n"
    "MON aquatique venant\n"
    "des temps anciens.");

static const u8 sDomeFossilDesc[] = _(
    "Fossile d'un POKé-\n"
    "MON aquatique venant\n"
    "des temps anciens.");

static const u8 sOldAmberDesc[] = _(
    "Une pierre contenant\n"
    "les gènes d'un\n"
    "Pokémon ancien.");

static const u8 sRootFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "sous-marin.");

static const u8 sClawFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "sous-marin.");

static const u8 sArmorFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "terrestre.");

static const u8 sSkullFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "terrestre.");

static const u8 sCoverFossilDesc[] = _(
    "Fossile d'un POKé-\n"
    "MON aquatique venant\n"
    "des temps anciens.");

static const u8 sPlumeFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "volant.");

static const u8 sJawFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "terrestre.");

static const u8 sSailFossilDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "terrestre.");

static const u8 sFossilizedBirdDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "volant.");

static const u8 sFossilizedFishDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "sous-marin.");

static const u8 sFossilizedDrakeDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "terrestre.");

static const u8 sFossilizedDinoDesc[] = _(
    "Fossile d’un très\n"
    "vieux Pokémon\n"
    "sous-marin.");

// Mulch
static const u8 sGrowthMulchDesc[] = _(
    "Un engrais qui\n"
    "accélère la croiss-\n"
    "ance des baies.");

static const u8 sDampMulchDesc[] = _(
    "Un engrais qui\n"
    "ralentis la croiss-\n"
    "ance des baies.");

static const u8 sStableMulchDesc[] = _(
    "Un engrais qui\n"
    "rallonge la vie\n"
    "des baies mures.");

static const u8 sGooeyMulchDesc[] = _(
    "Un engrais qui\n"
    "augmente les chances\n"
    "de replant.");

static const u8 sRichMulchDesc[] = _(
    "Un engrais qui\n"
    "augmente le nombre\n"
    "de baies récoltées.");

static const u8 sSurpriseMulchDesc[] = _(
    "Un engrais qui\n"
    "augmente les chances\n"
    "de mutations.");

static const u8 sBoostMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the dry speed\n"
    "of soft soil.");

static const u8 sAmazeMulchDesc[] = _(
    "A fertilizer Rich\n"
    "Surprising and\n"
    "Boosting as well.");

// Apricorns
static const u8 sRedApricornDesc[] = _(
    "A red apricorn.\n"
    "It assails your\n"
    "nostrils.");

static const u8 sBlueApricornDesc[] = _(
    "A blue apricorn.\n"
    "It smells a bit\n"
    "like grass.");

static const u8 sYellowApricornDesc[] = _(
    "A yellow apricorn.\n"
    "It has an invigor-\n"
    "ating scent.");

static const u8 sGreenApricornDesc[] = _(
    "A green apricorn.\n"
    "It has a strange,\n"
    "aromatic scent.");

static const u8 sPinkApricornDesc[] = _(
    "A pink apricorn.\n"
    "It has a nice,\n"
    "sweet scent.");

static const u8 sWhiteApricornDesc[] = _(
    "A white apricorn.\n"
    "It doesn't smell\n"
    "like anything.");

static const u8 sBlackApricornDesc[] = _(
    "A black apricorn.\n"
    "It has an inde-\n"
    "scribable scent.");

static const u8 sWishingPieceDesc[] = _(
    "Throw into a\n"
    "{PKMN} Den to attract\n"
    "Dynamax Pokémon.");

static const u8 sGalaricaTwigDesc[] = _(
    "A twig from a tree\n"
    "in Galar called\n"
    "Galarica.");

static const u8 sArmoriteOreDesc[] = _(
    "A rare ore. Can be\n"
    "found in the Isle\n"
    "of Armor at Galar.");

static const u8 sDyniteOreDesc[] = _(
    "A mysterious ore.\n"
    "It can be found in\n"
    "Galar's Max Lair.");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "A Zigzagoon-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sHarborMailDesc[] = _(
    "A Wingull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sGlitterMailDesc[] = _(
    "A Pikachu-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sMechMailDesc[] = _(
    "A Magnemite-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWoodMailDesc[] = _(
    "A Slakoth-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWaveMailDesc[] = _(
    "A Wailmer-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sBeadMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sShadowMailDesc[] = _(
    "A Duskull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sTropicMailDesc[] = _(
    "A Bellossom-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sDreamMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sFabMailDesc[] = _(
    "A gorgeous-print\n"
    "Mail to be held\n"
    "by a Pokémon.");

static const u8 sRetroMailDesc[] = _(
    "Mail featuring the\n"
    "drawings of three\n"
    "Pokémon.");

// Evolution Items
static const u8 sFireStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sWaterStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sThunderStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sLeafStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sIceStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSunStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sMoonStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sShinyStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDuskStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDawnStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSweetAppleDesc[] = _(
    "A very sweet apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sTartAppleDesc[] = _(
    "A very tart apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCrackedPotDesc[] = _(
    "A cracked teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sChippedPotDesc[] = _(
    "A chipped teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaCuffDesc[] = _(
    "A cuff from Galar\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaWreathDesc[] = _(
    "A wreath made in\n"
    "Galar. Makes some\n"
    "Pokémon evolve.");

static const u8 sDragonScaleDesc[] = _(
    "A strange scale\n"
    "held by Dragon-\n"
    "type Pokémon.");

static const u8 sUpgradeDesc[] = _(
    "A peculiar box made\n"
    "by Silph Co.");

static const u8 sProtectorDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's stiff\n"
    "and heavy.");

static const u8 sElectirizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of electric energy.");

static const u8 sMagmarizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of magma energy.");

static const u8 sDubiousDiscDesc[] = _(
    "A transparent device\n"
    "overflowing with\n"
    "dubious data.");

static const u8 sReaperClothDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. Imbued with\n"
    "spiritual energy.");

static const u8 sPrismScaleDesc[] = _(
    "A mysterious scale\n"
    "that evolves certain\n"
    "Pokémon. It shines.");

static const u8 sWhippedDreamDesc[] = _(
    "A soft and sweet\n"
    "treat loved by\n"
    "a certain Pokémon.");

static const u8 sSachetDesc[] = _(
    "A sachet filled with\n"
    "perfumes loved by\n"
    "a certain Pokémon.");

static const u8 sOvalStoneDesc[] = _(
    "Makes a certain\n"
    "Pokémon evolve. It's\n"
    "shaped like an egg.");

static const u8 sStrawberrySweetDesc[] = _(
    "Strawberry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sLoveSweetDesc[] = _(
    "A heart-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sBerrySweetDesc[] = _(
    "A berry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sCloverSweetDesc[] = _(
    "A clover-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sFlowerSweetDesc[] = _(
    "A flower-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sStarSweetDesc[] = _(
    "A star-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sRibbonSweetDesc[] = _(
    "A ribbon-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sEverstoneDesc[] = _(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

// Nectars
static const u8 sRedNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sYellowNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPinkNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPurpleNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

// Plates
static const u8 sFlamePlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "de type Feu attaques.");

static const u8 sSplashPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "de type Eau attaques.");

static const u8 sZapPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des Elec-\n"
    "tric de type attaques.");

static const u8 sMeadowPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "attaques de type Plante.");

static const u8 sIciclePlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Glace de type attaques.");

static const u8 sFistPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des \n"
    "attaques Combat.");

static const u8 sToxicPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Poison de type attaques.");

static const u8 sEarthPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Ground de type attaques.");

static const u8 sSkyPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Flying de type attaques.");

static const u8 sMindPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des Psy\n"
    "chic de type attaques.");

static const u8 sInsectPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Bug de type attaques.");

static const u8 sStonePlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Rock de type attaques.");

static const u8 sSpookyPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Ghost de type attaques.");

static const u8 sDracoPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Dragon de type attaques.");

static const u8 sDreadPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Dark de type attaques.");

static const u8 sIronPlateDesc[] = _(
    "Tablette augmentant\n"
    "la puissance des\n"
    "Acier de type attaques.");

static const u8 sPixiePlateDesc[] = _(
    "A stone tablet that\n"
    "boost la puissance des\n"
    "Fairy de type attaques.");

// Drives
static const u8 sDouseDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "de type Eau.");

static const u8 sShockDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "de type Electric.");

static const u8 sBurnDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "de type Feu.");

static const u8 sChillDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "de type Glace.");

// Memories
static const u8 sFireMemoryDesc[] = _(
    "A disc with Fire\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sWaterMemoryDesc[] = _(
    "A disc with Eau\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sElectricMemoryDesc[] = _(
    "A disc with Electric\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGrassMemoryDesc[] = _(
    "A disc with Grass\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sIceMemoryDesc[] = _(
    "A disc with Ice\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFightingMemoryDesc[] = _(
    "A disc with Fighting\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPoisonMemoryDesc[] = _(
    "A disc with Poison\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGroundMemoryDesc[] = _(
    "A disc with Ground\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFlyingMemoryDesc[] = _(
    "A disc with Flying\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPsychicMemoryDesc[] = _(
    "A disc with Psychic\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sBugMemoryDesc[] = _(
    "A disc with Bug\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRockMemoryDesc[] = _(
    "A disc with Rock\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGhostMemoryDesc[] = _(
    "A disc with Ghost\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDragonMemoryDesc[] = _(
    "A disc with Dragon\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDarkMemoryDesc[] = _(
    "A disc with Dark\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sSteelMemoryDesc[] = _(
    "A disc with Acier \n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFairyMemoryDesc[] = _(
    "A disc with Fairy\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRustedSwordDesc[] = _(
    "A rusty sword. A\n"
    "hero used it to\n"
    "halt a disaster.");

static const u8 sRustedShieldDesc[] = _(
    "A rusty shield. A\n"
    "hero used it to\n"
    "halt a disaster.");

// Colored Orbs
static const u8 sRedOrbDesc[] = _(
    "A red, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sBlueOrbDesc[] = _(
    "A blue, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

// Mega Stones
static const u8 sVenusauriteDesc[] = _(
    "This stone enables\n"
    "Venusaur to Mega\n"
    "Evolve in battle.");

static const u8 sCharizarditeDesc[] = _(
    "This stone enables\n"
    "Charizard to Mega\n"
    "Evolve in battle.");

static const u8 sBlastoisiniteDesc[] = _(
    "This stone enables\n"
    "Blastoise to Mega\n"
    "Evolve in battle.");

static const u8 sBeedrilliteDesc[] = _(
    "This stone enables\n"
    "Beedrill to Mega\n"
    "Evolve in battle.");

static const u8 sPidgeotiteDesc[] = _(
    "This stone enables\n"
    "Pidgeot to Mega\n"
    "Evolve in battle.");

static const u8 sAlakaziteDesc[] = _(
    "This stone enables\n"
    "Alakazam to Mega\n"
    "Evolve in battle.");

static const u8 sSlowbroniteDesc[] = _(
    "This stone enables\n"
    "Slowbro to Mega\n"
    "Evolve in battle.");

static const u8 sGengariteDesc[] = _(
    "This stone enables\n"
    "Gengar to Mega\n"
    "Evolve in battle.");

static const u8 sKangaskhaniteDesc[] = _(
    "This stone enables\n"
    "Kangaskhan to Mega\n"
    "Evolve in battle.");

static const u8 sPinsiriteDesc[] = _(
    "This stone enables\n"
    "Pinsir to Mega\n"
    "Evolve in battle.");

static const u8 sGyaradositeDesc[] = _(
    "This stone enables\n"
    "Gyarados to Mega\n"
    "Evolve in battle.");

static const u8 sAerodactyliteDesc[] = _(
    "This stone enables\n"
    "Aerodactyl to Mega\n"
    "Evolve in battle.");

static const u8 sMewtwoniteDesc[] = _(
    "This stone enables\n"
    "Mewtwo to Mega\n"
    "Evolve in battle.");

static const u8 sAmpharositeDesc[] = _(
    "This stone enables\n"
    "Ampharos to Mega\n"
    "Evolve in battle.");

static const u8 sSteelixiteDesc[] = _(
    "This stone enables\n"
    "Steelix to Mega\n"
    "Evolve in battle.");

static const u8 sScizoriteDesc[] = _(
    "This stone enables\n"
    "Scizor to Mega\n"
    "Evolve in battle.");

static const u8 sHeracroniteDesc[] = _(
    "This stone enables\n"
    "Heracross to Mega\n"
    "Evolve in battle.");

static const u8 sHoundoominiteDesc[] = _(
    "This stone enables\n"
    "Houndoom to Mega\n"
    "Evolve in battle.");

static const u8 sTyranitariteDesc[] = _(
    "This stone enables\n"
    "Tyranitar to Mega\n"
    "Evolve in battle.");

static const u8 sSceptiliteDesc[] = _(
    "This stone enables\n"
    "Sceptile to Mega\n"
    "Evolve in battle.");

static const u8 sBlazikeniteDesc[] = _(
    "This stone enables\n"
    "Blaziken to Mega\n"
    "Evolve in battle.");

static const u8 sSwampertiteDesc[] = _(
    "This stone enables\n"
    "Swampert to Mega\n"
    "Evolve in battle.");

static const u8 sGardevoiriteDesc[] = _(
    "This stone enables\n"
    "Gardevoir to Mega\n"
    "Evolve in battle.");

static const u8 sSableniteDesc[] = _(
    "This stone enables\n"
    "Sableye to Mega\n"
    "Evolve in battle.");

static const u8 sMawiliteDesc[] = _(
    "This stone enables\n"
    "Mawile to Mega\n"
    "Evolve in battle.");

static const u8 sAggroniteDesc[] = _(
    "This stone enables\n"
    "Aggron to Mega\n"
    "Evolve in battle.");

static const u8 sMedichamiteDesc[] = _(
    "This stone enables\n"
    "Medicham to Mega\n"
    "Evolve in battle.");

static const u8 sManectiteDesc[] = _(
    "This stone enables\n"
    "Manectric to Mega\n"
    "Evolve in battle.");

static const u8 sSharpedoniteDesc[] = _(
    "This stone enables\n"
    "Sharpedo to Mega\n"
    "Evolve in battle.");

static const u8 sCameruptiteDesc[] = _(
    "This stone enables\n"
    "Camerupt to Mega\n"
    "Evolve in battle.");

static const u8 sAltarianiteDesc[] = _(
    "This stone enables\n"
    "Altaria to Mega\n"
    "Evolve in battle.");

static const u8 sBanettiteDesc[] = _(
    "This stone enables\n"
    "Banette to Mega\n"
    "Evolve in battle.");

static const u8 sAbsoliteDesc[] = _(
    "This stone enables\n"
    "Absol to Mega\n"
    "Evolve in battle.");

static const u8 sGlalititeDesc[] = _(
    "This stone enables\n"
    "Glalie to Mega\n"
    "Evolve in battle.");

static const u8 sSalamenciteDesc[] = _(
    "This stone enables\n"
    "Salamence to Mega\n"
    "Evolve in battle.");

static const u8 sMetagrossiteDesc[] = _(
    "This stone enables\n"
    "Metagross to Mega\n"
    "Evolve in battle.");

static const u8 sLatiasiteDesc[] = _(
    "This stone enables\n"
    "Latias to Mega\n"
    "Evolve in battle.");

static const u8 sLatiositeDesc[] = _(
    "This stone enables\n"
    "Latios to Mega\n"
    "Evolve in battle.");

static const u8 sLopunniteDesc[] = _(
    "This stone enables\n"
    "Lopunny to Mega\n"
    "Evolve in battle.");

static const u8 sGarchompiteDesc[] = _(
    "This stone enables\n"
    "Garchomp to Mega\n"
    "Evolve in battle.");

static const u8 sLucarioniteDesc[] = _(
    "This stone enables\n"
    "Lucario to Mega\n"
    "Evolve in battle.");

static const u8 sAbomasiteDesc[] = _(
    "This stone enables\n"
    "Abomasnow to Mega\n"
    "Evolve in battle.");

static const u8 sGalladiteDesc[] = _(
    "This stone enables\n"
    "Gallade to Mega\n"
    "Evolve in battle.");

static const u8 sAudiniteDesc[] = _(
    "This stone enables\n"
    "Audino to Mega\n"
    "Evolve in battle.");

static const u8 sDianciteDesc[] = _(
    "This stone enables\n"
    "Diancie to Mega\n"
    "Evolve in battle.");

// Gems
static const u8 sNormalGemDesc[] = _(
    "Increases the\n"
    "power of Normal\n"
    "Type attaques.");

static const u8 sFireGemDesc[] = _(
    "Increases the\n"
    "power of Fire\n"
    "Type attaques.");

static const u8 sWaterGemDesc[] = _(
    "Increases the\n"
    "power of Eau\n"
    "Type attaques.");

static const u8 sElectricGemDesc[] = _(
    "Increases the\n"
    "power of Electric\n"
    "Type attaques.");

static const u8 sGrassGemDesc[] = _(
    "Increases the\n"
    "power of Grass\n"
    "Type attaques.");

static const u8 sIceGemDesc[] = _(
    "Increases the\n"
    "power of Ice\n"
    "Type attaques.");

static const u8 sFightingGemDesc[] = _(
    "Increases the\n"
    "power of Fighting\n"
    "Type attaques.");

static const u8 sPoisonGemDesc[] = _(
    "Increases the\n"
    "power of Poison\n"
    "Type attaques.");

static const u8 sGroundGemDesc[] = _(
    "Increases the\n"
    "power of Ground\n"
    "Type attaques.");

static const u8 sFlyingGemDesc[] = _(
    "Increases the\n"
    "power of Flying\n"
    "Type attaques.");

static const u8 sPsychicGemDesc[] = _(
    "Increases the\n"
    "power of Psychic\n"
    "Type attaques.");

static const u8 sBugGemDesc[] = _(
    "Increases the\n"
    "power of Bug\n"
    "Type attaques.");

static const u8 sRockGemDesc[] = _(
    "Increases the\n"
    "power of Rock\n"
    "Type attaques.");

static const u8 sGhostGemDesc[] = _(
    "Increases the\n"
    "power of Ghost\n"
    "Type attaques.");

static const u8 sDragonGemDesc[] = _(
    "Increases the\n"
    "power of Dragon\n"
    "Type attaques.");

static const u8 sDarkGemDesc[] = _(
    "Increases the\n"
    "power of Dark\n"
    "Type attaques.");

static const u8 sSteelGemDesc[] = _(
    "Increases the\n"
    "power of Acier \n"
    "Type attaques.");

static const u8 sFairyGemDesc[] = _(
    "Increases the\n"
    "power of Fairy\n"
    "Type attaques.");

// Z-Crystals
static const u8 sNormaliumZDesc[] = _(
    "Upgrade Normal-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sFiriumZDesc[] = _(
    "Upgrade Fire-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sWateriumZDesc[] = _(
    "Upgrade Eau-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sElectriumZDesc[] = _(
    "Upgrade Electric-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sGrassiumZDesc[] = _(
    "Upgrade Grass-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sIciumZDesc[] = _(
    "Upgrade Ice-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sFightiniumZDesc[] = _(
    "Upgrade Fighting-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sPoisoniumZDesc[] = _(
    "Upgrade Poison-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sGroundiumZDesc[] = _(
    "Upgrade Ground-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sFlyiniumZDesc[] = _(
    "Upgrade Flying-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sPsychiumZDesc[] = _(
    "Upgrade Psychic-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sBuginiumZDesc[] = _(
    "Upgrade Bug-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sRockiumZDesc[] = _(
    "Upgrade Rock-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sGhostiumZDesc[] = _(
    "Upgrade Ghost-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sDragoniumZDesc[] = _(
    "Upgrade Dragon-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sDarkiniumZDesc[] = _(
    "Upgrade Dark-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sSteeliumZDesc[] = _(
    "Upgrade Acier -\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sFairiumZDesc[] = _(
    "Upgrade Fairy-\n"
    "type attaques into\n"
    "Z-Moves.");

static const u8 sPikaniumZDesc[] = _(
    "Upgrade Pikachu's\n"
    "Volt Tackle\n"
    "into a Z-Move.");

static const u8 sEeviumZDesc[] = _(
    "Upgrade Eevee's\n"
    "Last Resort\n"
    "into a Z-Move.");

static const u8 sSnorliumZDesc[] = _(
    "Upgrade Snorlax's\n"
    "Giga Impact\n"
    "into a Z-Move.");

static const u8 sMewniumZDesc[] = _(
    "Upgrade Mew's\n"
    "Psychic into\n"
    "a Z-Move.");

static const u8 sDecidiumZDesc[] = _(
    "Upgrade Decidu-\n"
    "eye's Spirit Sha-\n"
    "ckle into a Z-Move.");

static const u8 sInciniumZDesc[] = _(
    "Upgrade Incine-\n"
    "roar's Darkest La-\n"
    "riat into a Z-Move.");

static const u8 sPrimariumZDesc[] = _(
    "Upgrade Primarina's\n"
    "Sparkling Aria\n"
    "into a Z-Move.");

static const u8 sLycaniumZDesc[] = _(
    "Upgrade Lycanroc's\n"
    "Stone Edge\n"
    "into a Z-Move.");

static const u8 sMimikiumZDesc[] = _(
    "Upgrade Mimikyu's\n"
    "Play Rough\n"
    "into a Z-Move.");

static const u8 sKommoniumZDesc[] = _(
    "Upgrade Kommo-o's\n"
    "Clanging Scales\n"
    "into a Z-Move.");

static const u8 sTapuniumZDesc[] = _(
    "Upgrade the tapu's\n"
    "Nature's Madness\n"
    "into a Z-Move.");

static const u8 sSolganiumZDesc[] = _(
    "Upgrade Solgaleo's\n"
    "Sunsteel Strike\n"
    "into a Z-Move.");

static const u8 sLunaliumZDesc[] = _(
    "Upgrade Lunala's\n"
    "Moongeist Beam\n"
    "into a Z-Move.");

static const u8 sMarshadiumZDesc[] = _(
    "Upgrade Marsha-\n"
    "dow's Spectral Thi-\n"
    "ef into a Z-Move.");

static const u8 sAloraichiumZDesc[] = _(
    "Upgrade Alolan\n"
    "Raichu's Thunder-\n"
    "bolt into a Z-Move.");

static const u8 sPikashuniumZDesc[] = _(
    "Upgrade Pikachu w/\n"
    "a cap's Thunderbolt\n"
    "into a Z-Move.");

static const u8 sUltranecroziumZDesc[] = _(
    "A crystal to turn\n"
    "fused Necrozma\n"
    "into a new form.");

// Species-specific Held Items
static const u8 sLightBallDesc[] = _(
    "Un objet tenu qui\n"
    "raises the Atk and\n"
    "Sp. Atk of Pikachu.");

static const u8 sLeekDesc[] = _(
    "Un objet tenu qui\n"
    "raises Farfetch'd's\n"
    "critical-hit ratio.");

static const u8 sThickClubDesc[] = _(
    "Un objet tenu qui \n"
    "raises Cubone or\n"
    "Marowak's Attack.");

static const u8 sLuckyPunchDesc[] = _(
    "Un objet tenu qui\n"
    "raises Chansey's\n"
    "critical-hit rate.");

static const u8 sMetalPowderDesc[] = _(
    "Un objet tenu qui\n"
    "raises Ditto's\n"
    "Defense.");

static const u8 sQuickPowderDesc[] = _(
    "An item to be held\n"
    "by Ditto. This odd\n"
    "powder boost Speed.");

static const u8 sDeepSeaScaleDesc[] = _(
    "Un objet tenu qui\n"
    "raises the Sp. Def\n"
    "of Clamperl.");

static const u8 sDeepSeaToothDesc[] = _(
    "Un objet tenu qui\n"
    "raises the Sp. Atk\n"
    "of Clamperl.");

static const u8 sSoulDewDesc[] = _(
#if B_SOUL_DEW_BOOST >= GEN_7
    "Powers up Latios' &\n"
    "Latias' Psychic and\n"
    "Dragon de type attaques.");
#else
    "Hold item: raises\n"
    "Sp. Atk & Sp. Def of\n"
    "Latios & Latias.");
#endif

static const u8 sAdamantOrbDesc[] = _(
    "Boosts la puissance des\n"
    "Dialga's Dragon and\n"
    "Acier de type attaques.");

static const u8 sLustrousOrbDesc[] = _(
    "Boosts la puissance des\n"
    "Palkia's Dragon and\n"
    "de type Eau attaques.");

static const u8 sGriseousOrbDesc[] = _(
    "Powers up Giratina's\n"
    "Dragon and Ghost-\n"
    "type attaques.");

// Incenses
static const u8 sSeaIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "slightly boost\n"
    "de type Eau attaques.");

static const u8 sLaxIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "slightly lowers the\n"
    "foe's accuracy.");

static const u8 sOddIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "boost Psychic-\n"
    "type attaques.");

static const u8 sRockIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Rock de type attaques.");

static const u8 sFullIncenseDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sWaveIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "slightly boost\n"
    "de type Eau attaques.");

static const u8 sRoseIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "attaques de type Plante.");

static const u8 sLuckIncenseDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sPureIncenseDesc[] = _(
    "Un objet tenu qui\n"
    "helps repel wild\n"
    "Pokémon.");

// Contest Scarves
static const u8 sRedScarfDesc[] = _(
    "Un objet tenu qui\n"
    "raises Cool in\n"
    "Contests.");

static const u8 sBlueScarfDesc[] = _(
    "Un objet tenu qui\n"
    "raises Beauty in\n"
    "Contests.");

static const u8 sPinkScarfDesc[] = _(
    "Un objet tenu qui\n"
    "raises Cute in\n"
    "Contests.");

static const u8 sGreenScarfDesc[] = _(
    "Un objet tenu qui\n"
    "raises Smart in\n"
    "Contests.");

static const u8 sYellowScarfDesc[] = _(
    "Un objet tenu qui\n"
    "raises Tough in\n"
    "Contests.");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] = _(
    "Un objet tenu qui\n"
    "promotes growth,\n"
    "but reduces Speed.");

static const u8 sPowerWeightDesc[] = _(
    "Un objet tenu qui\n"
    "promotes HP gain,\n"
    "but reduces Speed.");

static const u8 sPowerBracerDesc[] = _(
    "Un objet tenu qui\n"
    "promotes Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBeltDesc[] = _(
    "Un objet tenu qui\n"
    "promotes Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerLensDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBandDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerAnkletDesc[] = _(
    "Un objet tenu qui\n"
    "promotes Spd gain,\n"
    "but reduces Speed.");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Normal.");

static const u8 sCharcoalDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Feu.");

static const u8 sMysticWaterDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Eau");

static const u8 sMagnetDesc[] = _(
    "Un objet tenu qui\n"
    "boost les attaques\n"
    "Électriques.");

static const u8 sMiracleSeedDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "attaques de type Plante.");

static const u8 sNeverMeltIceDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Glace de type attaques.");

static const u8 sBlackBeltDesc[] = _(
    "Un objet tenu qui\n"
    "boost Fighting-\n"
    "type attaques.");

static const u8 sPoisonBarbDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Poison de type attaques.");

static const u8 sSoftSandDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Ground de type attaques.");

static const u8 sSharpBeakDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Flying de type attaques.");

static const u8 sTwistedSpoonDesc[] = _(
    "Un objet tenu qui\n"
    "boost Psychic-\n"
    "type attaques.");

static const u8 sSilverPowderDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Bug de type attaques.");

static const u8 sHardStoneDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Rock de type attaques.");

static const u8 sSpellTagDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. de\n"
    "Ghost de type attaques.");

static const u8 sDragonFangDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Dragon.");

static const u8 sBlackGlassesDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Ténèbr.");

static const u8 sMetalCoatDesc[] = _(
    "Un objet tenu qui\n"
    "monte la puiss. des\n"
    "attaques Acier");

// Choice Items
static const u8 sChoiceBandDesc[] = _(
    "Monte l'attaque mais\n"
    "bloque l'utilisateur\n"
    "sur une capacité");

static const u8 sChoiceSpecsDesc[] = _(
    "Boosts Sp. Atk, but\n"
    "allows the use of\n"
    "only one move.");

static const u8 sChoiceScarfDesc[] = _(
    "Boost la Vitesse, but\n"
    "allows the use of\n"
    "only one move.");

// Status Orbs
static const u8 sFlameOrbDesc[] = _(
    "A bizarre orb that\n"
    "inflicts a burn on\n"
    "holder in battle.");

static const u8 sToxicOrbDesc[] = _(
    "A bizarre orb that\n"
    "badly poisons the\n"
    "holder in battle.");

// Weather Rocks
static const u8 sDampRockDesc[] = _(
    "Extends the length\n"
    "of Rain Dance if\n"
    "used by the holder.");

static const u8 sHeatRockDesc[] = _(
    "Extends the length\n"
    "of Sunny Day if\n"
    "used by the holder.");

static const u8 sSmoothRockDesc[] = _(
    "Extends the length\n"
    "of Sandstorm if\n"
    "used by the holder.");

static const u8 sIcyRockDesc[] = _(
    "Extends the length\n"
    "of the move Hail\n"
    "used by the holder.");

// Terrain Seeds
static const u8 sElectricSeedDesc[] = _(
    "Boosts Defense on\n"
    "Electric Terrain,\n"
    "but only one time.");

static const u8 sPsychicSeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Psychic Terrain,\n"
    "but only one time.");

static const u8 sMistySeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Misty Terrain,\n"
    "but only one time.");

static const u8 sGrassySeedDesc[] = _(
    "Boosts Defense on\n"
    "Grassy Terrain,\n"
    "but only one time.");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] = _(
    "Raises Sp. Atk if\n"
    "the holder is hit by\n"
    "a de type Eau move.");

static const u8 sCellBatteryDesc[] = _(
    "Raises Atk if the\n"
    "holder is hit by an\n"
    "Electric de type move.");

static const u8 sLuminousMossDesc[] = _(
    "Raises Sp. Def if\n"
    "the holder is hit by\n"
    "a de type Eau move.");

static const u8 sSnowballDesc[] = _(
    "Raises Atk if its\n"
    "holder is hit by an\n"
    "Glace de type move.");

// Misc. Held Items
static const u8 sBrightPowderDesc[] = _(
    "Un objet tenu qui\n"
    "casts a glare to\n"
    "reduce accuracy.");

static const u8 sWhiteHerbDesc[] = _(
    "Un objet tenu qui\n"
    "restores any\n"
    "lowered stat.");

static const u8 sExpShareDesc[] = _(
    "Un objet tenu qui\n"
    "gets Exp. points\n"
    "from battles.");

static const u8 sQuickClawDesc[] = _(
    "Un objet tenu qui\n"
    "occasionally allows\n"
    "the first strike.");

static const u8 sSootheBellDesc[] = _(
    "Un objet tenu qui\n"
    "calms spirits and\n"
    "fosters amitié.");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] = _(
    "Snaps Pokémon out\n"
    "of move-binding\n"
    "effects.");
#else
static const u8 sMentalHerbDesc[] = _(
    "Un objet tenu qui\n"
    "snaps Pokémon out\n"
    "of infatuation.");
#endif

static const u8 sKingsRockDesc[] = _(
    "Un objet tenu qui\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sAmuletCoinDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sCleanseTagDesc[] = _(
    "Un objet tenu qui\n"
    "helps repel wild\n"
    "Pokémon.");

static const u8 sSmokeBallDesc[] = _(
    "Un objet tenu qui\n"
    "assures fleeing\n"
    "from wild Pokémon.");

static const u8 sFocusBandDesc[] = _(
    "Un objet tenu qui\n"
    "occasionally\n"
    "prevents fainting.");

static const u8 sLuckyEggDesc[] = _(
    "Un objet tenu qui\n"
    "boost Exp. points\n"
    "earned in battle.");

static const u8 sScopeLensDesc[] = _(
    "Un objet tenu qui\n"
    "improves the\n"
    "critical-hit rate.");

static const u8 sLeftoversDesc[] = _(
    "Un objet tenu qui\n"
    "soigne quelques PV\n"
    "à chaque tour.");

static const u8 sShellBellDesc[] = _(
    "Un objet tenu qui\n"
    "soigne des PV en\n"
    "fonction des dégâts");

static const u8 sWideLensDesc[] = _(
    "A magnifying lens\n"
    "that boost the\n"
    "accuracy of attaques.");

static const u8 sMuscleBandDesc[] = _(
    "A headband that\n"
    "boost la puissance des\n"
    "physical attaques.");

static const u8 sWiseGlassesDesc[] = _(
    "A pair of glasses\n"
    "that ups the power\n"
    "of special attaques.");

static const u8 sExpertBeltDesc[] = _(
    "A belt that boost\n"
    "la puissance des super\n"
    "effective attaques.");

static const u8 sLightClayDesc[] = _(
    "Extends the length\n"
    "of barrier attaques\n"
    "used by the holder.");

static const u8 sLifeOrbDesc[] = _(
    "Boosts la puissance des\n"
    "attaques at the cost\n"
    "of some HP per turn.");

static const u8 sPowerHerbDesc[] = _(
    "Allows immediate\n"
    "use of a move that\n"
    "charges first.");

static const u8 sFocusSashDesc[] = _(
    "If the holder has\n"
    "full HP, it endures\n"
    "KO hits with 1 HP.");

static const u8 sZoomLensDesc[] = _(
    "If the holder attaques\n"
    "after the foe, it'll\n"
    "boost accuracy.");

static const u8 sMetronomeDesc[] = _(
    "A held item that\n"
    "boost a move used\n"
    "consecutively.");

static const u8 sIronBallDesc[] = _(
    "Réduit la vitesse et\n"
    "rend les types VOL\n"
    "sensibles au cap. SOL");

static const u8 sLaggingTailDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sDestinyKnotDesc[] = _(
    "If the holder falls\n"
    "in love, the foe\n"
    "does too.");

static const u8 sBlackSludgeDesc[] = _(
    "Soigne à chaque tour\n"
    "des PV si Type Poison\n"
    "Blesse autrement.");

static const u8 sGripClawDesc[] = _(
    "Makes binding attaques\n"
    "used by the holder\n"
    "go on for 7 turns.");

static const u8 sStickyBarbDesc[] = _(
    "Damages the holder\n"
    "each turn. May latch\n"
    "on to foes.");

static const u8 sShedShellDesc[] = _(
    "Enables the holder\n"
    "to switch out of\n"
    "battle without fail.");

static const u8 sBigRootDesc[] = _(
    "A held item that\n"
    "boost la puissance des\n"
    "HP-stealing attaques.");

static const u8 sRazorClawDesc[] = _(
    "A hooked claw that\n"
    "ups the holder's\n"
    "critical-hit ratio.");

static const u8 sRazorFangDesc[] = _(
    "Un objet tenu qui\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sEvioliteDesc[] = _(
    "Raises the Def and\n"
    "Sp. Def of Pokémon\n"
    "that can evolve.");

static const u8 sFloatStoneDesc[] = _(
    "It's so light that\n"
    "when held, it halves\n"
    "a Pokémon's weight.");

static const u8 sRockyHelmetDesc[] = _(
    "Hurts the foe if\n"
    "they touch its\n"
    "holder.");

static const u8 sAirBalloonDesc[] = _(
    "Elevates the holder\n"
    "in the air. If hit,\n"
    "this item will burst.");

static const u8 sRedCardDesc[] = _(
    "Switches out the\n"
    "foe if they hit the\n"
    "holder.");

static const u8 sRingTargetDesc[] = _(
    "Moves that wouldn't\n"
    "have effect will\n"
    "land on its holder.");

static const u8 sBindingBandDesc[] = _(
    "Increases the\n"
    "power of binding\n"
    "attaques when held.");

static const u8 sEjectButtonDesc[] = _(
    "Switches out the\n"
    "user if they're hit\n"
    "by the foe.");

static const u8 sWeaknessPolicyDesc[] = _(
    "If hit by a Super\n"
    "Effective move, ups\n"
    "Atk and Sp. Atk.");

static const u8 sAssaultVestDesc[] = _(
    "Raises Sp. Def but\n"
    "prevents the use\n"
    "of status attaques.");

static const u8 sSafetyGogglesDesc[] = _(
    "Protège des dégâts\n"
    "causés par la météo\n"
    "et des poudres.");

static const u8 sAdrenalineOrbDesc[] = _(
    "Boost la Vitesse if the\n"
    "user is intimidated,\n"
    "but only one time.");

static const u8 sTerrainExtenderDesc[] = _(
    "Extends the length\n"
    "of the active\n"
    "battle terrain.");

static const u8 sProtectivePadsDesc[] = _(
    "Guard the holder\n"
    "from contact move\n"
    "effects.");

static const u8 sThroatSprayDesc[] = _(
    "Raises Sp. Atk. if\n"
    "a Pokémon is hit by\n"
    "a sound-based move.");

static const u8 sEjectPackDesc[] = _(
    "Forces the user to\n"
    "switch if its stats\n"
    "are lowered.");

static const u8 sHeavyDutyBootsDesc[] = _(
    "Boots that prevent\n"
    "effects of traps\n"
    "set in the field.");

static const u8 sBlunderPolicyDesc[] = _(
    "Raises Speed if\n"
    "the user misses\n"
    "due to Accuracy.");

static const u8 sRoomServiceDesc[] = _(
    "Lowers Speed if\n"
    "Trick Room is\n"
    "active.");

static const u8 sUtilityUmbrellaDesc[] = _(
    "An umbrella that\n"
    "protects from\n"
    "weather effects.");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals paralysis\n"
    "in battle.");

static const u8 sChestoBerryDesc[] = _(
    "Un objet tenu qui\n"
    "awakens Pokémon\n"
    "in battle.");

static const u8 sPechaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals poisoning\n"
    "in battle.");

static const u8 sRawstBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals a burn in\n"
    "battle.");

static const u8 sAspearBerryDesc[] = _(
    "Un objet tenu qui\n"
    "defrosts Pokémon\n"
    "in battle.");

static const u8 sLeppaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores 10 PP in\n"
    "battle.");

static const u8 sOranBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores 10 HP in\n"
    "battle.");

static const u8 sPersimBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals confusion\n"
    "in battle.");

static const u8 sLumBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals any status\n"
    "problem in battle.");

static const u8 sSitrusBerryDesc[] = _(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "Un objet tenu qui\n"
    "restores the user's\n"
    "HP a little.");
#else
    "Un objet tenu qui\n"
    "restores 30 HP in\n"
    "battle.");
#endif

static const u8 sFigyBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sWikiBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sMagoBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sAguavBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sIapapaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sRazzBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Razz.");

static const u8 sBlukBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Bluk.");

static const u8 sNanabBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nanab.");

static const u8 sWepearBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Wepear.");

static const u8 sPinapBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pinap.");

static const u8 sPomegBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base HP.");

static const u8 sKelpsyBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Attack.");

static const u8 sQualotBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Defense.");

static const u8 sHondewBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Atk.");

static const u8 sGrepaBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Def.");

static const u8 sTamatoBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Speed.");

static const u8 sCornnBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Cornn.");

static const u8 sMagostBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Magost.");

static const u8 sRabutaBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Rabuta.");

static const u8 sNomelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nomel.");

static const u8 sSpelonBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Spelon.");

static const u8 sPamtreBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pamtre.");

static const u8 sWatmelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Watmel.");

static const u8 sDurinBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Durin.");

static const u8 sBelueBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Belue.");

static const u8 sChilanBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Normal\n"
    "move.");

static const u8 sOccaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Fire\n"
    "move if weak to it.");

static const u8 sPasshoBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Eau\n"
    "move if weak to it.");

static const u8 sWacanBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Electric\n"
    "move if weak to it.");

static const u8 sRindoBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Grass\n"
    "move if weak to it.");

static const u8 sYacheBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Ice\n"
    "move if weak to it.");

static const u8 sChopleBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Fighting\n"
    "move if weak to it.");

static const u8 sKebiaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Poison\n"
    "move if weak to it.");

static const u8 sShucaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Ground\n"
    "move if weak to it.");

static const u8 sCobaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Flying\n"
    "move if weak to it.");

static const u8 sPayapaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Psychic\n"
    "move if weak to it.");

static const u8 sTangaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Bug\n"
    "move if weak to it.");

static const u8 sChartiBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Rock\n"
    "move if weak to it.");

static const u8 sKasibBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Ghost\n"
    "move if weak to it.");

static const u8 sHabanBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Dragon\n"
    "move if weak to it.");

static const u8 sColburBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Dark\n"
    "move if weak to it.");

static const u8 sBabiriBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Acier \n"
    "move if weak to it.");

static const u8 sRoseliBerryDesc[] = _(
    "Un objet tenu qui\n"
    "weakens a Fairy\n"
    "move if weak to it.");

static const u8 sLiechiBerryDesc[] = _(
    "Un objet tenu qui\n"
    "raises Attack in\n"
    "a pinch.");

static const u8 sGanlonBerryDesc[] = _(
    "Un objet tenu qui\n"
    "raises Defense in\n"
    "a pinch.");

static const u8 sSalacBerryDesc[] = _(
    "Un objet tenu qui\n"
    "raises Speed in\n"
    "a pinch.");

static const u8 sPetayaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "raises Sp. Atk in\n"
    "a pinch.");

static const u8 sApicotBerryDesc[] = _(
    "Un objet tenu qui\n"
    "raises Sp. Def in\n"
    "a pinch.");

static const u8 sLansatBerryDesc[] = _(
    "Un objet tenu qui\n"
    "ups the critical-\n"
    "hit rate in a pinch.");

static const u8 sStarfBerryDesc[] = _(
    "Un objet tenu qui\n"
    "sharply boost a\n"
    "stat in a pinch.");

static const u8 sEnigmaBerryDesc[] = _(
    "Un objet tenu qui\n"
    "heals from super\n"
    "effective attaques.");

static const u8 sMicleBerryDesc[] = _(
    "When held, it ups\n"
    "the Accuracy of a\n"
    "move in a pinch.");

static const u8 sCustapBerryDesc[] = _(
    "It allows a Pokémon\n"
    "in a pinch to move\n"
    "first just once.");

static const u8 sJabocaBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sRowapBerryDesc[] = _(
    "If hit by a special\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sKeeBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it raises the\n"
    "Defense a bit.");

static const u8 sMarangaBerryDesc[] = _(
    "If hit by a special\n"
    "move, it raises the\n"
    "Sp. Def. a bit.");

static const u8 sEnigmaBerryEReaderDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "Powerful, but makes\n"
    "the user flinch if\n"
    "hit by the foe.");

static const u8 sTM02Desc[] = _(
    "Hooks and slashes\n"
    "the foe with long,\n"
    "sharp claws.");

static const u8 sTM03Desc[] = _(
    "Generates an\n"
    "ultrasonic wave\n"
    "that may confuse.");

static const u8 sTM04Desc[] = _(
    "Raises Sp. Atk and\n"
    "Sp. Def by focusing\n"
    "the mind.");

static const u8 sTM05Desc[] = _(
    "A savage roar that\n"
    "makes the foe flee \n"
    "to end the battle.");

static const u8 sTM06Desc[] = _(
    "Poisons the foe\n"
    "with a toxin that\n"
    "gradually worsens.");

static const u8 sTM07Desc[] = _(
    "Creates a hailstorm\n"
    "that damages all\n"
    "types except Ice.");

static const u8 sTM08Desc[] = _(
    "Bulks up the body\n"
    "to boost both\n"
    "Attack & Defense.");

static const u8 sTM09Desc[] = _(
    "Shoots 2 to 5 seeds\n"
    "in a row to strike\n"
    "the foe.");

static const u8 sTM10Desc[] = _(
    "The attack power\n"
    "varies among\n"
    "different Pokémon.");

static const u8 sTM11Desc[] = _(
    "Raises la puissance des\n"
    "de type Feu attaques\n"
    "for 5 turns.");

static const u8 sTM12Desc[] = _(
    "Enrages the foe so\n"
    "it can only use\n"
    "attack attaques.");

static const u8 sTM13Desc[] = _(
    "Fires an icy cold\n"
    "beam that may\n"
    "freeze the foe.");

static const u8 sTM14Desc[] = _(
    "A brutal snow-and-\n"
    "wind attack that\n"
    "may freeze the foe.");

static const u8 sTM15Desc[] = _(
    "Powerful, but needs\n"
    "recharging the\n"
    "next turn.");

static const u8 sTM16Desc[] = _(
    "Creates a wall of\n"
    "light that lowers\n"
    "Sp. Atk damage.");

static const u8 sTM17Desc[] = _(
    "Negates all damage,\n"
    "but may fail if used\n"
    "in succession.");

static const u8 sTM18Desc[] = _(
    "Raises la puissance des\n"
    "de type Eau attaques\n"
    "for 5 turns.");

static const u8 sTM19Desc[] = _(
    "Recovers half the\n"
    "HP of the damage \n"
    "this move inflicts.");

static const u8 sTM20Desc[] = _(
    "Prevents status\n"
    "abnormality with a\n"
    "mystical power.");

static const u8 sTM21Desc[] = _(
    "The less the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM22Desc[] = _(
    "Absorbs sunlight in\n"
    "the 1st turn, then\n"
    "attacks next turn.");

static const u8 sTM23Desc[] = _(
    "Slams the foe with\n"
    "a hard tail. It may\n"
    "lower Defense.");

static const u8 sTM24Desc[] = _(
    "A powerful electric\n"
    "attack that may\n"
    "cause paralysis.");

static const u8 sTM25Desc[] = _(
    "Strikes the foe\n"
    "with a thunderbolt.\n"
    "It may paralyze.");

static const u8 sTM26Desc[] = _(
    "Causes a quake\n"
    "that has no effect\n"
    "on flying foes.");

static const u8 sTM27Desc[] = _(
    "The more the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM28Desc[] = _(
    "Digs underground\n"
    "the 1st turn, then\n"
    "strikes next turn.");

static const u8 sTM29Desc[] = _(
    "A powerful psychic\n"
    "attack that may\n"
    "lower Sp. Def.");

static const u8 sTM30Desc[] = _(
    "Hurls a dark lump\n"
    "at the foe. It may\n"
    "lower Sp. Def.");

static const u8 sTM31Desc[] = _(
    "Destroys barriers\n"
    "like Light Screen\n"
    "and causes damage.");

static const u8 sTM32Desc[] = _(
    "Creates illusory\n"
    "copies to enhance\n"
    "elusiveness.");

static const u8 sTM33Desc[] = _(
    "Creates a wall of\n"
    "light that weakens\n"
    "physical attacks.");

static const u8 sTM34Desc[] = _(
    "Zaps the foe with a\n"
    "jolt of electricity\n"
    "that never misses.");

static const u8 sTM35Desc[] = _(
    "Looses a stream of\n"
    "fire that may burn\n"
    "the foe.");

static const u8 sTM36Desc[] = _(
    "Hurls sludge at the\n"
    "foe. It may poison\n"
    "the foe.");

static const u8 sTM37Desc[] = _(
    "Causes a sandstorm\n"
    "that hits the foe\n"
    "over several turns.");

static const u8 sTM38Desc[] = _(
    "A powerful fire\n"
    "attack that may\n"
    "burn the foe.");

static const u8 sTM39Desc[] = _(
    "Stops the foe from\n"
    "moving with rocks.\n"
    "May lower Speed.");

static const u8 sTM40Desc[] = _(
    "An extremely fast\n"
    "attack that can't\n"
    "be avoided.");

static const u8 sTM41Desc[] = _(
    "Prevents the foe\n"
    "from using the same\n"
    "move in a row.");

static const u8 sTM42Desc[] = _(
    "Raises Attack when\n"
    "poisoned, burned,\n"
    "or paralyzed.");

static const u8 sTM43Desc[] = _(
    "Adds an effect to\n"
    "attack depending\n"
    "on the location.");

static const u8 sTM44Desc[] = _(
    "The user sleeps for\n"
    "2 turns to restore\n"
    "health and status.");

static const u8 sTM45Desc[] = _(
    "Makes it tough to\n"
    "attack a foe of the\n"
    "opposite gender.");

static const u8 sTM46Desc[] = _(
    "While attacking,\n"
    "it may steal the\n"
    "foe's held item.");

static const u8 sTM47Desc[] = _(
    "Spreads hard-\n"
    "edged wings and\n"
    "slams into the foe.");

static const u8 sTM48Desc[] = _(
    "Switches abilities\n"
    "with the foe on the\n"
    "turn this is used.");

static const u8 sTM49Desc[] = _(
    "Steals the effects\n"
    "of the move the foe\n"
    "is trying to use.");

static const u8 sTM50Desc[] = _(
    "Enables full-power\n"
    "attack, but sharply\n"
    "lowers Sp. Atk.");

static const u8 sTM51Desc[] = _( // Todo
    "?????");

static const u8 sTM52Desc[] = _( // Todo
    "?????");

static const u8 sTM53Desc[] = _( // Todo
    "?????");

static const u8 sTM54Desc[] = _( // Todo
    "?????");

static const u8 sTM55Desc[] = _( // Todo
    "?????");

static const u8 sTM56Desc[] = _( // Todo
    "?????");

static const u8 sTM57Desc[] = _( // Todo
    "?????");

static const u8 sTM58Desc[] = _( // Todo
    "?????");

static const u8 sTM59Desc[] = _( // Todo
    "?????");

static const u8 sTM60Desc[] = _( // Todo
    "?????");

static const u8 sTM61Desc[] = _( // Todo
    "?????");

static const u8 sTM62Desc[] = _( // Todo
    "?????");

static const u8 sTM63Desc[] = _( // Todo
    "?????");

static const u8 sTM64Desc[] = _( // Todo
    "?????");

static const u8 sTM65Desc[] = _( // Todo
    "?????");

static const u8 sTM66Desc[] = _( // Todo
    "?????");

static const u8 sTM67Desc[] = _( // Todo
    "?????");

static const u8 sTM68Desc[] = _( // Todo
    "?????");

static const u8 sTM69Desc[] = _( // Todo
    "?????");

static const u8 sTM70Desc[] = _( // Todo
    "?????");

static const u8 sTM71Desc[] = _( // Todo
    "?????");

static const u8 sTM72Desc[] = _( // Todo
    "?????");

static const u8 sTM73Desc[] = _( // Todo
    "?????");

static const u8 sTM74Desc[] = _( // Todo
    "?????");

static const u8 sTM75Desc[] = _( // Todo
    "?????");

static const u8 sTM76Desc[] = _( // Todo
    "?????");

static const u8 sTM77Desc[] = _( // Todo
    "?????");

static const u8 sTM78Desc[] = _( // Todo
    "?????");

static const u8 sTM79Desc[] = _( // Todo
    "?????");

static const u8 sTM80Desc[] = _( // Todo
    "?????");

static const u8 sTM81Desc[] = _( // Todo
    "?????");

static const u8 sTM82Desc[] = _( // Todo
    "?????");

static const u8 sTM83Desc[] = _( // Todo
    "?????");

static const u8 sTM84Desc[] = _( // Todo
    "?????");

static const u8 sTM85Desc[] = _( // Todo
    "?????");

static const u8 sTM86Desc[] = _( // Todo
    "?????");

static const u8 sTM87Desc[] = _( // Todo
    "?????");

static const u8 sTM88Desc[] = _( // Todo
    "?????");

static const u8 sTM89Desc[] = _( // Todo
    "?????");

static const u8 sTM90Desc[] = _( // Todo
    "?????");

static const u8 sTM91Desc[] = _( // Todo
    "?????");

static const u8 sTM92Desc[] = _( // Todo
    "?????");

static const u8 sTM93Desc[] = _( // Todo
    "?????");

static const u8 sTM94Desc[] = _( // Todo
    "?????");

static const u8 sTM95Desc[] = _( // Todo
    "?????");

static const u8 sTM96Desc[] = _( // Todo
    "?????");

static const u8 sTM97Desc[] = _( // Todo
    "?????");

static const u8 sTM98Desc[] = _( // Todo
    "?????");

static const u8 sTM99Desc[] = _( // Todo
    "?????");

static const u8 sTM100Desc[] = _( // Todo
    "?????");

static const u8 sHM01Desc[] = _(
    "Attacks the foe\n"
    "with sharp blades\n"
    "or claws.");

static const u8 sHM02Desc[] = _(
    "Flies up on the\n"
    "first turn, then\n"
    "attacks next turn.");

static const u8 sHM03Desc[] = _(
    "Creates a huge\n"
    "wave, then crashes\n"
    "it down on the foe.");

static const u8 sHM04Desc[] = _(
    "Builds enormous\n"
    "power, then slams\n"
    "the foe.");

static const u8 sHM05Desc[] = _(
    "Looses a powerful\n"
    "blast of light that\n"
    "reduces accuracy.");

static const u8 sHM06Desc[] = _(
    "A rock-crushingly\n"
    "tough attack that\n"
    "may lower Defense.");

static const u8 sHM07Desc[] = _(
    "Attacks the foe\n"
    "with enough power\n"
    "to climb waterfalls.");

static const u8 sHM08Desc[] = _(
    "Dives underwater\n"
    "the 1st turn, then\n"
    "attacks next turn.");

// Charms
static const u8 sOvalCharmDesc[] = _(
    "Raises the chance\n"
    "of finding eggs\n"
    "at the daycare.");

static const u8 sShinyCharmDesc[] = _(
    "A charm that will\n"
    "raise the chance\n"
    "of Shiny Pokémon.");

static const u8 sCatchingCharmDesc[] = _(
    "A charm that raises\n"
    "the chance of\n"
    "Critical Captures.");

static const u8 sExpCharmDesc[] = _(
    "A charm that raises\n"
    "the amount of Exp.\n"
    "earned in battle.");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] = _(
    "A catalog full of\n"
    "deviced liked by\n"
    "Rotom.");

static const u8 sGracideaDesc[] = _(
    "Bouquets made with\n"
    "it are offered as a\n"
    "token of gratitude.");

static const u8 sRevealGlassDesc[] = _(
    "This glass returns\n"
    "a Pokémon back to\n"
    "its original form.");

static const u8 sDNASplicersDesc[] = _(
    "Splicer that fuses\n"
    "Kyurem and a\n"
    "certain Pokémon.");

static const u8 sZygardeCubeDesc[] = _(
    "An item to store\n"
    "Zygarde Cores and\n"
    "Cells.");

static const u8 sPrisonBottleDesc[] = _(
    "A bottle used to\n"
    "seal a certain\n"
    "Pokémon long ago.");

static const u8 sNSolarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Solgaleo.");

static const u8 sNLunarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Lunala.");

static const u8 sReinsOfUnityDesc[] = _(
    "Reins that unite\n"
    "Calyrex with its\n"
    "beloved steed.");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] = _(
    "Enables {PKMN} holding\n"
    "their Mega Stone to\n"
    "Mega Evolve.");

static const u8 sZPowerRingDesc[] = _(
    "A strange ring\n"
    "that enables\n"
    "Z-Move usage.");

static const u8 sDynamaxBandDesc[] = _(
    "A band carrying a\n"
    "Wishing Star that\n"
    "allows Dynamaxing.");

// Misc. Key Items
static const u8 sBicycleDesc[] = _(
    "A folding bicycle\n"
    "that is faster than\n"
    "the Running Shoes.");

static const u8 sMachBikeDesc[] = _(
    "Un vélo pliable\n"
    "pour aller 2 fois\n"
    "plus vite qu’à pied.");

static const u8 sAcroBikeDesc[] = _(
    "Appareil permettant\n"
    "d'appeler un\n"
    "Pokémon-monture.");

static const u8 sOldRodDesc[] = _(
    "Use by any body of\n"
    "water to fish for\n"
    "wild Pokémon.");

static const u8 sGoodRodDesc[] = _(
    "A decent fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sSuperRodDesc[] = _(
    "The best fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sDowsingMachineDesc[] = _(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sTownMapDesc[] = _(
    "Can be viewed\n"
    "anytime. Shows your\n"
    "present location.");

static const u8 sVsSeekerDesc[] = _(
    "A rechargeable unit\n"
    "that flags battle-\n"
    "ready Trainers.");

static const u8 sTMCaseDesc[] = _(
    "A convenient case \n"
    "that holds TMs and\n"
    "HMs.");

static const u8 sBerryPouchDesc[] = _(
    "A convenient\n"
    "container that\n"
    "holds Berries.");

static const u8 sPokemonBoxLinkDesc[] = _(
    "This device grants\n"
    "access to the {PKMN}\n"
    "Storage System.");

static const u8 sCoinCaseDesc[] = _(
    "A case that holds\n"
    "up to 9,999 Coins.");

static const u8 sPowderJarDesc[] = _(
    "Stores Berry\n"
    "Powder made using\n"
    "a Berry Crusher.");

static const u8 sWailmerPailDesc[] = _(
    "A tool used for\n"
    "watering Berries\n"
    "and plants.");

static const u8 sPokeRadarDesc[] = _(
    "A tool used to\n"
    "search out Pokémon\n"
    "hiding in grass.");

static const u8 sPokeblockCaseDesc[] = _(
    "A case for holding\n"
    "{POKEBLOCK}s made with\n"
    "a Berry Blender.");

static const u8 sSootSackDesc[] = _(
    "A sack used to\n"
    "gather and hold\n"
    "volcanic ash.");

static const u8 sPokeFluteDesc[] = _(
    "A sweet-sounding\n"
    "flute that awakens\n"
    "Pokémon.");

static const u8 sFameCheckerDesc[] = _(
    "Stores information\n"
    "on famous people\n"
    "for instant recall.");

static const u8 sTeachyTVDesc[] = _(
    "A TV set tuned to\n"
    "an advice program\n"
    "for Trainers.");

// Story Key Items
static const u8 sSSTicketDesc[] = _(
    "The ticket required\n"
    "for sailing on a\n"
    "ferry.");

static const u8 sEonTicketDesc[] = _(
    "Un ticket de train\n"
    "pour le Centre de\n"
    "Recherches.");

static const u8 sMysticTicketDesc[] = _(
    "Un ticket de train\n"
    "pour le Centre de\n"
    "Recherches.");

static const u8 sAuroraTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to Birth Island.");

static const u8 sOldSeaMapDesc[] = _(
    "A faded sea chart\n"
    "that shows the way\n"
    "to a certain island.");

static const u8 sLetterDesc[] = _(
    "A letter to Steven\n"
    "from the President\n"
    "of the Devon Corp.");

static const u8 sDevonPartsDesc[] = _(
    "A package that\n"
    "contains Devon's\n"
    "machine parts.");

static const u8 sGoGogglesDesc[] = _(
    "Nifty goggles that\n"
    "protect eyes from\n"
    "desert sandstorms.");

static const u8 sDevonScopeDesc[] = _(
    "A device by Devon\n"
    "that signals any\n"
    "unseeable Pokémon.");

static const u8 sBasementKeyDesc[] = _(
    "The key for New\n"
    "Mauville beneath\n"
    "Mauville City.");

static const u8 sScannerDesc[] = _(
    "A device found\n"
    "inside the\n"
    "Abandoned Ship.");

static const u8 sStorageKeyDesc[] = _(
    "The key to the\n"
    "storage inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom1Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom2Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom4Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom6Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sMeteoriteDesc[] = _(
    "A meteorite found\n"
    "at Meteor Falls.");

static const u8 sMagmaEmblemDesc[] = _(
    "A medal-like item in\n"
    "the same shape as\n"
    "Team Magma's mark.");

static const u8 sContestPassDesc[] = _(
    "The pass required\n"
    "for entering\n"
    "Pokémon Contests.");

static const u8 sOaksParcelDesc[] = _(
    "A parcel for Prof.\n"
    "Oak from a Pokémon\n"
    "Mart's clerk.");

static const u8 sSecretKeyDesc[] = _(
    "The key to the\n"
    "Cinnabar Island\n"
    "Gym's entrance.");

static const u8 sBikeVoucherDesc[] = _(
    "A voucher for\n"
    "obtaining a bicycle\n"
    "from the Bike Shop.");

static const u8 sGoldTeethDesc[] = _(
    "Gold dentures lost\n"
    "by the Safari\n"
    "Zone's Warden.");

static const u8 sCardKeyDesc[] = _(
    "A card de type door\n"
    "key used in Silph\n"
    "Co's office.");

static const u8 sLiftKeyDesc[] = _(
    "An elevator key\n"
    "used in Team\n"
    "Rocket's Hideout.");

static const u8 sSilphScopeDesc[] = _(
    "Silph Co's scope\n"
    "makes unseeable\n"
    "Pokémon visible.");

static const u8 sTriPassDesc[] = _(
    "A pass for ferries\n"
    "between One, Two,\n"
    "and Three Island.");

static const u8 sRainbowPassDesc[] = _(
    "For ferries serving\n"
    "Vermilion and the\n"
    "Sevii Islands.");

static const u8 sTeaDesc[] = _(
    "A thirst-quenching\n"
    "tea prepared by an\n"
    "old lady.");

static const u8 sRubyDesc[] = _(
    "An exquisite, red-\n"
    "glowing gem that\n"
    "symbolizes passion.");

static const u8 sSapphireDesc[] = _(
    "A brilliant blue gem\n"
    "that symbolizes\n"
    "honesty.");
// HM Items
static const u8 sSurfboardDesc[] = _(
	"This flat board\n"
    "is shaped for\n"
    "riding waves.");

static const u8 sAxeDesc[] = _(
	"A small cutting\n"
    "instrument best for\n"
    "clearing bushes.");

static const u8 sHammerDesc[] = _(
	"A small rubber\n"
    "mallet. It may can\n"
    "smash rocks.");

static const u8 sDivingSuitDesc[] = _(
	"Portable suit made\n"
    "for diving from\n"
    "the SURFBOARD.");

static const u8 sLanternDesc[] = _(
	"Une lanterne conçue\n"
    "par V.N pour explorer\n"
    "les endroits sombres.");

static const u8 sPowerGloveDesc[] = _(
	"A special glove\n"
    "that makes moving\n"
    "heavy rocks easy.");
