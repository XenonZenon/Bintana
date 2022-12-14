///////////////////////////////
/// Author: Jayson B. Abad  ///
/// Company: Noysoft        ///
/// Start Date: August 2022 ///
/// Update: December 2022   ///
///////////////////////////////

#include <bintana/bintana.h>

Variable::Variable()
{
  this->title = "Bintana";
  this->width = 1200;
  this->height = 620;
  this->max_width = GetSystemMetrics(SM_CXSCREEN);
  this->max_height = GetSystemMetrics(SM_CYSCREEN);
}

std::string Variable::getTitle()
{
  return this->title;
}

int Variable::getWidth()
{
  return this->width;
}

int Variable::getHeight()
{
  return this->height;
}

int Variable::getMaxWidth()
{
  return this->max_width;
}

int Variable::getMaxHeight()
{
  return this->max_height;
}

Variable::~Variable(){}
