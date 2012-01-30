/*
 IndivoMedication.h
 IndivoFramework
 
 Created by Indivo Class Generator on 1/30/2012.
 Copyright (c) 2012 Children's Hospital Boston
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#import "IndivoDocument.h"

@class IndivoPrescription;
	

/**
 *	A class representing "indivo:Medication" objects.
 */
@interface IndivoMedication : IndivoDocument

@property (nonatomic, strong) INDate *dateStarted;
@property (nonatomic, strong) INDate *dateStopped;
@property (nonatomic, strong) INString *reasonStopped;
@property (nonatomic, strong) INCodedValue *name;					///< Must not be nil (minOccurs = 1)
@property (nonatomic, strong) INCodedValue *brandName;
@property (nonatomic, strong) INUnitValue *dose;					///< Must not be nil (minOccurs = 1)
@property (nonatomic, strong) INCodedValue *route;
@property (nonatomic, strong) INUnitValue *strength;
@property (nonatomic, strong) INCodedValue *frequency;					///< Must not be nil (minOccurs = 1)
@property (nonatomic, strong) IndivoPrescription *prescription;
@property (nonatomic, strong) INString *details;


@end