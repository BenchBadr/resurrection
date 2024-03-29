FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	return


grotto_solidago::
	msgbox grotto_solidago_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq grotto_solidago_2
grotto_solidago_1:
	releaseall
	end

grotto_solidago_2:
	warp MAP_LAVARIDGE_TOWN, 3
	goto grotto_solidago_1


restes::
	msgbox restes_Text_0
	releaseall
	end


porte::
	random 3
	switch VAR_RESULT
	case 0, porte_3
	case 1, porte_4
	case 2, porte_5
porte_1:
	releaseall
	end

porte_3:
	msgbox porte_Text_0
	goto porte_1

porte_4:
	msgbox porte_Text_1
	goto porte_1

porte_5:
	msgbox porte_Text_2
	goto porte_1


aventurier_mirabilis::
	faceplayer
	msgbox aventurier_mirabilis_Text_0
	releaseall
	end


mirabilis_scout::
	faceplayer
	msgbox mirabilis_scout_Text_0
	releaseall
	end


mirabilis_lady::
	faceplayer
	msgbox mirabilis_lady_Text_0
	releaseall
	end


mirabilis_dresseur::
	faceplayer
	msgbox mirabilis_dresseur_Text_0
	releaseall
	end


mirabilis_ecolier::
	faceplayer
	msgbox mirabilis_ecolier_Text_0
	releaseall
	end


mirabilis_campalta::
	msgbox mirabilis_campalta_Text_0
	msgbox mirabilis_campalta_Text_1
	faceplayer
	msgbox mirabilis_campalta_Text_2
	msgbox mirabilis_campalta_Text_3
	msgbox mirabilis_campalta_Text_4
	releaseall
	end


mirabilis_bet::
	faceplayer
	showmoneybox 14, 1
	msgbox mirabilis_bet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq mirabilis_bet_2
mirabilis_bet_1:
	msgbox mirabilis_bet_Text_4
	hidemoneybox
	releaseall
	end

mirabilis_bet_2:
	checkmoney 1000
	compare VAR_RESULT, 1
	goto_if_eq mirabilis_bet_4
	msgbox mirabilis_bet_Text_3
	goto mirabilis_bet_1

mirabilis_bet_4:
	hidemoneybox
	removemoney 1000
	showmoneybox 14, 1
	random 2
	switch VAR_RESULT
	case 0, mirabilis_bet_8
	case 1, mirabilis_bet_9
	goto mirabilis_bet_1

mirabilis_bet_8:
	msgbox mirabilis_bet_Text_1
	goto mirabilis_bet_1

mirabilis_bet_9:
	msgbox mirabilis_bet_Text_2
	hidemoneybox
	addmoney 2000
	showmoneybox 14, 1
	goto mirabilis_bet_1


mirabilis_npc::
	faceplayer
	msgbox mirabilis_npc_Text_0
	showmoneybox 14, 0
	hidemoneybox
	removemoney 500
	showmoneybox 14, 0
	msgbox mirabilis_npc_Text_1
	hidemoneybox
	releaseall
	end


mirabilis_cyclist::
	faceplayer
	msgbox mirabilis_cyclist_Text_0
	releaseall
	end


mirabilis_up:
	walk_up
	step_end

mirabilis_midori::
	faceplayer
	msgbox_mugshot mirabilis_midori_Text_0, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot mirabilis_midori_Text_1, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	msgbox_mugshot mirabilis_midori_Text_2, MSGBOX_SIGN, MUGSHOT_MIDORI
	msgbox_mugshot mirabilis_midori_Text_3, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, mirabilis_midori_Text_4
	msgbox_mugshot mirabilis_midori_Text_5, MSGBOX_SIGN, MUGSHOT_MIDORI
	special HealPlayerParty
	playfanfare MUS_HEAL
	msgbox_mugshot mirabilis_midori_Text_6, MSGBOX_SIGN, MUGSHOT_MIDORI_HAPPY
	turnobject 35, DIR_NORTH
	applymovement 35, mirabilis_up
	fadescreen 1
	removeobject 35
	fadescreen 0
	setflag FLAG_MIDORI_MIRABILIS
	releaseall
	end


mirabilis_center_man::
	faceplayer
	msgbox mirabilis_center_man_Text_0
	releaseall
	end


mirabilis_center_boy::
	faceplayer
	msgbox mirabilis_center_boy_Text_0
	releaseall
	end


mystery_gift::
	faceplayer
	playbgm MUS_HG_MYSTERY_GIFT, TRUE
	msgbox mystery_gift_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq mystery_gift_2
mystery_gift_1:
	playbgm MUS_DP_POKE_CENTER_NIGHT, TRUE
	releaseall
	end

