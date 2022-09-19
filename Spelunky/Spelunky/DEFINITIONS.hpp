#pragma once
#define SCREEN_WIDTH 1920
#define SCREEN_HEIGHT 1024

//sprites de personnages
#define CHARACTER_BLACK_SPRITE "Ressources/sprites/characters/char_black.png"
#define CHARACTER_BLUE_SPRITE "Ressources/sprites/characters/char_blue.png"
#define CHARACTER_CERULEAN_SPRITE "Ressources/sprites/characters/char_cerulean.png"
#define CHARACTER_CINNABAR_SPRITE "Ressources/sprites/characters/char_cinnabar.png"
#define CHARACTER_CYAN_SPRITE "Ressources/sprites/characters/char_cyan.png"
#define CHARACTER_GOLD_SPRITE "Ressources/sprites/characters/char_gold.png"
#define CHARACTER_GRAY_SPRITE "Ressources/sprites/characters/char_gray.png"
#define CHARACTER_GREEN_SPRITE "Ressources/sprites/characters/char_green.png"
#define CHARACTER_IRIS_SPRITE "Ressources/sprites/characters/char_iris.png"
#define CHARACTER_KHAKI_SPRITE "Ressources/sprites/characters/char_khaki.png"
#define CHARACTER_LEMON_SPRITE "Ressources/sprites/characters/char_lemon.png"
#define CHARACTER_LIME_SPRITE "Ressources/sprites/characters/char_lime.png"
#define CHARACTER_MAGENTA_SPRITE "Ressources/sprites/characters/char_magenta.png"
#define CHARACTER_OLIVE_SPRITE "Ressources/sprites/characters/char_olive.png"
#define CHARACTER_ORANGE_SPRITE "Ressources/sprites/characters/char_orange.png"
#define CHARACTER_PINK_SPRITE "Ressources/sprites/characters/char_pink.png"
#define CHARACTER_RED_SPRITE "Ressources/sprites/characters/char_red.png"
#define CHARACTER_VIOLET_SPRITE "Ressources/sprites/characters/char_violet.png"
#define CHARACTER_WHITE_SPRITE "Ressources/sprites/characters/char_white.png"
#define CHARACTER_YELLOW_SPRITE "Ressources/sprites/characters/char_yellow.png"

//sprites de backgrounds
#define BACKGROUND_BABYLON_TEXTURE "Ressources/sprites/backgrounds/bg_babylon.png"
#define BACKGROUND_BEEHIVE_TEXTURE "Ressources/sprites/backgrounds/bg_beehive.png"
#define BACKGROUND_CAVE_TEXTURE "Ressources/sprites/backgrounds/bg_cave.png"
#define BACKGROUND_EGGPLANT_TEXTURE "Ressources/sprites/backgrounds/bg_eggplant.png"
#define BACKGROUND_GOLD_TEXTURE "Ressources/sprites/backgrounds/bg_gold.png"
#define BACKGROUND_ICE_TEXTURE "Ressources/sprites/backgrounds/bg_ice.png"
#define BACKGROUND_JUNGLE_TEXTURE "Ressources/sprites/backgrounds/bg_jungle.png"
#define BACKGROUND_MOTHERSHIP_TEXTURE "Ressources/sprites/backgrounds/bg_mothership.png"
#define BACKGROUND_STONE_TEXTURE "Ressources/sprites/backgrounds/bg_stone.png"
#define BACKGROUND_SUNKEN_TEXTURE "Ressources/sprites/backgrounds/bg_sunken.ong"
#define BACKGROUND_TEMPLE_TEXTURE "Ressources/sprites/backgrounds/bg_temple.png"
#define BACKGROUND_TIDEPOOL_TEXTURE "Ressources/sprites/backgrounds/bg_tidepool.png"
#define BACKGROUND_VLAD_TEXTURE "Ressources/sprites/backgrounds/bg_vlad.png"
#define BACKGROUND_VOLCANO_TEXTURE "Ressources/sprites/backgrounds/bg_volcano.png"

//sprite de tiles
#define TILE_FLOOR_BABYLON "Ressources/sprites/Tiles/floor_babylon.png"
#define TILE_BABYLON "Ressources/sprites/Tiles/floorstyled_babylon.png"
#define TILE_DUAT "Ressources/sprites/Tiles/floorstyled_duat.png"
#define TILE_PAGODA "Ressources/sprites/Tiles/floorstyled_pagoda.png"
#define TILE_BEEHIVE "Ressources/sprites/Tiles/floorstyled_beehive.png"
#define TILE_GOLD "Ressources/sprites/Tiles/floorstyled_gold.png"
#define TILE_MOTHERSHIP "Ressources/sprites/Tiles/floorstyled_mothership.png"
#define TILE_PALACE "Ressources/sprites/Tiles/floorstyled_palace.png"
#define TILE_STONE "Ressources/sprites/Tiles/floorstyled_stone.png"
#define TILE_SUNKEN "Ressources/sprites/Tiles/floorstyled_sunken.png"
#define TILE_TEMPLE "Ressources/sprites/Tiles/floorstyled_temple.png"
#define TILE_VLAD "Ressources/sprites/Tiles/floorstyled_vlad.png"
#define TILE_WOOD "Ressources/sprites/Tiles/floorstyled_wood.png"

