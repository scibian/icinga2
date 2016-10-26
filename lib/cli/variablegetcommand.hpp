/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012-2016 Icinga Development Team (https://www.icinga.org/)  *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef VARIABLEGETCOMMAND_H
#define VARIABLEGETCOMMAND_H

#include "base/dictionary.hpp"
#include "base/array.hpp"
#include "cli/clicommand.hpp"
#include <ostream>

namespace icinga
{

/**
 * The "variable get" command.
 *
 * @ingroup cli
 */
class VariableGetCommand : public CLICommand
{
public:
	DECLARE_PTR_TYPEDEFS(VariableGetCommand);

	virtual String GetDescription(void) const override;
	virtual String GetShortDescription(void) const override;
	virtual int GetMinArguments(void) const override;
	void InitParameters(boost::program_options::options_description& visibleDesc,
	    boost::program_options::options_description& hiddenDesc) const override;
	virtual int Run(const boost::program_options::variables_map& vm, const std::vector<std::string>& ap) const override;
};

}

#endif /* VARIABLEGETCOMMAND_H */