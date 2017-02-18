/*
 * Copyright (c) 2017 Georges Troulis
 *
 * CSGOGame.cpp
 *
 * Defines behavior for CSGO Game Mode
 *
 * TODO: Add instructions
*/

#include "CSGOGame.h"
#include "Game.h"
#include "HardwareInterface.h"

CSGOGame::CSGOGame(HardwareInterface* hw)
    : Game(hw, "CS:GO Competitive")
{
    lcd = hardware->getLCD();
}

bool CSGOGame::isPlaying()
{
    // TODO
    return true;
}

void CSGOGame::doGameLoop()
{
    lcd->clear();
    lcd->print("Playing CSGO");
    lcd->setCursor(0, 1);
    lcd->print("(not really)");
}

void CSGOGame::doEndGame()
{
    lcd->clear();
    lcd->print("CSGO Over :D");
}