mystery_gift_2:
	special DoWaldaNamingScreen
	compare VAR_0x8004, 0
	goto_if_eq mystery_gift_4
	msgbox mystery_gift_Text_2
	goto mystery_gift_1

mystery_gift_4:
	msgbox mystery_gift_Text_1
	givemon SPECIES_VICTINI, 5, ITEM_CHOICE_SPECS
	goto mystery_gift_1


pokemon_util::
	lock
	multichoice 0, 0, MULTI_CENTER, TRUE
	switch VAR_RESULT
	case 0, pokemon_util_3
	case 1, pokemon_util_4
	case 2, pokemon_util_5
pokemon_util_1:
	releaseall
	end

pokemon_util_3:
	special ChoosePartyMon
	waitstate
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq pokemon_util_7
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne pokemon_util_12
	goto pokemon_util_1

pokemon_util_4:
	special ChooseMonForMoveRelearner
	waitstate
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq pokemon_util_10
	compare VAR_0x8005, 0
	goto_if_eq pokemon_util_15
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne pokemon_util_17
	goto pokemon_util_1

pokemon_util_5:
	bufferpartymonnick 0, 0
	msgbox pokemon_util_Text_2, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetHpIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetAtkIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetDefIV
	buffernumberstring 2, VAR_RESULT
	msgbox pokemon_util_Text_3, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetSpAtkIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetSpDefIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetSpeedIV
	buffernumberstring 2, VAR_RESULT
	msgbox pokemon_util_Text_4, MSGBOX_DEFAULT
	goto pokemon_util_1

pokemon_util_7:
	msgbox pokemon_util_Text_0
	goto pokemon_util_1

pokemon_util_10:
	msgbox pokemon_util_Text_0
	goto pokemon_util_1

pokemon_util_12:
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto pokemon_util_1

pokemon_util_15:
	msgbox pokemon_util_Text_1
	goto pokemon_util_1

pokemon_util_17:
	special TeachMoveRelearnerMove
	waitstate
	goto pokemon_util_1


echange_miracle::
	lock
	faceplayer
	setvar VAR_0x8008, SPECIES_EEVEE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox echange_miracle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq echange_miracle_2
	msgbox echange_miracle_Text_1
echange_miracle_1:
	release
	end

echange_miracle_2:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne echange_miracle_5
	goto echange_miracle_1

echange_miracle_5:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	goto echange_miracle_1


Bulbasaur::
	setwildbattle SPECIES_BULBASAUR, 13
	dowildbattle
	end


Chikorita::
	setwildbattle SPECIES_CHIKORITA, 12
	dowildbattle
	end


Lanterne::
	faceplayer
	checkitem ITEM_LANTERN
	compare VAR_RESULT, 0
	goto_if_eq Lanterne_2
	msgbox Lanterne_Text_4
Lanterne_1:
	releaseall
	end

Lanterne_2:
	msgbox Lanterne_Text_0
	msgbox Lanterne_Text_1
	giveitem ITEM_LANTERN, 1
	msgbox Lanterne_Text_2
	msgbox Lanterne_Text_3
	goto Lanterne_1


noturhouse::
	msgbox noturhouse_Text_0
	releaseall
	end


tmcase::
	msgbox tmcase_Text_0
	giveitem ITEM_TM_CASE
	releaseall
	end


grotto_solidago_Text_0:
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Il y a un petit passage entre les\n"
	.string "arbres, voulez-vous vous faufiler\l"
	.string "entre eux?$"

restes_Text_0:
	.string "Ce sont des restes de Pokémon...$"

porte_Text_0:
	.string "C'est fermé de l'intérieur.$"

porte_Text_1:
	.string "(une voix venant de l'intérieur) : IL EST\n"
	.string "OÙ LE RESPECT DE LA PROPRIÉTÉ PRIVÉE$"

porte_Text_2:
	.string "C'est fermé à clé.$"

aventurier_mirabilis_Text_0:
	.string "Ho ho ho! Le temple de la forêt! Je suis\n"
	.string "venu à pied jusqu'ici depuis un endroit\l"
	.string "très lointain! On dit qu'un trésor est\l"
	.string "enfoui dans ce temple depuis des\l"
	.string "millénaires. Je veux mettre la main\l"
	.string "dessus à tout prix!$"

mirabilis_scout_Text_0:
	.string "Regarde mon magnifique Scarhino. Je l'ai\n"
	.string "combattu au moins 10 fois avant qu'il\l"
	.string "n'accepte de se faire capturer.$"

mirabilis_lady_Text_0:
	.string "Diantre ! J'ai encore égaré mes clés!$"

