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

package org.refermee.sdk.android.components.navigation;

import java.util.ArrayList;
import java.util.List;

public class NavigationElement {

    private final String title;

    protected final List<NavigationElement> children;

    public NavigationElement(String title) {
		this.title = title;
		children = new ArrayList<NavigationElement>();
	}

	public String getTitle() {
        return title;
    }

    public List<NavigationElement> getChildren() {
        return children;
    }

    public void appendChild(NavigationElement e) {
        children.add(e);
    }
}
