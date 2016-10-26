//
//  media-overlays_smil_data.cpp
//  ePub3
//
//  Created by Daniel Weck on 2013-09-18.
//  Copyright (c) 2014 Refermee Foundation and/or its licensees. All rights reserved.
//  
//  This program is distributed in the hope that it will be useful, but WITHOUT ANY 
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
//  
//  Licensed under Gnu Affero General Public License Version 3 (provided, notwithstanding this notice, 
//  Refermee Foundation reserves the right to license this material under a different separate license, 
//  and if you have done so, the terms of that separate license control and the following references 
//  to GPL do not apply).
//  
//  This program is free software: you can redistribute it and/or modify it under the terms of the GNU 
//  Affero General Public License as published by the Free Software Foundation, either version 3 of 
//  the License, or (at your option) any later version. You should have received a copy of the GNU 
//  Affero General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "media-overlays_smil_data.h"

EPUB3_BEGIN_NAMESPACE

SMILData::~SMILData()
{
    //printf("~SMILData(%s)\n", _manifestItem->Href().c_str());
    //printf("~SMILData()\n");
    //
}

const string & SMILData::TimeNode::Name() const
{
    throw std::runtime_error("TimeNode Name()");
    //return string::EmptyString;
}

SMILData::TimeNode::~TimeNode()
{
    //printf("~TimeNode()\n");
}

const bool SMILData::Media::IsAudio() const
{
    throw std::runtime_error("Media IsAudio()");
    //return Name() == @"audio";
}

const bool SMILData::Media::IsText() const
{
    throw std::runtime_error("Media IsText()");
    //return Name() == @"text";
}

SMILData::Media::~Media()
{
    //printf("~Media()\n");
}

SMILData::Audio::~Audio()
{
	//printf("~Audio()\n");
}

SMILData::Text::~Text()
{
    //printf("~Text()\n");
}

const bool SMILData::TimeContainer::IsParallel() const
{
    throw std::runtime_error("TimeContainer IsParallel()");
    //return Name() == @"par";
}

const bool SMILData::TimeContainer::IsSequence() const
{
    throw std::runtime_error("TimeContainer IsSequence()");
    //return Name() == @"seq";
}

SMILData::TimeContainer::~TimeContainer()
{
    //printf("~TimeContainer()\n");
}

SMILData::Sequence::~Sequence()
{
    //printf("~Sequence()\n");
}

SMILData::Parallel::~Parallel()
{
    //printf("~Parallel()\n");
}

const string SMILData::Sequence::_Name = string("seq");
const string SMILData::Parallel::_Name = string("par");
const string SMILData::Audio::_Name = string("audio");
const string SMILData::Text::_Name = string("text");

EPUB3_END_NAMESPACE