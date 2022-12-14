//-------------------------------------------------------------------
//-------------------------------------------------------------------
//
// Cleaver - A MultiMaterial Conforming Tetrahedral Meshing Library
//
// -- Vertex Class
//
// Author: Jonathan Bronson (bronson@sci.utah.ed)
//
//-------------------------------------------------------------------
//-------------------------------------------------------------------
//
//  Copyright (C) 2011, 2012, Jonathan Bronson
//  Scientific Computing & Imaging Institute
//  University of Utah
//
//  Permission is  hereby  granted, free  of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files  ( the "Software" ),  to  deal in  the  Software without
//  restriction, including  without limitation the rights to  use,
//  copy, modify,  merge, publish, distribute, sublicense,  and/or
//  sell copies of the Software, and to permit persons to whom the
//  Software is  furnished  to do  so,  subject  to  the following
//  conditions:
//
//  The above  copyright notice  and  this permission notice shall
//  be included  in  all copies  or  substantial  portions  of the
//  Software.
//
//  THE SOFTWARE IS  PROVIDED  "AS IS",  WITHOUT  WARRANTY  OF ANY
//  KIND,  EXPRESS OR IMPLIED, INCLUDING  BUT NOT  LIMITED  TO THE
//  WARRANTIES   OF  MERCHANTABILITY,  FITNESS  FOR  A  PARTICULAR
//  PURPOSE AND NONINFRINGEMENT. IN NO EVENT  SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS  BE  LIABLE FOR  ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE
//  USE OR OTHER DEALINGS IN THE SOFTWARE.
//-------------------------------------------------------------------
//-------------------------------------------------------------------

#include "stdafx.h"
#include "Vertex.h"
#include "TetMesh.h"

namespace Cleaver
{
	// Vertex3D Deconstructor
	Vertex3D::~Vertex3D()
	{
		if(lbls)
			delete[] lbls;
		lbls = NULL;
		//if(vert_index == C && vals)
		//    delete[] vals;    // vals are allocated only for dual vertices
		//                      // other vertices reference DATA[] block
	}

	Vertex3D::Vertex3D( OTCell *cell, int index ) : cell(cell),lbls(NULL), vert_index(index), violating(false),
		warped(false),parent(NULL),tm_v_index(-1),m_order(0), m_pos(vec3::zero),m_pos_next(vec3::zero)
	{
	}

	Vertex3D::Vertex3D() : cell(NULL), lbls(NULL), vert_index(-1), violating(false),warped(false), 
		closestGeometry(NULL), conformedFace(NULL), conformedEdge(NULL), conformedVertex(NULL),
		parent(NULL), tm_v_index(-1), m_order(0), m_pos(vec3::zero),m_pos_next(vec3::zero)
	{

	}
	/*Vertex3D(int m):cell(NULL), lbls(new bool[m]), vert_index(-1), violating(false), warped(false), 
	closestGeometry(NULL), conformedFace(NULL), conformedEdge(NULL),
	conformedVertex(NULL), parent(NULL), tm_v_index(-1), m_order(0),m_pos(vec3::zero),m_pos_next(vec3::zero)
	{        memset(lbls, 0, m*sizeof(bool));    }*/ // This is the original code
	Vertex3D::Vertex3D( int m ) :	cell(NULL), lbls(NULL), vert_index(-1), violating(false), warped(false), 
		closestGeometry(NULL), conformedFace(NULL), conformedEdge(NULL), conformedVertex(NULL), 
		parent(NULL), tm_v_index(-1), m_order(0),m_pos(vec3::zero),m_pos_next(vec3::zero)
	{

	}

	//Vertex3D(int m, OTCell *cell, int index):cell(cell), lbls(new bool[m]), vert_index(index), violating(false), warped(false), closestGeometry(NULL), conformedFace(NULL), conformedEdge(NULL),
	//    conformedVertex(NULL), parent(NULL), tm_v_index(-1), m_order(0),m_pos(vec3::zero),m_pos_next(vec3::zero)
	//{
	//    memset(lbls, 0, m*sizeof(bool));
	//} // This is the original code
	Vertex3D::Vertex3D( int m, OTCell *cell, int index ) : cell(cell), lbls(NULL), vert_index(index), violating(false), warped(false), 
		closestGeometry(NULL), conformedFace(NULL), conformedEdge(NULL), conformedVertex(NULL), 
		parent(NULL), tm_v_index(-1), m_order(0),m_pos(vec3::zero),m_pos_next(vec3::zero)
	{

	}
	
}
