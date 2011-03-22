//
//  SHKEvernote
//  ShareKit Evernote Additions
//
//  Created by Atsushi Nagase on 8/28/10.
//  Copyright 2010 LittleApps Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHK.h"
#import "SHKSharer.h"

#define kENMLPrefix @"<?xml version=\"1.0\" encoding=\"UTF-8\"?><!DOCTYPE en-note SYSTEM \"http://xml.evernote.com/pub/enml2.dtd\"><en-note style=\"word-wrap: break-word; -webkit-nbsp-mode: space; -webkit-line-break: after-white-space;\">"
#define kENMLSuffix @"</en-note>"

@class EDAMNote;
@interface SHKEvernoteItem : SHKItem {}
@property (retain) EDAMNote* note;
@end


@interface SHKEvernote : SHKSharer {
	NSArray *_notebooks;
}

@end