mirabilis_dresseur_Text_0:
	.string "T'es un dresseur aussi ? J'ai tenté de\n"
	.string "chopper le badge d'Achille mais il m'a\l"
	.string "bien remis à ma place. Il est invincible\l"
	.string "crois-moi.$"

mirabilis_ecolier_Text_0:
	.string "Avant de me lancer dans le défi des\n"
	.string "arènes, j'essaye d'accumuler un\l"
	.string "maximum de connaissances.$"

mirabilis_campalta_Text_0:
	.string "Bougre de merdre. Même 'po de poiscaille.$"

mirabilis_campalta_Text_1:
	.string "J'en puis plus de cette vie, j'en puis\n"
	.string "plus de cette ville.$"

mirabilis_campalta_Text_2:
	.string "Tu m'écoutes ? J'suis originaire de\n"
	.string "Campalta, une ville à l'est d'Olnyris,\l"
	.string "j'po t'dire que c'est bien loin d'ici, en\l"
	.string "plus faut traverser la mer.$"

mirabilis_campalta_Text_3:
	.string "De base j'étais venu ici pour bosser à\n"
	.string "Cellapolis Centre, mais d'puis que ces\l"
	.string "maudites roches ont fait leur\l"
	.string "apparition, je ne bosse pas et j'ai pas\l"
	.string "pu trouver de taff ailleurs. À\l"
	.string "Starupolis, ils demandent que des\l"
	.string "diplômés bac + j'sais pas combien, à\l"
	.string "Cellapolis Sud, diplômé ou pas c'est\l"
	.string "mort ils prennent que les gens du CDR,\l"
	.string "du coup je teste les autres villes.\l"
	.string "Comme tu peux le voir ici y a pas grand\l"
	.string "chose, donc je chôme.$"

mirabilis_campalta_Text_4:
	.string "J'essaye de pêcher des Magicarpes pour\n"
	.string "les revendre mais ils sont trop malins\l"
	.string "pour mordre. Tout ce que je veux là,\l"
	.string "c'est économiser 15000¥ pour prendre\l"
	.string "un bateau pour rentrer chez moi.$"

mirabilis_bet_Text_0:
	.string "Salut l'ami. Ça te dit un petit pari?\n"
	.string "Chacun mise 1000¥, celui qui gagne\l"
	.string "emporte le tout. Ça va jouer à pile ou\l"
	.string "face. Pile c'est moi, face c'est toi. T'es\l"
	.string "prêt?$"

mirabilis_bet_Text_1:
	.string "HA HA! Pile! À moi l'argent!$"

mirabilis_bet_Text_2:
	.string "Face... Pourquoi suis-je aussi\n"
	.string "malchanceux!$"

mirabilis_bet_Text_3:
	.string "T'as pas assez.$"

mirabilis_bet_Text_4:
	.string "Hésite pas à revenir me voir si tu veux\n"
	.string "rejouer.$"

mirabilis_npc_Text_0:
	.string "Aah, Mirabilis! Cette ville est comme une\n"
	.string "oasis en plein désert, c'est un endroit\l"
	.string "chaleureux où tout voyageur égaré\l"
	.string "peut se reposer. Elle est réputée pour\l"
	.string "ses Sequoias et son vieux temple dont\l"
	.string "on ne sait pas grand chose.$"

mirabilis_npc_Text_1:
	.string "Tu feras gaffe aux faux guides la\n"
	.string "prochaine fois, haha.$"

mirabilis_cyclist_Text_0:
	.string "Si je gagne le triathlon, je remporte un\n"
	.string "vélo incroyablement utile, un vélo qui\l"
	.string "peut rouler sur l'eau comme sur la terre\l"
	.string "ferme! Il est importé de Galar. Je\l"
	.string "m'entraîne dur pour l'avoir. Je n'aurais\l"
	.string "plus à payer la traversée Olnyris\l"
	.string "Ouest-Est.$"

mirabilis_midori_Text_0:
	.string "Ah t'es là. Archie a emmené Lisa chez un\n"
	.string "Taxi-Volant, elle ira à Portokov\l"
	.string "rencontrer ce fameux Flo. La pauvre, sa\l"
	.string "carrière de dresseuse a déjà pris fin.$"

mirabilis_midori_Text_1:
	.string "Il m'a expliqué 2-3 trucs concernant le\n"
	.string "défi des arènes, contrairement à\l"
	.string "d'autres régions, il n'y a pas de\l"
	.string "bâtiment pour le combat d'arène,\l"
	.string "seulement un terrain. Les champions\l"
	.string "sont très occupés donc ils doivent\l"
	.string "choisir leurs adversaires au\l"
	.string "compte-goutte, d'où l'intérêt du défi!\l"
	.string "Le défi de cette arène consiste à\l"
	.string "battre le dominant du Temple Forestier,\l"
	.string "ça ne risque pas d'être simple!$"