/* hud */
#define HUD_DOLLARD_SIGN "Ressources/sprites/objects/hud.png"
#define HUD_HEART "Ressources/sprites/objects/heart.png"

/* game Over state */
#define GAME_OVER_BACKGROUND "Ressources/sprites/hud/menu_online.png"
#define BOOK_STATS_FINAL "Ressources/sprites/hud/journal_back.png"

#define ENTITY_PLAYER 0
#define ENTITY_BAT 1
#define ENTITY_SPIDER 2
#define ENTITY_SNAKE 3

//vitesse de mouvement du personnage
#define	PLAYER_WALKING_VELOCITY 5.f
#define PLAYER_JUMP_VELOCITY 30.f

//sprites d'enemies
#define ENEMY_BAT_SPRITE "Ressources/sprites/Entities/bat.png"
#define ENEMY_SPIDER_SPRITE "Ressources/sprites/Entities/spider.png"

#define ITEM_SHEET "Ressources/sprites/objects/items.png"

//types d'entities
#define ENTITY_TYPE_PLAYER 1
#define ENTITY_TYPE_ENEMY 2
#define ENTITY_TYPE_ITEM 3

#define ENEMY_TYPE_BAT 1
#define ENEMY_TYPE_SPIDER 2

#define ENTITY_STATE_STANDING 1
#define ENTITY_STATE_WALKING 2
#define ENTITY_STATE_AIR 3

#define ENTITY_SPRITE_SIZE 128

#define ANIMATION_DURATION 0.05f

//types de physics
#define PHYSICS_TYPE_ITEM 1
#define PHYSICS_TYPE_NORMAL 2
#define PHYSICS_TYPE_FLYING 3

#define FACING_LEFT 0
#define FACING_RIGHT 1

#define SPIDER_SPEED 1.0f

#define DAMAGE_COOLDOWN 1000.f

#define MUSIC_FILEPATH "Ressources/audio/BGM_2B_Machano.wav"
#define MUSIC_VOLUME 15.f
#define SFX_VOLUME 20.f


#define CHARACTER_CAILLOU_SPRITE "Ressources/sprites/characters/char_hired.png"
#define CHARACTER_PEPE_SPRITE "Ressources/sprites/characters/Pepe.png"
#define CHARACTER_EGGPLANT_SPRITE "Ressources/sprites/characters/char_eggchild.png"
#define CHARACTER_SELECT_CLOCK 0.2
#define BUTTON_MENU "Ressources/sprites/hud/Menu_control.png"


/* define pour le splashstate */
#define LOGO_STATE_BACKGROUND "Ressources/sprites/hud/Logo.png"
#define LOGO_SHOW_TIME 0.5
#define ANIMATION_SHOW_TIME 3
#define MENU_BACKGROUND_ANIMATION "Ressources/sprites/hud/menu_generic.png"
#define MENU_DOOR_FRAME "Ressources/sprites/hud/main_doorframe.png"
#define MENU_DOOR "Ressources/sprites/hud/main_door.png"
#define MENU_DOOR_HEAD "Ressources/sprites/hud/main_head.png"

/* define pour le menu */
#define MAIN_MENU_BACKGROUND "Ressources/sprites/hud/menu_generic.png"
#define MENU_BUTTON_DEFAULT "Ressources/sprites/hud/menu_deathmatch2.png"
#define MENU_TEXT "Ressources/fonts/OMEGLE.ttf"
#define TITLE_MAIN_MENU "Ressources/sprites/hud/Spelunky_Logo.png"


/* define pour le character select */
#define MENU_BACKGROUND_CHAR_SELECT "Ressources/sprites/hud/menu_deathmatch.png"
#define MENU_CHAR_POLE "Ressources/sprites/hud/menu_deathmatch5.png"
#define CHAR_BACKGROUND "Ressources/sprites/hud/menu_cave2.png"
#define CHAR_SELECTION_BOX "Ressources/sprites/hud/menu_charsel.png"
#define SWITCH_BUTTON "Ressources/sprites/hud/menu_deathmatch2.png"
#define CONTROL_KEY "Ressources/sprites/hud/journal_pagetorn.png"
#define CONTROL_MOUSE "Ressources/sprites/hud/journal_pagetorn2.png"
#define PLAY_BUTTON "Ressources/sprites/hud/menu_leader.png"

// DEFINITIONS.hpp
#define MUSIC_FILEPATH "Ressources/audio/MUSIC/BGM_2B_Machano.wav"
#define MUSIC_VOLUME 10.f

#define JUMP_SFX_FILEPATH "Ressources/audio/SFX/player_jump04.wav"

#define STEP1_SFX_FILEPATH "Ressources/audio/SFX/ammit_a01.wav"
#define STEP2_SFX_FILEPATH "Ressources/audio/SFX/ammit_a02.wav"
#define STEP3_SFX_FILEPATH "Ressources/audio/SFX/ammit_a03.wav"
#define STEP4_SFX_FILEPATH "Ressources/audio/SFX/ammit_a04.wav"

#define SPIDER1_SFX_FILEPATH "Ressources/audio/SFX/spider01.wav"
#define SPIDER2_SFX_FILEPATH "Ressources/audio/SFX/spider02.wav"
#define SPIDER3_SFX_FILEPATH "Ressources/audio/SFX/spider03.wav"

#define SFX_VOLUME 20.f


enum gameStates {
	ready,
	playing,
	gameOver
};