mirabilis_midori_Text_2:
	.string "Le dominant est terriblement fort, je\n"
	.string "te propose de faire équipe pour le\l"
	.string "combattre.$"

mirabilis_midori_Text_3:
	.string "Mais avant ça, j'aimerais que l'on fasse\n"
	.string "notre premier combat de dresseurs!$"

mirabilis_midori_Text_4:
	.string "Tu es devenu si fort en si peu de temps!\n"
	.string "Le prochain combat je gagnerai, c'est\l"
	.string "une promesse.$"

mirabilis_midori_Text_5:
	.string "Je ne pouvais pas m'attendre à plus,\n"
	.string "laisse-moi soigner tes Pokémon.$"

mirabilis_midori_Text_6:
	.string "Je file, me fais pas trop attendre.$"

mirabilis_center_man_Text_0:
	.string "J'adore les Sequoias de Mirabilis. Ils\n"
	.string "donnent un certain charme à la ville.$"

mirabilis_center_boy_Text_0:
	.string "Le défi de l'arène il est insurmontable,\n"
	.string "j'ai beau entraîner mes Pokémon je\l"
	.string "n'arrive pas à battre le dominant.\l"
	.string "Peut-être ne suis-je pas né pour\l"
	.string "devenir dresseur.$"

mystery_gift_Text_0:
	.string "Bonjour. J'ai un cadeau pour vous mais\n"
	.string "avant, je dois vérifier votre identité.\l"
	.string "Veuillez saisir le code de réception.$"

mystery_gift_Text_1:
	.string "Vous avez reçu un pokémon$"

mystery_gift_Text_2:
	.string "Je regrette, votre code est invalide.$"

pokemon_util_Text_0:
	.string "Le Pokémon choisi est un œuf, opération\n"
	.string "impossible.$"

pokemon_util_Text_1:
	.string "Aucune attaque à apprendre à ce\n"
	.string "Pokémon, opération terminée.$"

pokemon_util_Text_2:
	.string "Votre {STR_VAR_1}...$"

pokemon_util_Text_3:
	.string "IV de PV : {STR_VAR_1}.\nIV d'Attaque :  {STR_VAR_2}.\pIV de Défense : {STR_VAR_3}.$"

pokemon_util_Text_4:
	.string "IV d'Attaque Spéciale : {STR_VAR_1}.\nIV de Défense Spéciale :  {STR_VAR_2}.\pIV de Vitesse : {STR_VAR_3}.$"

echange_miracle_Text_0:
	.string "Bonjour, voulez-vous procéder à un\n"
	.string "échange miracle?$"

echange_miracle_Text_1:
	.string "À bientôt!$"

Lanterne_Text_0:
	.string "Bonjour dresseur! Je suis un employé\n"
	.string "chez V.N, dit Vitalis Navitas, tu dois\l"
	.string "sans doute nous connaître on invente\l"
	.string "tellement de choses!$"

Lanterne_Text_1:
	.string "Tu t'appelles {PLAYER} n'est-il pas? À\n"
	.string "Vitalis Navitas on cherche à aider les\l"
	.string "jeunes dresseurs. J'ai un petit quelque\l"
	.string "chose pour toi, il t'aidera à visiter le\l"
	.string "temple de la forêt.$"

Lanterne_Text_2:
	.string "C'est une lanterne très spéciale, tu\n"
	.string "n'auras jamais besoin d'y mettre de\l"
	.string "l'huile, elle reçoit l'énergie nécessaire\l"
	.string "à son fonctionnement par induction,\l"
	.string "cette énergie vient directement de nos\l"
	.string "laboratoires, elle est totalement\l"
	.string "décarbonisée et est produite euh...\l"
	.string "Avec nos moyens de production\l"
	.string "d'énergie.$"

Lanterne_Text_3:
	.string "N'est-ce pas fascinant ? De\n"
	.string "l'électricté gratuite partout dans la\l"
	.string "région? Vitalis Navitas fait beaucoup\l"
	.string "de choses pour améliorer la vie des\l"
	.string "individus.$"

Lanterne_Text_4:
	.string "Bonjour! Comment ça va? Tu devrais\n"
	.string "visiter le Centre Commercial de Vitalis\l"
	.string "Navitas à Portokov ou à la Ville-Monde,\l"
	.string "tu y trouveras sans doute quelque\l"
	.string "chose d'intéressant!$"

noturhouse_Text_0:
	.string "En haut se trouvent les chambres à\n"
	.string "coucher... Il vaudrait mieux ne pas\l"
	.string "monter$"

tmcase_Text_0:
	.string "tiens et tg$"
